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

[Token(Token = "0x2000102")]
internal class FlareProjectile : BaseProjectile
{
	[Token(Token = "0x170000B9")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x60004E7")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x20B98C0", Offset = "0x20B7EC0", VA = "0x1820B98C0", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x20B9870", Offset = "0x20B7E70", VA = "0x1820B9870")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x20B6310", Offset = "0x20B4910", VA = "0x1820B6310")]
	public FlareProjectile()
	{
	}
}
