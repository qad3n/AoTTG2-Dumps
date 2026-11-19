// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.EnterFaultInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F9")]
internal sealed class EnterFaultInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EnterFaultInstruction[] s_cache;

	[Token(Token = "0x1700017C")]
	public override string InstructionName
	{
		[Token(Token = "0x6000650")]
		[Address(RVA = "0x5DDEC20", Offset = "0x5DDDC20", VA = "0x5DDEC20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017D")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000651")]
		[Address(RVA = "0x5DDEC50", Offset = "0x5DDDC50", VA = "0x5DDEC50", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x5DDEC00", Offset = "0x5DDDC00", VA = "0x5DDEC00")]
	private EnterFaultInstruction(int labelIndex)
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x5DDEC60", Offset = "0x5DDDC60", VA = "0x5DDEC60")]
	internal static EnterFaultInstruction Create(int labelIndex)
	{
		return null;
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x5DDED60", Offset = "0x5DDDD60", VA = "0x5DDED60", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
