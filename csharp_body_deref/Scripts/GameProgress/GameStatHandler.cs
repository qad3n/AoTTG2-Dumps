// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.GameStatHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/GameStatHandler.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameStatHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace GameProgress;

[Token(Token = "0x200036F")]
internal class GameStatHandler : BaseGameProgressHandler
{
	[Token(Token = "0x400112B")]
	private const int ExpPerKill = 10;

	[Token(Token = "0x400112C")]
	private const int ExpPerLevelBase = 500;

	[Token(Token = "0x400112D")]
	private const int MaxExpPerLevel = 2000;

	[Token(Token = "0x400112E")]
	private const float ExpPerLevelMultiplier = 1.2f;

	[Token(Token = "0x400112F")]
	private const int MaxLevel = 50;

	[Token(Token = "0x4001130")]
	[FieldOffset(Offset = "0x10")]
	private List<int> _expPerLevel;

	[Token(Token = "0x4001131")]
	[FieldOffset(Offset = "0x18")]
	private GameStatContainer _gameStat;

	[Token(Token = "0x600154B")]
	[Address(RVA = "0x581FFB0", Offset = "0x581EFB0", VA = "0x581FFB0")]
	public GameStatHandler(GameStatContainer gameStat)
	{
	}

	[Token(Token = "0x600154C")]
	[Address(RVA = "0x58204D0", Offset = "0x581F4D0", VA = "0x58204D0")]
	public int GetExpToNext()
	{
		return default(int);
	}

	[Token(Token = "0x600154D")]
	[Address(RVA = "0x5820620", Offset = "0x581F620", VA = "0x5820620")]
	public void AddExp(int exp)
	{
	}

	[Token(Token = "0x600154E")]
	[Address(RVA = "0x5821B00", Offset = "0x5820B00", VA = "0x5821B00")]
	private void CheckLevelUp()
	{
	}

	[Token(Token = "0x600154F")]
	[Address(RVA = "0x5821C30", Offset = "0x5820C30", VA = "0x5821C30", Slot = "4")]
	public override void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x6001550")]
	[Address(RVA = "0x5821D70", Offset = "0x5820D70", VA = "0x5821D70", Slot = "5")]
	public override void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x6001551")]
	[Address(RVA = "0x5821EE0", Offset = "0x5820EE0", VA = "0x5821EE0", Slot = "6")]
	public override void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x6001552")]
	[Address(RVA = "0x5821F10", Offset = "0x5820F10", VA = "0x5821F10", Slot = "7")]
	public override void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x6001553")]
	[Address(RVA = "0x5821F90", Offset = "0x5820F90", VA = "0x5821F90", Slot = "8")]
	public override void RegisterInteraction(GameObject interact, InteractionType type)
	{
	}
}
