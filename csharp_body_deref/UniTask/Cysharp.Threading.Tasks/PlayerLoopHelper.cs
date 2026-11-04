// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.PlayerLoopHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Threading;
using Cysharp.Threading.Tasks.Internal;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.LowLevel;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000060")]
public static class PlayerLoopHelper
{
	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ContinuationQueue ThrowMarkerContinuationQueue;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly PlayerLoopRunner ThrowMarkerPlayerLoopRunner;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x10")]
	private static int mainThreadId;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x18")]
	private static string applicationDataPath;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x20")]
	private static SynchronizationContext unitySynchronizationContext;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x28")]
	private static ContinuationQueue[] yielders;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x30")]
	private static PlayerLoopRunner[] runners;

	[Token(Token = "0x17000025")]
	public static SynchronizationContext UnitySynchronizationContext
	{
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x29114E0", Offset = "0x290FAE0", VA = "0x1829114E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	public static int MainThreadId
	{
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x2911490", Offset = "0x290FA90", VA = "0x182911490")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000027")]
	internal static string ApplicationDataPath
	{
		[Token(Token = "0x6000139")]
		[Address(RVA = "0x2911370", Offset = "0x290F970", VA = "0x182911370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000028")]
	public static bool IsMainThread
	{
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x2911410", Offset = "0x290FA10", VA = "0x182911410")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	internal static bool IsEditorApplicationQuitting
	{
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x29113C0", Offset = "0x290F9C0", VA = "0x1829113C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x2911530", Offset = "0x290FB30", VA = "0x182911530")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x29108B0", Offset = "0x290EEB0", VA = "0x1829108B0")]
	private static PlayerLoopSystem[] InsertRunner(PlayerLoopSystem loopSystem, bool injectOnFirst, Type loopRunnerYieldType, ContinuationQueue cq, Type loopRunnerType, PlayerLoopRunner runner)
	{
		return null;
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x2911110", Offset = "0x290F710", VA = "0x182911110")]
	private static PlayerLoopSystem[] RemoveRunner(PlayerLoopSystem loopSystem, Type loopRunnerYieldType, Type loopRunnerType)
	{
		return null;
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x2910BB0", Offset = "0x290F1B0", VA = "0x182910BB0")]
	private static PlayerLoopSystem[] InsertUniTaskSynchronizationContext(PlayerLoopSystem loopSystem)
	{
		return null;
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x290F9D0", Offset = "0x290DFD0", VA = "0x18290F9D0")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterAssembliesLoaded)]
	private static void Init()
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x290F8D0", Offset = "0x290DED0", VA = "0x18290F8D0")]
	private static int FindLoopSystemIndex(PlayerLoopSystem[] playerLoopList, Type systemType)
	{
		return default(int);
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x29105E0", Offset = "0x290EBE0", VA = "0x1829105E0")]
	private static void InsertLoop(PlayerLoopSystem[] copyList, InjectPlayerLoopTimings injectTimings, Type loopType, InjectPlayerLoopTimings targetTimings, int index, bool injectOnFirst, Type loopRunnerYieldType, Type loopRunnerType, PlayerLoopTiming playerLoopTiming)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x290FB80", Offset = "0x290E180", VA = "0x18290FB80")]
	public static void Initialize(ref PlayerLoopSystem playerLoop, InjectPlayerLoopTimings injectTimings = InjectPlayerLoopTimings.All)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x290F4B0", Offset = "0x290DAB0", VA = "0x18290F4B0")]
	public static void AddAction(PlayerLoopTiming timing, IPlayerLoopItem action)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x2911200", Offset = "0x290F800", VA = "0x182911200")]
	private static void ThrowInvalidLoopTiming(PlayerLoopTiming playerLoopTiming)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x290F550", Offset = "0x290DB50", VA = "0x18290F550")]
	public static void AddContinuation(PlayerLoopTiming timing, Action continuation)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x290F5F0", Offset = "0x290DBF0", VA = "0x18290F5F0")]
	public static void DumpCurrentPlayerLoop()
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x2910FF0", Offset = "0x290F5F0", VA = "0x182910FF0")]
	public static bool IsInjectedUniTaskPlayerLoop()
	{
		return default(bool);
	}
}
