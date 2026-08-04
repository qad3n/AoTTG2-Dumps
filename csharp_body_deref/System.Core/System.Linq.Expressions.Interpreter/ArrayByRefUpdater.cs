// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ArrayByRefUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x44F18E0", Offset = "0x44F18E0", VA = "0x44F18E0")]
	public ArrayByRefUpdater(LocalDefinition array, LocalDefinition index, int argumentIndex)
	{
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x44F1940", Offset = "0x44F1940", VA = "0x44F1940", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x44F19F0", Offset = "0x44F19F0", VA = "0x44F19F0", Slot = "5")]
	public override void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
