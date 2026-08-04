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

[Token(Token = "0x200021D")]
internal sealed class LoadCachedObjectInstruction : Instruction
{
	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x10")]
	private readonly uint _index;

	[Token(Token = "0x17000228")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AAF")]
		[Address(RVA = "0x4502410", Offset = "0x4502410", VA = "0x4502410", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000229")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AB0")]
		[Address(RVA = "0x4502420", Offset = "0x4502420", VA = "0x4502420", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x45023F0", Offset = "0x45023F0", VA = "0x45023F0")]
	internal LoadCachedObjectInstruction(uint index)
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x4502450", Offset = "0x4502450", VA = "0x4502450", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x45024F0", Offset = "0x45024F0", VA = "0x45024F0", Slot = "10")]
	public override string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x4502620", Offset = "0x4502620", VA = "0x4502620", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
