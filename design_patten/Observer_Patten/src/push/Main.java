package push;

import push.observer.CurrentConditionsDisplay;
import push.observer.ForecastDisplay;
import push.subject.WeatherData;

public class Main {
    public static void main(String[] args) {
        WeatherData weatherData = new WeatherData();

        CurrentConditionsDisplay currentConditionsDisplay = new CurrentConditionsDisplay(weatherData);
        ForecastDisplay forecastDisplay = new ForecastDisplay(weatherData);

        weatherData.setMeasurement(30, 95, 30);
        System.out.println();
        weatherData.setMeasurement(50, 10, 10);
    }
}
