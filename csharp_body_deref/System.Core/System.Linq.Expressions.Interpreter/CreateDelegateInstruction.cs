// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.CreateDelegateInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000230")]
internal sealed class CreateDelegateInstruction : Instruction
{
	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0x10")]
	private readonly LightDelegateCreator _creator;

	[Token(Token = "0x17000234")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AE4")]
		[Address(RVA = "0x24695B0", Offset = "0x2467BB0", VA = "0x1824695B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000235")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AE5")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000236")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AE6")]
		[Address(RVA = "0x24695E0", Offset = "0x2467BE0", VA = "0x1824695E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	internal CreateDelegateInstruction(LightDelegateCreator delegateCreator)
	{
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x2469400", Offset = "0x2467A00", VA = "0x182469400", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
