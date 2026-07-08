using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FE")]
internal sealed class ThrowInstruction : Instruction
{
	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly ThrowInstruction Throw;

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly ThrowInstruction VoidThrow;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly ThrowInstruction Rethrow;

	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly ThrowInstruction VoidRethrow;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _hasResult;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x11")]
	private readonly bool _rethrow;

	[Token(Token = "0x17000189")]
	public override string InstructionName
	{
		[Token(Token = "0x6000669")]
		[Address(RVA = "0x41A47A0", Offset = "0x41A47A0", VA = "0x41A47A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018A")]
	public override int ProducedStack
	{
		[Token(Token = "0x600066A")]
		[Address(RVA = "0x41A47D0", Offset = "0x41A47D0", VA = "0x41A47D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018B")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600066B")]
		[Address(RVA = "0x41A47E0", Offset = "0x41A47E0", VA = "0x41A47E0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x41A4780", Offset = "0x41A4780", VA = "0x41A4780")]
	private ThrowInstruction(bool hasResult, bool isRethrow)
	{
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x41A47F0", Offset = "0x41A47F0", VA = "0x41A47F0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x41A4920", Offset = "0x41A4920", VA = "0x41A4920")]
	private static Exception WrapThrownObject(object thrown)
	{
		return null;
	}
}
