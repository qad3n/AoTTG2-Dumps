// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.EnterFinallyInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F6")]
internal sealed class EnterFinallyInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EnterFinallyInstruction[] s_cache;

	[Token(Token = "0x17000175")]
	public override string InstructionName
	{
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x44C8D20", Offset = "0x44C8D20", VA = "0x44C8D20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000176")]
	public override int ProducedStack
	{
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x44C8D50", Offset = "0x44C8D50", VA = "0x44C8D50", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000177")]
	public override int ConsumedContinuations
	{
		[Token(Token = "0x600063C")]
		[Address(RVA = "0x44C8D60", Offset = "0x44C8D60", VA = "0x44C8D60", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x44C8D00", Offset = "0x44C8D00", VA = "0x44C8D00")]
	private EnterFinallyInstruction(int labelIndex)
	{
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x44C8D70", Offset = "0x44C8D70", VA = "0x44C8D70")]
	internal static EnterFinallyInstruction Create(int labelIndex)
	{
		return null;
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x44C8E70", Offset = "0x44C8E70", VA = "0x44C8E70", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
