// ==================== AoTTG2 cross-reference ====================
// Type: Settings.FloatSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/FloatSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/FloatSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000B2")]
internal class FloatSetting : TypedSetting<float>
{
	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x18")]
	public float MinValue;

	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x1C")]
	public float MaxValue;

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x40FD850", Offset = "0x40FD850", VA = "0x40FD850")]
	public FloatSetting()
	{
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x40F3A30", Offset = "0x40F3A30", VA = "0x40F3A30")]
	public FloatSetting(float defaultValue, float minValue = float.MinValue, float maxValue = float.MaxValue)
	{
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x40FF9F0", Offset = "0x40FF9F0", VA = "0x40FF9F0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x40FFA50", Offset = "0x40FFA50", VA = "0x40FFA50", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x40FFAC0", Offset = "0x40FFAC0", VA = "0x40FFAC0", Slot = "10")]
	protected override float SanitizeValue(float value)
	{
		return default(float);
	}
}
