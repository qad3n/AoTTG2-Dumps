using Il2CppDummyDll;

namespace Projectiles;

[Token(Token = "0x20000E5")]
internal class Rock2Projectile : Rock1Projectile
{
	[Token(Token = "0x170000AC")]
	protected override bool DestroyOnImpact
	{
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x3E1A2C0", Offset = "0x3E1A2C0", VA = "0x3E1A2C0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AD")]
	protected override float MinImpactVelocity
	{
		[Token(Token = "0x600045C")]
		[Address(RVA = "0x3E1A2D0", Offset = "0x3E1A2D0", VA = "0x3E1A2D0", Slot = "21")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x3E1A2E0", Offset = "0x3E1A2E0", VA = "0x3E1A2E0", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x3E1A3B0", Offset = "0x3E1A3B0", VA = "0x3E1A3B0")]
	public Rock2Projectile()
	{
	}
}
