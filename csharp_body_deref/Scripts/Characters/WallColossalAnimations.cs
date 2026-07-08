using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004FF")]
internal class WallColossalAnimations : BaseTitanAnimations
{
	[Token(Token = "0x400179B")]
	public const string IdleValue = "Armature_VER2|wall_colossal_idle";

	[Token(Token = "0x400179C")]
	public const string AttackWallSlap1LValue = "Armature_VER2|wall_attack_slap1_L";

	[Token(Token = "0x400179D")]
	public const string AttackWallSlap1RValue = "Armature_VER2|wall_attack_slap1_R";

	[Token(Token = "0x400179E")]
	public const string AttackWallSlap2LValue = "Armature_VER2|wall_attack_slap2_L";

	[Token(Token = "0x400179F")]
	public const string AttackWallSlap2RValue = "Armature_VER2|wall_attack_slap2_R";

	[Token(Token = "0x40017A0")]
	public const string AttackSteamValue = "Armature_VER2|wall_attack_steam";

	[Token(Token = "0x40017A1")]
	public const string AttackSweepValue = "Armature_VER2|wall_attack_sweep";

	[Token(Token = "0x40017A2")]
	public const string AttackKickValue = "Armature_VER2|wall_colossal_kick";

	[Token(Token = "0x40017A3")]
	public const string StunFallFace = "Armature_VER2|wall_colossal_stun";

	[Token(Token = "0x40017A4")]
	[FieldOffset(Offset = "0x10")]
	public string AttackWallSlap1L;

	[Token(Token = "0x40017A5")]
	[FieldOffset(Offset = "0x18")]
	public string AttackWallSlap1R;

	[Token(Token = "0x40017A6")]
	[FieldOffset(Offset = "0x20")]
	public string AttackWallSlap2L;

	[Token(Token = "0x40017A7")]
	[FieldOffset(Offset = "0x28")]
	public string AttackWallSlap2R;

	[Token(Token = "0x40017A8")]
	[FieldOffset(Offset = "0x30")]
	public string AttackSteam;

	[Token(Token = "0x40017A9")]
	[FieldOffset(Offset = "0x38")]
	public string AttackSweep;

	[Token(Token = "0x40017AA")]
	[FieldOffset(Offset = "0x40")]
	public string AttackKick;

	[Token(Token = "0x40017AB")]
	[FieldOffset(Offset = "0x48")]
	public string StunFallFaceAnim;

	[Token(Token = "0x170009BF")]
	public override string Idle
	{
		[Token(Token = "0x600349B")]
		[Address(RVA = "0x3EF8010", Offset = "0x3EF8010", VA = "0x3EF8010", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600349C")]
	[Address(RVA = "0x3EF8040", Offset = "0x3EF8040", VA = "0x3EF8040")]
	public WallColossalAnimations()
	{
	}
}
