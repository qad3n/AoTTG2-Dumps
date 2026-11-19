// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.RuntimeVariablesInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001B7")]
internal sealed class RuntimeVariablesInstruction : Instruction
{
	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0x10")]
	private readonly int _count;

	[Token(Token = "0x170001F7")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009A5")]
		[Address(RVA = "0x5E0C830", Offset = "0x5E0B830", VA = "0x5E0C830", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F8")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60009A6")]
		[Address(RVA = "0x5E0C840", Offset = "0x5E0B840", VA = "0x5E0C840", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F9")]
	public override string InstructionName
	{
		[Token(Token = "0x60009A7")]
		[Address(RVA = "0x5E0C850", Offset = "0x5E0B850", VA = "0x5E0C850", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x5E0C810", Offset = "0x5E0B810", VA = "0x5E0C810")]
	public RuntimeVariablesInstruction(int count)
	{
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x5E0C880", Offset = "0x5E0B880", VA = "0x5E0C880", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
