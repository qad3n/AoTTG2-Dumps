using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A0")]
internal class TitanInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x20")]
	public KeybindSetting Kick;

	[Token(Token = "0x4000401")]
	[FieldOffset(Offset = "0x28")]
	public KeybindSetting Jump;

	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0x30")]
	public KeybindSetting Sit;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Walk;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Sprint;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting CoverNape1;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting AttackPunch;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting AttackBellyFlop;

	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting AttackSlapL;

	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting AttackSlapR;

	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting AttackRockThrow;

	[Token(Token = "0x400040B")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting AttackBiteL;

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting AttackBiteF;

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting AttackBiteR;

	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting AttackHitFace;

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting AttackHitBack;

	[Token(Token = "0x4000410")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting AttackSlam;

	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting AttackStomp;

	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting AttackSwing;

	[Token(Token = "0x4000413")]
	[FieldOffset(Offset = "0xB8")]
	public KeybindSetting AttackGrabAirFar;

	[Token(Token = "0x4000414")]
	[FieldOffset(Offset = "0xC0")]
	public KeybindSetting AttackGrabAir;

	[Token(Token = "0x4000415")]
	[FieldOffset(Offset = "0xC8")]
	public KeybindSetting AttackGrabBody;

	[Token(Token = "0x4000416")]
	[FieldOffset(Offset = "0xD0")]
	public KeybindSetting AttackGrabCore;

	[Token(Token = "0x4000417")]
	[FieldOffset(Offset = "0xD8")]
	public KeybindSetting AttackGrabGround;

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0xE0")]
	public KeybindSetting AttackGrabHead;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0xE8")]
	public KeybindSetting AttackGrabHigh;

	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0xF0")]
	public KeybindSetting AttackSlapHighL;

	[Token(Token = "0x400041B")]
	[FieldOffset(Offset = "0xF8")]
	public KeybindSetting AttackSlapHighR;

	[Token(Token = "0x400041C")]
	[FieldOffset(Offset = "0x100")]
	public KeybindSetting AttackSlapLowL;

	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x108")]
	public KeybindSetting AttackSlapLowR;

	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0x110")]
	public KeybindSetting AttackBrushChest;

	[Token(Token = "0x17000094")]
	protected override string FileName
	{
		[Token(Token = "0x6000342")]
		[Address(RVA = "0x3E07F00", Offset = "0x3E07F00", VA = "0x3E07F00", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x3E04CF0", Offset = "0x3E04CF0", VA = "0x3E04CF0")]
	public TitanInputSettings()
	{
	}
}
