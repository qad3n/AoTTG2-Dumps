// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.GameProgressManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameProgress/GameProgressManager.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ApplicationManagers;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace GameProgress;

[Token(Token = "0x2000307")]
internal class GameProgressManager : MonoBehaviour
{
	[Token(Token = "0x2000308")]
	[CompilerGenerated]
	private sealed class _003CIncrementPlayTime_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000F62")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000F63")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x1700020C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60012CE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700020D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60012D0")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60012CB")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CIncrementPlayTime_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60012CC")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60012CD")]
		[Address(RVA = "0x1E3D160", Offset = "0x1E3B760", VA = "0x181E3D160", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60012CF")]
		[Address(RVA = "0x1E3D280", Offset = "0x1E3B880", VA = "0x181E3D280", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000F5C")]
	[FieldOffset(Offset = "0x0")]
	private static GameProgressManager _instance;

	[Token(Token = "0x4000F5D")]
	[FieldOffset(Offset = "0x8")]
	public static GameProgressContainer GameProgress;

	[Token(Token = "0x4000F5E")]
	[FieldOffset(Offset = "0x10")]
	private static GameStatHandler _gameStatHandler;

	[Token(Token = "0x4000F5F")]
	[FieldOffset(Offset = "0x18")]
	private static AchievementHandler _achievementHandler;

	[Token(Token = "0x4000F60")]
	[FieldOffset(Offset = "0x20")]
	private static QuestHandler _questHandler;

	[Token(Token = "0x4000F61")]
	[FieldOffset(Offset = "0x28")]
	private static List<BaseGameProgressHandler> _handlers;

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x1E34BA0", Offset = "0x1E331A0", VA = "0x181E34BA0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x1E35110", Offset = "0x1E33710", VA = "0x181E35110")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x1E35150", Offset = "0x1E33750", VA = "0x181E35150")]
	public static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x1E35950", Offset = "0x1E33F50", VA = "0x181E35950")]
	private static void Save()
	{
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x1E34A90", Offset = "0x1E33090", VA = "0x181E34A90")]
	public static int GetExpToNext()
	{
		return default(int);
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x1E348E0", Offset = "0x1E32EE0", VA = "0x181E348E0")]
	public static void AddExp(int exp)
	{
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x1E349F0", Offset = "0x1E32FF0", VA = "0x181E349F0")]
	public static void ClearGameStat(GameStatRecord record)
	{
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x1E34950", Offset = "0x1E32F50", VA = "0x181E34950")]
	public static void ClearAllGameStats()
	{
	}

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x1E357D0", Offset = "0x1E33DD0", VA = "0x181E357D0")]
	public static void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x1E35380", Offset = "0x1E33980", VA = "0x181E35380")]
	public static void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x1E35200", Offset = "0x1E33800", VA = "0x181E35200")]
	public static void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x1E35670", Offset = "0x1E33C70", VA = "0x181E35670")]
	public static void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x1E35500", Offset = "0x1E33B00", VA = "0x181E35500")]
	public static void RegisterInteraction(GameObject interact, InteractionType interactionType)
	{
	}

	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x1E34B50", Offset = "0x1E33150", VA = "0x181E34B50")]
	[IteratorStateMachine(typeof(_003CIncrementPlayTime_003Ed__19))]
	private IEnumerator IncrementPlayTime()
	{
		return null;
	}

	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GameProgressManager()
	{
	}
}
