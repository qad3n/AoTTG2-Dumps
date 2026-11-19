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

[Token(Token = "0x2000368")]
internal class GameProgressManager : MonoBehaviour
{
	[Token(Token = "0x2000369")]
	[CompilerGenerated]
	private sealed class _003CIncrementPlayTime_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001101")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001102")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000253")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001540")]
			[Address(RVA = "0x5821880", Offset = "0x5820880", VA = "0x5821880", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000254")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001542")]
			[Address(RVA = "0x58218D0", Offset = "0x58208D0", VA = "0x58218D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600153D")]
		[Address(RVA = "0x58216A0", Offset = "0x58206A0", VA = "0x58216A0")]
		[DebuggerHidden]
		public _003CIncrementPlayTime_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600153E")]
		[Address(RVA = "0x5821750", Offset = "0x5820750", VA = "0x5821750", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600153F")]
		[Address(RVA = "0x5821760", Offset = "0x5820760", VA = "0x5821760", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001541")]
		[Address(RVA = "0x5821890", Offset = "0x5820890", VA = "0x5821890", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40010FB")]
	[FieldOffset(Offset = "0x0")]
	private static GameProgressManager _instance;

	[Token(Token = "0x40010FC")]
	[FieldOffset(Offset = "0x8")]
	public static GameProgressContainer GameProgress;

	[Token(Token = "0x40010FD")]
	[FieldOffset(Offset = "0x10")]
	private static GameStatHandler _gameStatHandler;

	[Token(Token = "0x40010FE")]
	[FieldOffset(Offset = "0x18")]
	private static AchievementHandler _achievementHandler;

	[Token(Token = "0x40010FF")]
	[FieldOffset(Offset = "0x20")]
	private static QuestHandler _questHandler;

	[Token(Token = "0x4001100")]
	[FieldOffset(Offset = "0x28")]
	private static List<BaseGameProgressHandler> _handlers;

	[Token(Token = "0x600152D")]
	[Address(RVA = "0x581FB30", Offset = "0x581EB30", VA = "0x581FB30")]
	public static void Init()
	{
	}

	[Token(Token = "0x600152E")]
	[Address(RVA = "0x5820150", Offset = "0x581F150", VA = "0x5820150")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x600152F")]
	[Address(RVA = "0x58202B0", Offset = "0x581F2B0", VA = "0x58202B0")]
	public static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6001530")]
	[Address(RVA = "0x5820220", Offset = "0x581F220", VA = "0x5820220")]
	private static void Save()
	{
	}

	[Token(Token = "0x6001531")]
	[Address(RVA = "0x58203F0", Offset = "0x581F3F0", VA = "0x58203F0")]
	public static int GetExpToNext()
	{
		return default(int);
	}

	[Token(Token = "0x6001532")]
	[Address(RVA = "0x5820540", Offset = "0x581F540", VA = "0x5820540")]
	public static void AddExp(int exp)
	{
	}

	[Token(Token = "0x6001533")]
	[Address(RVA = "0x5820690", Offset = "0x581F690", VA = "0x5820690")]
	public static void ClearGameStat(GameStatRecord record)
	{
	}

	[Token(Token = "0x6001534")]
	[Address(RVA = "0x5820A40", Offset = "0x581FA40", VA = "0x5820A40")]
	public static void ClearAllGameStats()
	{
	}

	[Token(Token = "0x6001535")]
	[Address(RVA = "0x5820EC0", Offset = "0x581FEC0", VA = "0x5820EC0")]
	public static void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x6001536")]
	[Address(RVA = "0x5821050", Offset = "0x5820050", VA = "0x5821050")]
	public static void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x6001537")]
	[Address(RVA = "0x58211E0", Offset = "0x58201E0", VA = "0x58211E0")]
	public static void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x6001538")]
	[Address(RVA = "0x5821380", Offset = "0x5820380", VA = "0x5821380")]
	public static void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x6001539")]
	[Address(RVA = "0x5821510", Offset = "0x5820510", VA = "0x5821510")]
	public static void RegisterInteraction(GameObject interact, InteractionType interactionType)
	{
	}

	[Token(Token = "0x600153A")]
	[Address(RVA = "0x581FF60", Offset = "0x581EF60", VA = "0x581FF60")]
	[IteratorStateMachine(typeof(_003CIncrementPlayTime_003Ed__19))]
	private IEnumerator IncrementPlayTime()
	{
		return null;
	}

	[Token(Token = "0x600153B")]
	[Address(RVA = "0x58216C0", Offset = "0x58206C0", VA = "0x58216C0")]
	public GameProgressManager()
	{
	}
}
