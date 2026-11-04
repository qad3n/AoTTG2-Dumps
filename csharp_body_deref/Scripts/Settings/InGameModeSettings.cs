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

[Token(Token = "0x20000AE")]
internal class InGameModeSettings : BaseSettingsContainer
{
	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, BaseSetting> Current;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Names;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> Values;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<StringSetting> Types;

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x1F1B220", Offset = "0x1F19820", VA = "0x181F1B220", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x1F1AFD0", Offset = "0x1F195D0", VA = "0x181F1AFD0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x1F1B5E0", Offset = "0x1F19BE0", VA = "0x181F1B5E0")]
	public InGameModeSettings()
	{
	}
}
