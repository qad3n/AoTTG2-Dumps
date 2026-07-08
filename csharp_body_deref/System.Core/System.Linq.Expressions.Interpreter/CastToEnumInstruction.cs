using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000241")]
internal sealed class CastToEnumInstruction : CastInstruction
{
	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _t;

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x41E1140", Offset = "0x41E1140", VA = "0x41E1140")]
	public CastToEnumInstruction(Type t)
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x41E1170", Offset = "0x41E1170", VA = "0x41E1170", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
