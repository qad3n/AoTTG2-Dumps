// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.MethodInfoCallInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000EC")]
internal class MethodInfoCallInstruction : CallInstruction
{
	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x10")]
	protected readonly MethodInfo _target;

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x18")]
	protected readonly int _argumentCount;

	[Token(Token = "0x1700015C")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000604")]
		[Address(RVA = "0x5DDC500", Offset = "0x5DDB500", VA = "0x5DDC500", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700015D")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000606")]
		[Address(RVA = "0x5DDC510", Offset = "0x5DDB510", VA = "0x5DDC510", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x5DDC2B0", Offset = "0x5DDB2B0", VA = "0x5DDC2B0")]
	internal MethodInfoCallInstruction(MethodInfo target, int argumentCount)
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x5DDC580", Offset = "0x5DDB580", VA = "0x5DDC580", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x5DDC8B0", Offset = "0x5DDB8B0", VA = "0x5DDC8B0")]
	protected object[] GetArgs(InterpretedFrame frame, int first, int skip)
	{
		return null;
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x5DDCAB0", Offset = "0x5DDBAB0", VA = "0x5DDCAB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
