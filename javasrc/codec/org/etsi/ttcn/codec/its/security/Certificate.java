/**
 * @author      ETSI / STF481 / Yann Garcia
 * @version     $URL: file:///D:/RepositoriesNew/ITS/trunk/javasrc/codec/org/etsi/ttcn/codec/its/security/Certificate.java $
 *              $Id: Certificate.java 1665 2014-10-03 08:27:31Z garciay $
 */
package org.etsi.ttcn.codec.its.security;

import org.etsi.ttcn.codec.CodecBuffer;
import org.etsi.ttcn.codec.MainCodec;
import org.etsi.ttcn.codec.generic.Record;
import org.etsi.ttcn.tci.RecordValue;
import org.etsi.ttcn.tci.Type;

public class Certificate extends Record {
    
    public Certificate(MainCodec mainCodec) {
        super(mainCodec);
    }
    
    @Override
    protected void postEncodeField(String fieldName, CodecBuffer buf) {
//        System.out.println(">>> Certificate.postEncodeField: " + fieldName);
    }
    
    @Override
    protected void preDecodeField(String fieldName, CodecBuffer buf, Type decodingHypothesis, RecordValue rv) {
//        System.out.println(">>> Certificate.preDecodeField: " + fieldName + ", " + decodingHypothesis.getName() + ", " + rv.getType().getName());
    }
    
    @Override
    protected void postDecodeField(String fieldName, CodecBuffer buf, Type decodingHypothesis, RecordValue rv) {
//        System.out.println(">>> Certificate.postDecodeField: " + fieldName + ", " + decodingHypothesis.getName() + ", " + rv.getType().getName());
    }
    
} // End of class Certificate