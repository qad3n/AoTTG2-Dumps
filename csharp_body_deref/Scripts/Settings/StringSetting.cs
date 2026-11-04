// ==================== AoTTG2 cross-reference ====================
// Type: Settings.StringSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/StringSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/StringSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000E1")]
internal class StringSetting : TypedSetting<string>
{
	[Token(Token = "0x4000531")]
	[FieldOffset(Offset = "0x28")]
	public int MaxLength;

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x1F27F40", Offset = "0x1F26540", VA = "0x181F27F40")]
	public StringSetting()
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x1F27EE0", Offset = "0x1F264E0", VA = "0x181F27EE0")]
	public StringSetting(string defaultValue, int maxLength = 2147483647)
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x1F27DC0", Offset = "0x1F263C0", VA = "0x181F27DC0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x1F27E70", Offset = "0x1F26470", VA = "0x181F27E70", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x1F27E30", Offset = "0x1F26430", VA = "0x181F27E30", Slot = "11")]
	protected override string SanitizeValue(string value)
	{
		return null;
	}
}
