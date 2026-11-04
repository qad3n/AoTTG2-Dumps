// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadLocalFromClosureBoxedInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A6")]
internal sealed class LoadLocalFromClosureBoxedInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001DB")]
	public override int ProducedStack
	{
		[Token(Token = "0x600095A")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001DC")]
	public override string InstructionName
	{
		[Token(Token = "0x600095B")]
		[Address(RVA = "0x2472A60", Offset = "0x2471060", VA = "0x182472A60", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	internal LoadLocalFromClosureBoxedInstruction(int index)
	{
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x24729B0", Offset = "0x2470FB0", VA = "0x1824729B0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
