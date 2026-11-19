// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.ThunderspearProjectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/ThunderspearProjectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/ThunderspearProjectile.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x200007D")]
internal class ThunderspearProjectile : BaseProjectile
{
	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0xE0")]
	private Color _color;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0xF0")]
	private float _radius;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0xF4")]
	public Vector3 InitialPlayerVelocity;

	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0x100")]
	private Vector3 _lastPosition;

	[Token(Token = "0x4000256")]
	[FieldOffset(Offset = "0x0")]
	private static LayerMask _collideMask;

	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x4")]
	private static LayerMask _blockMask;

	[Token(Token = "0x4000258")]
	[FieldOffset(Offset = "0x10C")]
	private bool _wasImpact;

	[Token(Token = "0x4000259")]
	[FieldOffset(Offset = "0x10D")]
	private bool _wasMaxRange;

	[Token(Token = "0x400025A")]
	[FieldOffset(Offset = "0x10E")]
	private bool _isEmbed;

	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x110")]
	private Transform _embedParent;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x118")]
	private Vector3 _embedPosition;

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x124")]
	private Vector3 _startPosition;

	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x130")]
	private bool _isAA;

	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x134")]
	private float _embedTime;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x138")]
	private bool _usesEmbed;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x8")]
	public static Color CritColor;

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x5773C70", Offset = "0x5772C70", VA = "0x5773C70", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x5773DD0", Offset = "0x5772DD0", VA = "0x5773DD0", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x5774120", Offset = "0x5773120", VA = "0x5774120")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x5775450", Offset = "0x5774450", VA = "0x5775450", Slot = "16")]
	protected override void OnExceedLiveTime()
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x5774CD0", Offset = "0x5773CD0", VA = "0x5774CD0")]
	public void Explode()
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x5776880", Offset = "0x5775880", VA = "0x5776880")]
	private void StunMyHuman()
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x5776000", Offset = "0x5775000", VA = "0x5776000")]
	private int KillTitansInRadius(float radius, float restrictAngle)
	{
		return default(int);
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x5775480", Offset = "0x5774480", VA = "0x5775480")]
	private int KillPlayersInRadius(float radius)
	{
		return default(int);
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x5775C20", Offset = "0x5774C20", VA = "0x5775C20")]
	private void DamageHorsesInRadius(float radius)
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x5776BC0", Offset = "0x5775BC0", VA = "0x5776BC0")]
	private int CalculateDamage(bool dmgOverride = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x5776E70", Offset = "0x5775E70", VA = "0x5776E70", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x5777020", Offset = "0x5776020", VA = "0x5777020")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x5775370", Offset = "0x5774370", VA = "0x5775370")]
	private float GetStat(string field)
	{
		return default(float);
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x57774B0", Offset = "0x57764B0", VA = "0x57774B0")]
	public ThunderspearProjectile()
	{
	}
}
