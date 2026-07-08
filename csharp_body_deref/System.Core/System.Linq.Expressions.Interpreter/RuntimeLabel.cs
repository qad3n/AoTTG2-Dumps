using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E8")]
internal readonly struct RuntimeLabel
{
	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x0")]
	public readonly int Index;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x4")]
	public readonly int StackDepth;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x8")]
	public readonly int ContinuationStackDepth;

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x41A0880", Offset = "0x41A0880", VA = "0x41A0880")]
	public RuntimeLabel(int index, int continuationStackDepth, int stackDepth)
	{
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x41A0890", Offset = "0x41A0890", VA = "0x41A0890", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
