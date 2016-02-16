package org.etsi.its.adapter.ports;

import java.util.HashMap;
import java.util.Map;

import org.etsi.common.ByteHelper;
import org.etsi.its.adapter.layers.BtpLayer;
import org.etsi.its.adapter.layers.GnLayer;

public class MapSpatPort extends ProtocolPort {

    /**
     * Constructor
     * @param   portName        Name of the port
     * @param   componentName   Name of the component owning this port instance
     * @param   lowerStackDesc  Description of the port's lower stack in the form "Layer/Layer/Layer/..."
     * @param  linkLayerAddress    Link-layer address to be used by this port as source address (null if not applicable)
     */
    public MapSpatPort(String portName, String componentName, String lowerStackDesc, String linkLayerAddress) {
        super(portName, componentName, lowerStackDesc, linkLayerAddress);
    }
    
    /* (non-Javadoc)
     * @see org.etsi.its.adapter.ports.ProtocolPort#receive(byte[], java.util.Map)
     */
    @Override
    public void receive(byte[] message, Map<String, Object> lowerInfo) {
        
        // Encode with CAM indication header
        byte[] msgInd = ByteHelper.concat(
            message, 
            new byte[] { (byte) lowerInfo.get(GnLayer.GN_NEXTHEADER) },
            ByteHelper.intToByteArray((int) lowerInfo.get(GnLayer.GN_TYPE), 1),
            ByteHelper.intToByteArray((int) lowerInfo.get(GnLayer.GN_SUBTYPE), 1),
            ByteHelper.intToByteArray((int) lowerInfo.get(GnLayer.GN_LIFETIME), Integer.SIZE / Byte.SIZE),
            ByteHelper.intToByteArray((int) lowerInfo.get(GnLayer.GN_TRAFFICCLASS), 1),
            (byte[]) lowerInfo.get(BtpLayer.BTP_DSTPORT),
            (byte[]) lowerInfo.get(BtpLayer.BTP_DSTPORTINFO)
        );
        super.receive(msgInd, lowerInfo);
    }
    
    /* (non-Javadoc)
     * @see org.etsi.its.adapter.ports.IPort#send(byte[])
     */
    @Override
    public boolean send(byte[] message) {
    
        HashMap<String, Object> params = new HashMap<String, Object>();
        params.put(BtpLayer.BTP_TYPE, BtpLayer.TYPE_B);
        if (message[1] == 0x5) {
            params.put(BtpLayer.BTP_DSTPORT, 2003);
        }
        else {
            params.put(BtpLayer.BTP_DSTPORT, 2004);
        }
        params.put(BtpLayer.BTP_SRCPORT, 500);
        params.put(GnLayer.GN_TYPE, GnLayer.HT_TSB);
        params.put(GnLayer.GN_SUBTYPE, GnLayer.HST_MULTIHOP);
        params.put(GnLayer.GN_LATITUDE, ByteHelper.byteArrayToLong(management.getLatitude()));
        params.put(GnLayer.GN_LONGITUDE, ByteHelper.byteArrayToLong(management.getLongitude()));
        params.put(GnLayer.GN_NEXTHEADER, "BTP-B");
        return send(message, params);
    }
} // End of class MapSpatPort

