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
		[Address(RVA = "0x46D2B90", Offset = "0x46D2B90", VA = "0x46D2B90")]
		public Callback(SendOrPostCallback callback, object state)
		{
		}

		[Token(Token = "0x60007EE")]
		[Address(RVA = "0x46D3080", Offset = "0x46D3080", VA = "0x46D3080")]
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
	[Address(RVA = "0x46D2690", Offset = "0x46D2690", VA = "0x46D2690", Slot = "4")]
	public override void Send(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x46D26B0", Offset = "0x46D26B0", VA = "0x46D26B0", Slot = "5")]
	public override void Post(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x46D2BC0", Offset = "0x46D2BC0", VA = "0x46D2BC0", Slot = "6")]
	public override void OperationStarted()
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x46D2C10", Offset = "0x46D2C10", VA = "0x46D2C10", Slot = "7")]
	public override void OperationCompleted()
	{
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x46D2C60", Offset = "0x46D2C60", VA = "0x46D2C60", Slot = "9")]
	public override SynchronizationContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x46D2C70", Offset = "0x46D2C70", VA = "0x46D2C70")]
	internal static void Run()
	{
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x46D3140", Offset = "0x46D3140", VA = "0x46D3140")]
	public UniTaskSynchronizationContext()
	{
	}
}
