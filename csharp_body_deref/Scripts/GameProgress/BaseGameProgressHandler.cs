// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.BaseGameProgressHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/BaseGameProgressHandler.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/BaseGameProgressHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace GameProgress;

[Token(Token = "0x2000301")]
internal abstract class BaseGameProgressHandler
{
	[Token(Token = "0x6001291")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public virtual void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public virtual void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public virtual void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x6001294")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	public virtual void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x6001295")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public virtual void RegisterInteraction(GameObject interact, InteractionType interactionType)
	{
	}

	[Token(Token = "0x6001296")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected BaseGameProgressHandler()
	{
	}
}
