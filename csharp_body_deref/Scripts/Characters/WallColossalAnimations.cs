// ==================== AoTTG2 cross-reference ====================
// Type: Characters.WallColossalAnimations
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/WallColossalAnimations.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalAnimations.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000544")]
internal class WallColossalAnimations : BaseTitanAnimations
{
	[Token(Token = "0x40018AC")]
	public const string IdleValue = "Armature_VER2|wall_colossal_idle";

	[Token(Token = "0x40018AD")]
	public const string AttackWallSlap1LValue = "Armature_VER2|wall_attack_slap1_L";

	[Token(Token = "0x40018AE")]
	public const string AttackWallSlap1RValue = "Armature_VER2|wall_attack_slap1_R";

	[Token(Token = "0x40018AF")]
	public const string AttackWallSlap2LValue = "Armature_VER2|wall_attack_slap2_L";

	[Token(Token = "0x40018B0")]
	public const string AttackWallSlap2RValue = "Armature_VER2|wall_attack_slap2_R";

	[Token(Token = "0x40018B1")]
	public const string AttackSteamValue = "Armature_VER2|wall_attack_steam";

	[Token(Token = "0x40018B2")]
	public const string AttackSweepValue = "Armature_VER2|wall_attack_sweep";

	[Token(Token = "0x40018B3")]
	public const string AttackKickValue = "Armature_VER2|wall_colossal_kick";

	[Token(Token = "0x40018B4")]
	public const string StunFallFace = "Armature_VER2|wall_colossal_stun";

	[Token(Token = "0x40018B5")]
	[FieldOffset(Offset = "0x10")]
	public string AttackWallSlap1L;

	[Token(Token = "0x40018B6")]
	[FieldOffset(Offset = "0x18")]
	public string AttackWallSlap1R;

	[Token(Token = "0x40018B7")]
	[FieldOffset(Offset = "0x20")]
	public string AttackWallSlap2L;

	[Token(Token = "0x40018B8")]
	[FieldOffset(Offset = "0x28")]
	public string AttackWallSlap2R;

	[Token(Token = "0x40018B9")]
	[FieldOffset(Offset = "0x30")]
	public string AttackSteam;

	[Token(Token = "0x40018BA")]
	[FieldOffset(Offset = "0x38")]
	public string AttackSweep;

	[Token(Token = "0x40018BB")]
	[FieldOffset(Offset = "0x40")]
	public string AttackKick;

	[Token(Token = "0x40018BC")]
	[FieldOffset(Offset = "0x48")]
	public string StunFallFaceAnim;

	[Token(Token = "0x17000A29")]
	public override string Idle
	{
		[Token(Token = "0x60036A9")]
		[Address(RVA = "0x42048D0", Offset = "0x42048D0", VA = "0x42048D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60036AA")]
	[Address(RVA = "0x4204900", Offset = "0x4204900", VA = "0x4204900")]
	public WallColossalAnimations()
	{
	}
}
