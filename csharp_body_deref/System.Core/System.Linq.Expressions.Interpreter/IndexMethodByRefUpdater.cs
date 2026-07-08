using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200019C")]
internal sealed class IndexMethodByRefUpdater : ByRefUpdater
{
	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x18")]
	private readonly MethodInfo _indexer;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x20")]
	private readonly LocalDefinition? _obj;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x38")]
	private readonly LocalDefinition[] _args;

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x41CCDB0", Offset = "0x41CCDB0", VA = "0x41CCDB0")]
	public IndexMethodByRefUpdater(LocalDefinition? obj, LocalDefinition[] args, MethodInfo indexer, int argumentIndex)
	{
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x41CCE20", Offset = "0x41CCE20", VA = "0x41CCE20", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x41CD0D0", Offset = "0x41CD0D0", VA = "0x41CD0D0", Slot = "5")]
	public override void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
