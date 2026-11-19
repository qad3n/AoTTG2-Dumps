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

[Token(Token = "0x200069F")]
internal class BaseDetection
{
	[Token(Token = "0x4001DDF")]
	[FieldOffset(Offset = "0x10")]
	public bool Detect;

	[Token(Token = "0x4001DE0")]
	[FieldOffset(Offset = "0x18")]
	public BaseCharacter ClosestEnemy;

	[Token(Token = "0x4001DE1")]
	[FieldOffset(Offset = "0x20")]
	public float ClosestEnemyDistance;

	[Token(Token = "0x4001DE2")]
	[FieldOffset(Offset = "0x28")]
	public BaseCharacter Owner;

	[Token(Token = "0x4001DE3")]
	private const float CriticalRange = 200f;

	[Token(Token = "0x4001DE4")]
	private const float MinimumSpeed = 100f;

	[Token(Token = "0x4001DE5")]
	private const float MediumDelay = 0.2f;

	[Token(Token = "0x4001DE6")]
	private const float SlowDelay = 2f;

	[Token(Token = "0x4001DE7")]
	[FieldOffset(Offset = "0x30")]
	private bool _enemiesOnly;

	[Token(Token = "0x4001DE8")]
	[FieldOffset(Offset = "0x31")]
	private bool _titansOnly;

	[Token(Token = "0x4001DE9")]
	[FieldOffset(Offset = "0x34")]
	private float _currentMediumTime;

	[Token(Token = "0x4001DEA")]
	[FieldOffset(Offset = "0x38")]
	private float _currentSlowTime;

	[Token(Token = "0x4001DEB")]
	[FieldOffset(Offset = "0x40")]
	private HashSet<BaseCharacter> _recalculateFast;

	[Token(Token = "0x4001DEC")]
	[FieldOffset(Offset = "0x48")]
	private HashSet<BaseCharacter> _recalculateMedium;

	[Token(Token = "0x4001DED")]
	[FieldOffset(Offset = "0x50")]
	private HashSet<BaseCharacter> _recalculateSlow;

	[Token(Token = "0x4001DEE")]
	[FieldOffset(Offset = "0x58")]
	private HashSet<BaseCharacter> _tempRecalculateFast;

	[Token(Token = "0x4001DEF")]
	[FieldOffset(Offset = "0x60")]
	private HashSet<BaseCharacter> _tempRecalculateMedium;

	[Token(Token = "0x4001DF0")]
	[FieldOffset(Offset = "0x68")]
	private HashSet<BaseCharacter> _tempRecalculateSlow;

	[Token(Token = "0x4001DF1")]
	[FieldOffset(Offset = "0x70")]
	private InGameManager _inGameManager;

	[Token(Token = "0x17000B1D")]
	protected virtual bool RequireValidTarget
	{
		[Token(Token = "0x6004049")]
		[Address(RVA = "0x5AE5060", Offset = "0x5AE4060", VA = "0x5AE5060", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004048")]
	[Address(RVA = "0x5AE49A0", Offset = "0x5AE39A0", VA = "0x5AE49A0")]
	public BaseDetection(BaseCharacter owner, bool enemiesOnly, bool titansOnly)
	{
	}

	[Token(Token = "0x600404A")]
	[Address(RVA = "0x5AE5070", Offset = "0x5AE4070", VA = "0x5AE5070", Slot = "5")]
	public virtual bool IsNullOrDead()
	{
		return default(bool);
	}

	[Token(Token = "0x600404B")]
	[Address(RVA = "0x5AE50E0", Offset = "0x5AE40E0", VA = "0x5AE50E0")]
	public void OnTeamChanged()
	{
	}

	[Token(Token = "0x600404C")]
	[Address(RVA = "0x5AE4F10", Offset = "0x5AE3F10", VA = "0x5AE4F10")]
	public void OnCharacterSpawned(BaseCharacter character)
	{
	}

	[Token(Token = "0x600404D")]
	[Address(RVA = "0x5AE54E0", Offset = "0x5AE44E0", VA = "0x5AE54E0")]
	private bool IsValidTeam(BaseCharacter character)
	{
		return default(bool);
	}

	[Token(Token = "0x600404E")]
	[Address(RVA = "0x5AE5590", Offset = "0x5AE4590", VA = "0x5AE5590", Slot = "6")]
	public virtual void OnFixedUpdate()
	{
	}

	[Token(Token = "0x600404F")]
	[Address(RVA = "0x5AE5730", Offset = "0x5AE4730", VA = "0x5AE5730")]
	private void RefreshClosestEnemy(Vector3 myPosition)
	{
	}

	[Token(Token = "0x6004050")]
	[Address(RVA = "0x5AE5CA0", Offset = "0x5AE4CA0", VA = "0x5AE5CA0")]
	private void MergeTemp(HashSet<BaseCharacter> main, HashSet<BaseCharacter> temp)
	{
	}

	[Token(Token = "0x6004051")]
	[Address(RVA = "0x5AE58A0", Offset = "0x5AE48A0", VA = "0x5AE58A0")]
	private void Recalculate(HashSet<BaseCharacter> characters, Vector3 myPosition, float mySpeed)
	{
	}

	[Token(Token = "0x6004052")]
	[Address(RVA = "0x5AE5E60", Offset = "0x5AE4E60", VA = "0x5AE5E60", Slot = "7")]
	protected virtual float GetSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x6004053")]
	[Address(RVA = "0x5AE5E80", Offset = "0x5AE4E80", VA = "0x5AE5E80", Slot = "8")]
	protected virtual Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6004054")]
	[Address(RVA = "0x5AE5EB0", Offset = "0x5AE4EB0", VA = "0x5AE5EB0", Slot = "9")]
	protected virtual void OnRecalculate(BaseCharacter character, float distance)
	{
	}
}
