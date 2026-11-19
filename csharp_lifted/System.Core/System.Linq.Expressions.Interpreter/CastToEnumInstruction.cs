// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.CastToEnumInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000242")]
internal sealed class CastToEnumInstruction : CastInstruction
{
	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _t;

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x5E1B4A0", Offset = "0x5E1A4A0", VA = "0x5E1B4A0")]
	public CastToEnumInstruction(Type t)
	{
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x5E1B4D0", Offset = "0x5E1A4D0", VA = "0x5E1B4D0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
