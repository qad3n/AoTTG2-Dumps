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

[Token(Token = "0x2000101")]
internal class CannonBallProjectile : BaseProjectile
{
	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x20B6230", Offset = "0x20B4830", VA = "0x1820B6230", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x20B5C70", Offset = "0x20B4270", VA = "0x1820B5C70")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x20B5BE0", Offset = "0x20B41E0", VA = "0x1820B5BE0")]
	private int CalculateDamage()
	{
		return default(int);
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x20B6310", Offset = "0x20B4910", VA = "0x1820B6310")]
	public CannonBallProjectile()
	{
	}
}
