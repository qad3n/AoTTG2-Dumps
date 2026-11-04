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

[Token(Token = "0x2000105")]
internal class Rock1Projectile : BaseProjectile
{
	[Token(Token = "0x40005E4")]
	[FieldOffset(Offset = "0xE0")]
	protected float _size;

	[Token(Token = "0x40005E5")]
	[FieldOffset(Offset = "0xE4")]
	protected float _impactCooldownLeft;

	[Token(Token = "0x170000BA")]
	protected virtual bool DestroyOnImpact
	{
		[Token(Token = "0x60004EF")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000BB")]
	protected virtual float MinImpactVelocity
	{
		[Token(Token = "0x60004F0")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "21")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000BC")]
	protected virtual float ImpactCooldown
	{
		[Token(Token = "0x60004F1")]
		[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430", Slot = "22")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x20CF220", Offset = "0x20CD820", VA = "0x1820CF220", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x20CF3F0", Offset = "0x20CD9F0", VA = "0x1820CF3F0", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x20CF300", Offset = "0x20CD900", VA = "0x1820CF300", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x20CED00", Offset = "0x20CD300", VA = "0x1820CED00")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x20CE6D0", Offset = "0x20CCCD0", VA = "0x1820CE6D0")]
	private void KillPlayersInRadius(float radius, int damage, BaseCharacter damagedHuman)
	{
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x20CE590", Offset = "0x20CCB90", VA = "0x1820CE590")]
	private int CalculateDamage()
	{
		return default(int);
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x20CE620", Offset = "0x20CCC20", VA = "0x1820CE620")]
	private string GetName()
	{
		return null;
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x20B6310", Offset = "0x20B4910", VA = "0x1820B6310")]
	public Rock1Projectile()
	{
	}
}
