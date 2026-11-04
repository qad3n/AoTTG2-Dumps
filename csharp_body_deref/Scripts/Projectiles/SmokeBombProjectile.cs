// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.SmokeBombProjectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/SmokeBombProjectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/SmokeBombProjectile.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x2000107")]
internal class SmokeBombProjectile : BaseProjectile
{
	[Token(Token = "0x170000BF")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x60004FE")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x20D0AD0", Offset = "0x20CF0D0", VA = "0x1820D0AD0")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x20B6310", Offset = "0x20B4910", VA = "0x1820B6310")]
	public SmokeBombProjectile()
	{
	}
}
