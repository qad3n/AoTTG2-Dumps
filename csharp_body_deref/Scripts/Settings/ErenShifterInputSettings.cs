// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ErenShifterInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ErenShifterInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/ErenShifterInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F0")]
internal class ErenShifterInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000543")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Kick;

	[Token(Token = "0x4000544")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Jump;

	[Token(Token = "0x4000545")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Walk;

	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting AttackCombo;

	[Token(Token = "0x170000B8")]
	protected override string FileName
	{
		[Token(Token = "0x6000539")]
		[Address(RVA = "0x5A4B8F0", Offset = "0x5A4A8F0", VA = "0x5A4B8F0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x5A4B920", Offset = "0x5A4A920", VA = "0x5A4B920")]
	public ErenShifterInputSettings()
	{
	}
}
