using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000098")]
internal class AnnieShifterInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x20")]
	public KeybindSetting Kick;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x28")]
	public KeybindSetting Jump;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x30")]
	public KeybindSetting Walk;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting AttackCombo;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting AttackSwing;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting AttackStomp;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting AttackBite;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting AttackHead;

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting AttackBrushBack;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting AttackBrushFront;

	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting AttackBrushHead;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting AttackGrabBottom;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting AttackGrabMid;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting AttackGrabUp;

	[Token(Token = "0x1700008D")]
	protected override string FileName
	{
		[Token(Token = "0x6000334")]
		[Address(RVA = "0x3C96C60", Offset = "0x3C96C60", VA = "0x3C96C60", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x3C96C90", Offset = "0x3C96C90", VA = "0x3C96C90")]
	public AnnieShifterInputSettings()
	{
	}
}
