// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.StoreLocalInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A8")]
internal sealed class StoreLocalInstruction : LocalAccessInstruction, IBoxableInstruction
{
	[Token(Token = "0x170001E0")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000964")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E1")]
	public override string InstructionName
	{
		[Token(Token = "0x6000965")]
		[Address(RVA = "0x247E9E0", Offset = "0x247CFE0", VA = "0x18247E9E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	internal StoreLocalInstruction(int index)
	{
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x247E940", Offset = "0x247CF40", VA = "0x18247E940", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x247E8D0", Offset = "0x247CED0", VA = "0x18247E8D0", Slot = "11")]
	public Instruction BoxIfIndexMatches(int index)
	{
		return null;
	}
}
