// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.CoalescingBranchInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F0")]
internal sealed class CoalescingBranchInstruction : OffsetInstruction
{
	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction[] s_cache;

	[Token(Token = "0x17000164")]
	public override Instruction[] Cache
	{
		[Token(Token = "0x6000611")]
		[Address(RVA = "0x242B250", Offset = "0x2429850", VA = "0x18242B250", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000165")]
	public override string InstructionName
	{
		[Token(Token = "0x6000612")]
		[Address(RVA = "0x242B2E0", Offset = "0x24298E0", VA = "0x18242B2E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000166")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000167")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x242B210", Offset = "0x2429810", VA = "0x18242B210", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x24296B0", Offset = "0x2427CB0", VA = "0x1824296B0")]
	public CoalescingBranchInstruction()
	{
	}
}
