// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ByRefUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000198")]
internal abstract class ByRefUpdater
{
	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x10")]
	public readonly int ArgumentIndex;

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x5E06CC0", Offset = "0x5E05CC0", VA = "0x5E06CC0")]
	public ByRefUpdater(int argumentIndex)
	{
	}

	[Token(Token = "0x60008EB")]
	public abstract void Update(InterpretedFrame frame, object value);

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x5E06CE0", Offset = "0x5E05CE0", VA = "0x5E06CE0", Slot = "5")]
	public virtual void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
