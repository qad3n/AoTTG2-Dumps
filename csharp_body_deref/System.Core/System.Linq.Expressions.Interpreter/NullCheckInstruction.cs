// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NullCheckInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000204")]
internal sealed class NullCheckInstruction : Instruction
{
	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Instruction Instance;

	[Token(Token = "0x17000219")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A68")]
		[Address(RVA = "0x5E14090", Offset = "0x5E13090", VA = "0x5E14090", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700021A")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A69")]
		[Address(RVA = "0x5E140A0", Offset = "0x5E130A0", VA = "0x5E140A0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700021B")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A6A")]
		[Address(RVA = "0x5E140B0", Offset = "0x5E130B0", VA = "0x5E140B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x5E14080", Offset = "0x5E13080", VA = "0x5E14080")]
	private NullCheckInstruction()
	{
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x5E140E0", Offset = "0x5E130E0", VA = "0x5E140E0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
