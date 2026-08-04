// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.CannonBallProjectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/CannonBallProjectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/CannonBallProjectile.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x20000E1")]
internal class CannonBallProjectile : BaseProjectile
{
	[Token(Token = "0x600044A")]
	[Address(RVA = "0x4107B90", Offset = "0x4107B90", VA = "0x4107B90", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x4107C60", Offset = "0x4107C60", VA = "0x4107C60")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x41081C0", Offset = "0x41081C0", VA = "0x41081C0")]
	private int CalculateDamage()
	{
		return default(int);
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x4108240", Offset = "0x4108240", VA = "0x4108240")]
	public CannonBallProjectile()
	{
	}
}
