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

[Token(Token = "0x20000DC")]
internal class InGameAddonSettings : BaseSettingsContainer
{
	[Token(Token = "0x400049B")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, Dictionary<string, BaseSetting>> Current;

	[Token(Token = "0x400049C")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Names;

	[Token(Token = "0x400049D")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> Values;

	[Token(Token = "0x400049E")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<StringSetting> Types;

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x5A454E0", Offset = "0x5A444E0", VA = "0x5A454E0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x5A45ED0", Offset = "0x5A44ED0", VA = "0x5A45ED0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x5A46870", Offset = "0x5A45870", VA = "0x5A46870")]
	public InGameAddonSettings()
	{
	}
}
