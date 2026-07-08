using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000507")]
internal class WallColossalSteamWarningZone : MonoBehaviour
{
	[Token(Token = "0x40017E3")]
	[FieldOffset(Offset = "0x20")]
	private HashSet<Human> _humansInZone;

	[Token(Token = "0x40017E4")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<Rigidbody> _rigidbodiesInZone;

	[Token(Token = "0x40017E5")]
	[FieldOffset(Offset = "0x30")]
	private WallColossalShifter _owner;

	[Token(Token = "0x40017E6")]
	[FieldOffset(Offset = "0x38")]
	private bool _isActive;

	[Token(Token = "0x40017E7")]
	[FieldOffset(Offset = "0x3C")]
	public float KnockbackForce;

	[Token(Token = "0x40017E8")]
	[FieldOffset(Offset = "0x40")]
	public float ThunderspearKnockbackMultiplier;

	[Token(Token = "0x40017E9")]
	[FieldOffset(Offset = "0x44")]
	public float KnockbackInterval;

	[Token(Token = "0x40017EA")]
	[FieldOffset(Offset = "0x48")]
	private float _knockbackTimer;

	[Token(Token = "0x40017EB")]
	[FieldOffset(Offset = "0x4C")]
	private float _projectileCheckTimer;

	[Token(Token = "0x40017EC")]
	[FieldOffset(Offset = "0x50")]
	private float _projectileCheckInterval;

	[Token(Token = "0x40017ED")]
	[FieldOffset(Offset = "0x58")]
	private BoxCollider _boxCollider;

	[Token(Token = "0x60034DB")]
	[Address(RVA = "0x3EFB5D0", Offset = "0x3EFB5D0", VA = "0x3EFB5D0")]
	internal void Initialize(WallColossalShifter owner)
	{
	}

	[Token(Token = "0x60034DC")]
	[Address(RVA = "0x3EFB3A0", Offset = "0x3EFB3A0", VA = "0x3EFB3A0")]
	internal void SetActive(bool active)
	{
	}

	[Token(Token = "0x60034DD")]
	[Address(RVA = "0x3EFE030", Offset = "0x3EFE030", VA = "0x3EFE030")]
	private void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x60034DE")]
	[Address(RVA = "0x3EFE1B0", Offset = "0x3EFE1B0", VA = "0x3EFE1B0")]
	private void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x60034DF")]
	[Address(RVA = "0x3EFE350", Offset = "0x3EFE350", VA = "0x3EFE350")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60034E0")]
	[Address(RVA = "0x3EFE580", Offset = "0x3EFE580", VA = "0x3EFE580")]
	private void Update()
	{
	}

	[Token(Token = "0x60034E1")]
	[Address(RVA = "0x3EFEA30", Offset = "0x3EFEA30", VA = "0x3EFEA30")]
	private void CheckForProjectiles()
	{
	}

	[Token(Token = "0x60034E2")]
	[Address(RVA = "0x3EFEE70", Offset = "0x3EFEE70", VA = "0x3EFEE70")]
	private void ApplyKnockback(Rigidbody rb)
	{
	}

	[Token(Token = "0x60034E3")]
	[Address(RVA = "0x3EFF180", Offset = "0x3EFF180", VA = "0x3EFF180")]
	public WallColossalSteamWarningZone()
	{
	}
}
