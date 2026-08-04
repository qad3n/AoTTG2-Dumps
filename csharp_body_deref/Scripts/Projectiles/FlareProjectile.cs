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

[Token(Token = "0x20000E2")]
internal class FlareProjectile : BaseProjectile
{
	[Token(Token = "0x170000AA")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x4108250", Offset = "0x4108250", VA = "0x4108250", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x4108260", Offset = "0x4108260", VA = "0x4108260", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x4108310", Offset = "0x4108310", VA = "0x4108310")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x4108350", Offset = "0x4108350", VA = "0x4108350")]
	public FlareProjectile()
	{
	}
}
