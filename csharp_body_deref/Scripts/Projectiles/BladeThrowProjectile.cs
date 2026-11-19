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

[Token(Token = "0x2000074")]
internal class BladeThrowProjectile : BaseProjectile
{
	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0xE0")]
	protected Transform _blade;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0xE8")]
	protected GameObject _model;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0xF0")]
	private MeleeWeaponTrail WeaponTrail;

	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0xF8")]
	public Vector3 InitialPlayerVelocity;

	[Token(Token = "0x17000083")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x6000342")]
		[Address(RVA = "0x5770120", Offset = "0x576F120", VA = "0x5770120", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x5770130", Offset = "0x576F130", VA = "0x5770130", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x5770290", Offset = "0x576F290", VA = "0x5770290")]
	protected void Start()
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x57703E0", Offset = "0x576F3E0", VA = "0x57703E0", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x5770470", Offset = "0x576F470", VA = "0x5770470", Slot = "19")]
	[PunRPC]
	public override void DisableRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x57704C0", Offset = "0x576F4C0", VA = "0x57704C0")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x5770870", Offset = "0x576F870", VA = "0x5770870")]
	private void CheckHurtboxes(Collider firstCollider)
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x57718D0", Offset = "0x57708D0", VA = "0x57718D0")]
	private int CalculateDamage()
	{
		return default(int);
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x5771B00", Offset = "0x5770B00", VA = "0x5771B00", Slot = "9")]
	protected override void Update()
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x5771D20", Offset = "0x5770D20", VA = "0x5771D20")]
	public BladeThrowProjectile()
	{
	}
}
