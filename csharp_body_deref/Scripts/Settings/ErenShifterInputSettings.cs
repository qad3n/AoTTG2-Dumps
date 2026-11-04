// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ErenShifterInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ErenShifterInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/ErenShifterInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B8")]
internal class ErenShifterInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Kick;

	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Jump;

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Walk;

	[Token(Token = "0x4000410")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting AttackCombo;

	[Token(Token = "0x1700009B")]
	protected override string FileName
	{
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x1F12440", Offset = "0x1F10A40", VA = "0x181F12440", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x1F12190", Offset = "0x1F10790", VA = "0x181F12190")]
	public ErenShifterInputSettings()
	{
	}
}
