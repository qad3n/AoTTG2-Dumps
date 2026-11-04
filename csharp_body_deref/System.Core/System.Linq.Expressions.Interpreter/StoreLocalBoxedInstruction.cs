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
		[Token(Token = "0x600096E")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E6")]
	public override string InstructionName
	{
		[Token(Token = "0x600096F")]
		[Address(RVA = "0x247E8A0", Offset = "0x247CEA0", VA = "0x18247E8A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	internal StoreLocalBoxedInstruction(int index)
	{
	}

	[Token(Token = "0x6000970")]
	[Address(RVA = "0x247E7A0", Offset = "0x247CDA0", VA = "0x18247E7A0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
