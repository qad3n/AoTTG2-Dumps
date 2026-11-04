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

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
	public ByRefUpdater(int argumentIndex)
	{
	}

	[Token(Token = "0x60008E0")]
	public abstract void Update(InterpretedFrame frame, object value);

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public virtual void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
