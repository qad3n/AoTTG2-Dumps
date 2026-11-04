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
[Token(Token = "0x2000394")]
[ComVisible(true)]
public enum LeaseState
{
	[Token(Token = "0x4000EF4")]
	Null,
	[Token(Token = "0x4000EF5")]
	Initial,
	[Token(Token = "0x4000EF6")]
	Active,
	[Token(Token = "0x4000EF7")]
	Renewing,
	[Token(Token = "0x4000EF8")]
	Expired
}
