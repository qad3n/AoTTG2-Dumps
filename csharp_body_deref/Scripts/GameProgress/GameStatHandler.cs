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

[Token(Token = "0x20001FC")]
internal class GameStatHandler : BaseGameProgressHandler
{
	[Token(Token = "0x4000AA9")]
	private const int ExpPerKill = 10;

	[Token(Token = "0x4000AAA")]
	private const int ExpPerLevelBase = 500;

	[Token(Token = "0x4000AAB")]
	private const int MaxExpPerLevel = 2000;

	[Token(Token = "0x4000AAC")]
	private const float ExpPerLevelMultiplier = 1.2f;

	[Token(Token = "0x4000AAD")]
	private const int MaxLevel = 50;

	[Token(Token = "0x4000AAE")]
	[FieldOffset(Offset = "0x10")]
	private List<int> _expPerLevel;

	[Token(Token = "0x4000AAF")]
	[FieldOffset(Offset = "0x18")]
	private GameStatContainer _gameStat;

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x443DEA0", Offset = "0x443DEA0", VA = "0x443DEA0")]
	public GameStatHandler(GameStatContainer gameStat)
	{
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x443E3C0", Offset = "0x443E3C0", VA = "0x443E3C0")]
	public int GetExpToNext()
	{
		return default(int);
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x443E520", Offset = "0x443E520", VA = "0x443E520")]
	public void AddExp(int exp)
	{
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x443F220", Offset = "0x443F220", VA = "0x443F220")]
	private void CheckLevelUp()
	{
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x443F350", Offset = "0x443F350", VA = "0x443F350", Slot = "4")]
	public override void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x443F4B0", Offset = "0x443F4B0", VA = "0x443F4B0", Slot = "5")]
	public override void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x443F640", Offset = "0x443F640", VA = "0x443F640", Slot = "6")]
	public override void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x443F670", Offset = "0x443F670", VA = "0x443F670", Slot = "7")]
	public override void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x443F6F0", Offset = "0x443F6F0", VA = "0x443F6F0", Slot = "8")]
	public override void RegisterInteraction(GameObject interact, InteractionType type)
	{
	}
}
