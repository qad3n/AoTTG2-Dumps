using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200009B")]
internal class HumanInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x20")]
	public KeybindSetting AttackDefault;

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x28")]
	public KeybindSetting AttackSpecial;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x30")]
	public KeybindSetting HookLeft;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting HookRight;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting HookBoth;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Dash;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting ReelIn;

	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting ReelOut;

	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting Dodge;

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting Jump;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting Reload;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting HorseMount;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting HorseWalk;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting HorseJump;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting NapeLock;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting Walk;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0xA0")]
	public BoolSetting DashDoubleTap;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0xA8")]
	public BoolSetting WallSlideDash;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0xB0")]
	public IntSetting WallSlideAttach;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0xB8")]
	public FloatSetting ReelOutScrollSmoothing;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting SwapTSAttackSpecial;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting AutoRefillGas;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0xD0")]
	public BoolSetting AutoUseGas;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting ReelInHolding;

	[Token(Token = "0x17000090")]
	protected override string FileName
	{
		[Token(Token = "0x600033A")]
		[Address(RVA = "0x3C98630", Offset = "0x3C98630", VA = "0x3C98630", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x3C98660", Offset = "0x3C98660", VA = "0x3C98660")]
	public HumanInputSettings()
	{
	}
}
