using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001DB")]
[DebuggerDisplay("Set = {IsSet}")]
public class ManualResetEventSlim : IDisposable
{
	[Token(Token = "0x4000944")]
	private const int DEFAULT_SPIN_SP = 1;

	[Token(Token = "0x4000945")]
	[FieldOffset(Offset = "0x10")]
	private object m_lock;

	[Token(Token = "0x4000946")]
	[FieldOffset(Offset = "0x18")]
	private ManualResetEvent m_eventObj;

	[Token(Token = "0x4000947")]
	[FieldOffset(Offset = "0x20")]
	private int m_combinedState;

	[Token(Token = "0x4000948")]
	private const int SignalledState_BitMask = int.MinValue;

	[Token(Token = "0x4000949")]
	private const int SignalledState_ShiftCount = 31;

	[Token(Token = "0x400094A")]
	private const int Dispose_BitMask = 1073741824;

	[Token(Token = "0x400094B")]
	private const int SpinCountState_BitMask = 1073217536;

	[Token(Token = "0x400094C")]
	private const int SpinCountState_ShiftCount = 19;

	[Token(Token = "0x400094D")]
	private const int SpinCountState_MaxValue = 2047;

	[Token(Token = "0x400094E")]
	private const int NumWaitersState_BitMask = 524287;

	[Token(Token = "0x400094F")]
	private const int NumWaitersState_ShiftCount = 0;

	[Token(Token = "0x4000950")]
	private const int NumWaitersState_MaxValue = 524287;

	[Token(Token = "0x4000951")]
	[FieldOffset(Offset = "0x0")]
	private static Action<object> s_cancellationTokenCallback;

	[Token(Token = "0x1700019C")]
	public WaitHandle WaitHandle
	{
		[Token(Token = "0x6001192")]
		[Address(RVA = "0x5043C00", Offset = "0x5043C00", VA = "0x5043C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019D")]
	public bool IsSet
	{
		[Token(Token = "0x6001193")]
		[Address(RVA = "0x5043F30", Offset = "0x5043F30", VA = "0x5043F30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001194")]
		[Address(RVA = "0x5043F90", Offset = "0x5043F90", VA = "0x5043F90")]
		private set
		{
		}
	}

	[Token(Token = "0x1700019E")]
	public int SpinCount
	{
		[Token(Token = "0x6001195")]
		[Address(RVA = "0x5044100", Offset = "0x5044100", VA = "0x5044100")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001196")]
		[Address(RVA = "0x5044160", Offset = "0x5044160", VA = "0x5044160")]
		private set
		{
		}
	}

	[Token(Token = "0x1700019F")]
	private int Waiters
	{
		[Token(Token = "0x6001197")]
		[Address(RVA = "0x5044190", Offset = "0x5044190", VA = "0x5044190")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001198")]
		[Address(RVA = "0x50441F0", Offset = "0x50441F0", VA = "0x50441F0")]
		set
		{
		}
	}

	[Token(Token = "0x6001199")]
	[Address(RVA = "0x5044290", Offset = "0x5044290", VA = "0x5044290")]
	public ManualResetEventSlim(bool initialState)
	{
	}

	[Token(Token = "0x600119A")]
	[Address(RVA = "0x5044460", Offset = "0x5044460", VA = "0x5044460")]
	public ManualResetEventSlim(bool initialState, int spinCount)
	{
	}

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x50443B0", Offset = "0x50443B0", VA = "0x50443B0")]
	private void Initialize(bool initialState, int spinCount)
	{
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x5044600", Offset = "0x5044600", VA = "0x5044600")]
	private void EnsureLockObjectCreated()
	{
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x5043CF0", Offset = "0x5043CF0", VA = "0x5043CF0")]
	private bool LazyInitializeEvent()
	{
		return default(bool);
	}

	[Token(Token = "0x600119E")]
	[Address(RVA = "0x5044750", Offset = "0x5044750", VA = "0x5044750")]
	public void Set()
	{
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x5044760", Offset = "0x5044760", VA = "0x5044760")]
	private void Set(bool duringCancellation)
	{
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x5044A80", Offset = "0x5044A80", VA = "0x5044A80")]
	public bool Wait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x5045750", Offset = "0x5045750", VA = "0x5045750", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x50457C0", Offset = "0x50457C0", VA = "0x50457C0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x5043C90", Offset = "0x5043C90", VA = "0x5043C90")]
	private void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x50458D0", Offset = "0x50458D0", VA = "0x50458D0")]
	private static void CancellationTokenCallback(object obj)
	{
	}

	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x5043FC0", Offset = "0x5043FC0", VA = "0x5043FC0")]
	private void UpdateStateAtomically(int newBits, int updateBitsMask)
	{
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x5044150", Offset = "0x5044150", VA = "0x5044150")]
	private static int ExtractStatePortionAndShiftRight(int state, int mask, int rightBitShiftCount)
	{
		return default(int);
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x5043F80", Offset = "0x5043F80", VA = "0x5043F80")]
	private static int ExtractStatePortion(int state, int mask)
	{
		return default(int);
	}
}
