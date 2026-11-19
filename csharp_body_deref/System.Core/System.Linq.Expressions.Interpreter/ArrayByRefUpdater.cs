// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ArrayByRefUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200019A")]
internal sealed class ArrayByRefUpdater : ByRefUpdater
{
	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x18")]
	private readonly LocalDefinition _array;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x28")]
	private readonly LocalDefinition _index;

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x5E06FA0", Offset = "0x5E05FA0", VA = "0x5E06FA0")]
	public ArrayByRefUpdater(LocalDefinition array, LocalDefinition index, int argumentIndex)
	{
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x5E07000", Offset = "0x5E06000", VA = "0x5E07000", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x5E070B0", Offset = "0x5E060B0", VA = "0x5E070B0", Slot = "5")]
	public override void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
