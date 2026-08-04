// ==================== AoTTG2 cross-reference ====================
// Type: Settings.AnnieShifterInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/AnnieShifterInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/AnnieShifterInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000099")]
internal class AnnieShifterInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x20")]
	public KeybindSetting Kick;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x28")]
	public KeybindSetting Jump;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x30")]
	public KeybindSetting Walk;

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting AttackCombo;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting AttackSwing;

	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting AttackStomp;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting AttackBite;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting AttackHead;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting AttackBrushBack;

	[Token(Token = "0x4000387")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting AttackBrushFront;

	[Token(Token = "0x4000388")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting AttackBrushHead;

	[Token(Token = "0x4000389")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting AttackGrabBottom;

	[Token(Token = "0x400038A")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting AttackGrabMid;

	[Token(Token = "0x400038B")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting AttackGrabUp;

	[Token(Token = "0x1700008F")]
	protected override string FileName
	{
		[Token(Token = "0x600033A")]
		[Address(RVA = "0x3F8CE10", Offset = "0x3F8CE10", VA = "0x3F8CE10", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x3F8CE40", Offset = "0x3F8CE40", VA = "0x3F8CE40")]
	public AnnieShifterInputSettings()
	{
	}
}
