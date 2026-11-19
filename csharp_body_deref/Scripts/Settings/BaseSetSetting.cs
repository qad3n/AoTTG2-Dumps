// ==================== AoTTG2 cross-reference ====================
// Type: Settings.BaseSetSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/BaseSetSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSetSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000103")]
internal abstract class BaseSetSetting : BaseSettingsContainer
{
	[Token(Token = "0x4000630")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting Name;

	[Token(Token = "0x4000631")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting Preset;

	[Token(Token = "0x4000632")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting UniqueId;

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x5A45250", Offset = "0x5A44250", VA = "0x5A45250")]
	protected BaseSetSetting()
	{
	}
}
