// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.StoreLocalBoxedInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001AB")]
internal sealed class StoreLocalBoxedInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001E7")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000979")]
		[Address(RVA = "0x5E0B970", Offset = "0x5E0A970", VA = "0x5E0B970", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E8")]
	public override string InstructionName
	{
		[Token(Token = "0x600097A")]
		[Address(RVA = "0x5E0B980", Offset = "0x5E0A980", VA = "0x5E0B980", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x5E0B950", Offset = "0x5E0A950", VA = "0x5E0B950")]
	internal StoreLocalBoxedInstruction(int index)
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x5E0B9B0", Offset = "0x5E0A9B0", VA = "0x5E0B9B0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
