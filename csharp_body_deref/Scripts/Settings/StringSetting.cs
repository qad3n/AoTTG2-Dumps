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

[Token(Token = "0x200011C")]
internal class StringSetting : TypedSetting<string>
{
	[Token(Token = "0x4000670")]
	[FieldOffset(Offset = "0x28")]
	public int MaxLength;

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x5B7C970", Offset = "0x5B7B970", VA = "0x5B7C970")]
	public StringSetting()
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x5B7B730", Offset = "0x5B7A730", VA = "0x5B7B730")]
	public StringSetting(string defaultValue, int maxLength = 2147483647)
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x5B7C9D0", Offset = "0x5B7B9D0", VA = "0x5B7C9D0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x5B7CA30", Offset = "0x5B7BA30", VA = "0x5B7CA30", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x5B7CA90", Offset = "0x5B7BA90", VA = "0x5B7CA90", Slot = "11")]
	protected override string SanitizeValue(string value)
	{
		return null;
	}
}
