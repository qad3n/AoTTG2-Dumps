// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ByRefUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000197")]
internal abstract class ByRefUpdater
{
	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0x10")]
	public readonly int ArgumentIndex;

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x44F1610", Offset = "0x44F1610", VA = "0x44F1610")]
	public ByRefUpdater(int argumentIndex)
	{
	}

	[Token(Token = "0x60008E1")]
	public abstract void Update(InterpretedFrame frame, object value);

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x44F1630", Offset = "0x44F1630", VA = "0x44F1630", Slot = "5")]
	public virtual void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
