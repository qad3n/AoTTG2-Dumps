// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.ComVisibleAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000448")]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Interface | AttributeTargets.Delegate, Inherited = false)]
[ComVisible(true)]
public sealed class ComVisibleAttribute : Attribute
{
	[Token(Token = "0x40011BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal bool _val;

	[Token(Token = "0x6002215")]
	[Address(RVA = "0x53C4B50", Offset = "0x53C3B50", VA = "0x53C4B50")]
	public ComVisibleAttribute(bool visibility)
	{
	}
}
