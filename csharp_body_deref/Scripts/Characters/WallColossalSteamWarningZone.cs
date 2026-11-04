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

[Token(Token = "0x20006AA")]
internal class WallColossalSteamWarningZone : MonoBehaviour
{
	[Token(Token = "0x4001FBA")]
	[FieldOffset(Offset = "0x20")]
	private HashSet<Human> _humansInZone;

	[Token(Token = "0x4001FBB")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<Rigidbody> _rigidbodiesInZone;

	[Token(Token = "0x4001FBC")]
	[FieldOffset(Offset = "0x30")]
	private WallColossalShifter _owner;

	[Token(Token = "0x4001FBD")]
	[FieldOffset(Offset = "0x38")]
	private bool _isActive;

	[Token(Token = "0x4001FBE")]
	[FieldOffset(Offset = "0x3C")]
	public float KnockbackForce;

	[Token(Token = "0x4001FBF")]
	[FieldOffset(Offset = "0x40")]
	public float ThunderspearKnockbackMultiplier;

	[Token(Token = "0x4001FC0")]
	[FieldOffset(Offset = "0x44")]
	public float KnockbackInterval;

	[Token(Token = "0x4001FC1")]
	[FieldOffset(Offset = "0x48")]
	private float _knockbackTimer;

	[Token(Token = "0x4001FC2")]
	[FieldOffset(Offset = "0x4C")]
	private float _projectileCheckTimer;

	[Token(Token = "0x4001FC3")]
	[FieldOffset(Offset = "0x50")]
	private float _projectileCheckInterval;

	[Token(Token = "0x4001FC4")]
	[FieldOffset(Offset = "0x58")]
	private BoxCollider _boxCollider;

	[Token(Token = "0x600414E")]
	[Address(RVA = "0x219A8D0", Offset = "0x2198ED0", VA = "0x18219A8D0")]
	internal void Initialize(WallColossalShifter owner)
	{
	}

	[Token(Token = "0x600414F")]
	[Address(RVA = "0x219AE30", Offset = "0x2199430", VA = "0x18219AE30")]
	internal void SetActive(bool active)
	{
	}

	[Token(Token = "0x6004150")]
	[Address(RVA = "0x219AB10", Offset = "0x2199110", VA = "0x18219AB10")]
	private void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6004151")]
	[Address(RVA = "0x219AC90", Offset = "0x2199290", VA = "0x18219AC90")]
	private void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x6004152")]
	[Address(RVA = "0x219A940", Offset = "0x2198F40", VA = "0x18219A940")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004153")]
	[Address(RVA = "0x219AFF0", Offset = "0x21995F0", VA = "0x18219AFF0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004154")]
	[Address(RVA = "0x219A480", Offset = "0x2198A80", VA = "0x18219A480")]
	private void CheckForProjectiles()
	{
	}

	[Token(Token = "0x6004155")]
	[Address(RVA = "0x219A1D0", Offset = "0x21987D0", VA = "0x18219A1D0")]
	private void ApplyKnockback(Rigidbody rb)
	{
	}

	[Token(Token = "0x6004156")]
	[Address(RVA = "0x219B410", Offset = "0x2199A10", VA = "0x18219B410")]
	public WallColossalSteamWarningZone()
	{
	}
}
