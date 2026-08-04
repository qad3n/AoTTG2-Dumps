// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.ComVisibleAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000440")]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Interface | AttributeTargets.Delegate, Inherited = false)]
[ComVisible(true)]
public sealed class ComVisibleAttribute : Attribute
{
	[Token(Token = "0x4001259")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal bool _val;

	[Token(Token = "0x60021CE")]
	[Address(RVA = "0x3BBD4E0", Offset = "0x3BBD4E0", VA = "0x3BBD4E0")]
	public ComVisibleAttribute(bool visibility)
	{
	}
}
