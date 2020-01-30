//
//  JDLWeather.h
//  AirQuality_ObjectiveC
//
//  Created by Jacob LeCheminant on 1/29/20.
//  Copyright © 2020 Jacob LeCheminant. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JDLWeather : NSObject

@property(nonatomic, readonly)NSInteger temperature;
@property(nonatomic, readonly)NSInteger humidity;
@property(nonatomic, readonly)NSInteger windSpeed;

-(instancetype)initWithWeatherInfo:(NSInteger)temperature
                          humidity:(NSInteger)humidity
                         windSpeed:(NSInteger)windSpeed;

@end

@interface JDLWeather (JSONConvertable)

-(instancetype)initWithDictionary:(NSDictionary <NSString *, id> *)dictionary;

@end

NS_ASSUME_NONNULL_END
