// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ParameterByRefUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000199")]
internal sealed class ParameterByRefUpdater : ByRefUpdater
{
	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x18")]
	private readonly LocalVariable _parameter;

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x5E06CF0", Offset = "0x5E05CF0", VA = "0x5E06CF0")]
	public ParameterByRefUpdater(LocalVariable parameter, int argumentIndex)
	{
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x5E06D20", Offset = "0x5E05D20", VA = "0x5E06D20", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}
}
