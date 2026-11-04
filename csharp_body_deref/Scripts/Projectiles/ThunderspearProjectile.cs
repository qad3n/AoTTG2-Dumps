// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.ThunderspearProjectile
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Projectiles/ThunderspearProjectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/ThunderspearProjectile.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x2000109")]
internal class ThunderspearProjectile : BaseProjectile
{
	[Token(Token = "0x40005ED")]
	[FieldOffset(Offset = "0xE0")]
	private Color _color;

	[Token(Token = "0x40005EE")]
	[FieldOffset(Offset = "0xF0")]
	private float _radius;

	[Token(Token = "0x40005EF")]
	[FieldOffset(Offset = "0xF4")]
	public Vector3 InitialPlayerVelocity;

	[Token(Token = "0x40005F0")]
	[FieldOffset(Offset = "0x100")]
	private Vector3 _lastPosition;

	[Token(Token = "0x40005F1")]
	[FieldOffset(Offset = "0x0")]
	private static LayerMask _collideMask;

	[Token(Token = "0x40005F2")]
	[FieldOffset(Offset = "0x4")]
	private static LayerMask _blockMask;

	[Token(Token = "0x40005F3")]
	[FieldOffset(Offset = "0x10C")]
	private bool _wasImpact;

	[Token(Token = "0x40005F4")]
	[FieldOffset(Offset = "0x10D")]
	private bool _wasMaxRange;

	[Token(Token = "0x40005F5")]
	[FieldOffset(Offset = "0x10E")]
	private bool _isEmbed;

	[Token(Token = "0x40005F6")]
	[FieldOffset(Offset = "0x110")]
	private Transform _embedParent;

	[Token(Token = "0x40005F7")]
	[FieldOffset(Offset = "0x118")]
	private Vector3 _embedPosition;

	[Token(Token = "0x40005F8")]
	[FieldOffset(Offset = "0x124")]
	private Vector3 _startPosition;

	[Token(Token = "0x40005F9")]
	[FieldOffset(Offset = "0x130")]
	private bool _isAA;

	[Token(Token = "0x40005FA")]
	[FieldOffset(Offset = "0x134")]
	private float _embedTime;

	[Token(Token = "0x40005FB")]
	[FieldOffset(Offset = "0x138")]
	private bool _usesEmbed;

	[Token(Token = "0x40005FC")]
	[FieldOffset(Offset = "0x8")]
	public static Color CritColor;

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x20D3EF0", Offset = "0x20D24F0", VA = "0x1820D3EF0", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x20D3B50", Offset = "0x20D2150", VA = "0x1820D3B50", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x20D3040", Offset = "0x20D1640", VA = "0x1820D3040")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x20D3B20", Offset = "0x20D2120", VA = "0x1820D3B20", Slot = "16")]
	protected override void OnExceedLiveTime()
	{
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x20D1520", Offset = "0x20CFB20", VA = "0x1820D1520")]
	public void Explode()
	{
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x20D4080", Offset = "0x20D2680", VA = "0x1820D4080")]
	private void StunMyHuman()
	{
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x20D2770", Offset = "0x20D0D70", VA = "0x1820D2770")]
	private int KillTitansInRadius(float radius, float restrictAngle)
	{
		return default(int);
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x20D20A0", Offset = "0x20D06A0", VA = "0x1820D20A0")]
	private int KillPlayersInRadius(float radius)
	{
		return default(int);
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x20D1170", Offset = "0x20CF770", VA = "0x1820D1170")]
	private void DamageHorsesInRadius(float radius)
	{
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x20D0F20", Offset = "0x20CF520", VA = "0x1820D0F20")]
	private int CalculateDamage(bool dmgOverride = false)
	{
		return default(int);
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x20D43C0", Offset = "0x20D29C0", VA = "0x1820D43C0", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x20D1BD0", Offset = "0x20D01D0", VA = "0x1820D1BD0")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x20D1FE0", Offset = "0x20D05E0", VA = "0x1820D1FE0")]
	private float GetStat(string field)
	{
		return default(float);
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x20D46D0", Offset = "0x20D2CD0", VA = "0x1820D46D0")]
	public ThunderspearProjectile()
	{
	}
}
