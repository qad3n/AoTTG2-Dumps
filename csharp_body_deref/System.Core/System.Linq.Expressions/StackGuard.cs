using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000BD")]
internal sealed class StackGuard
{
	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x10")]
	private int _executionStackCount;

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x419B050", Offset = "0x419B050", VA = "0x419B050")]
	public bool TryEnterOnCurrentStack()
	{
		return default(bool);
	}

	[Token(Token = "0x60004DC")]
	public void RunOnEmptyStack<T1, T2>(Action<T1, T2> action, T1 arg1, T2 arg2)
	{
	}

	[Token(Token = "0x60004DD")]
	private R RunOnEmptyStackCore<R>(Func<object, R> action, object state)
	{
		return (R)null;
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x419B0B0", Offset = "0x419B0B0", VA = "0x419B0B0")]
	public StackGuard()
	{
	}
}
