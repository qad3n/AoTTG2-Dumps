// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.IPermission
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security;

[Token(Token = "0x20002CC")]
public interface IPermission : ISecurityEncodable
{
	[Token(Token = "0x60017C7")]
	void Demand();

	[Token(Token = "0x60017C8")]
	bool IsSubsetOf(IPermission target);
}
