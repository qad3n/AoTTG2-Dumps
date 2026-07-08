using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x20000DF")]
internal class BladeThrowProjectile : BaseProjectile
{
	[Token(Token = "0x4000532")]
	[FieldOffset(Offset = "0xE0")]
	protected Transform _blade;

	[Token(Token = "0x4000533")]
	[FieldOffset(Offset = "0xE8")]
	protected GameObject _model;

	[Token(Token = "0x4000534")]
	[FieldOffset(Offset = "0xF0")]
	private MeleeWeaponTrail WeaponTrail;

	[Token(Token = "0x4000535")]
	[FieldOffset(Offset = "0xF8")]
	public Vector3 InitialPlayerVelocity;

	[Token(Token = "0x170000A7")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x600043A")]
		[Address(RVA = "0x3E16D00", Offset = "0x3E16D00", VA = "0x3E16D00", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x3E16D10", Offset = "0x3E16D10", VA = "0x3E16D10", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x3E16E60", Offset = "0x3E16E60", VA = "0x3E16E60")]
	protected void Start()
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x3E16F80", Offset = "0x3E16F80", VA = "0x3E16F80", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x3E17010", Offset = "0x3E17010", VA = "0x3E17010", Slot = "19")]
	[PunRPC]
	public override void DisableRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x3E17060", Offset = "0x3E17060", VA = "0x3E17060")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x3E17370", Offset = "0x3E17370", VA = "0x3E17370")]
	private void CheckHurtboxes(Collider firstCollider)
	{
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x3E18630", Offset = "0x3E18630", VA = "0x3E18630")]
	private int CalculateDamage()
	{
		return default(int);
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x3E18860", Offset = "0x3E18860", VA = "0x3E18860", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x3E18A90", Offset = "0x3E18A90", VA = "0x3E18A90")]
	public BladeThrowProjectile()
	{
	}
}
