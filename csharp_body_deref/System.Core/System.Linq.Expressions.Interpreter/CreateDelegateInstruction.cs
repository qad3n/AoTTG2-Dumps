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
		[Token(Token = "0x6000AE5")]
		[Address(RVA = "0x4504960", Offset = "0x4504960", VA = "0x4504960", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000235")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AE6")]
		[Address(RVA = "0x4504980", Offset = "0x4504980", VA = "0x4504980", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000236")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AE7")]
		[Address(RVA = "0x4504990", Offset = "0x4504990", VA = "0x4504990", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x4504930", Offset = "0x4504930", VA = "0x4504930")]
	internal CreateDelegateInstruction(LightDelegateCreator delegateCreator)
	{
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x45049C0", Offset = "0x45049C0", VA = "0x45049C0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
