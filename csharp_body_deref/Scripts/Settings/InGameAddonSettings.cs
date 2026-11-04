// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameAddonSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameAddonSettings.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000A5")]
internal class InGameAddonSettings : BaseSettingsContainer
{
	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, Dictionary<string, BaseSetting>> Current;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Names;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> Values;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<StringSetting> Types;

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x1F18F40", Offset = "0x1F17540", VA = "0x181F18F40", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x1F18BE0", Offset = "0x1F171E0", VA = "0x181F18BE0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x1F19460", Offset = "0x1F17A60", VA = "0x181F19460")]
	public InGameAddonSettings()
	{
	}
}
