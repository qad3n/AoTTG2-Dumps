// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.StoreLocalBoxedInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001AA")]
internal sealed class StoreLocalBoxedInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001E5")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600096F")]
		[Address(RVA = "0x44F65F0", Offset = "0x44F65F0", VA = "0x44F65F0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E6")]
	public override string InstructionName
	{
		[Token(Token = "0x6000970")]
		[Address(RVA = "0x44F6600", Offset = "0x44F6600", VA = "0x44F6600", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x44F65D0", Offset = "0x44F65D0", VA = "0x44F65D0")]
	internal StoreLocalBoxedInstruction(int index)
	{
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x44F6630", Offset = "0x44F6630", VA = "0x44F6630", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
