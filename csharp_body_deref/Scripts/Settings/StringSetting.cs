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

[Token(Token = "0x20000C3")]
internal class StringSetting : TypedSetting<string>
{
	[Token(Token = "0x40004A6")]
	[FieldOffset(Offset = "0x20")]
	public int MaxLength;

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x40FDAA0", Offset = "0x40FDAA0", VA = "0x40FDAA0")]
	public StringSetting()
	{
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x40F74F0", Offset = "0x40F74F0", VA = "0x40F74F0")]
	public StringSetting(string defaultValue, int maxLength = int.MaxValue)
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x4103740", Offset = "0x4103740", VA = "0x4103740", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x41037A0", Offset = "0x41037A0", VA = "0x41037A0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x4103800", Offset = "0x4103800", VA = "0x4103800", Slot = "10")]
	protected override string SanitizeValue(string value)
	{
		return null;
	}
}
