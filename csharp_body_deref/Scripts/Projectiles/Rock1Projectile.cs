// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.Rock1Projectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/Rock1Projectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/Rock1Projectile.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x20000E5")]
internal class Rock1Projectile : BaseProjectile
{
	[Token(Token = "0x4000544")]
	[FieldOffset(Offset = "0xE0")]
	protected float _size;

	[Token(Token = "0x4000545")]
	[FieldOffset(Offset = "0xE4")]
	protected float _impactCooldownLeft;

	[Token(Token = "0x170000AB")]
	protected virtual bool DestroyOnImpact
	{
		[Token(Token = "0x6000456")]
		[Address(RVA = "0x4108660", Offset = "0x4108660", VA = "0x4108660", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AC")]
	protected virtual float MinImpactVelocity
	{
		[Token(Token = "0x6000457")]
		[Address(RVA = "0x4108670", Offset = "0x4108670", VA = "0x4108670", Slot = "21")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000AD")]
	protected virtual float ImpactCooldown
	{
		[Token(Token = "0x6000458")]
		[Address(RVA = "0x4108680", Offset = "0x4108680", VA = "0x4108680", Slot = "22")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x4108690", Offset = "0x4108690", VA = "0x4108690", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x4108760", Offset = "0x4108760", VA = "0x4108760", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x4108800", Offset = "0x4108800", VA = "0x4108800", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x41088D0", Offset = "0x41088D0", VA = "0x41088D0")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x4108EF0", Offset = "0x4108EF0", VA = "0x4108EF0")]
	private void KillPlayersInRadius(float radius, int damage, BaseCharacter damagedHuman)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x4108DC0", Offset = "0x4108DC0", VA = "0x4108DC0")]
	private int CalculateDamage()
	{
		return default(int);
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x4108E40", Offset = "0x4108E40", VA = "0x4108E40")]
	private string GetName()
	{
		return null;
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x41093A0", Offset = "0x41093A0", VA = "0x41093A0")]
	public Rock1Projectile()
	{
	}
}
