// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.DupInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200021F")]
internal sealed class DupInstruction : Instruction
{
	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DupInstruction Instance;

	[Token(Token = "0x1700022C")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000ABA")]
		[Address(RVA = "0x4502770", Offset = "0x4502770", VA = "0x4502770", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022D")]
	public override string InstructionName
	{
		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x4502780", Offset = "0x4502780", VA = "0x4502780", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x4502760", Offset = "0x4502760", VA = "0x4502760")]
	private DupInstruction()
	{
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x45027B0", Offset = "0x45027B0", VA = "0x45027B0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
