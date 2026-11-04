// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BladeThrowSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BladeThrowSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BladeThrowSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000677")]
internal class BladeThrowSpecial : BaseAttackSpecial
{
	[Token(Token = "0x4001EAA")]
	[FieldOffset(Offset = "0x48")]
	protected bool _needActivate;

	[Token(Token = "0x4001EAB")]
	[FieldOffset(Offset = "0x4C")]
	protected float Speed;

	[Token(Token = "0x4001EAC")]
	[FieldOffset(Offset = "0x50")]
	protected float LiveTime;

	[Token(Token = "0x17000B1B")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6003FFE")]
		[Address(RVA = "0x21698F0", Offset = "0x2167EF0", VA = "0x1821698F0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003FFF")]
	[Address(RVA = "0x21698C0", Offset = "0x2167EC0", VA = "0x1821698C0")]
	public BladeThrowSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004000")]
	[Address(RVA = "0x2168D00", Offset = "0x2167300", VA = "0x182168D00", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004001")]
	[Address(RVA = "0x2168D80", Offset = "0x2167380", VA = "0x182168D80", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x6004002")]
	[Address(RVA = "0x2169330", Offset = "0x2167930", VA = "0x182169330")]
	protected void SpawnBladeProjectile(bool left, Vector3 target, Vector3 velocity)
	{
	}
}
