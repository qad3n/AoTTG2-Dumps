// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.AsyncHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000007")]
internal static class AsyncHelper
{
	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Task DoneTask;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Task<bool> DoneTaskTrue;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x10")]
	public static readonly Task<bool> DoneTaskFalse;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x18")]
	public static readonly Task<int> DoneTaskZero;
}
