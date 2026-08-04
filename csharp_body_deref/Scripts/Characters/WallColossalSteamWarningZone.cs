// ==================== AoTTG2 cross-reference ====================
// Type: Characters.WallColossalSteamWarningZone
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/WallColossalSteamWarningZone.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200054C")]
internal class WallColossalSteamWarningZone : MonoBehaviour
{
	[Token(Token = "0x40018F4")]
	[FieldOffset(Offset = "0x20")]
	private HashSet<Human> _humansInZone;

	[Token(Token = "0x40018F5")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<Rigidbody> _rigidbodiesInZone;

	[Token(Token = "0x40018F6")]
	[FieldOffset(Offset = "0x30")]
	private WallColossalShifter _owner;

	[Token(Token = "0x40018F7")]
	[FieldOffset(Offset = "0x38")]
	private bool _isActive;

	[Token(Token = "0x40018F8")]
	[FieldOffset(Offset = "0x3C")]
	public float KnockbackForce;

	[Token(Token = "0x40018F9")]
	[FieldOffset(Offset = "0x40")]
	public float ThunderspearKnockbackMultiplier;

	[Token(Token = "0x40018FA")]
	[FieldOffset(Offset = "0x44")]
	public float KnockbackInterval;

	[Token(Token = "0x40018FB")]
	[FieldOffset(Offset = "0x48")]
	private float _knockbackTimer;

	[Token(Token = "0x40018FC")]
	[FieldOffset(Offset = "0x4C")]
	private float _projectileCheckTimer;

	[Token(Token = "0x40018FD")]
	[FieldOffset(Offset = "0x50")]
	private float _projectileCheckInterval;

	[Token(Token = "0x40018FE")]
	[FieldOffset(Offset = "0x58")]
	private BoxCollider _boxCollider;

	[Token(Token = "0x60036E9")]
	[Address(RVA = "0x4207E90", Offset = "0x4207E90", VA = "0x4207E90")]
	internal void Initialize(WallColossalShifter owner)
	{
	}

	[Token(Token = "0x60036EA")]
	[Address(RVA = "0x4207C60", Offset = "0x4207C60", VA = "0x4207C60")]
	internal void SetActive(bool active)
	{
	}

	[Token(Token = "0x60036EB")]
	[Address(RVA = "0x420A8F0", Offset = "0x420A8F0", VA = "0x420A8F0")]
	private void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x60036EC")]
	[Address(RVA = "0x420AA70", Offset = "0x420AA70", VA = "0x420AA70")]
	private void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x60036ED")]
	[Address(RVA = "0x420AC10", Offset = "0x420AC10", VA = "0x420AC10")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60036EE")]
	[Address(RVA = "0x420AE40", Offset = "0x420AE40", VA = "0x420AE40")]
	private void Update()
	{
	}

	[Token(Token = "0x60036EF")]
	[Address(RVA = "0x420B2F0", Offset = "0x420B2F0", VA = "0x420B2F0")]
	private void CheckForProjectiles()
	{
	}

	[Token(Token = "0x60036F0")]
	[Address(RVA = "0x420B730", Offset = "0x420B730", VA = "0x420B730")]
	private void ApplyKnockback(Rigidbody rb)
	{
	}

	[Token(Token = "0x60036F1")]
	[Address(RVA = "0x420BA40", Offset = "0x420BA40", VA = "0x420BA40")]
	public WallColossalSteamWarningZone()
	{
	}
}
