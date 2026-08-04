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

[Token(Token = "0x2000062")]
public static class PlayerLoopHelper
{
	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ContinuationQueue ThrowMarkerContinuationQueue;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x8")]
	private static readonly PlayerLoopRunner ThrowMarkerPlayerLoopRunner;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x10")]
	private static int mainThreadId;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x18")]
	private static string applicationDataPath;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x20")]
	private static SynchronizationContext unitySynchronizationContext;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x28")]
	private static ContinuationQueue[] yielders;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x30")]
	private static PlayerLoopRunner[] runners;

	[Token(Token = "0x17000025")]
	public static SynchronizationContext UnitySynchronizationContext
	{
		[Token(Token = "0x6000139")]
		[Address(RVA = "0x49D69A0", Offset = "0x49D69A0", VA = "0x49D69A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	public static int MainThreadId
	{
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x49D6A10", Offset = "0x49D6A10", VA = "0x49D6A10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000027")]
	internal static string ApplicationDataPath
	{
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x49D6A80", Offset = "0x49D6A80", VA = "0x49D6A80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000028")]
	public static bool IsMainThread
	{
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x49D4B60", Offset = "0x49D4B60", VA = "0x49D4B60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	internal static bool IsEditorApplicationQuitting
	{
		[Token(Token = "0x600013D")]
		[Address(RVA = "0x49D6AF0", Offset = "0x49D6AF0", VA = "0x49D6AF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x49D6B60", Offset = "0x49D6B60", VA = "0x49D6B60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x49D6BB0", Offset = "0x49D6BB0", VA = "0x49D6BB0")]
	private static PlayerLoopSystem[] InsertRunner(PlayerLoopSystem loopSystem, bool injectOnFirst, Type loopRunnerYieldType, ContinuationQueue cq, Type loopRunnerType, PlayerLoopRunner runner)
	{
		return null;
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x49D7020", Offset = "0x49D7020", VA = "0x49D7020")]
	private static PlayerLoopSystem[] RemoveRunner(PlayerLoopSystem loopSystem, Type loopRunnerYieldType, Type loopRunnerType)
	{
		return null;
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x49D7140", Offset = "0x49D7140", VA = "0x49D7140")]
	private static PlayerLoopSystem[] InsertUniTaskSynchronizationContext(PlayerLoopSystem loopSystem)
	{
		return null;
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x49D75E0", Offset = "0x49D75E0", VA = "0x49D75E0")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterAssembliesLoaded)]
	private static void Init()
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x49D81D0", Offset = "0x49D81D0", VA = "0x49D81D0")]
	private static int FindLoopSystemIndex(PlayerLoopSystem[] playerLoopList, Type systemType)
	{
		return default(int);
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x49D82F0", Offset = "0x49D82F0", VA = "0x49D82F0")]
	private static void InsertLoop(PlayerLoopSystem[] copyList, InjectPlayerLoopTimings injectTimings, Type loopType, InjectPlayerLoopTimings targetTimings, int index, bool injectOnFirst, Type loopRunnerYieldType, Type loopRunnerType, PlayerLoopTiming playerLoopTiming)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x49D77F0", Offset = "0x49D77F0", VA = "0x49D77F0")]
	public static void Initialize(ref PlayerLoopSystem playerLoop, InjectPlayerLoopTimings injectTimings = InjectPlayerLoopTimings.All)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x49D47E0", Offset = "0x49D47E0", VA = "0x49D47E0")]
	public static void AddAction(PlayerLoopTiming timing, IPlayerLoopItem action)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x49D85C0", Offset = "0x49D85C0", VA = "0x49D85C0")]
	private static void ThrowInvalidLoopTiming(PlayerLoopTiming playerLoopTiming)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x49D8650", Offset = "0x49D8650", VA = "0x49D8650")]
	public static void AddContinuation(PlayerLoopTiming timing, Action continuation)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x49D8700", Offset = "0x49D8700", VA = "0x49D8700")]
	public static void DumpCurrentPlayerLoop()
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x49D8A10", Offset = "0x49D8A10", VA = "0x49D8A10")]
	public static bool IsInjectedUniTaskPlayerLoop()
	{
		return default(bool);
	}
}
