// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ParameterByRefUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000198")]
internal sealed class ParameterByRefUpdater : ByRefUpdater
{
	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x18")]
	private readonly LocalVariable _parameter;

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x247C550", Offset = "0x247AB50", VA = "0x18247C550")]
	public ParameterByRefUpdater(LocalVariable parameter, int argumentIndex)
	{
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x247C3B0", Offset = "0x247A9B0", VA = "0x18247C3B0", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}
}
