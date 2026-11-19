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

[Token(Token = "0x20006D6")]
internal class BladeThrowSpecial : BaseAttackSpecial
{
	[Token(Token = "0x4002058")]
	[FieldOffset(Offset = "0x48")]
	protected bool _needActivate;

	[Token(Token = "0x4002059")]
	[FieldOffset(Offset = "0x4C")]
	protected float Speed;

	[Token(Token = "0x400205A")]
	[FieldOffset(Offset = "0x50")]
	protected float LiveTime;

	[Token(Token = "0x17000B65")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6004296")]
		[Address(RVA = "0x5B09050", Offset = "0x5B08050", VA = "0x5B09050", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004297")]
	[Address(RVA = "0x5B09060", Offset = "0x5B08060", VA = "0x5B09060")]
	public BladeThrowSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004298")]
	[Address(RVA = "0x5B09080", Offset = "0x5B08080", VA = "0x5B09080", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004299")]
	[Address(RVA = "0x5B090F0", Offset = "0x5B080F0", VA = "0x5B090F0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x600429A")]
	[Address(RVA = "0x5B09690", Offset = "0x5B08690", VA = "0x5B09690")]
	protected void SpawnBladeProjectile(bool left, Vector3 target, Vector3 velocity)
	{
	}
}
