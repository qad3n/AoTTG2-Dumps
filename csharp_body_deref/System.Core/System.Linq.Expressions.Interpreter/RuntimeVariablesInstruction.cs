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
		[Token(Token = "0x600099A")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F6")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600099B")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F7")]
	public override string InstructionName
	{
		[Token(Token = "0x600099C")]
		[Address(RVA = "0x247E1F0", Offset = "0x247C7F0", VA = "0x18247E1F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public RuntimeVariablesInstruction(int count)
	{
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x247E030", Offset = "0x247C630", VA = "0x18247E030", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
