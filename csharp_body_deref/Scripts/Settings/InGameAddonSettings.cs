// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameAddonSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/InGameAddonSettings.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x2000088")]
internal class InGameAddonSettings : BaseSettingsContainer
{
	[Token(Token = "0x40002FA")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, Dictionary<string, BaseSetting>> Current;

	[Token(Token = "0x40002FB")]
	[FieldOffset(Offset = "0x28")]
	public ListSetting<StringSetting> Names;

	[Token(Token = "0x40002FC")]
	[FieldOffset(Offset = "0x30")]
	public ListSetting<StringSetting> Values;

	[Token(Token = "0x40002FD")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Types;

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x3F89DE0", Offset = "0x3F89DE0", VA = "0x3F89DE0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x3F8A4E0", Offset = "0x3F8A4E0", VA = "0x3F8A4E0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x3F8A870", Offset = "0x3F8A870", VA = "0x3F8A870")]
	public InGameAddonSettings()
	{
	}
}
