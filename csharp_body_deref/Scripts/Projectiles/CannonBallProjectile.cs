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

[Token(Token = "0x2000075")]
internal class CannonBallProjectile : BaseProjectile
{
	[Token(Token = "0x600034C")]
	[Address(RVA = "0x5771D30", Offset = "0x5770D30", VA = "0x5771D30", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x5771E00", Offset = "0x5770E00", VA = "0x5771E00")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x57723A0", Offset = "0x57713A0", VA = "0x57723A0")]
	private int CalculateDamage()
	{
		return default(int);
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x5772420", Offset = "0x5771420", VA = "0x5772420")]
	public CannonBallProjectile()
	{
	}
}
