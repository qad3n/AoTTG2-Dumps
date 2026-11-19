// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.AssignLocalToClosureInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001AC")]
internal sealed class AssignLocalToClosureInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001E9")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600097D")]
		[Address(RVA = "0x5E0BB10", Offset = "0x5E0AB10", VA = "0x5E0BB10", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001EA")]
	public override int ProducedStack
	{
		[Token(Token = "0x600097E")]
		[Address(RVA = "0x5E0BB20", Offset = "0x5E0AB20", VA = "0x5E0BB20", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001EB")]
	public override string InstructionName
	{
		[Token(Token = "0x600097F")]
		[Address(RVA = "0x5E0BB30", Offset = "0x5E0AB30", VA = "0x5E0BB30", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x5E0BAF0", Offset = "0x5E0AAF0", VA = "0x5E0BAF0")]
	internal AssignLocalToClosureInstruction(int index)
	{
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x5E0BB60", Offset = "0x5E0AB60", VA = "0x5E0BB60", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
