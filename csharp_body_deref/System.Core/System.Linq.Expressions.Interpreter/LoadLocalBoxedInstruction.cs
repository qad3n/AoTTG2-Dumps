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
		[Token(Token = "0x6000952")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001D8")]
	public override string InstructionName
	{
		[Token(Token = "0x6000953")]
		[Address(RVA = "0x2472980", Offset = "0x2470F80", VA = "0x182472980", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	internal LoadLocalBoxedInstruction(int index)
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x2472860", Offset = "0x2470E60", VA = "0x182472860", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
