// ==================== AoTTG2 cross-reference ====================
// Type: Characters.WallColossalAnimations
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/WallColossalAnimations.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalAnimations.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000702")]
internal class WallColossalAnimations : BaseTitanAnimations
{
	[Token(Token = "0x4002125")]
	public const string IdleValue = "Armature_VER2|wall_colossal_idle";

	[Token(Token = "0x4002126")]
	public const string AttackWallSlap1LValue = "Armature_VER2|wall_attack_slap1_L";

	[Token(Token = "0x4002127")]
	public const string AttackWallSlap1RValue = "Armature_VER2|wall_attack_slap1_R";

	[Token(Token = "0x4002128")]
	public const string AttackWallSlap2LValue = "Armature_VER2|wall_attack_slap2_L";

	[Token(Token = "0x4002129")]
	public const string AttackWallSlap2RValue = "Armature_VER2|wall_attack_slap2_R";

	[Token(Token = "0x400212A")]
	public const string AttackSteamValue = "Armature_VER2|wall_attack_steam";

	[Token(Token = "0x400212B")]
	public const string AttackSweepValue = "Armature_VER2|wall_attack_sweep";

	[Token(Token = "0x400212C")]
	public const string AttackKickValue = "Armature_VER2|wall_colossal_kick";

	[Token(Token = "0x400212D")]
	public const string StunFallFace = "Armature_VER2|wall_colossal_stun";

	[Token(Token = "0x400212E")]
	[FieldOffset(Offset = "0x10")]
	public string AttackWallSlap1L;

	[Token(Token = "0x400212F")]
	[FieldOffset(Offset = "0x18")]
	public string AttackWallSlap1R;

	[Token(Token = "0x4002130")]
	[FieldOffset(Offset = "0x20")]
	public string AttackWallSlap2L;

	[Token(Token = "0x4002131")]
	[FieldOffset(Offset = "0x28")]
	public string AttackWallSlap2R;

	[Token(Token = "0x4002132")]
	[FieldOffset(Offset = "0x30")]
	public string AttackSteam;

	[Token(Token = "0x4002133")]
	[FieldOffset(Offset = "0x38")]
	public string AttackSweep;

	[Token(Token = "0x4002134")]
	[FieldOffset(Offset = "0x40")]
	public string AttackKick;

	[Token(Token = "0x4002135")]
	[FieldOffset(Offset = "0x48")]
	public string StunFallFaceAnim;

	[Token(Token = "0x17000BAD")]
	public override string Idle
	{
		[Token(Token = "0x60043A8")]
		[Address(RVA = "0x5B1DC20", Offset = "0x5B1CC20", VA = "0x5B1DC20", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Characters/WallColossalAnimations.c (Characters.WallColossalAnimations$$get_Idle): clean
			return "Armature_VER2|wall_colossal_idle";
		}
	}

	[Token(Token = "0x60043A9")]
	[Address(RVA = "0x5B1DC50", Offset = "0x5B1CC50", VA = "0x5B1DC50")]
	public WallColossalAnimations()
	{
		// Lifted from source/cpp/Characters/WallColossalAnimations.c (Characters.WallColossalAnimations$$.ctor): clean
		this.AttackWallSlap1L = "Armature_VER2|wall_attack_slap1_L";
		this.AttackWallSlap1R = "Armature_VER2|wall_attack_slap1_R";
		this.AttackWallSlap2L = "Armature_VER2|wall_attack_slap2_L";
		this.AttackWallSlap2R = "Armature_VER2|wall_attack_slap2_R";
		this.AttackSteam = "Armature_VER2|wall_attack_steam";
		this.AttackSweep = "Armature_VER2|wall_attack_sweep";
		this.AttackKick = "Armature_VER2|wall_colossal_kick";
		this.StunFallFaceAnim = "Armature_VER2|wall_colossal_stun";
		base();
		return;
	}
}
