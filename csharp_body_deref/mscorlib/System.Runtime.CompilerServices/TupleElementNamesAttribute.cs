// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.TupleElementNamesAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004B3")]
[CLSCompliant(false)]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event | AttributeTargets.Parameter | AttributeTargets.ReturnValue)]
public sealed class TupleElementNamesAttribute : Attribute
{
	[Token(Token = "0x4001307")]
	[FieldOffset(Offset = "0x10")]
	private readonly string[] _transformNames;

	[Token(Token = "0x600230D")]
	[Address(RVA = "0x1A38620", Offset = "0x1A36C20", VA = "0x181A38620")]
	public TupleElementNamesAttribute(string[] transformNames)
	{
	}
}
