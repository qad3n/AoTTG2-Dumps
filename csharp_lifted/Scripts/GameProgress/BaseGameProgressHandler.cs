// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.BaseGameProgressHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/BaseGameProgressHandler.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/BaseGameProgressHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace GameProgress;

[Token(Token = "0x2000362")]
internal abstract class BaseGameProgressHandler
{
	[Token(Token = "0x60014FF")]
	[Address(RVA = "0x581C690", Offset = "0x581B690", VA = "0x581C690", Slot = "4")]
	public virtual void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
		// Lifted from source/cpp/GameProgress/BaseGameProgressHandler.c (GameProgress.BaseGameProgressHandler$$RegisterTitanKill): clean
		return;
	}

	[Token(Token = "0x6001500")]
	[Address(RVA = "0x581C6A0", Offset = "0x581B6A0", VA = "0x581C6A0", Slot = "5")]
	public virtual void RegisterHumanKill(Human victim, KillMethod method)
	{
		// Lifted from source/cpp/GameProgress/BaseGameProgressHandler.c (GameProgress.BaseGameProgressHandler$$RegisterHumanKill): clean
		return;
	}

	[Token(Token = "0x6001501")]
	[Address(RVA = "0x581C6B0", Offset = "0x581B6B0", VA = "0x581C6B0", Slot = "6")]
	public virtual void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
		// Lifted from source/cpp/GameProgress/BaseGameProgressHandler.c (GameProgress.BaseGameProgressHandler$$RegisterDamage): clean
		return;
	}

	[Token(Token = "0x6001502")]
	[Address(RVA = "0x581C6C0", Offset = "0x581B6C0", VA = "0x581C6C0", Slot = "7")]
	public virtual void RegisterSpeed(float speed)
	{
		// Lifted from source/cpp/GameProgress/BaseGameProgressHandler.c (GameProgress.BaseGameProgressHandler$$RegisterSpeed): clean
		return;
	}

	[Token(Token = "0x6001503")]
	[Address(RVA = "0x581C6D0", Offset = "0x581B6D0", VA = "0x581C6D0", Slot = "8")]
	public virtual void RegisterInteraction(GameObject interact, InteractionType interactionType)
	{
		// Lifted from source/cpp/GameProgress/BaseGameProgressHandler.c (GameProgress.BaseGameProgressHandler$$RegisterInteraction): clean
		return;
	}

	[Token(Token = "0x6001504")]
	[Address(RVA = "0x581C6E0", Offset = "0x581B6E0", VA = "0x581C6E0")]
	protected BaseGameProgressHandler()
	{
		// Lifted from source/cpp/GameProgress/BaseGameProgressHandler.c (GameProgress.BaseGameProgressHandler$$.ctor): clean
		base();
		return;
	}
}
