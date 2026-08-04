// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.ICustomAttributeProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004DD")]
public interface ICustomAttributeProvider
{
	[Token(Token = "0x600241F")]
	object[] GetCustomAttributes(bool inherit);

	[Token(Token = "0x6002420")]
	object[] GetCustomAttributes(Type attributeType, bool inherit);

	[Token(Token = "0x6002421")]
	bool IsDefined(Type attributeType, bool inherit);
}
