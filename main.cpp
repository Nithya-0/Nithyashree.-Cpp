/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

class WeatherData {
private:
    string weatherCondition;

public:
    WeatherData(const string& weatherCondition) : weatherCondition(weatherCondition) {}

    string getWeatherDescription() {
        string description;
        if (weatherCondition == "cloudy") {
            description = "Cloudy weather";
        } else if (weatherCondition == "dry") {
            description = "Dry weather";
        } else if (weatherCondition == "rain") {
            description = "Rainy weather";
        } else if (weatherCondition == "thunderstorm") {
            description = "Thunderstorm";
        } else if (weatherCondition == "heatwaves") {
            description = "Heatwaves";
        } else {
            description = "Weather condition not available";
        }
        return description;
    }
};

class WeatherReport : public WeatherData {
public:
    WeatherReport(const string& weatherCondition) : WeatherData(weatherCondition) {}

    string getTemperature() {
        // Code to retrieve the temperature based on weatherCondition
        // Replace with actual implementation
        return "25°C";
    }

    string getHumidity() {
        // Code to retrieve the humidity based on weatherCondition
        // Replace with actual implementation
        return "70%";
    }

    string getRainPossibility() {
        // Code to retrieve the rain possibility based on weatherCondition
        // Replace with actual implementation
        return "30%";
    }

    string generateReport() {
        string weatherDescription = getWeatherDescription();
        string temperature = getTemperature();
        string humidity = getHumidity();
        string rainPossibility = getRainPossibility();

        // Generate weather report based on the retrieved data
        string report = "Today's weather: " + weatherDescription + "\nTemperature: " + temperature + "\nHumidity: " + humidity + "\nRain Possibility: " + rainPossibility;
        return report;
    }
};

int main() {
    string weatherCondition;

    cout << "Enter weather condition (cloudy, dry, rain, thunderstorm, heatwaves): ";
    cin >> weatherCondition;

    WeatherReport weatherReport(weatherCondition);
    string report = weatherReport.generateReport();
    cout << report << endl;

    // Additional Information
    cout << "\nAdditional Information:" << endl;
    cout << "Name: Nithyashree " << endl;
    cout << "College name: Vivekananda College of Engineering for Women" << endl;

    // Location
    cout << "\nLocation:" << endl;
    cout << "1. Today" << endl;
    cout << "2. Yesterday" << endl;
    cout << "3. Tomorrow" << endl;
    cout << "4. Week report" << endl;
    cout << "5. Month weather" << endl;

    // Weather Conditions
    cout << "\nWeather Conditions:" << endl;
    cout << "1. Cloudy" << endl;
    cout << "2. Dry" << endl;
    cout << "3. Rain" << endl;
    cout << "4. Thunderstorm" << endl;
    cout << "5. Heatwaves" << endl;
    cout << "6. Rain Possibility" << endl;
    cout << "7. Humidity" << endl;

    // Functions, Class, and Objects
    cout << "\nFunctions, Class and Objects, and oops concepts:" << endl;
    cout << "Implemented in the C++ code" << endl;

return 0;
}