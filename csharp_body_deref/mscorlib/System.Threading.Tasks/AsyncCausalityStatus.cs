// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.AsyncCausalityStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000260")]
[System.Runtime.CompilerServices.FriendAccessAllowed]
internal enum AsyncCausalityStatus
{
	[Token(Token = "0x4000B0F")]
	Started,
	[Token(Token = "0x4000B10")]
	Completed,
	[Token(Token = "0x4000B11")]
	Canceled,
	[Token(Token = "0x4000B12")]
	Error
}
