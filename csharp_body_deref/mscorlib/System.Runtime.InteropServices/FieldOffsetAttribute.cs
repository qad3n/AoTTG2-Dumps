// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.FieldOffsetAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x200047B")]
[AttributeUsage(AttributeTargets.Field, Inherited = false)]
[ComVisible(true)]
public sealed class FieldOffsetAttribute : Attribute
{
	[Token(Token = "0x40012C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int _val;

	[Token(Token = "0x600224C")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public FieldOffsetAttribute(int offset)
	{
	}
}
