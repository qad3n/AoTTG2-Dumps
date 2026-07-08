using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace GameProgress;

[Token(Token = "0x20001C9")]
internal class GameStatHandler : BaseGameProgressHandler
{
	[Token(Token = "0x40009E3")]
	private const int ExpPerKill = 10;

	[Token(Token = "0x40009E4")]
	private const int ExpPerLevelBase = 500;

	[Token(Token = "0x40009E5")]
	private const int MaxExpPerLevel = 2000;

	[Token(Token = "0x40009E6")]
	private const float ExpPerLevelMultiplier = 1.2f;

	[Token(Token = "0x40009E7")]
	private const int MaxLevel = 50;

	[Token(Token = "0x40009E8")]
	[FieldOffset(Offset = "0x10")]
	private List<int> _expPerLevel;

	[Token(Token = "0x40009E9")]
	[FieldOffset(Offset = "0x18")]
	private GameStatContainer _gameStat;

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x410B850", Offset = "0x410B850", VA = "0x410B850")]
	public GameStatHandler(GameStatContainer gameStat)
	{
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x410BC90", Offset = "0x410BC90", VA = "0x410BC90")]
	public int GetExpToNext()
	{
		return default(int);
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x410BDF0", Offset = "0x410BDF0", VA = "0x410BDF0")]
	public void AddExp(int exp)
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x410CAF0", Offset = "0x410CAF0", VA = "0x410CAF0")]
	private void CheckLevelUp()
	{
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x410CC20", Offset = "0x410CC20", VA = "0x410CC20", Slot = "4")]
	public override void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x410CD80", Offset = "0x410CD80", VA = "0x410CD80", Slot = "5")]
	public override void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x410CF10", Offset = "0x410CF10", VA = "0x410CF10", Slot = "6")]
	public override void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x410CF40", Offset = "0x410CF40", VA = "0x410CF40", Slot = "7")]
	public override void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x410CFC0", Offset = "0x410CFC0", VA = "0x410CFC0", Slot = "8")]
	public override void RegisterInteraction(GameObject interact, InteractionType type)
	{
	}
}
