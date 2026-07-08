using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000242")]
internal sealed class CastReferenceToEnumInstruction : CastInstruction
{
	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _t;

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x41E11F0", Offset = "0x41E11F0", VA = "0x41E11F0")]
	public CastReferenceToEnumInstruction(Type t)
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x41E1220", Offset = "0x41E1220", VA = "0x41E1220", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
