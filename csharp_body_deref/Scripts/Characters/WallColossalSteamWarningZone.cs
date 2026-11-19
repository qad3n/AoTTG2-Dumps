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

[Token(Token = "0x2000709")]
internal class WallColossalSteamWarningZone : MonoBehaviour
{
	[Token(Token = "0x400216B")]
	[FieldOffset(Offset = "0x20")]
	private HashSet<Human> _humansInZone;

	[Token(Token = "0x400216C")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<Rigidbody> _rigidbodiesInZone;

	[Token(Token = "0x400216D")]
	[FieldOffset(Offset = "0x30")]
	private WallColossalShifter _owner;

	[Token(Token = "0x400216E")]
	[FieldOffset(Offset = "0x38")]
	private bool _isActive;

	[Token(Token = "0x400216F")]
	[FieldOffset(Offset = "0x3C")]
	public float KnockbackForce;

	[Token(Token = "0x4002170")]
	[FieldOffset(Offset = "0x40")]
	public float ThunderspearKnockbackMultiplier;

	[Token(Token = "0x4002171")]
	[FieldOffset(Offset = "0x44")]
	public float KnockbackInterval;

	[Token(Token = "0x4002172")]
	[FieldOffset(Offset = "0x48")]
	private float _knockbackTimer;

	[Token(Token = "0x4002173")]
	[FieldOffset(Offset = "0x4C")]
	private float _projectileCheckTimer;

	[Token(Token = "0x4002174")]
	[FieldOffset(Offset = "0x50")]
	private float _projectileCheckInterval;

	[Token(Token = "0x4002175")]
	[FieldOffset(Offset = "0x58")]
	private BoxCollider _boxCollider;

	[Token(Token = "0x60043E8")]
	[Address(RVA = "0x5B21830", Offset = "0x5B20830", VA = "0x5B21830")]
	internal void Initialize(WallColossalShifter owner)
	{
	}

	[Token(Token = "0x60043E9")]
	[Address(RVA = "0x5B21630", Offset = "0x5B20630", VA = "0x5B21630")]
	internal void SetActive(bool active)
	{
	}

	[Token(Token = "0x60043EA")]
	[Address(RVA = "0x5B23F40", Offset = "0x5B22F40", VA = "0x5B23F40")]
	private void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x60043EB")]
	[Address(RVA = "0x5B240D0", Offset = "0x5B230D0", VA = "0x5B240D0")]
	private void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x60043EC")]
	[Address(RVA = "0x5B24280", Offset = "0x5B23280", VA = "0x5B24280")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60043ED")]
	[Address(RVA = "0x5B24480", Offset = "0x5B23480", VA = "0x5B24480")]
	private void Update()
	{
	}

	[Token(Token = "0x60043EE")]
	[Address(RVA = "0x5B248C0", Offset = "0x5B238C0", VA = "0x5B248C0")]
	private void CheckForProjectiles()
	{
	}

	[Token(Token = "0x60043EF")]
	[Address(RVA = "0x5B24D00", Offset = "0x5B23D00", VA = "0x5B24D00")]
	private void ApplyKnockback(Rigidbody rb)
	{
	}

	[Token(Token = "0x60043F0")]
	[Address(RVA = "0x5B25060", Offset = "0x5B24060", VA = "0x5B25060")]
	public WallColossalSteamWarningZone()
	{
	}
}
