package pull.subject;

import pull.observer.Observer;

import java.util.ArrayList;
import java.util.List;

public class WeatherData implements Subject {

    private float temperature;
    private float humidity;
    private float pressure;

    List<Observer> observers = new ArrayList<>();

    @Override
    public void registerObserver(Observer observer) { observers.add(observer); }

    @Override
    public void removeObserver(Observer observer) { observers.remove(observer); }

    @Override
    public void notifyObserver() {
        for (Observer observer : observers) {
            observer.update();
        }
    }

    public void measurementsChanged() {
        notifyObserver();
    }

    public void setMeasurement(float temperature, float humidity, float pressure) {
        this.temperature = temperature;
        this.humidity = humidity;
        this.pressure = pressure;
        measurementsChanged();
    }

    public float getTemperature() { return temperature; }

    public float getHumidity() { return humidity; }

    public float getPressure() { return pressure; }

}
