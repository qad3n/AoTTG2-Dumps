// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.UniTaskSynchronizationContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000154")]
public class UniTaskSynchronizationContext : SynchronizationContext
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000155")]
	private readonly struct Callback
	{
		[Token(Token = "0x4000550")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly SendOrPostCallback callback;

		[Token(Token = "0x4000551")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly object state;

		[Token(Token = "0x60007ED")]
		[Address(RVA = "0x49F7C90", Offset = "0x49F7C90", VA = "0x49F7C90")]
		public Callback(SendOrPostCallback callback, object state)
		{
		}

		[Token(Token = "0x60007EE")]
		[Address(RVA = "0x49F8180", Offset = "0x49F8180", VA = "0x49F8180")]
		public void Invoke()
		{
		}
	}

	[Token(Token = "0x4000547")]
	private const int MaxArrayLength = 2146435071;

	[Token(Token = "0x4000548")]
	private const int InitialSize = 16;

	[Token(Token = "0x4000549")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static SpinLock gate;

	[Token(Token = "0x400054A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static bool dequing;

	[Token(Token = "0x400054B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static int actionListCount;

	[Token(Token = "0x400054C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Callback[] actionList;

	[Token(Token = "0x400054D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static int waitingListCount;

	[Token(Token = "0x400054E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Callback[] waitingList;

	[Token(Token = "0x400054F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static int opCount;

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x49F7790", Offset = "0x49F7790", VA = "0x49F7790", Slot = "4")]
	public override void Send(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x49F77B0", Offset = "0x49F77B0", VA = "0x49F77B0", Slot = "5")]
	public override void Post(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x49F7CC0", Offset = "0x49F7CC0", VA = "0x49F7CC0", Slot = "6")]
	public override void OperationStarted()
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x49F7D10", Offset = "0x49F7D10", VA = "0x49F7D10", Slot = "7")]
	public override void OperationCompleted()
	{
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x49F7D60", Offset = "0x49F7D60", VA = "0x49F7D60", Slot = "9")]
	public override SynchronizationContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x49F7D70", Offset = "0x49F7D70", VA = "0x49F7D70")]
	internal static void Run()
	{
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x49F8240", Offset = "0x49F8240", VA = "0x49F8240")]
	public UniTaskSynchronizationContext()
	{
	}
}
