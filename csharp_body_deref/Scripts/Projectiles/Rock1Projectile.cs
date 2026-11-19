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

[Token(Token = "0x2000079")]
internal class Rock1Projectile : BaseProjectile
{
	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0xE0")]
	protected float _size;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0xE4")]
	protected float _impactCooldownLeft;

	[Token(Token = "0x17000085")]
	protected virtual bool DestroyOnImpact
	{
		[Token(Token = "0x6000358")]
		[Address(RVA = "0x5772840", Offset = "0x5771840", VA = "0x5772840", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000086")]
	protected virtual float MinImpactVelocity
	{
		[Token(Token = "0x6000359")]
		[Address(RVA = "0x5772850", Offset = "0x5771850", VA = "0x5772850", Slot = "21")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000087")]
	protected virtual float ImpactCooldown
	{
		[Token(Token = "0x600035A")]
		[Address(RVA = "0x5772860", Offset = "0x5771860", VA = "0x5772860", Slot = "22")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x5772870", Offset = "0x5771870", VA = "0x5772870", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x5772940", Offset = "0x5771940", VA = "0x5772940", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x57729E0", Offset = "0x57719E0", VA = "0x57729E0", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x5772AC0", Offset = "0x5771AC0", VA = "0x5772AC0")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x57730D0", Offset = "0x57720D0", VA = "0x57730D0")]
	private void KillPlayersInRadius(float radius, int damage, BaseCharacter damagedHuman)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x5772FA0", Offset = "0x5771FA0", VA = "0x5772FA0")]
	private int CalculateDamage()
	{
		return default(int);
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x5773020", Offset = "0x5772020", VA = "0x5773020")]
	private string GetName()
	{
		return null;
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x5773770", Offset = "0x5772770", VA = "0x5773770")]
	public Rock1Projectile()
	{
	}
}
