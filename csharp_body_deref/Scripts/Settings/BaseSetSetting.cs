// ==================== AoTTG2 cross-reference ====================
// Type: Settings.BaseSetSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/BaseSetSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSetSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000AC")]
internal abstract class BaseSetSetting : BaseSettingsContainer
{
	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x20")]
	public StringSetting Name;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x28")]
	public BoolSetting Preset;

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting UniqueId;

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x40FDB50", Offset = "0x40FDB50", VA = "0x40FDB50")]
	protected BaseSetSetting()
	{
	}
}
