using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x20000E8")]
internal class ThunderspearProjectile : BaseProjectile
{
	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0xE0")]
	private Color _color;

	[Token(Token = "0x4000547")]
	[FieldOffset(Offset = "0xF0")]
	private float _radius;

	[Token(Token = "0x4000548")]
	[FieldOffset(Offset = "0xF4")]
	public Vector3 InitialPlayerVelocity;

	[Token(Token = "0x4000549")]
	[FieldOffset(Offset = "0x100")]
	private Vector3 _lastPosition;

	[Token(Token = "0x400054A")]
	[FieldOffset(Offset = "0x0")]
	private static LayerMask _collideMask;

	[Token(Token = "0x400054B")]
	[FieldOffset(Offset = "0x4")]
	private static LayerMask _blockMask;

	[Token(Token = "0x400054C")]
	[FieldOffset(Offset = "0x10C")]
	private bool _wasImpact;

	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0x10D")]
	private bool _wasMaxRange;

	[Token(Token = "0x400054E")]
	[FieldOffset(Offset = "0x10E")]
	private bool _isEmbed;

	[Token(Token = "0x400054F")]
	[FieldOffset(Offset = "0x110")]
	private Transform _embedParent;

	[Token(Token = "0x4000550")]
	[FieldOffset(Offset = "0x118")]
	private Vector3 _embedPosition;

	[Token(Token = "0x4000551")]
	[FieldOffset(Offset = "0x124")]
	private Vector3 _startPosition;

	[Token(Token = "0x4000552")]
	[FieldOffset(Offset = "0x130")]
	private bool _isAA;

	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0x134")]
	private float _embedTime;

	[Token(Token = "0x4000554")]
	[FieldOffset(Offset = "0x138")]
	private bool _usesEmbed;

	[Token(Token = "0x4000555")]
	[FieldOffset(Offset = "0x8")]
	public static Color CritColor;

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x3E1A770", Offset = "0x3E1A770", VA = "0x3E1A770", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x3E1A8C0", Offset = "0x3E1A8C0", VA = "0x3E1A8C0", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x3E1AC90", Offset = "0x3E1AC90", VA = "0x3E1AC90")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x3E1BEA0", Offset = "0x3E1BEA0", VA = "0x3E1BEA0", Slot = "16")]
	protected override void OnExceedLiveTime()
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x3E1B800", Offset = "0x3E1B800", VA = "0x3E1B800")]
	public void Explode()
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x3E1D010", Offset = "0x3E1D010", VA = "0x3E1D010")]
	private void StunMyHuman()
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x3E1C7D0", Offset = "0x3E1C7D0", VA = "0x3E1C7D0")]
	private int KillTitansInRadius(float radius, float restrictAngle)
	{
		return default(int);
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x3E1BED0", Offset = "0x3E1BED0", VA = "0x3E1BED0")]
	private int KillPlayersInRadius(float radius)
	{
		return default(int);
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x3E1D360", Offset = "0x3E1D360", VA = "0x3E1D360")]
	private int CalculateDamage(bool dmgOverride = false)
	{
		return default(int);
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x3E1D600", Offset = "0x3E1D600", VA = "0x3E1D600", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x3E1D760", Offset = "0x3E1D760", VA = "0x3E1D760")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x3E1BDC0", Offset = "0x3E1BDC0", VA = "0x3E1BDC0")]
	private float GetStat(string field)
	{
		return default(float);
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x3E1DBA0", Offset = "0x3E1DBA0", VA = "0x3E1DBA0")]
	public ThunderspearProjectile()
	{
	}
}
