// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.CreateDelegateInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000231")]
internal sealed class CreateDelegateInstruction : Instruction
{
	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x10")]
	private readonly LightDelegateCreator _creator;

	[Token(Token = "0x17000236")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AEF")]
		[Address(RVA = "0x5E19C10", Offset = "0x5E18C10", VA = "0x5E19C10", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000237")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AF0")]
		[Address(RVA = "0x5E19C30", Offset = "0x5E18C30", VA = "0x5E19C30", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000238")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AF1")]
		[Address(RVA = "0x5E19C40", Offset = "0x5E18C40", VA = "0x5E19C40", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x5E19BE0", Offset = "0x5E18BE0", VA = "0x5E19BE0")]
	internal CreateDelegateInstruction(LightDelegateCreator delegateCreator)
	{
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x5E19C70", Offset = "0x5E18C70", VA = "0x5E19C70", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
