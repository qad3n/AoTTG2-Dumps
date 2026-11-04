// ==================== AoTTG2 cross-reference ====================
// Type: Settings.HumanInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/HumanInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/HumanInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000BA")]
internal class HumanInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting AttackDefault;

	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting AttackSpecial;

	[Token(Token = "0x4000431")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting HookLeft;

	[Token(Token = "0x4000432")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting HookRight;

	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting HookBoth;

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting Dash;

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting ReelIn;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting ReelOut;

	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting Dodge;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting Jump;

	[Token(Token = "0x4000439")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting Reload;

	[Token(Token = "0x400043A")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting HorseMount;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting HorseWalk;

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting HorseJump;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting NapeLock;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting Walk;

	[Token(Token = "0x400043F")]
	[FieldOffset(Offset = "0xB8")]
	public BoolSetting DashDoubleTap;

	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting WallSlideDash;

	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0xC8")]
	public IntSetting WallSlideAttach;

	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0xD0")]
	public FloatSetting ReelOutScrollSmoothing;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting SwapTSAttackSpecial;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0xE0")]
	public BoolSetting AutoRefillGas;

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0xE8")]
	public BoolSetting AutoUseGas;

	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0xF0")]
	public BoolSetting ReelInHolding;

	[Token(Token = "0x1700009D")]
	protected override string FileName
	{
		[Token(Token = "0x60003C7")]
		[Address(RVA = "0x1F18BB0", Offset = "0x1F171B0", VA = "0x181F18BB0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x1F17F40", Offset = "0x1F16540", VA = "0x181F17F40")]
	public HumanInputSettings()
	{
	}
}
