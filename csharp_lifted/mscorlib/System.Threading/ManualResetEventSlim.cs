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

[Token(Token = "0x20001DE")]
[DebuggerDisplay("Set = {IsSet}")]
public class ManualResetEventSlim : IDisposable
{
	[Token(Token = "0x4000903")]
	[FieldOffset(Offset = "0x10")]
	private object m_lock;

	[Token(Token = "0x4000904")]
	[FieldOffset(Offset = "0x18")]
	private ManualResetEvent m_eventObj;

	[Token(Token = "0x4000905")]
	[FieldOffset(Offset = "0x20")]
	private int m_combinedState;

	[Token(Token = "0x4000906")]
	[FieldOffset(Offset = "0x0")]
	private static Action<object> s_cancellationTokenCallback;

	[Token(Token = "0x1700019D")]
	public WaitHandle WaitHandle
	{
		[Token(Token = "0x60011C4")]
		[Address(RVA = "0x552CB20", Offset = "0x552BB20", VA = "0x552CB20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019E")]
	public bool IsSet
	{
		[Token(Token = "0x60011C5")]
		[Address(RVA = "0x552CE70", Offset = "0x552BE70", VA = "0x552CE70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011C6")]
		[Address(RVA = "0x552CED0", Offset = "0x552BED0", VA = "0x552CED0")]
		private set
		{
		}
	}

	[Token(Token = "0x1700019F")]
	public int SpinCount
	{
		[Token(Token = "0x60011C7")]
		[Address(RVA = "0x552D020", Offset = "0x552C020", VA = "0x552D020")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011C8")]
		[Address(RVA = "0x552D080", Offset = "0x552C080", VA = "0x552D080")]
		private set
		{
		}
	}

	[Token(Token = "0x170001A0")]
	private int Waiters
	{
		[Token(Token = "0x60011C9")]
		[Address(RVA = "0x552D0B0", Offset = "0x552C0B0", VA = "0x552D0B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011CA")]
		[Address(RVA = "0x552D110", Offset = "0x552C110", VA = "0x552D110")]
		set
		{
		}
	}

	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x552D1A0", Offset = "0x552C1A0", VA = "0x552D1A0")]
	public ManualResetEventSlim(bool initialState)
	{
	}

	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x552D360", Offset = "0x552C360", VA = "0x552D360")]
	public ManualResetEventSlim(bool initialState, int spinCount)
	{
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x552D2C0", Offset = "0x552C2C0", VA = "0x552D2C0")]
	private void Initialize(bool initialState, int spinCount)
	{
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x552D500", Offset = "0x552C500", VA = "0x552D500")]
	private void EnsureLockObjectCreated()
	{
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x552CC10", Offset = "0x552BC10", VA = "0x552CC10")]
	private bool LazyInitializeEvent()
	{
		return default(bool);
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x552D6A0", Offset = "0x552C6A0", VA = "0x552D6A0")]
	public void Set()
	{
	}

	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x552D6B0", Offset = "0x552C6B0", VA = "0x552D6B0")]
	private void Set(bool duringCancellation)
	{
	}

	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x552D9D0", Offset = "0x552C9D0", VA = "0x552D9D0")]
	public bool Wait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x552E4C0", Offset = "0x552D4C0", VA = "0x552E4C0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60011D4")]
	[Address(RVA = "0x552E530", Offset = "0x552D530", VA = "0x552E530", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x552CBB0", Offset = "0x552BBB0", VA = "0x552CBB0")]
	private void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x60011D6")]
	[Address(RVA = "0x552E640", Offset = "0x552D640", VA = "0x552E640")]
	private static void CancellationTokenCallback(object obj)
	{
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x552CEF0", Offset = "0x552BEF0", VA = "0x552CEF0")]
	private void UpdateStateAtomically(int newBits, int updateBitsMask)
	{
	}

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x552D070", Offset = "0x552C070", VA = "0x552D070")]
	private static int ExtractStatePortionAndShiftRight(int state, int mask, int rightBitShiftCount)
	{
		return default(int);
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x552CEC0", Offset = "0x552BEC0", VA = "0x552CEC0")]
	private static int ExtractStatePortion(int state, int mask)
	{
		return default(int);
	}
}
