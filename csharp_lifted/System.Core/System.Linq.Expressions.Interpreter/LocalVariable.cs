// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LocalVariable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001B8")]
internal sealed class LocalVariable
{
	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0x10")]
	public readonly int Index;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0x14")]
	private int _flags;

	[Token(Token = "0x170001FA")]
	public bool IsBoxed
	{
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x5E06F90", Offset = "0x5E05F90", VA = "0x5E06F90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009AA")]
		[Address(RVA = "0x5E0CA90", Offset = "0x5E0BA90", VA = "0x5E0CA90")]
		set
		{
		}
	}

	[Token(Token = "0x170001FB")]
	public bool InClosure
	{
		[Token(Token = "0x60009AB")]
		[Address(RVA = "0x5E06F80", Offset = "0x5E05F80", VA = "0x5E06F80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x5E0CAA0", Offset = "0x5E0BAA0", VA = "0x5E0CAA0")]
	internal LocalVariable(int index, bool closure)
	{
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x5E0CAD0", Offset = "0x5E0BAD0", VA = "0x5E0CAD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
