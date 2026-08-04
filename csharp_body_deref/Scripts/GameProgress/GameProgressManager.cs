// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.GameProgressManager
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20001F6")]
internal class GameProgressManager : MonoBehaviour
{
	[Token(Token = "0x20001F7")]
	[CompilerGenerated]
	private sealed class _003CIncrementPlayTime_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A87")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A88")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000178")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000BBE")]
			[Address(RVA = "0x443EFA0", Offset = "0x443EFA0", VA = "0x443EFA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000179")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BC0")]
			[Address(RVA = "0x443EFF0", Offset = "0x443EFF0", VA = "0x443EFF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BBB")]
		[Address(RVA = "0x443EDC0", Offset = "0x443EDC0", VA = "0x443EDC0")]
		[DebuggerHidden]
		public _003CIncrementPlayTime_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BBC")]
		[Address(RVA = "0x443EE70", Offset = "0x443EE70", VA = "0x443EE70", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x443EE80", Offset = "0x443EE80", VA = "0x443EE80", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x443EFB0", Offset = "0x443EFB0", VA = "0x443EFB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000A81")]
	[FieldOffset(Offset = "0x0")]
	private static GameProgressManager _instance;

	[Token(Token = "0x4000A82")]
	[FieldOffset(Offset = "0x8")]
	public static GameProgressContainer GameProgress;

	[Token(Token = "0x4000A83")]
	[FieldOffset(Offset = "0x10")]
	private static GameStatHandler _gameStatHandler;

	[Token(Token = "0x4000A84")]
	[FieldOffset(Offset = "0x18")]
	private static AchievementHandler _achievementHandler;

	[Token(Token = "0x4000A85")]
	[FieldOffset(Offset = "0x20")]
	private static QuestHandler _questHandler;

	[Token(Token = "0x4000A86")]
	[FieldOffset(Offset = "0x28")]
	private static List<BaseGameProgressHandler> _handlers;

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x443DA20", Offset = "0x443DA20", VA = "0x443DA20")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x443E040", Offset = "0x443E040", VA = "0x443E040")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x443E1A0", Offset = "0x443E1A0", VA = "0x443E1A0")]
	public static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x443E110", Offset = "0x443E110", VA = "0x443E110")]
	private static void Save()
	{
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x443E2E0", Offset = "0x443E2E0", VA = "0x443E2E0")]
	public static int GetExpToNext()
	{
		return default(int);
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x443E430", Offset = "0x443E430", VA = "0x443E430")]
	public static void AddExp(int exp)
	{
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x443E590", Offset = "0x443E590", VA = "0x443E590")]
	public static void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x443E730", Offset = "0x443E730", VA = "0x443E730")]
	public static void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x443E8D0", Offset = "0x443E8D0", VA = "0x443E8D0")]
	public static void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x443EA80", Offset = "0x443EA80", VA = "0x443EA80")]
	public static void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x443EC20", Offset = "0x443EC20", VA = "0x443EC20")]
	public static void RegisterInteraction(GameObject interact, InteractionType interactionType)
	{
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x443DE50", Offset = "0x443DE50", VA = "0x443DE50")]
	[IteratorStateMachine(typeof(_003CIncrementPlayTime_003Ed__17))]
	private IEnumerator IncrementPlayTime()
	{
		return null;
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x443EDE0", Offset = "0x443EDE0", VA = "0x443EDE0")]
	public GameProgressManager()
	{
	}
}
