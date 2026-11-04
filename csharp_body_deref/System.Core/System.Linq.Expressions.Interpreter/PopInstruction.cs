// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.PopInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200021E")]
internal sealed class PopInstruction : Instruction
{
	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly PopInstruction Instance;

	[Token(Token = "0x1700022A")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AB4")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022B")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AB5")]
		[Address(RVA = "0x247C6E0", Offset = "0x247ACE0", VA = "0x18247C6E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private PopInstruction()
	{
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x247C640", Offset = "0x247AC40", VA = "0x18247C640", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
