// ==================== AoTTG2 cross-reference ====================
// Type: Settings.BaseSetSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/BaseSetSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSetSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000C8")]
internal abstract class BaseSetSetting : BaseSettingsContainer
{
	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting Name;

	[Token(Token = "0x40004F3")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting Preset;

	[Token(Token = "0x40004F4")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting UniqueId;

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x1F0E9E0", Offset = "0x1F0CFE0", VA = "0x181F0E9E0")]
	protected BaseSetSetting()
	{
	}
}
