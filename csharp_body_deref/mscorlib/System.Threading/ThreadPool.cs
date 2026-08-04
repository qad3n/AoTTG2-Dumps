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

[Token(Token = "0x2000212")]
public static class ThreadPool
{
	[Token(Token = "0x170001CE")]
	internal static bool IsThreadPoolThread
	{
		[Token(Token = "0x6001307")]
		[Address(RVA = "0x3D3A460", Offset = "0x3D3A460", VA = "0x3D3A460")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60012F5")]
	[Address(RVA = "0x3D39CA0", Offset = "0x3D39CA0", VA = "0x3D39CA0")]
	private static RegisteredWaitHandle RegisterWaitForSingleObject(WaitHandle waitObject, WaitOrTimerCallback callBack, object state, uint millisecondsTimeOutInterval, bool executeOnlyOnce, ref System.Threading.StackCrawlMark stackMark, bool compressStack)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x3D39F70", Offset = "0x3D39F70", VA = "0x3D39F70")]
	public static RegisteredWaitHandle RegisterWaitForSingleObject(WaitHandle waitObject, WaitOrTimerCallback callBack, object state, int millisecondsTimeOutInterval, bool executeOnlyOnce)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x3D3A000", Offset = "0x3D3A000", VA = "0x3D3A000")]
	public static RegisteredWaitHandle RegisterWaitForSingleObject(WaitHandle waitObject, WaitOrTimerCallback callBack, object state, TimeSpan timeout, bool executeOnlyOnce)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x3D39F30", Offset = "0x3D39F30", VA = "0x3D39F30")]
	public static bool QueueUserWorkItem(WaitCallback callBack, object state)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x3D3A210", Offset = "0x3D3A210", VA = "0x3D3A210")]
	public static bool QueueUserWorkItem(WaitCallback callBack)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x3D39F50", Offset = "0x3D39F50", VA = "0x3D39F50")]
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
	[Address(RVA = "0x3D3A100", Offset = "0x3D3A100", VA = "0x3D3A100")]
	private static bool QueueUserWorkItemHelper(WaitCallback callBack, object state, ref System.Threading.StackCrawlMark stackMark, bool compressStack, bool forceGlobal = true)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x3D3A2E0", Offset = "0x3D3A2E0", VA = "0x3D3A2E0")]
	internal static void UnsafeQueueCustomWorkItem(System.Threading.IThreadPoolWorkItem workItem, bool forceGlobal)
	{
	}

	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x3D3A350", Offset = "0x3D3A350", VA = "0x3D3A350")]
	internal static bool TryPopCustomWorkItem(System.Threading.IThreadPoolWorkItem workItem)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x3D375F0", Offset = "0x3D375F0", VA = "0x3D375F0")]
	internal static extern bool RequestWorkerThread();

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x3D3A240", Offset = "0x3D3A240", VA = "0x3D3A240")]
	private static void EnsureVMInitialized()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001301")]
	[Address(RVA = "0x3D39270", Offset = "0x3D39270", VA = "0x3D39270")]
	internal static extern bool NotifyWorkItemComplete();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001302")]
	[Address(RVA = "0x3D3A430", Offset = "0x3D3A430", VA = "0x3D3A430")]
	internal static extern void ReportThreadStatus(bool isWorking);

	[Token(Token = "0x6001303")]
	[Address(RVA = "0x3D3A440", Offset = "0x3D3A440", VA = "0x3D3A440")]
	internal static void NotifyWorkItemProgress()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001304")]
	[Address(RVA = "0x3D3A450", Offset = "0x3D3A450", VA = "0x3D3A450")]
	internal static extern void NotifyWorkItemProgressNative();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001305")]
	[Address(RVA = "0x3D38080", Offset = "0x3D38080", VA = "0x3D38080")]
	internal static extern void NotifyWorkItemQueued();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001306")]
	[Address(RVA = "0x3D3A420", Offset = "0x3D3A420", VA = "0x3D3A420")]
	private static extern void InitializeVMTp(ref bool enableWorkerTracking);
}
