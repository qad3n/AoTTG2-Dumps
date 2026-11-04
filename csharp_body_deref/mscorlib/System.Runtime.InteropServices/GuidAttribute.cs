// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.GuidAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000473")]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface | AttributeTargets.Delegate, Inherited = false)]
[ComVisible(true)]
public sealed class GuidAttribute : Attribute
{
	[Token(Token = "0x40012B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal string _val;

	[Token(Token = "0x6002241")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public GuidAttribute(string guid)
	{
	}
}
