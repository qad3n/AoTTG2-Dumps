// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.CastToEnumInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000241")]
internal sealed class CastToEnumInstruction : CastInstruction
{
	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _t;

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x4506240", Offset = "0x4506240", VA = "0x4506240")]
	public CastToEnumInstruction(Type t)
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x4506270", Offset = "0x4506270", VA = "0x4506270", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
