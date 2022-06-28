package pull.subject;

import pull.observer.Observer;

public interface Subject {
    void removeObserver(Observer observer);
    void registerObserver(Observer observer);
    public void notifyObserver();
}
