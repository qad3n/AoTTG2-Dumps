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

[Token(Token = "0x20001F0")]
internal abstract class BaseGameProgressHandler
{
	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x443A900", Offset = "0x443A900", VA = "0x443A900", Slot = "4")]
	public virtual void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x443A910", Offset = "0x443A910", VA = "0x443A910", Slot = "5")]
	public virtual void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x443A920", Offset = "0x443A920", VA = "0x443A920", Slot = "6")]
	public virtual void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x443A930", Offset = "0x443A930", VA = "0x443A930", Slot = "7")]
	public virtual void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x443A940", Offset = "0x443A940", VA = "0x443A940", Slot = "8")]
	public virtual void RegisterInteraction(GameObject interact, InteractionType interactionType)
	{
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x443A950", Offset = "0x443A950", VA = "0x443A950")]
	protected BaseGameProgressHandler()
	{
	}
}
