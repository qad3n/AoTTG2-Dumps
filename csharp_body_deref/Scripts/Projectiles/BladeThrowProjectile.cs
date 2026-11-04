// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.BladeThrowProjectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/BladeThrowProjectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/BladeThrowProjectile.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x2000100")]
internal class BladeThrowProjectile : BaseProjectile
{
	[Token(Token = "0x40005D9")]
	[FieldOffset(Offset = "0xE0")]
	protected Transform _blade;

	[Token(Token = "0x40005DA")]
	[FieldOffset(Offset = "0xE8")]
	protected GameObject _model;

	[Token(Token = "0x40005DB")]
	[FieldOffset(Offset = "0xF0")]
	private MeleeWeaponTrail WeaponTrail;

	[Token(Token = "0x40005DC")]
	[FieldOffset(Offset = "0xF8")]
	public Vector3 InitialPlayerVelocity;

	[Token(Token = "0x170000B8")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x1F0E9C0", Offset = "0x1F0CFC0", VA = "0x181F0E9C0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x1F0FE00", Offset = "0x1F0E400", VA = "0x181F0FE00", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x1F117F0", Offset = "0x1F0FDF0", VA = "0x181F117F0")]
	protected void Start()
	{
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x1F11750", Offset = "0x1F0FD50", VA = "0x181F11750", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x1F112C0", Offset = "0x1F0F8C0", VA = "0x181F112C0", Slot = "19")]
	[PunRPC]
	public override void DisableRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x1F11330", Offset = "0x1F0F930", VA = "0x181F11330")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x1F10140", Offset = "0x1F0E740", VA = "0x181F10140")]
	private void CheckHurtboxes(Collider firstCollider)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x1F0FF50", Offset = "0x1F0E550", VA = "0x181F0FF50")]
	private int CalculateDamage()
	{
		return default(int);
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x1F11960", Offset = "0x1F0FF60", VA = "0x181F11960", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x1F0E8A0", Offset = "0x1F0CEA0", VA = "0x181F0E8A0")]
	public BladeThrowProjectile()
	{
	}
}
