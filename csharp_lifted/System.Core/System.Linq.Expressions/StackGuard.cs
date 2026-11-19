// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.StackGuard
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000BE")]
internal sealed class StackGuard
{
	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x10")]
	private int _executionStackCount;

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x5DD5F20", Offset = "0x5DD4F20", VA = "0x5DD5F20")]
	public bool TryEnterOnCurrentStack()
	{
		return default(bool);
	}

	[Token(Token = "0x60004E6")]
	public void RunOnEmptyStack<T1, T2>(Action<T1, T2> action, T1 arg1, T2 arg2)
	{
	}

	[Token(Token = "0x60004E7")]
	private R RunOnEmptyStackCore<R>(Func<object, R> action, object state)
	{
		return (R)null;
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x5DD5F80", Offset = "0x5DD4F80", VA = "0x5DD5F80")]
	public StackGuard()
	{
	}
}
