// ==================== AoTTG2 cross-reference ====================
// Type: Settings.AnnieShifterInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/AnnieShifterInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/AnnieShifterInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B7")]
internal class AnnieShifterInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Kick;

	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Jump;

	[Token(Token = "0x4000401")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Walk;

	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting AttackCombo;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting AttackSwing;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting AttackStomp;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting AttackBite;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting AttackHead;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting AttackBrushBack;

	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting AttackBrushFront;

	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting AttackBrushHead;

	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting AttackGrabBottom;

	[Token(Token = "0x400040B")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting AttackGrabMid;

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting AttackGrabUp;

	[Token(Token = "0x1700009A")]
	protected override string FileName
	{
		[Token(Token = "0x60003C1")]
		[Address(RVA = "0x1F0D410", Offset = "0x1F0BA10", VA = "0x181F0D410", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x1F0CBC0", Offset = "0x1F0B1C0", VA = "0x181F0CBC0")]
	public AnnieShifterInputSettings()
	{
	}
}
