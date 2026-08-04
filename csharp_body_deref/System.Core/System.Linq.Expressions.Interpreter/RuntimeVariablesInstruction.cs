// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.RuntimeVariablesInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001B6")]
internal sealed class RuntimeVariablesInstruction : Instruction
{
	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x10")]
	private readonly int _count;

	[Token(Token = "0x170001F5")]
	public override int ProducedStack
	{
		[Token(Token = "0x600099B")]
		[Address(RVA = "0x44F74B0", Offset = "0x44F74B0", VA = "0x44F74B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F6")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600099C")]
		[Address(RVA = "0x44F74C0", Offset = "0x44F74C0", VA = "0x44F74C0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F7")]
	public override string InstructionName
	{
		[Token(Token = "0x600099D")]
		[Address(RVA = "0x44F74D0", Offset = "0x44F74D0", VA = "0x44F74D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x44F7490", Offset = "0x44F7490", VA = "0x44F7490")]
	public RuntimeVariablesInstruction(int count)
	{
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x44F7500", Offset = "0x44F7500", VA = "0x44F7500", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
