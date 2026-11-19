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

[Token(Token = "0x2000114")]
internal class NameSetting : StringSetting
{
	[Token(Token = "0x400065E")]
	[FieldOffset(Offset = "0x2C")]
	public int MaxStrippedLength;

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x5B7B6C0", Offset = "0x5B7A6C0", VA = "0x5B7B6C0")]
	public NameSetting()
	{
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x5B7B780", Offset = "0x5B7A780", VA = "0x5B7B780")]
	public NameSetting(string defaultValue, int maxLength = 2147483647, int maxStrippedLength = 2147483647)
	{
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x5B7B7F0", Offset = "0x5B7A7F0", VA = "0x5B7B7F0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x5B7B850", Offset = "0x5B7A850", VA = "0x5B7B850", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x5B7B8B0", Offset = "0x5B7A8B0", VA = "0x5B7B8B0", Slot = "11")]
	protected override string SanitizeValue(string value)
	{
		return null;
	}
}
