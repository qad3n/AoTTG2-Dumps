// ==================== AoTTG2 cross-reference ====================
// Type: Settings.HumanInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/HumanInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/HumanInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F2")]
internal class HumanInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000565")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting AttackDefault;

	[Token(Token = "0x4000566")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting AttackSpecial;

	[Token(Token = "0x4000567")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting HookLeft;

	[Token(Token = "0x4000568")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting HookRight;

	[Token(Token = "0x4000569")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting HookBoth;

	[Token(Token = "0x400056A")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting Dash;

	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting ReelIn;

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting ReelOut;

	[Token(Token = "0x400056D")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting Dodge;

	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting Jump;

	[Token(Token = "0x400056F")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting Reload;

	[Token(Token = "0x4000570")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting HorseMount;

	[Token(Token = "0x4000571")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting HorseWalk;

	[Token(Token = "0x4000572")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting HorseJump;

	[Token(Token = "0x4000573")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting NapeLock;

	[Token(Token = "0x4000574")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting Walk;

	[Token(Token = "0x4000575")]
	[FieldOffset(Offset = "0xB8")]
	public BoolSetting DashDoubleTap;

	[Token(Token = "0x4000576")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting WallSlideDash;

	[Token(Token = "0x4000577")]
	[FieldOffset(Offset = "0xC8")]
	public IntSetting WallSlideAttach;

	[Token(Token = "0x4000578")]
	[FieldOffset(Offset = "0xD0")]
	public FloatSetting ReelOutScrollSmoothing;

	[Token(Token = "0x4000579")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting SwapTSAttackSpecial;

	[Token(Token = "0x400057A")]
	[FieldOffset(Offset = "0xE0")]
	public BoolSetting AutoRefillGas;

	[Token(Token = "0x400057B")]
	[FieldOffset(Offset = "0xE8")]
	public BoolSetting AutoUseGas;

	[Token(Token = "0x400057C")]
	[FieldOffset(Offset = "0xF0")]
	public BoolSetting ReelInHolding;

	[Token(Token = "0x170000BA")]
	protected override string FileName
	{
		[Token(Token = "0x600053D")]
		[Address(RVA = "0x5A4CD70", Offset = "0x5A4BD70", VA = "0x5A4CD70", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x5A4CDA0", Offset = "0x5A4BDA0", VA = "0x5A4CDA0")]
	public HumanInputSettings()
	{
	}
}
