// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseDetection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseDetection.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/BaseDetection.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004E7")]
internal class BaseDetection
{
	[Token(Token = "0x40015C4")]
	[FieldOffset(Offset = "0x10")]
	public bool Detect;

	[Token(Token = "0x40015C5")]
	[FieldOffset(Offset = "0x18")]
	public BaseCharacter ClosestEnemy;

	[Token(Token = "0x40015C6")]
	[FieldOffset(Offset = "0x20")]
	public float ClosestEnemyDistance;

	[Token(Token = "0x40015C7")]
	[FieldOffset(Offset = "0x28")]
	public BaseCharacter Owner;

	[Token(Token = "0x40015C8")]
	private const float CriticalRange = 200f;

	[Token(Token = "0x40015C9")]
	private const float MinimumSpeed = 100f;

	[Token(Token = "0x40015CA")]
	private const float MediumDelay = 0.2f;

	[Token(Token = "0x40015CB")]
	private const float SlowDelay = 2f;

	[Token(Token = "0x40015CC")]
	[FieldOffset(Offset = "0x30")]
	private bool _enemiesOnly;

	[Token(Token = "0x40015CD")]
	[FieldOffset(Offset = "0x31")]
	private bool _titansOnly;

	[Token(Token = "0x40015CE")]
	[FieldOffset(Offset = "0x34")]
	private float _currentMediumTime;

	[Token(Token = "0x40015CF")]
	[FieldOffset(Offset = "0x38")]
	private float _currentSlowTime;

	[Token(Token = "0x40015D0")]
	[FieldOffset(Offset = "0x40")]
	private HashSet<BaseCharacter> _recalculateFast;

	[Token(Token = "0x40015D1")]
	[FieldOffset(Offset = "0x48")]
	private HashSet<BaseCharacter> _recalculateMedium;

	[Token(Token = "0x40015D2")]
	[FieldOffset(Offset = "0x50")]
	private HashSet<BaseCharacter> _recalculateSlow;

	[Token(Token = "0x40015D3")]
	[FieldOffset(Offset = "0x58")]
	private HashSet<BaseCharacter> _tempRecalculateFast;

	[Token(Token = "0x40015D4")]
	[FieldOffset(Offset = "0x60")]
	private HashSet<BaseCharacter> _tempRecalculateMedium;

	[Token(Token = "0x40015D5")]
	[FieldOffset(Offset = "0x68")]
	private HashSet<BaseCharacter> _tempRecalculateSlow;

	[Token(Token = "0x40015D6")]
	[FieldOffset(Offset = "0x70")]
	private InGameManager _inGameManager;

	[Token(Token = "0x60033D2")]
	[Address(RVA = "0x41AC550", Offset = "0x41AC550", VA = "0x41AC550")]
	public BaseDetection(BaseCharacter owner, bool enemiesOnly, bool titansOnly)
	{
	}

	[Token(Token = "0x60033D3")]
	[Address(RVA = "0x41ACC20", Offset = "0x41ACC20", VA = "0x41ACC20", Slot = "4")]
	public virtual bool IsNullOrDead()
	{
		return default(bool);
	}

	[Token(Token = "0x60033D4")]
	[Address(RVA = "0x41A03C0", Offset = "0x41A03C0", VA = "0x41A03C0")]
	public void OnTeamChanged()
	{
	}

	[Token(Token = "0x60033D5")]
	[Address(RVA = "0x41ACB00", Offset = "0x41ACB00", VA = "0x41ACB00")]
	public void OnCharacterSpawned(BaseCharacter character)
	{
	}

	[Token(Token = "0x60033D6")]
	[Address(RVA = "0x41ACC90", Offset = "0x41ACC90", VA = "0x41ACC90")]
	private bool IsValidTeam(BaseCharacter character)
	{
		return default(bool);
	}

	[Token(Token = "0x60033D7")]
	[Address(RVA = "0x41ACD40", Offset = "0x41ACD40", VA = "0x41ACD40", Slot = "5")]
	public virtual void OnFixedUpdate()
	{
	}

	[Token(Token = "0x60033D8")]
	[Address(RVA = "0x41AD400", Offset = "0x41AD400", VA = "0x41AD400")]
	private void MergeTemp(HashSet<BaseCharacter> main, HashSet<BaseCharacter> temp)
	{
	}

	[Token(Token = "0x60033D9")]
	[Address(RVA = "0x41ACEC0", Offset = "0x41ACEC0", VA = "0x41ACEC0")]
	private void Recalculate(HashSet<BaseCharacter> characters, Vector3 myPosition, float mySpeed)
	{
	}

	[Token(Token = "0x60033DA")]
	[Address(RVA = "0x41AD5D0", Offset = "0x41AD5D0", VA = "0x41AD5D0", Slot = "6")]
	protected virtual float GetSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x60033DB")]
	[Address(RVA = "0x41AD5F0", Offset = "0x41AD5F0", VA = "0x41AD5F0", Slot = "7")]
	protected virtual Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60033DC")]
	[Address(RVA = "0x41AD620", Offset = "0x41AD620", VA = "0x41AD620", Slot = "8")]
	protected virtual void OnRecalculate(BaseCharacter character, float distance)
	{
	}
}
