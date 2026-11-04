// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.StackGuard
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000BD")]
internal sealed class StackGuard
{
	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x10")]
	private int _executionStackCount;

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x243F220", Offset = "0x243D820", VA = "0x18243F220")]
	public bool TryEnterOnCurrentStack()
	{
		return default(bool);
	}

	[Token(Token = "0x60004DB")]
	public void RunOnEmptyStack<T1, T2>(Action<T1, T2> action, T1 arg1, T2 arg2)
	{
	}

	[Token(Token = "0x60004DC")]
	private R RunOnEmptyStackCore<R>(Func<object, R> action, object state)
	{
		return (R)null;
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public StackGuard()
	{
	}
}
