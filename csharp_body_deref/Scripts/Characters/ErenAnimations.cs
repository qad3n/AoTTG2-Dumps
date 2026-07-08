using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004FA")]
internal class ErenAnimations : BaseTitanAnimations
{
	[Token(Token = "0x400177A")]
	public const string IdleValue = "ErenRig_VER2|et_idle";

	[Token(Token = "0x400177B")]
	public const string RunValue = "ErenRig_VER2|et_run";

	[Token(Token = "0x400177C")]
	public const string WalkValue = "ErenRig_VER2|et_walk";

	[Token(Token = "0x400177D")]
	public const string JumpValue = "ErenRig_VER2|et_jump_start";

	[Token(Token = "0x400177E")]
	public const string FallValue = "ErenRig_VER2|et_jump_air";

	[Token(Token = "0x400177F")]
	public const string LandValue = "ErenRig_VER2|et_jump_land";

	[Token(Token = "0x4001780")]
	public const string DieValue = "ErenRig_VER2|et_die";

	[Token(Token = "0x4001781")]
	public const string AttackComboValue = "ErenRig_VER2|et_attack_combo_full";

	[Token(Token = "0x4001782")]
	public const string AttackKickValue = "ErenRig_VER2|et_attack_kick";

	[Token(Token = "0x4001783")]
	public const string StunValue = "ErenRig_VER2|et_hit_titan";

	[Token(Token = "0x4001784")]
	public const string EmoteNodValue = "ErenRig_VER2|et_yes";

	[Token(Token = "0x4001785")]
	public const string EmoteRoarValue = "ErenRig_VER2|et_born";

	[Token(Token = "0x4001786")]
	public const string RockLiftValue = "ErenRig_VER2|et_rock_lift";

	[Token(Token = "0x4001787")]
	public const string RockLift001Value = "ErenRig_VER2|et_rock_lift.001";

	[Token(Token = "0x4001788")]
	public const string RockWalkValue = "ErenRig_VER2|et_rock_walk";

	[Token(Token = "0x4001789")]
	public const string RockFixHoleValue = "ErenRig_VER2|et_rock_fix_hole";

	[Token(Token = "0x400178A")]
	[FieldOffset(Offset = "0x10")]
	public string AttackCombo;

	[Token(Token = "0x400178B")]
	[FieldOffset(Offset = "0x18")]
	public string AttackKick;

	[Token(Token = "0x400178C")]
	[FieldOffset(Offset = "0x20")]
	public string EmoteNod;

	[Token(Token = "0x400178D")]
	[FieldOffset(Offset = "0x28")]
	public string EmoteRoar;

	[Token(Token = "0x400178E")]
	[FieldOffset(Offset = "0x30")]
	public string RockLift;

	[Token(Token = "0x400178F")]
	[FieldOffset(Offset = "0x38")]
	public string RockLift001;

	[Token(Token = "0x4001790")]
	[FieldOffset(Offset = "0x40")]
	public string RockWalk;

	[Token(Token = "0x4001791")]
	[FieldOffset(Offset = "0x48")]
	public string RockFixHole;

	[Token(Token = "0x170009B5")]
	public override string Idle
	{
		[Token(Token = "0x6003483")]
		[Address(RVA = "0x3EF6F60", Offset = "0x3EF6F60", VA = "0x3EF6F60", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009B6")]
	public override string Run
	{
		[Token(Token = "0x6003484")]
		[Address(RVA = "0x3EF6F90", Offset = "0x3EF6F90", VA = "0x3EF6F90", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009B7")]
	public override string Walk
	{
		[Token(Token = "0x6003485")]
		[Address(RVA = "0x3EF6FC0", Offset = "0x3EF6FC0", VA = "0x3EF6FC0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009B8")]
	public override string Jump
	{
		[Token(Token = "0x6003486")]
		[Address(RVA = "0x3EF6FF0", Offset = "0x3EF6FF0", VA = "0x3EF6FF0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009B9")]
	public override string Fall
	{
		[Token(Token = "0x6003487")]
		[Address(RVA = "0x3EF7020", Offset = "0x3EF7020", VA = "0x3EF7020", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009BA")]
	public override string Land
	{
		[Token(Token = "0x6003488")]
		[Address(RVA = "0x3EF7050", Offset = "0x3EF7050", VA = "0x3EF7050", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009BB")]
	public override string Die
	{
		[Token(Token = "0x6003489")]
		[Address(RVA = "0x3EF7080", Offset = "0x3EF7080", VA = "0x3EF7080", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009BC")]
	public override string Stun
	{
		[Token(Token = "0x600348A")]
		[Address(RVA = "0x3EF70B0", Offset = "0x3EF70B0", VA = "0x3EF70B0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600348B")]
	[Address(RVA = "0x3EF70E0", Offset = "0x3EF70E0", VA = "0x3EF70E0")]
	public ErenAnimations()
	{
	}
}
