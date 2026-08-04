// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadPoolGlobals
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200020A")]
internal static class ThreadPoolGlobals
{
	[Token(Token = "0x40009DF")]
	[FieldOffset(Offset = "0x0")]
	public static int processorCount;

	[Token(Token = "0x40009E0")]
	[FieldOffset(Offset = "0x4")]
	public static bool vmTpInitialized;

	[Token(Token = "0x40009E1")]
	[FieldOffset(Offset = "0x5")]
	public static bool enableWorkerTracking;

	[Token(Token = "0x40009E2")]
	[FieldOffset(Offset = "0x8")]
	public static readonly System.Threading.ThreadPoolWorkQueue workQueue;
}
