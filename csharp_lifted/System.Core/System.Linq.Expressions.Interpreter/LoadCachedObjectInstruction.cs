// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadCachedObjectInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200021E")]
internal sealed class LoadCachedObjectInstruction : Instruction
{
	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x10")]
	private readonly uint _index;

	[Token(Token = "0x1700022A")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AB9")]
		[Address(RVA = "0x5E17730", Offset = "0x5E16730", VA = "0x5E17730", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022B")]
	public override string InstructionName
	{
		[Token(Token = "0x6000ABA")]
		[Address(RVA = "0x5E17740", Offset = "0x5E16740", VA = "0x5E17740", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x5E17710", Offset = "0x5E16710", VA = "0x5E17710")]
	internal LoadCachedObjectInstruction(uint index)
	{
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x5E17770", Offset = "0x5E16770", VA = "0x5E17770", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x5E17810", Offset = "0x5E16810", VA = "0x5E17810", Slot = "10")]
	public override string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x5E17940", Offset = "0x5E16940", VA = "0x5E17940", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
