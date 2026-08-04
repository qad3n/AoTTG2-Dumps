// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadLocalBoxedInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A4")]
internal sealed class LoadLocalBoxedInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001D7")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000953")]
		[Address(RVA = "0x44F5D60", Offset = "0x44F5D60", VA = "0x44F5D60", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001D8")]
	public override string InstructionName
	{
		[Token(Token = "0x6000954")]
		[Address(RVA = "0x44F5D70", Offset = "0x44F5D70", VA = "0x44F5D70", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x44F5D40", Offset = "0x44F5D40", VA = "0x44F5D40")]
	internal LoadLocalBoxedInstruction(int index)
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x44F5DA0", Offset = "0x44F5DA0", VA = "0x44F5DA0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
