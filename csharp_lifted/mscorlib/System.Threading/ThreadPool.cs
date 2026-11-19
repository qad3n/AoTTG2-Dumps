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

[Token(Token = "0x200021B")]
public static class ThreadPool
{
	[Token(Token = "0x170001D1")]
	internal static bool IsThreadPoolThread
	{
		[Token(Token = "0x600134F")]
		[Address(RVA = "0x553CE80", Offset = "0x553BE80", VA = "0x553CE80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x553C6C0", Offset = "0x553B6C0", VA = "0x553C6C0")]
	private static RegisteredWaitHandle RegisterWaitForSingleObject(WaitHandle waitObject, WaitOrTimerCallback callBack, object state, uint millisecondsTimeOutInterval, bool executeOnlyOnce, ref System.Threading.StackCrawlMark stackMark, bool compressStack)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600133E")]
	[Address(RVA = "0x553C990", Offset = "0x553B990", VA = "0x553C990")]
	public static RegisteredWaitHandle RegisterWaitForSingleObject(WaitHandle waitObject, WaitOrTimerCallback callBack, object state, int millisecondsTimeOutInterval, bool executeOnlyOnce)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600133F")]
	[Address(RVA = "0x553CA20", Offset = "0x553BA20", VA = "0x553CA20")]
	public static RegisteredWaitHandle RegisterWaitForSingleObject(WaitHandle waitObject, WaitOrTimerCallback callBack, object state, TimeSpan timeout, bool executeOnlyOnce)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001340")]
	[Address(RVA = "0x553C950", Offset = "0x553B950", VA = "0x553C950")]
	public static bool QueueUserWorkItem(WaitCallback callBack, object state)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001341")]
	[Address(RVA = "0x553CC30", Offset = "0x553BC30", VA = "0x553CC30")]
	public static bool QueueUserWorkItem(WaitCallback callBack)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001342")]
	[Address(RVA = "0x553C970", Offset = "0x553B970", VA = "0x553C970")]
	public static bool UnsafeQueueUserWorkItem(WaitCallback callBack, object state)
	{
		return default(bool);
	}

	[Token(Token = "0x6001343")]
	public static bool QueueUserWorkItem<TState>(Action<TState> callBack, TState state, bool preferLocal)
	{
		return default(bool);
	}

	[Token(Token = "0x6001344")]
	[Address(RVA = "0x553CB20", Offset = "0x553BB20", VA = "0x553CB20")]
	private static bool QueueUserWorkItemHelper(WaitCallback callBack, object state, ref System.Threading.StackCrawlMark stackMark, bool compressStack, bool forceGlobal = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6001345")]
	[Address(RVA = "0x553CD00", Offset = "0x553BD00", VA = "0x553CD00")]
	internal static void UnsafeQueueCustomWorkItem(System.Threading.IThreadPoolWorkItem workItem, bool forceGlobal)
	{
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x553CD70", Offset = "0x553BD70", VA = "0x553CD70")]
	internal static bool TryPopCustomWorkItem(System.Threading.IThreadPoolWorkItem workItem)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001347")]
	[Address(RVA = "0x553A410", Offset = "0x5539410", VA = "0x553A410")]
	internal static extern bool RequestWorkerThread();

	[Token(Token = "0x6001348")]
	[Address(RVA = "0x553CC60", Offset = "0x553BC60", VA = "0x553CC60")]
	private static void EnsureVMInitialized()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001349")]
	[Address(RVA = "0x553BD30", Offset = "0x553AD30", VA = "0x553BD30")]
	internal static extern bool NotifyWorkItemComplete();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600134A")]
	[Address(RVA = "0x553CE50", Offset = "0x553BE50", VA = "0x553CE50")]
	internal static extern void ReportThreadStatus(bool isWorking);

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x553CE60", Offset = "0x553BE60", VA = "0x553CE60")]
	internal static void NotifyWorkItemProgress()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600134C")]
	[Address(RVA = "0x553CE70", Offset = "0x553BE70", VA = "0x553CE70")]
	internal static extern void NotifyWorkItemProgressNative();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600134D")]
	[Address(RVA = "0x553AD10", Offset = "0x5539D10", VA = "0x553AD10")]
	internal static extern void NotifyWorkItemQueued();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600134E")]
	[Address(RVA = "0x553CE40", Offset = "0x553BE40", VA = "0x553CE40")]
	private static extern void InitializeVMTp(ref bool enableWorkerTracking);
}
