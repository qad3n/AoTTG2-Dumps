// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.MethodInfoCallInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000EB")]
internal class MethodInfoCallInstruction : CallInstruction
{
	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x10")]
	protected readonly MethodInfo _target;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x18")]
	protected readonly int _argumentCount;

	[Token(Token = "0x1700015A")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60005F9")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700015B")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005FB")]
		[Address(RVA = "0x242A4B0", Offset = "0x2428AB0", VA = "0x18242A4B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x1A2A540", Offset = "0x1A28B40", VA = "0x181A2A540")]
	internal MethodInfoCallInstruction(MethodInfo target, int argumentCount)
	{
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x243D5E0", Offset = "0x243BBE0", VA = "0x18243D5E0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x243D450", Offset = "0x243BA50", VA = "0x18243D450")]
	protected object[] GetArgs(InterpretedFrame frame, int first, int skip)
	{
		return null;
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x243D880", Offset = "0x243BE80", VA = "0x18243D880", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
