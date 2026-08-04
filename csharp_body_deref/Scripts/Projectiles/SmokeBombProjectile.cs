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

[Token(Token = "0x20000E7")]
internal class SmokeBombProjectile : BaseProjectile
{
	[Token(Token = "0x170000B0")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x6000465")]
		[Address(RVA = "0x41094B0", Offset = "0x41094B0", VA = "0x41094B0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x41094C0", Offset = "0x41094C0", VA = "0x41094C0")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x4109850", Offset = "0x4109850", VA = "0x4109850")]
	public SmokeBombProjectile()
	{
	}
}
