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
		[Address(RVA = "0x46B18A0", Offset = "0x46B18A0", VA = "0x46B18A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	public static int MainThreadId
	{
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x46B1910", Offset = "0x46B1910", VA = "0x46B1910")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000027")]
	internal static string ApplicationDataPath
	{
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x46B1980", Offset = "0x46B1980", VA = "0x46B1980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000028")]
	public static bool IsMainThread
	{
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x46AFA60", Offset = "0x46AFA60", VA = "0x46AFA60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	internal static bool IsEditorApplicationQuitting
	{
		[Token(Token = "0x600013D")]
		[Address(RVA = "0x46B19F0", Offset = "0x46B19F0", VA = "0x46B19F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x46B1A60", Offset = "0x46B1A60", VA = "0x46B1A60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x46B1AB0", Offset = "0x46B1AB0", VA = "0x46B1AB0")]
	private static PlayerLoopSystem[] InsertRunner(PlayerLoopSystem loopSystem, bool injectOnFirst, Type loopRunnerYieldType, ContinuationQueue cq, Type loopRunnerType, PlayerLoopRunner runner)
	{
		return null;
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x46B1F20", Offset = "0x46B1F20", VA = "0x46B1F20")]
	private static PlayerLoopSystem[] RemoveRunner(PlayerLoopSystem loopSystem, Type loopRunnerYieldType, Type loopRunnerType)
	{
		return null;
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x46B2040", Offset = "0x46B2040", VA = "0x46B2040")]
	private static PlayerLoopSystem[] InsertUniTaskSynchronizationContext(PlayerLoopSystem loopSystem)
	{
		return null;
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x46B24E0", Offset = "0x46B24E0", VA = "0x46B24E0")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterAssembliesLoaded)]
	private static void Init()
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x46B30D0", Offset = "0x46B30D0", VA = "0x46B30D0")]
	private static int FindLoopSystemIndex(PlayerLoopSystem[] playerLoopList, Type systemType)
	{
		return default(int);
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x46B31F0", Offset = "0x46B31F0", VA = "0x46B31F0")]
	private static void InsertLoop(PlayerLoopSystem[] copyList, InjectPlayerLoopTimings injectTimings, Type loopType, InjectPlayerLoopTimings targetTimings, int index, bool injectOnFirst, Type loopRunnerYieldType, Type loopRunnerType, PlayerLoopTiming playerLoopTiming)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x46B26F0", Offset = "0x46B26F0", VA = "0x46B26F0")]
	public static void Initialize(ref PlayerLoopSystem playerLoop, InjectPlayerLoopTimings injectTimings = InjectPlayerLoopTimings.All)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x46AF6E0", Offset = "0x46AF6E0", VA = "0x46AF6E0")]
	public static void AddAction(PlayerLoopTiming timing, IPlayerLoopItem action)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x46B34C0", Offset = "0x46B34C0", VA = "0x46B34C0")]
	private static void ThrowInvalidLoopTiming(PlayerLoopTiming playerLoopTiming)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x46B3550", Offset = "0x46B3550", VA = "0x46B3550")]
	public static void AddContinuation(PlayerLoopTiming timing, Action continuation)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x46B3600", Offset = "0x46B3600", VA = "0x46B3600")]
	public static void DumpCurrentPlayerLoop()
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x46B3910", Offset = "0x46B3910", VA = "0x46B3910")]
	public static bool IsInjectedUniTaskPlayerLoop()
	{
		return default(bool);
	}
}
