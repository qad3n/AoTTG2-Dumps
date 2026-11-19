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

[Token(Token = "0x200007B")]
internal class SmokeBombProjectile : BaseProjectile
{
	[Token(Token = "0x1700008A")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x6000367")]
		[Address(RVA = "0x5773880", Offset = "0x5772880", VA = "0x5773880", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x5773890", Offset = "0x5772890", VA = "0x5773890")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x5773C60", Offset = "0x5772C60", VA = "0x5773C60")]
	public SmokeBombProjectile()
	{
	}
}
