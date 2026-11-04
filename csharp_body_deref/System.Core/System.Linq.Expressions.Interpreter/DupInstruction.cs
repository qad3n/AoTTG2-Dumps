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
		[Token(Token = "0x6000AB9")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022D")]
	public override string InstructionName
	{
		[Token(Token = "0x6000ABA")]
		[Address(RVA = "0x246AD40", Offset = "0x2469340", VA = "0x18246AD40", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private DupInstruction()
	{
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x246ACA0", Offset = "0x24692A0", VA = "0x18246ACA0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
