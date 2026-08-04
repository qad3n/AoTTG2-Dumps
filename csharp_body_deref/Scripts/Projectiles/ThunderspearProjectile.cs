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

[Token(Token = "0x20000E9")]
internal class ThunderspearProjectile : BaseProjectile
{
	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0xE0")]
	private Color _color;

	[Token(Token = "0x400054E")]
	[FieldOffset(Offset = "0xF0")]
	private float _radius;

	[Token(Token = "0x400054F")]
	[FieldOffset(Offset = "0xF4")]
	public Vector3 InitialPlayerVelocity;

	[Token(Token = "0x4000550")]
	[FieldOffset(Offset = "0x100")]
	private Vector3 _lastPosition;

	[Token(Token = "0x4000551")]
	[FieldOffset(Offset = "0x0")]
	private static LayerMask _collideMask;

	[Token(Token = "0x4000552")]
	[FieldOffset(Offset = "0x4")]
	private static LayerMask _blockMask;

	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0x10C")]
	private bool _wasImpact;

	[Token(Token = "0x4000554")]
	[FieldOffset(Offset = "0x10D")]
	private bool _wasMaxRange;

	[Token(Token = "0x4000555")]
	[FieldOffset(Offset = "0x10E")]
	private bool _isEmbed;

	[Token(Token = "0x4000556")]
	[FieldOffset(Offset = "0x110")]
	private Transform _embedParent;

	[Token(Token = "0x4000557")]
	[FieldOffset(Offset = "0x118")]
	private Vector3 _embedPosition;

	[Token(Token = "0x4000558")]
	[FieldOffset(Offset = "0x124")]
	private Vector3 _startPosition;

	[Token(Token = "0x4000559")]
	[FieldOffset(Offset = "0x130")]
	private bool _isAA;

	[Token(Token = "0x400055A")]
	[FieldOffset(Offset = "0x134")]
	private float _embedTime;

	[Token(Token = "0x400055B")]
	[FieldOffset(Offset = "0x138")]
	private bool _usesEmbed;

	[Token(Token = "0x400055C")]
	[FieldOffset(Offset = "0x8")]
	public static Color CritColor;

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x4109860", Offset = "0x4109860", VA = "0x4109860", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x41099B0", Offset = "0x41099B0", VA = "0x41099B0", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x4109D80", Offset = "0x4109D80", VA = "0x4109D80")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x410AF90", Offset = "0x410AF90", VA = "0x410AF90", Slot = "16")]
	protected override void OnExceedLiveTime()
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x410A8F0", Offset = "0x410A8F0", VA = "0x410A8F0")]
	public void Explode()
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x410C100", Offset = "0x410C100", VA = "0x410C100")]
	private void StunMyHuman()
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x410B8C0", Offset = "0x410B8C0", VA = "0x410B8C0")]
	private int KillTitansInRadius(float radius, float restrictAngle)
	{
		return default(int);
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x410AFC0", Offset = "0x410AFC0", VA = "0x410AFC0")]
	private int KillPlayersInRadius(float radius)
	{
		return default(int);
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x410C450", Offset = "0x410C450", VA = "0x410C450")]
	private int CalculateDamage(bool dmgOverride = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x410C6F0", Offset = "0x410C6F0", VA = "0x410C6F0", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x410C850", Offset = "0x410C850", VA = "0x410C850")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x410AEB0", Offset = "0x410AEB0", VA = "0x410AEB0")]
	private float GetStat(string field)
	{
		return default(float);
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x410CC90", Offset = "0x410CC90", VA = "0x410CC90")]
	public ThunderspearProjectile()
	{
	}
}
