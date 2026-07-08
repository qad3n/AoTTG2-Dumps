using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000199")]
internal sealed class ArrayByRefUpdater : ByRefUpdater
{
	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x18")]
	private readonly LocalDefinition _array;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x28")]
	private readonly LocalDefinition _index;

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x41CC7E0", Offset = "0x41CC7E0", VA = "0x41CC7E0")]
	public ArrayByRefUpdater(LocalDefinition array, LocalDefinition index, int argumentIndex)
	{
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x41CC840", Offset = "0x41CC840", VA = "0x41CC840", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x41CC8F0", Offset = "0x41CC8F0", VA = "0x41CC8F0", Slot = "5")]
	public override void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
