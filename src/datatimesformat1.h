#ifndef PCARS_DATA_TIMES_FORMAT_1_H_
#define PCARS_DATA_TIMES_FORMAT_1_H_

#include "datatimes.h"
#include "decodertelemetrydata.h"

#include <memory>

namespace pcars {

class Data_Times_Format_1 : public Data_Times {
public:
	Data_Times_Format_1(std::shared_ptr<Decoder_Telemetry_Data>);
	virtual ~Data_Times_Format_1() {}

	float current_time() const override;
	float current_sector1_time() const override;
	float current_sector2_time() const override;
	float current_sector3_time() const override;
	float fastest_sector1_time() const override;
	float fastest_sector2_time() const override;
	float fastest_sector3_time() const override;
	unsigned int tick_count() const override;

private:
	std::shared_ptr<Decoder_Telemetry_Data> telemetry_data_;
};

}

#endif

