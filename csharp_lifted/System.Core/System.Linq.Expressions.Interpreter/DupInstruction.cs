// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.DupInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000220")]
internal sealed class DupInstruction : Instruction
{
	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DupInstruction Instance;

	[Token(Token = "0x1700022E")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AC4")]
		[Address(RVA = "0x5E17A90", Offset = "0x5E16A90", VA = "0x5E17A90", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022F")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AC5")]
		[Address(RVA = "0x5E17AA0", Offset = "0x5E16AA0", VA = "0x5E17AA0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x5E17A80", Offset = "0x5E16A80", VA = "0x5E17A80")]
	private DupInstruction()
	{
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x5E17AD0", Offset = "0x5E16AD0", VA = "0x5E17AD0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
