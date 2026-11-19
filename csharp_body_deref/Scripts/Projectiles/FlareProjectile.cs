// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.FlareProjectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/FlareProjectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/FlareProjectile.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x2000076")]
internal class FlareProjectile : BaseProjectile
{
	[Token(Token = "0x17000084")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x6000350")]
		[Address(RVA = "0x5772430", Offset = "0x5771430", VA = "0x5772430", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x5772440", Offset = "0x5771440", VA = "0x5772440", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x57724F0", Offset = "0x57714F0", VA = "0x57724F0")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x5772530", Offset = "0x5771530", VA = "0x5772530")]
	public FlareProjectile()
	{
	}
}
