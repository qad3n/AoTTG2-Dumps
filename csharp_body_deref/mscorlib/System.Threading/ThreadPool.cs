using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000212")]
public static class ThreadPool
{
	[Token(Token = "0x170001CE")]
	internal static bool IsThreadPoolThread
	{
		[Token(Token = "0x6001307")]
		[Address(RVA = "0x5054940", Offset = "0x5054940", VA = "0x5054940")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60012F5")]
	[Address(RVA = "0x5054180", Offset = "0x5054180", VA = "0x5054180")]
	private static RegisteredWaitHandle RegisterWaitForSingleObject(WaitHandle waitObject, WaitOrTimerCallback callBack, object state, uint millisecondsTimeOutInterval, bool executeOnlyOnce, ref System.Threading.StackCrawlMark stackMark, bool compressStack)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x5054450", Offset = "0x5054450", VA = "0x5054450")]
	public static RegisteredWaitHandle RegisterWaitForSingleObject(WaitHandle waitObject, WaitOrTimerCallback callBack, object state, int millisecondsTimeOutInterval, bool executeOnlyOnce)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x50544E0", Offset = "0x50544E0", VA = "0x50544E0")]
	public static RegisteredWaitHandle RegisterWaitForSingleObject(WaitHandle waitObject, WaitOrTimerCallback callBack, object state, TimeSpan timeout, bool executeOnlyOnce)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x5054410", Offset = "0x5054410", VA = "0x5054410")]
	public static bool QueueUserWorkItem(WaitCallback callBack, object state)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x50546F0", Offset = "0x50546F0", VA = "0x50546F0")]
	public static bool QueueUserWorkItem(WaitCallback callBack)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x5054430", Offset = "0x5054430", VA = "0x5054430")]
	public static bool UnsafeQueueUserWorkItem(WaitCallback callBack, object state)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FB")]
	public static bool QueueUserWorkItem<TState>(Action<TState> callBack, TState state, bool preferLocal)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x50545E0", Offset = "0x50545E0", VA = "0x50545E0")]
	private static bool QueueUserWorkItemHelper(WaitCallback callBack, object state, ref System.Threading.StackCrawlMark stackMark, bool compressStack, bool forceGlobal = true)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x50547C0", Offset = "0x50547C0", VA = "0x50547C0")]
	internal static void UnsafeQueueCustomWorkItem(System.Threading.IThreadPoolWorkItem workItem, bool forceGlobal)
	{
	}

	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x5054830", Offset = "0x5054830", VA = "0x5054830")]
	internal static bool TryPopCustomWorkItem(System.Threading.IThreadPoolWorkItem workItem)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x5051AD0", Offset = "0x5051AD0", VA = "0x5051AD0")]
	internal static extern bool RequestWorkerThread();

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x5054720", Offset = "0x5054720", VA = "0x5054720")]
	private static void EnsureVMInitialized()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001301")]
	[Address(RVA = "0x5053750", Offset = "0x5053750", VA = "0x5053750")]
	internal static extern bool NotifyWorkItemComplete();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001302")]
	[Address(RVA = "0x5054910", Offset = "0x5054910", VA = "0x5054910")]
	internal static extern void ReportThreadStatus(bool isWorking);

	[Token(Token = "0x6001303")]
	[Address(RVA = "0x5054920", Offset = "0x5054920", VA = "0x5054920")]
	internal static void NotifyWorkItemProgress()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001304")]
	[Address(RVA = "0x5054930", Offset = "0x5054930", VA = "0x5054930")]
	internal static extern void NotifyWorkItemProgressNative();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001305")]
	[Address(RVA = "0x5052560", Offset = "0x5052560", VA = "0x5052560")]
	internal static extern void NotifyWorkItemQueued();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001306")]
	[Address(RVA = "0x5054900", Offset = "0x5054900", VA = "0x5054900")]
	private static extern void InitializeVMTp(ref bool enableWorkerTracking);
}
