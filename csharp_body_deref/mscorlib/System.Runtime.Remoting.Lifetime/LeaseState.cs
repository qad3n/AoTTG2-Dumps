// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Lifetime.LeaseState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Lifetime;

[Serializable]
[Token(Token = "0x2000365")]
[ComVisible(true)]
public enum LeaseState
{
	[Token(Token = "0x4000EE7")]
	Null,
	[Token(Token = "0x4000EE8")]
	Initial,
	[Token(Token = "0x4000EE9")]
	Active,
	[Token(Token = "0x4000EEA")]
	Renewing,
	[Token(Token = "0x4000EEB")]
	Expired
}
