using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x20000E4")]
internal class Rock1Projectile : BaseProjectile
{
	[Token(Token = "0x400053D")]
	[FieldOffset(Offset = "0xE0")]
	protected float _size;

	[Token(Token = "0x400053E")]
	[FieldOffset(Offset = "0xE4")]
	protected float _impactCooldownLeft;

	[Token(Token = "0x170000A9")]
	protected virtual bool DestroyOnImpact
	{
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x3E19570", Offset = "0x3E19570", VA = "0x3E19570", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AA")]
	protected virtual float MinImpactVelocity
	{
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x3E19580", Offset = "0x3E19580", VA = "0x3E19580", Slot = "21")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000AB")]
	protected virtual float ImpactCooldown
	{
		[Token(Token = "0x6000452")]
		[Address(RVA = "0x3E19590", Offset = "0x3E19590", VA = "0x3E19590", Slot = "22")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x3E195A0", Offset = "0x3E195A0", VA = "0x3E195A0", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x3E19670", Offset = "0x3E19670", VA = "0x3E19670", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x3E19710", Offset = "0x3E19710", VA = "0x3E19710", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x3E197E0", Offset = "0x3E197E0", VA = "0x3E197E0")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x3E19E00", Offset = "0x3E19E00", VA = "0x3E19E00")]
	private void KillPlayersInRadius(float radius, int damage, BaseCharacter damagedHuman)
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x3E19CD0", Offset = "0x3E19CD0", VA = "0x3E19CD0")]
	private int CalculateDamage()
	{
		return default(int);
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x3E19D50", Offset = "0x3E19D50", VA = "0x3E19D50")]
	private string GetName()
	{
		return null;
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x3E1A2B0", Offset = "0x3E1A2B0", VA = "0x3E1A2B0")]
	public Rock1Projectile()
	{
	}
}
