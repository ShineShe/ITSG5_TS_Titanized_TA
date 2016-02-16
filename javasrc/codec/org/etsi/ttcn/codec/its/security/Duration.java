/**
 * @author      ETSI / STF481 / Yann Garcia
 * @version     $URL: file:///D:/RepositoriesNew/ITS/trunk/javasrc/codec/org/etsi/ttcn/codec/its/security/Duration.java $
 *              $Id: Duration.java 1665 2014-10-03 08:27:31Z garciay $
 */
package org.etsi.ttcn.codec.its.security;

import org.etsi.ttcn.codec.CodecBuffer;
import org.etsi.ttcn.codec.MainCodec;
import org.etsi.ttcn.codec.generic.Record;
import org.etsi.ttcn.tci.RecordValue;
import org.etsi.ttcn.tci.Type;

public class Duration extends Record {
    
    public Duration(MainCodec mainCodec) {
        super(mainCodec);
        setLengths();
    }

    private void setLengths() {
        mainCodec.setHint("Bit3Len", "3"); 
    }
    
    @Override
    protected void postEncodeField(String fieldName, CodecBuffer buf) {
//        System.out.println(">>> Duration.postEncodeField: " + fieldName);
    }
    
    @Override
    protected void preDecodeField(String fieldName, CodecBuffer buf, Type decodingHypothesis, RecordValue rv) {
//        System.out.println(">>> Duration.preDecodeField: " + fieldName + ", " + decodingHypothesis.getName() + ", " + rv.getType().getName());
    }
    
    @Override
    protected void postDecodeField(String fieldName, CodecBuffer buf, Type decodingHypothesis, RecordValue rv) {
//        System.out.println(">>> Duration.postDecodeField: " + fieldName + ", " + decodingHypothesis.getName() + ", " + rv.getType().getName());
    }
    
} // End of class Duration