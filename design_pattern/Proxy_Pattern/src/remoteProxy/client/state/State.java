package remoteProxy.client.state;

import java.io.Serializable;

// 프록시를 통해 클라이언트, 서버간 jvm끼리의 통신을 위해서는 직렬화가 필요함
// 직렬화가 안되는 자료형을 직렬화로 만들기 위한 Serializable 클래스 상속
public interface State extends Serializable {
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
}
