// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LocalVariable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001B7")]
internal sealed class LocalVariable
{
	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x10")]
	public readonly int Index;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x14")]
	private int _flags;

	[Token(Token = "0x170001F8")]
	public bool IsBoxed
	{
		[Token(Token = "0x600099E")]
		[Address(RVA = "0x2473230", Offset = "0x2471830", VA = "0x182473230")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600099F")]
		[Address(RVA = "0x2473240", Offset = "0x2471840", VA = "0x182473240")]
		set
		{
		}
	}

	[Token(Token = "0x170001F9")]
	public bool InClosure
	{
		[Token(Token = "0x60009A0")]
		[Address(RVA = "0x2473220", Offset = "0x2471820", VA = "0x182473220")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x24731E0", Offset = "0x24717E0", VA = "0x1824731E0")]
	internal LocalVariable(int index, bool closure)
	{
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x2473100", Offset = "0x2471700", VA = "0x182473100", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
