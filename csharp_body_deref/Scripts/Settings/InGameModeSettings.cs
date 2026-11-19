// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameModeSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameModeSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameModeSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000E5")]
internal class InGameModeSettings : BaseSettingsContainer
{
	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, BaseSetting> Current;

	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Names;

	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> Values;

	[Token(Token = "0x40004EC")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<StringSetting> Types;

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x5A48310", Offset = "0x5A47310", VA = "0x5A48310", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x5A486B0", Offset = "0x5A476B0", VA = "0x5A486B0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x5A488E0", Offset = "0x5A478E0", VA = "0x5A488E0")]
	public InGameModeSettings()
	{
	}
}
