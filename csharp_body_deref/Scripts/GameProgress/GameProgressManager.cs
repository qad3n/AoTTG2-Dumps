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

[Token(Token = "0x20001C3")]
internal class GameProgressManager : MonoBehaviour
{
	[Token(Token = "0x20001C4")]
	[CompilerGenerated]
	private sealed class _003CIncrementPlayTime_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40009C1")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40009C2")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000122")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000A41")]
			[Address(RVA = "0x410C870", Offset = "0x410C870", VA = "0x410C870", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000123")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000A43")]
			[Address(RVA = "0x410C8C0", Offset = "0x410C8C0", VA = "0x410C8C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A3E")]
		[Address(RVA = "0x410C690", Offset = "0x410C690", VA = "0x410C690")]
		[DebuggerHidden]
		public _003CIncrementPlayTime_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000A3F")]
		[Address(RVA = "0x410C740", Offset = "0x410C740", VA = "0x410C740", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000A40")]
		[Address(RVA = "0x410C750", Offset = "0x410C750", VA = "0x410C750", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A42")]
		[Address(RVA = "0x410C880", Offset = "0x410C880", VA = "0x410C880", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40009BB")]
	[FieldOffset(Offset = "0x0")]
	private static GameProgressManager _instance;

	[Token(Token = "0x40009BC")]
	[FieldOffset(Offset = "0x8")]
	public static GameProgressContainer GameProgress;

	[Token(Token = "0x40009BD")]
	[FieldOffset(Offset = "0x10")]
	private static GameStatHandler _gameStatHandler;

	[Token(Token = "0x40009BE")]
	[FieldOffset(Offset = "0x18")]
	private static AchievementHandler _achievementHandler;

	[Token(Token = "0x40009BF")]
	[FieldOffset(Offset = "0x20")]
	private static QuestHandler _questHandler;

	[Token(Token = "0x40009C0")]
	[FieldOffset(Offset = "0x28")]
	private static List<BaseGameProgressHandler> _handlers;

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x410B3D0", Offset = "0x410B3D0", VA = "0x410B3D0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x410B9F0", Offset = "0x410B9F0", VA = "0x410B9F0")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x410BB50", Offset = "0x410BB50", VA = "0x410BB50")]
	public static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000A33")]
	[Address(RVA = "0x410BAC0", Offset = "0x410BAC0", VA = "0x410BAC0")]
	private static void Save()
	{
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x40FCD60", Offset = "0x40FCD60", VA = "0x40FCD60")]
	public static int GetExpToNext()
	{
		return default(int);
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x410BD00", Offset = "0x410BD00", VA = "0x410BD00")]
	public static void AddExp(int exp)
	{
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x410BE60", Offset = "0x410BE60", VA = "0x410BE60")]
	public static void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x410C000", Offset = "0x410C000", VA = "0x410C000")]
	public static void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x410C1A0", Offset = "0x410C1A0", VA = "0x410C1A0")]
	public static void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x410C350", Offset = "0x410C350", VA = "0x410C350")]
	public static void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x410C4F0", Offset = "0x410C4F0", VA = "0x410C4F0")]
	public static void RegisterInteraction(GameObject interact, InteractionType interactionType)
	{
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x410B800", Offset = "0x410B800", VA = "0x410B800")]
	[IteratorStateMachine(typeof(_003CIncrementPlayTime_003Ed__17))]
	private IEnumerator IncrementPlayTime()
	{
		return null;
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x410C6B0", Offset = "0x410C6B0", VA = "0x410C6B0")]
	public GameProgressManager()
	{
	}
}
