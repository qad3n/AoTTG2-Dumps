using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001DE")]
internal class NewInstruction : Instruction
{
	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x10")]
	protected readonly ConstructorInfo _constructor;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x18")]
	protected readonly int _argumentCount;

	[Token(Token = "0x1700020D")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A08")]
		[Address(RVA = "0x41D6D50", Offset = "0x41D6D50", VA = "0x41D6D50", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020E")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A09")]
		[Address(RVA = "0x41D6D60", Offset = "0x41D6D60", VA = "0x41D6D60", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020F")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A0A")]
		[Address(RVA = "0x41D6D70", Offset = "0x41D6D70", VA = "0x41D6D70", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x41D6D20", Offset = "0x41D6D20", VA = "0x41D6D20")]
	public NewInstruction(ConstructorInfo constructor, int argumentCount)
	{
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x41D6DA0", Offset = "0x41D6DA0", VA = "0x41D6DA0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x41D6F00", Offset = "0x41D6F00", VA = "0x41D6F00")]
	protected object[] GetArgs(InterpretedFrame frame, int first)
	{
		return null;
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x41D70F0", Offset = "0x41D70F0", VA = "0x41D70F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
