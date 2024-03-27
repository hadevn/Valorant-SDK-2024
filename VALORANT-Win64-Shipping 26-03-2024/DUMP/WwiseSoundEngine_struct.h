// ScriptStruct WwiseSoundEngine.AkUInt32Wrapper
// Size: 0x04 (Inherited: 0x00)
struct FAkUInt32Wrapper {
	uint32_t UInt32Value; // 0x00(0x04)
};

// ScriptStruct WwiseSoundEngine.AkUniqueID
// Size: 0x04 (Inherited: 0x04)
struct FAkUniqueID : FAkUInt32Wrapper {
};

// ScriptStruct WwiseSoundEngine.AkUInt64Wrapper
// Size: 0x08 (Inherited: 0x00)
struct FAkUInt64Wrapper {
	uint64_t UInt64Value; // 0x00(0x08)
};

// ScriptStruct WwiseSoundEngine.AkOutputDeviceID
// Size: 0x08 (Inherited: 0x08)
struct FAkOutputDeviceID : FAkUInt64Wrapper {
};

