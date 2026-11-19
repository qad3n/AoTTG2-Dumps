// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.CallingConventions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004DB")]
[Flags]
public enum CallingConventions
{
	[Token(Token = "0x4001332")]
	Standard = 1,
	[Token(Token = "0x4001333")]
	VarArgs = 2,
	[Token(Token = "0x4001334")]
	Any = Standard | VarArgs,
	[Token(Token = "0x4001335")]
	HasThis = 0x20,
	[Token(Token = "0x4001336")]
	ExplicitThis = 0x40
}
