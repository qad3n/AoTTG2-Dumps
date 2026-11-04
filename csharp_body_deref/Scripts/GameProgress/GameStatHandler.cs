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

[Token(Token = "0x200030E")]
internal class GameStatHandler : BaseGameProgressHandler
{
	[Token(Token = "0x4000F8C")]
	private const int ExpPerKill = 10;

	[Token(Token = "0x4000F8D")]
	private const int ExpPerLevelBase = 500;

	[Token(Token = "0x4000F8E")]
	private const int MaxExpPerLevel = 2000;

	[Token(Token = "0x4000F8F")]
	private const float ExpPerLevelMultiplier = 1.2f;

	[Token(Token = "0x4000F90")]
	private const int MaxLevel = 50;

	[Token(Token = "0x4000F91")]
	[FieldOffset(Offset = "0x10")]
	private List<int> _expPerLevel;

	[Token(Token = "0x4000F92")]
	[FieldOffset(Offset = "0x18")]
	private GameStatContainer _gameStat;

	[Token(Token = "0x60012D9")]
	[Address(RVA = "0x1E36A50", Offset = "0x1E35050", VA = "0x181E36A50")]
	public GameStatHandler(GameStatContainer gameStat)
	{
	}

	[Token(Token = "0x60012DA")]
	[Address(RVA = "0x1E366D0", Offset = "0x1E34CD0", VA = "0x181E366D0")]
	public int GetExpToNext()
	{
		return default(int);
	}

	[Token(Token = "0x60012DB")]
	[Address(RVA = "0x1E36400", Offset = "0x1E34A00", VA = "0x181E36400")]
	public void AddExp(int exp)
	{
	}

	[Token(Token = "0x60012DC")]
	[Address(RVA = "0x1E36590", Offset = "0x1E34B90", VA = "0x181E36590")]
	private void CheckLevelUp()
	{
	}

	[Token(Token = "0x60012DD")]
	[Address(RVA = "0x1E36960", Offset = "0x1E34F60", VA = "0x181E36960", Slot = "4")]
	public override void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x1E36790", Offset = "0x1E34D90", VA = "0x181E36790", Slot = "5")]
	public override void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x1E36750", Offset = "0x1E34D50", VA = "0x181E36750", Slot = "6")]
	public override void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x1E368E0", Offset = "0x1E34EE0", VA = "0x181E368E0", Slot = "7")]
	public override void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public override void RegisterInteraction(GameObject interact, InteractionType type)
	{
	}
}
