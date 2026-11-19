// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.PopInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200021F")]
internal sealed class PopInstruction : Instruction
{
	[Token(Token = "0x4000401")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly PopInstruction Instance;

	[Token(Token = "0x1700022C")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000ABF")]
		[Address(RVA = "0x5E179B0", Offset = "0x5E169B0", VA = "0x5E179B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022D")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AC0")]
		[Address(RVA = "0x5E179C0", Offset = "0x5E169C0", VA = "0x5E179C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x5E179A0", Offset = "0x5E169A0", VA = "0x5E179A0")]
	private PopInstruction()
	{
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x5E179F0", Offset = "0x5E169F0", VA = "0x5E179F0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
