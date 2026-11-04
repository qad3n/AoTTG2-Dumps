// ==================== AoTTG2 cross-reference ====================
// Type: Settings.NameSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/NameSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/NameSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000D9")]
internal class NameSetting : StringSetting
{
	[Token(Token = "0x400051F")]
	[FieldOffset(Offset = "0x30")]
	public int MaxStrippedLength;

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x1F23DF0", Offset = "0x1F223F0", VA = "0x181F23DF0")]
	public NameSetting()
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x1F23E60", Offset = "0x1F22460", VA = "0x181F23E60")]
	public NameSetting(string defaultValue, int maxLength = 2147483647, int maxStrippedLength = 2147483647)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x1F23C60", Offset = "0x1F22260", VA = "0x181F23C60", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x1F23D80", Offset = "0x1F22380", VA = "0x181F23D80", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x1F23CD0", Offset = "0x1F222D0", VA = "0x181F23CD0", Slot = "11")]
	protected override string SanitizeValue(string value)
	{
		return null;
	}
}
