using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200019A")]
internal sealed class FieldByRefUpdater : ByRefUpdater
{
	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x18")]
	private readonly LocalDefinition? _object;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x30")]
	private readonly FieldInfo _field;

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x41CCA10", Offset = "0x41CCA10", VA = "0x41CCA10")]
	public FieldByRefUpdater(LocalDefinition? obj, FieldInfo field, int argumentIndex)
	{
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x41CCA60", Offset = "0x41CCA60", VA = "0x41CCA60", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x41CCAF0", Offset = "0x41CCAF0", VA = "0x41CCAF0", Slot = "5")]
	public override void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
