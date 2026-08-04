// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.CastReferenceToEnumInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000242")]
internal sealed class CastReferenceToEnumInstruction : CastInstruction
{
	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _t;

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x45062F0", Offset = "0x45062F0", VA = "0x45062F0")]
	public CastReferenceToEnumInstruction(Type t)
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x4506320", Offset = "0x4506320", VA = "0x4506320", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
