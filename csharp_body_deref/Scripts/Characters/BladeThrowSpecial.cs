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

[Token(Token = "0x200051D")]
internal class BladeThrowSpecial : BaseAttackSpecial
{
	[Token(Token = "0x400180D")]
	[FieldOffset(Offset = "0x48")]
	protected bool _needActivate;

	[Token(Token = "0x400180E")]
	[FieldOffset(Offset = "0x4C")]
	protected float Speed;

	[Token(Token = "0x400180F")]
	[FieldOffset(Offset = "0x50")]
	protected float LiveTime;

	[Token(Token = "0x170009E7")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60035C0")]
		[Address(RVA = "0x41F2DB0", Offset = "0x41F2DB0", VA = "0x41F2DB0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60035C1")]
	[Address(RVA = "0x41E4210", Offset = "0x41E4210", VA = "0x41E4210")]
	public BladeThrowSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035C2")]
	[Address(RVA = "0x41F2DC0", Offset = "0x41F2DC0", VA = "0x41F2DC0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60035C3")]
	[Address(RVA = "0x41F2E30", Offset = "0x41F2E30", VA = "0x41F2E30", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60035C4")]
	[Address(RVA = "0x41F32E0", Offset = "0x41F32E0", VA = "0x41F32E0")]
	protected void SpawnBladeProjectile(bool left, Vector3 target, Vector3 velocity)
	{
	}
}
