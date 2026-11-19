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

[Token(Token = "0x200019D")]
internal sealed class IndexMethodByRefUpdater : ByRefUpdater
{
	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x18")]
	private readonly MethodInfo _indexer;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x20")]
	private readonly LocalDefinition? _obj;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x38")]
	private readonly LocalDefinition[] _args;

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x5E07570", Offset = "0x5E06570", VA = "0x5E07570")]
	public IndexMethodByRefUpdater(LocalDefinition? obj, LocalDefinition[] args, MethodInfo indexer, int argumentIndex)
	{
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x5E075E0", Offset = "0x5E065E0", VA = "0x5E075E0", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x5E078B0", Offset = "0x5E068B0", VA = "0x5E078B0", Slot = "5")]
	public override void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
