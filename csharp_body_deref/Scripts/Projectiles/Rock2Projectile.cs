// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.Rock2Projectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/Rock2Projectile.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Projectiles;

[Token(Token = "0x200007A")]
internal class Rock2Projectile : Rock1Projectile
{
	[Token(Token = "0x17000088")]
	protected override bool DestroyOnImpact
	{
		[Token(Token = "0x6000363")]
		[Address(RVA = "0x5773780", Offset = "0x5772780", VA = "0x5773780", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000089")]
	protected override float MinImpactVelocity
	{
		[Token(Token = "0x6000364")]
		[Address(RVA = "0x5773790", Offset = "0x5772790", VA = "0x5773790", Slot = "21")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x57737A0", Offset = "0x57727A0", VA = "0x57737A0", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x5773870", Offset = "0x5772870", VA = "0x5773870")]
	public Rock2Projectile()
	{
	}
}
