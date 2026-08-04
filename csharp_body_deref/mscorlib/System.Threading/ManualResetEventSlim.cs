// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ManualResetEventSlim
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3D29720", Offset = "0x3D29720", VA = "0x3D29720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019D")]
	public bool IsSet
	{
		[Token(Token = "0x6001193")]
		[Address(RVA = "0x3D29A50", Offset = "0x3D29A50", VA = "0x3D29A50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001194")]
		[Address(RVA = "0x3D29AB0", Offset = "0x3D29AB0", VA = "0x3D29AB0")]
		private set
		{
		}
	}

	[Token(Token = "0x1700019E")]
	public int SpinCount
	{
		[Token(Token = "0x6001195")]
		[Address(RVA = "0x3D29C20", Offset = "0x3D29C20", VA = "0x3D29C20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001196")]
		[Address(RVA = "0x3D29C80", Offset = "0x3D29C80", VA = "0x3D29C80")]
		private set
		{
		}
	}

	[Token(Token = "0x1700019F")]
	private int Waiters
	{
		[Token(Token = "0x6001197")]
		[Address(RVA = "0x3D29CB0", Offset = "0x3D29CB0", VA = "0x3D29CB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001198")]
		[Address(RVA = "0x3D29D10", Offset = "0x3D29D10", VA = "0x3D29D10")]
		set
		{
		}
	}

	[Token(Token = "0x6001199")]
	[Address(RVA = "0x3D29DB0", Offset = "0x3D29DB0", VA = "0x3D29DB0")]
	public ManualResetEventSlim(bool initialState)
	{
	}

	[Token(Token = "0x600119A")]
	[Address(RVA = "0x3D29F80", Offset = "0x3D29F80", VA = "0x3D29F80")]
	public ManualResetEventSlim(bool initialState, int spinCount)
	{
	}

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x3D29ED0", Offset = "0x3D29ED0", VA = "0x3D29ED0")]
	private void Initialize(bool initialState, int spinCount)
	{
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x3D2A120", Offset = "0x3D2A120", VA = "0x3D2A120")]
	private void EnsureLockObjectCreated()
	{
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x3D29810", Offset = "0x3D29810", VA = "0x3D29810")]
	private bool LazyInitializeEvent()
	{
		return default(bool);
	}

	[Token(Token = "0x600119E")]
	[Address(RVA = "0x3D2A270", Offset = "0x3D2A270", VA = "0x3D2A270")]
	public void Set()
	{
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x3D2A280", Offset = "0x3D2A280", VA = "0x3D2A280")]
	private void Set(bool duringCancellation)
	{
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x3D2A5A0", Offset = "0x3D2A5A0", VA = "0x3D2A5A0")]
	public bool Wait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x3D2B270", Offset = "0x3D2B270", VA = "0x3D2B270", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x3D2B2E0", Offset = "0x3D2B2E0", VA = "0x3D2B2E0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x3D297B0", Offset = "0x3D297B0", VA = "0x3D297B0")]
	private void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x3D2B3F0", Offset = "0x3D2B3F0", VA = "0x3D2B3F0")]
	private static void CancellationTokenCallback(object obj)
	{
	}

	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x3D29AE0", Offset = "0x3D29AE0", VA = "0x3D29AE0")]
	private void UpdateStateAtomically(int newBits, int updateBitsMask)
	{
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x3D29C70", Offset = "0x3D29C70", VA = "0x3D29C70")]
	private static int ExtractStatePortionAndShiftRight(int state, int mask, int rightBitShiftCount)
	{
		return default(int);
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x3D29AA0", Offset = "0x3D29AA0", VA = "0x3D29AA0")]
	private static int ExtractStatePortion(int state, int mask)
	{
		return default(int);
	}
}
