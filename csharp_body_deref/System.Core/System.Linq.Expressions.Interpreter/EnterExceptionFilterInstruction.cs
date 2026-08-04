// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.EnterExceptionFilterInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FA")]
internal sealed class EnterExceptionFilterInstruction : Instruction
{
	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly EnterExceptionFilterInstruction Instance;

	[Token(Token = "0x1700017F")]
	public override string InstructionName
	{
		[Token(Token = "0x6000652")]
		[Address(RVA = "0x44C9390", Offset = "0x44C9390", VA = "0x44C9390", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000180")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000653")]
		[Address(RVA = "0x44C93C0", Offset = "0x44C93C0", VA = "0x44C93C0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x44C9380", Offset = "0x44C9380", VA = "0x44C9380")]
	private EnterExceptionFilterInstruction()
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x44C93D0", Offset = "0x44C93D0", VA = "0x44C93D0", Slot = "8")]
	[ExcludeFromCodeCoverage]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
