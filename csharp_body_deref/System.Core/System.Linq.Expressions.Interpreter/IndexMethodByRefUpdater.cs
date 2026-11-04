// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.IndexMethodByRefUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x246FCE0", Offset = "0x246E2E0", VA = "0x18246FCE0")]
	public IndexMethodByRefUpdater(LocalDefinition? obj, LocalDefinition[] args, MethodInfo indexer, int argumentIndex)
	{
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x246FAC0", Offset = "0x246E0C0", VA = "0x18246FAC0", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x246F910", Offset = "0x246DF10", VA = "0x18246F910", Slot = "5")]
	public override void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
