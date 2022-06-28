package pull.observer;

import pull.subject.WeatherData;

public class ForecastDisplay implements Observer, DisplayElement{
    private float temperature;
    private float humidity;
    private WeatherData weatherData;

    public ForecastDisplay(WeatherData weatherData) {
        this.weatherData = weatherData;
        weatherData.registerObserver(this);
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

    @Override
    public void update() {
        temperature = weatherData.getTemperature();
        humidity = weatherData.getHumidity();
        display();
    }
}
