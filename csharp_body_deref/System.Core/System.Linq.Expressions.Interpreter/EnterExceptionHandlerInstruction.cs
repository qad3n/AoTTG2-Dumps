using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FC")]
internal sealed class EnterExceptionHandlerInstruction : Instruction
{
	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly EnterExceptionHandlerInstruction Void;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly EnterExceptionHandlerInstruction NonVoid;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _hasValue;

	[Token(Token = "0x17000183")]
	public override string InstructionName
	{
		[Token(Token = "0x600065C")]
		[Address(RVA = "0x41A4440", Offset = "0x41A4440", VA = "0x41A4440", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000184")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600065D")]
		[Address(RVA = "0x41A4470", Offset = "0x41A4470", VA = "0x41A4470", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000185")]
	public override int ProducedStack
	{
		[Token(Token = "0x600065E")]
		[Address(RVA = "0x41A4480", Offset = "0x41A4480", VA = "0x41A4480", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x41A4420", Offset = "0x41A4420", VA = "0x41A4420")]
	private EnterExceptionHandlerInstruction(bool hasValue)
	{
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x41A4490", Offset = "0x41A4490", VA = "0x41A4490", Slot = "8")]
	[ExcludeFromCodeCoverage]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
