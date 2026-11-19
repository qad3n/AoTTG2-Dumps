// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.CastReferenceToEnumInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000243")]
internal sealed class CastReferenceToEnumInstruction : CastInstruction
{
	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _t;

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x5E1B550", Offset = "0x5E1A550", VA = "0x5E1B550")]
	public CastReferenceToEnumInstruction(Type t)
	{
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x5E1B580", Offset = "0x5E1A580", VA = "0x5E1B580", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
