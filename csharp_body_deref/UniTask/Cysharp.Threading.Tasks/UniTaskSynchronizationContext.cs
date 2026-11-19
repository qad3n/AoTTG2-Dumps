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

[Token(Token = "0x2000152")]
public class UniTaskSynchronizationContext : SynchronizationContext
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000153")]
	private readonly struct Callback
	{
		[Token(Token = "0x400054B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly SendOrPostCallback callback;

		[Token(Token = "0x400054C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly object state;

		[Token(Token = "0x60007EB")]
		[Address(RVA = "0x62E5020", Offset = "0x62E4020", VA = "0x62E5020")]
		public Callback(SendOrPostCallback callback, object state)
		{
		}

		[Token(Token = "0x60007EC")]
		[Address(RVA = "0x62E5480", Offset = "0x62E4480", VA = "0x62E5480")]
		public void Invoke()
		{
		}
	}

	[Token(Token = "0x4000542")]
	private const int MaxArrayLength = 2146435071;

	[Token(Token = "0x4000543")]
	private const int InitialSize = 16;

	[Token(Token = "0x4000544")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static SpinLock gate;

	[Token(Token = "0x4000545")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static bool dequing;

	[Token(Token = "0x4000546")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static int actionListCount;

	[Token(Token = "0x4000547")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Callback[] actionList;

	[Token(Token = "0x4000548")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static int waitingListCount;

	[Token(Token = "0x4000549")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Callback[] waitingList;

	[Token(Token = "0x400054A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static int opCount;

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x62E4BC0", Offset = "0x62E3BC0", VA = "0x62E4BC0", Slot = "4")]
	public override void Send(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x62E4BE0", Offset = "0x62E3BE0", VA = "0x62E4BE0", Slot = "5")]
	public override void Post(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x62E5050", Offset = "0x62E4050", VA = "0x62E5050", Slot = "6")]
	public override void OperationStarted()
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x62E50A0", Offset = "0x62E40A0", VA = "0x62E50A0", Slot = "7")]
	public override void OperationCompleted()
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x62E50F0", Offset = "0x62E40F0", VA = "0x62E50F0", Slot = "9")]
	public override SynchronizationContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x62E5100", Offset = "0x62E4100", VA = "0x62E5100")]
	internal static void Run()
	{
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x62E5540", Offset = "0x62E4540", VA = "0x62E5540")]
	public UniTaskSynchronizationContext()
	{
	}
}
