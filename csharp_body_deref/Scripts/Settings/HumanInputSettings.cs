// ==================== AoTTG2 cross-reference ====================
// Type: Settings.HumanInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/HumanInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/HumanInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200009C")]
internal class HumanInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x20")]
	public KeybindSetting AttackDefault;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x28")]
	public KeybindSetting AttackSpecial;

	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x30")]
	public KeybindSetting HookLeft;

	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting HookRight;

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting HookBoth;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Dash;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting ReelIn;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting ReelOut;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting Dodge;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting Jump;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting Reload;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting HorseMount;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting HorseWalk;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting HorseJump;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting NapeLock;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting Walk;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0xA0")]
	public BoolSetting DashDoubleTap;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0xA8")]
	public BoolSetting WallSlideDash;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0xB0")]
	public IntSetting WallSlideAttach;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0xB8")]
	public FloatSetting ReelOutScrollSmoothing;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting SwapTSAttackSpecial;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting AutoRefillGas;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0xD0")]
	public BoolSetting AutoUseGas;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting ReelInHolding;

	[Token(Token = "0x17000092")]
	protected override string FileName
	{
		[Token(Token = "0x6000340")]
		[Address(RVA = "0x40F2C50", Offset = "0x40F2C50", VA = "0x40F2C50", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x40F2C80", Offset = "0x40F2C80", VA = "0x40F2C80")]
	public HumanInputSettings()
	{
	}
}
