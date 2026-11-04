// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000243")]
public static class ThreadPool
{
	[Token(Token = "0x170001D2")]
	internal static bool IsThreadPoolThread
	{
		[Token(Token = "0x6001378")]
		[Address(RVA = "0x1BC2180", Offset = "0x1BC0780", VA = "0x181BC2180")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001366")]
	[Address(RVA = "0x1BC1D30", Offset = "0x1BC0330", VA = "0x181BC1D30")]
	private static RegisteredWaitHandle RegisterWaitForSingleObject(WaitHandle waitObject, WaitOrTimerCallback callBack, object state, uint millisecondsTimeOutInterval, bool executeOnlyOnce, ref System.Threading.StackCrawlMark stackMark, bool compressStack)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001367")]
	[Address(RVA = "0x1BC1C80", Offset = "0x1BC0280", VA = "0x181BC1C80")]
	public static RegisteredWaitHandle RegisterWaitForSingleObject(WaitHandle waitObject, WaitOrTimerCallback callBack, object state, int millisecondsTimeOutInterval, bool executeOnlyOnce)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001368")]
	[Address(RVA = "0x1BC1B00", Offset = "0x1BC0100", VA = "0x181BC1B00")]
	public static RegisteredWaitHandle RegisterWaitForSingleObject(WaitHandle waitObject, WaitOrTimerCallback callBack, object state, TimeSpan timeout, bool executeOnlyOnce)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001369")]
	[Address(RVA = "0x1BC1AD0", Offset = "0x1BC00D0", VA = "0x181BC1AD0")]
	public static bool QueueUserWorkItem(WaitCallback callBack, object state)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600136A")]
	[Address(RVA = "0x1BC1AA0", Offset = "0x1BC00A0", VA = "0x181BC1AA0")]
	public static bool QueueUserWorkItem(WaitCallback callBack)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600136B")]
	[Address(RVA = "0x1BC2150", Offset = "0x1BC0750", VA = "0x181BC2150")]
	public static bool UnsafeQueueUserWorkItem(WaitCallback callBack, object state)
	{
		return default(bool);
	}

	[Token(Token = "0x600136C")]
	public static bool QueueUserWorkItem<TState>(Action<TState> callBack, TState state, bool preferLocal)
	{
		return default(bool);
	}

	[Token(Token = "0x600136D")]
	[Address(RVA = "0x1BC1970", Offset = "0x1BBFF70", VA = "0x181BC1970")]
	private static bool QueueUserWorkItemHelper(WaitCallback callBack, object state, ref System.Threading.StackCrawlMark stackMark, bool compressStack, bool forceGlobal = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600136E")]
	[Address(RVA = "0x1BC20D0", Offset = "0x1BC06D0", VA = "0x181BC20D0")]
	internal static void UnsafeQueueCustomWorkItem(System.Threading.IThreadPoolWorkItem workItem, bool forceGlobal)
	{
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x1BC1FE0", Offset = "0x1BC05E0", VA = "0x181BC1FE0")]
	internal static bool TryPopCustomWorkItem(System.Threading.IThreadPoolWorkItem workItem)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001370")]
	[Address(RVA = "0x1BC1FD0", Offset = "0x1BC05D0", VA = "0x181BC1FD0")]
	internal static extern bool RequestWorkerThread();

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x1BC18A0", Offset = "0x1BBFEA0", VA = "0x181BC18A0")]
	private static void EnsureVMInitialized()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001372")]
	[Address(RVA = "0x1BC1950", Offset = "0x1BBFF50", VA = "0x181BC1950")]
	internal static extern bool NotifyWorkItemComplete();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001373")]
	[Address(RVA = "0x1A6DB30", Offset = "0x1A6C130", VA = "0x181A6DB30")]
	internal static extern void ReportThreadStatus(bool isWorking);

	[Token(Token = "0x6001374")]
	[Address(RVA = "0x1BC0330", Offset = "0x1BBE930", VA = "0x181BC0330")]
	internal static void NotifyWorkItemProgress()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001375")]
	[Address(RVA = "0x1BC1960", Offset = "0x1BBFF60", VA = "0x181BC1960")]
	internal static extern void NotifyWorkItemProgressNative();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001376")]
	[Address(RVA = "0x1A703C0", Offset = "0x1A6E9C0", VA = "0x181A703C0")]
	internal static extern void NotifyWorkItemQueued();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001377")]
	[Address(RVA = "0x1BC1940", Offset = "0x1BBFF40", VA = "0x181BC1940")]
	private static extern void InitializeVMTp(ref bool enableWorkerTracking);
}
