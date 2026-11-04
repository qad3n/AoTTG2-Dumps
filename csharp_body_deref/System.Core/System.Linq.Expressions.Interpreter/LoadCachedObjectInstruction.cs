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
		[Token(Token = "0x6000AAE")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000229")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AAF")]
		[Address(RVA = "0x2472830", Offset = "0x2470E30", VA = "0x182472830", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	internal LoadCachedObjectInstruction(uint index)
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x24725F0", Offset = "0x2470BF0", VA = "0x1824725F0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x24726A0", Offset = "0x2470CA0", VA = "0x1824726A0", Slot = "10")]
	public override string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x24727D0", Offset = "0x2470DD0", VA = "0x1824727D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
