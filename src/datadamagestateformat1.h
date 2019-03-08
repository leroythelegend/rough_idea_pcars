#ifndef PCARS_DATA_DAMAGE_STATE_FORMAT_1_H_
#define PCARS_DATA_DAMAGE_STATE_FORMAT_1_H_

#include "datadamagestate.h"
#include "decodertelemetrydata.h"

#include <memory>

namespace pcars {

class Data_Damage_State_Format_1 : public Data_Damage_State {
public:
	Data_Damage_State_Format_1(std::shared_ptr<Decoder_Telemetry_Data>);
	virtual ~Data_Damage_State_Format_1() {}

	Vector_UInt brake_damage() const override;
	Vector_UInt suspension_damage() const override;
	unsigned int aero_damage() const override;
	unsigned int engine_damage() const override;

private:
	std::shared_ptr<Decoder_Telemetry_Data> telemetry_data_;
};

}

#endif

