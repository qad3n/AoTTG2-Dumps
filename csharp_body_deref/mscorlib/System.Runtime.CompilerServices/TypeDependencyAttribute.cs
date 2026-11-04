// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.TypeDependencyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004D3")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Interface, AllowMultiple = true, Inherited = false)]
internal sealed class TypeDependencyAttribute : Attribute
{
	[Token(Token = "0x400133D")]
	[FieldOffset(Offset = "0x10")]
	private string typeName;

	[Token(Token = "0x6002380")]
	[Address(RVA = "0x1A587F0", Offset = "0x1A56DF0", VA = "0x181A587F0")]
	public TypeDependencyAttribute(string typeName)
	{
	}
}
