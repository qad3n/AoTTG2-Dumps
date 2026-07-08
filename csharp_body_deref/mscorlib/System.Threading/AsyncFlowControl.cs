using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001F6")]
public struct AsyncFlowControl : IDisposable
{
	[Token(Token = "0x40009A2")]
	[FieldOffset(Offset = "0x0")]
	private bool useEC;

	[Token(Token = "0x40009A3")]
	[FieldOffset(Offset = "0x8")]
	private ExecutionContext _ec;

	[Token(Token = "0x40009A4")]
	[FieldOffset(Offset = "0x10")]
	private Thread _thread;

	[Token(Token = "0x6001220")]
	[Address(RVA = "0x504CB60", Offset = "0x504CB60", VA = "0x504CB60")]
	internal void Setup()
	{
	}

	[Token(Token = "0x6001221")]
	[Address(RVA = "0x504CCA0", Offset = "0x504CCA0", VA = "0x504CCA0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001222")]
	[Address(RVA = "0x504CCB0", Offset = "0x504CCB0", VA = "0x504CCB0")]
	public void Undo()
	{
	}

	[Token(Token = "0x6001223")]
	[Address(RVA = "0x504CF20", Offset = "0x504CF20", VA = "0x504CF20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001224")]
	[Address(RVA = "0x504CFE0", Offset = "0x504CFE0", VA = "0x504CFE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001225")]
	[Address(RVA = "0x504D060", Offset = "0x504D060", VA = "0x504D060")]
	public bool Equals(AsyncFlowControl obj)
	{
		return default(bool);
	}
}
