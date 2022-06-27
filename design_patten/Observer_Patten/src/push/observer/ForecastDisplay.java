package push.observer;

import push.subject.Subject;

public class ForecastDisplay implements Observer, DisplayElement{
    private float temperature;
    private float humidity;
    private float pressure;
    private Subject weatherData;

    public ForecastDisplay(Subject weatherData) {
        this.weatherData = weatherData;
        weatherData.registerObserver(this);
    }


    @Override
    public void update(float temperature, float humidity, float pressure) {
        this.temperature = temperature;
        this.humidity = humidity;
        this.pressure = pressure;

        display();
    }

    @Override
    public void display() {

        StringBuilder forecastString = new StringBuilder("현재 날씨는 ");

        if (temperature > 35) {
            forecastString.append("덥고 ");
        } else if (temperature < -10) {
            forecastString.append("춥고 ");
        } else {
            forecastString.append("따뜻하고 ");
        }

        if (humidity > 80) {
            forecastString.append("습합니다.");
        } else {
            forecastString.append("건조합니다.");
        }

        System.out.println(forecastString);
    }
}
