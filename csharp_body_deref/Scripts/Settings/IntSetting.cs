// ==================== AoTTG2 cross-reference ====================
// Type: Settings.IntSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/IntSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/IntSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000D5")]
internal class IntSetting : TypedSetting<int>
{
	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0x20")]
	public int MinValue;

	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x24")]
	public int MaxValue;

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x1F1DE90", Offset = "0x1F1C490", VA = "0x181F1DE90")]
	public IntSetting()
	{
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x1F1DE00", Offset = "0x1F1C400", VA = "0x181F1DE00")]
	public IntSetting(int defaultValue, int minValue = -2147483648, int maxValue = 2147483647)
	{
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x1F1DCB0", Offset = "0x1F1C2B0", VA = "0x181F1DCB0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x1F1DD90", Offset = "0x1F1C390", VA = "0x181F1DD90", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x1F1DD20", Offset = "0x1F1C320", VA = "0x181F1DD20", Slot = "11")]
	protected override int SanitizeValue(int value)
	{
		return default(int);
	}
}
