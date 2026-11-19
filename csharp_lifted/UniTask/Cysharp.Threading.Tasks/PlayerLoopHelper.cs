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
		[Address(RVA = "0x62C6580", Offset = "0x62C5580", VA = "0x62C6580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	public static int MainThreadId
	{
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x62C65F0", Offset = "0x62C55F0", VA = "0x62C65F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000027")]
	internal static string ApplicationDataPath
	{
		[Token(Token = "0x6000139")]
		[Address(RVA = "0x62C6660", Offset = "0x62C5660", VA = "0x62C6660")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000028")]
	public static bool IsMainThread
	{
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x62C4890", Offset = "0x62C3890", VA = "0x62C4890")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	internal static bool IsEditorApplicationQuitting
	{
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x62C66D0", Offset = "0x62C56D0", VA = "0x62C66D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x62C6740", Offset = "0x62C5740", VA = "0x62C6740")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x62C6790", Offset = "0x62C5790", VA = "0x62C6790")]
	private static PlayerLoopSystem[] InsertRunner(PlayerLoopSystem loopSystem, bool injectOnFirst, Type loopRunnerYieldType, ContinuationQueue cq, Type loopRunnerType, PlayerLoopRunner runner)
	{
		return null;
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x62C6AC0", Offset = "0x62C5AC0", VA = "0x62C6AC0")]
	private static PlayerLoopSystem[] RemoveRunner(PlayerLoopSystem loopSystem, Type loopRunnerYieldType, Type loopRunnerType)
	{
		return null;
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x62C6BE0", Offset = "0x62C5BE0", VA = "0x62C6BE0")]
	private static PlayerLoopSystem[] InsertUniTaskSynchronizationContext(PlayerLoopSystem loopSystem)
	{
		return null;
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x62C7040", Offset = "0x62C6040", VA = "0x62C7040")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterAssembliesLoaded)]
	private static void Init()
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x62C7C00", Offset = "0x62C6C00", VA = "0x62C7C00")]
	private static int FindLoopSystemIndex(PlayerLoopSystem[] playerLoopList, Type systemType)
	{
		return default(int);
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x62C7D20", Offset = "0x62C6D20", VA = "0x62C7D20")]
	private static void InsertLoop(PlayerLoopSystem[] copyList, InjectPlayerLoopTimings injectTimings, Type loopType, InjectPlayerLoopTimings targetTimings, int index, bool injectOnFirst, Type loopRunnerYieldType, Type loopRunnerType, PlayerLoopTiming playerLoopTiming)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x62C7240", Offset = "0x62C6240", VA = "0x62C7240")]
	public static void Initialize(ref PlayerLoopSystem playerLoop, InjectPlayerLoopTimings injectTimings = InjectPlayerLoopTimings.All)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x62C4480", Offset = "0x62C3480", VA = "0x62C4480")]
	public static void AddAction(PlayerLoopTiming timing, IPlayerLoopItem action)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x62C7FE0", Offset = "0x62C6FE0", VA = "0x62C7FE0")]
	private static void ThrowInvalidLoopTiming(PlayerLoopTiming playerLoopTiming)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x62C8070", Offset = "0x62C7070", VA = "0x62C8070")]
	public static void AddContinuation(PlayerLoopTiming timing, Action continuation)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x62C81B0", Offset = "0x62C71B0", VA = "0x62C81B0")]
	public static void DumpCurrentPlayerLoop()
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x62C84A0", Offset = "0x62C74A0", VA = "0x62C84A0")]
	public static bool IsInjectedUniTaskPlayerLoop()
	{
		return default(bool);
	}
}
