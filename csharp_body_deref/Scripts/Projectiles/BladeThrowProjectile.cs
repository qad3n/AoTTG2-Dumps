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

[Token(Token = "0x20000E0")]
internal class BladeThrowProjectile : BaseProjectile
{
	[Token(Token = "0x4000539")]
	[FieldOffset(Offset = "0xE0")]
	protected Transform _blade;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0xE8")]
	protected GameObject _model;

	[Token(Token = "0x400053B")]
	[FieldOffset(Offset = "0xF0")]
	private MeleeWeaponTrail WeaponTrail;

	[Token(Token = "0x400053C")]
	[FieldOffset(Offset = "0xF8")]
	public Vector3 InitialPlayerVelocity;

	[Token(Token = "0x170000A9")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x4105DF0", Offset = "0x4105DF0", VA = "0x4105DF0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x4105E00", Offset = "0x4105E00", VA = "0x4105E00", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x4105F50", Offset = "0x4105F50", VA = "0x4105F50")]
	protected void Start()
	{
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x4106070", Offset = "0x4106070", VA = "0x4106070", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x4106100", Offset = "0x4106100", VA = "0x4106100", Slot = "19")]
	[PunRPC]
	public override void DisableRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x4106150", Offset = "0x4106150", VA = "0x4106150")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x4106460", Offset = "0x4106460", VA = "0x4106460")]
	private void CheckHurtboxes(Collider firstCollider)
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x4107720", Offset = "0x4107720", VA = "0x4107720")]
	private int CalculateDamage()
	{
		return default(int);
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x4107950", Offset = "0x4107950", VA = "0x4107950", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x4107B80", Offset = "0x4107B80", VA = "0x4107B80")]
	public BladeThrowProjectile()
	{
	}
}
