// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.IPermission
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security;

[Token(Token = "0x200029D")]
public interface IPermission : ISecurityEncodable
{
	[Token(Token = "0x600175F")]
	void Demand();

	[Token(Token = "0x6001760")]
	bool IsSubsetOf(IPermission target);
}
