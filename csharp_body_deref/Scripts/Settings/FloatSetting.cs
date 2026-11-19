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

[Token(Token = "0x200010A")]
internal class FloatSetting : TypedSetting<float>
{
	[Token(Token = "0x4000646")]
	[FieldOffset(Offset = "0x20")]
	public float MinValue;

	[Token(Token = "0x4000647")]
	[FieldOffset(Offset = "0x24")]
	public float MaxValue;

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x5A558A0", Offset = "0x5A548A0", VA = "0x5A558A0")]
	public FloatSetting()
	{
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x5A411F0", Offset = "0x5A401F0", VA = "0x5A411F0")]
	public FloatSetting(float defaultValue, float minValue = -3.4028235E+38f, float maxValue = 3.4028235E+38f)
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x5A558F0", Offset = "0x5A548F0", VA = "0x5A558F0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x5A55950", Offset = "0x5A54950", VA = "0x5A55950", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x5A559C0", Offset = "0x5A549C0", VA = "0x5A559C0", Slot = "11")]
	protected override float SanitizeValue(float value)
	{
		return default(float);
	}
}
