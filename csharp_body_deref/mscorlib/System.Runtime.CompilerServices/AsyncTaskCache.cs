// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.AsyncTaskCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004C4")]
internal static class AsyncTaskCache
{
	[Token(Token = "0x400131F")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Task<bool> TrueTask;

	[Token(Token = "0x4001320")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly Task<bool> FalseTask;

	[Token(Token = "0x4001321")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly Task<int>[] Int32Tasks;

	[Token(Token = "0x600235B")]
	[Address(RVA = "0x1A28670", Offset = "0x1A26C70", VA = "0x181A28670")]
	private static Task<int>[] CreateInt32Tasks()
	{
		return null;
	}

	[Token(Token = "0x600235C")]
	internal static Task<TResult> CreateCacheableTask<TResult>(TResult result)
	{
		return null;
	}
}
