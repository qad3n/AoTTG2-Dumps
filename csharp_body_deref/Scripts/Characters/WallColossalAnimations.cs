// ==================== AoTTG2 cross-reference ====================
// Type: Characters.WallColossalAnimations
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/WallColossalAnimations.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalAnimations.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006A2")]
internal class WallColossalAnimations : BaseTitanAnimations
{
	[Token(Token = "0x4001F72")]
	public const string IdleValue = "Armature_VER2|wall_colossal_idle";

	[Token(Token = "0x4001F73")]
	public const string AttackWallSlap1LValue = "Armature_VER2|wall_attack_slap1_L";

	[Token(Token = "0x4001F74")]
	public const string AttackWallSlap1RValue = "Armature_VER2|wall_attack_slap1_R";

	[Token(Token = "0x4001F75")]
	public const string AttackWallSlap2LValue = "Armature_VER2|wall_attack_slap2_L";

	[Token(Token = "0x4001F76")]
	public const string AttackWallSlap2RValue = "Armature_VER2|wall_attack_slap2_R";

	[Token(Token = "0x4001F77")]
	public const string AttackSteamValue = "Armature_VER2|wall_attack_steam";

	[Token(Token = "0x4001F78")]
	public const string AttackSweepValue = "Armature_VER2|wall_attack_sweep";

	[Token(Token = "0x4001F79")]
	public const string AttackKickValue = "Armature_VER2|wall_colossal_kick";

	[Token(Token = "0x4001F7A")]
	public const string StunFallFace = "Armature_VER2|wall_colossal_stun";

	[Token(Token = "0x4001F7B")]
	[FieldOffset(Offset = "0x10")]
	public string AttackWallSlap1L;

	[Token(Token = "0x4001F7C")]
	[FieldOffset(Offset = "0x18")]
	public string AttackWallSlap1R;

	[Token(Token = "0x4001F7D")]
	[FieldOffset(Offset = "0x20")]
	public string AttackWallSlap2L;

	[Token(Token = "0x4001F7E")]
	[FieldOffset(Offset = "0x28")]
	public string AttackWallSlap2R;

	[Token(Token = "0x4001F7F")]
	[FieldOffset(Offset = "0x30")]
	public string AttackSteam;

	[Token(Token = "0x4001F80")]
	[FieldOffset(Offset = "0x38")]
	public string AttackSweep;

	[Token(Token = "0x4001F81")]
	[FieldOffset(Offset = "0x40")]
	public string AttackKick;

	[Token(Token = "0x4001F82")]
	[FieldOffset(Offset = "0x48")]
	public string StunFallFaceAnim;

	[Token(Token = "0x17000B63")]
	public override string Idle
	{
		[Token(Token = "0x6004108")]
		[Address(RVA = "0x21939D0", Offset = "0x2191FD0", VA = "0x1821939D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004109")]
	[Address(RVA = "0x2193870", Offset = "0x2191E70", VA = "0x182193870")]
	public WallColossalAnimations()
	{
	}
}
