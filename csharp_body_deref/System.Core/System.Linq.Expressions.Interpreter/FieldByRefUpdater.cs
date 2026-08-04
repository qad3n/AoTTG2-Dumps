// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.FieldByRefUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x44F1B10", Offset = "0x44F1B10", VA = "0x44F1B10")]
	public FieldByRefUpdater(LocalDefinition? obj, FieldInfo field, int argumentIndex)
	{
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x44F1B60", Offset = "0x44F1B60", VA = "0x44F1B60", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x44F1BF0", Offset = "0x44F1BF0", VA = "0x44F1BF0", Slot = "5")]
	public override void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
