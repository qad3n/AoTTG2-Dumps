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

[Token(Token = "0x2000091")]
internal class InGameModeSettings : BaseSettingsContainer
{
	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, BaseSetting> Current;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x28")]
	public ListSetting<StringSetting> Names;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x30")]
	public ListSetting<StringSetting> Values;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Types;

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x3F8B6A0", Offset = "0x3F8B6A0", VA = "0x3F8B6A0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x3F8BB10", Offset = "0x3F8BB10", VA = "0x3F8BB10", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x3F8BD50", Offset = "0x3F8BD50", VA = "0x3F8BD50")]
	public InGameModeSettings()
	{
	}
}
