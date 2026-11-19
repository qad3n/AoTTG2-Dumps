// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.IntSwitchInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000100")]
internal sealed class IntSwitchInstruction<T> : Instruction
{
	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<T, int> _cases;

	[Token(Token = "0x1700018E")]
	public override string InstructionName
	{
		[Token(Token = "0x600067A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018F")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600067B")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000679")]
	internal IntSwitchInstruction(Dictionary<T, int> cases)
	{
	}

	[Token(Token = "0x600067C")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
