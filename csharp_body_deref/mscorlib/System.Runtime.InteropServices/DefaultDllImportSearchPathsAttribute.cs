// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.DefaultDllImportSearchPathsAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000452")]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Method, AllowMultiple = false)]
[ComVisible(false)]
public sealed class DefaultDllImportSearchPathsAttribute : Attribute
{
	[Token(Token = "0x4001219")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal DllImportSearchPath _paths;

	[Token(Token = "0x600221C")]
	[Address(RVA = "0x53C4BF0", Offset = "0x53C3BF0", VA = "0x53C4BF0")]
	public DefaultDllImportSearchPathsAttribute(DllImportSearchPath paths)
	{
	}
}
