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

[Token(Token = "0x200049D")]
internal static class AsyncTaskCache
{
	[Token(Token = "0x400127F")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Task<bool> TrueTask;

	[Token(Token = "0x4001280")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly Task<bool> FalseTask;

	[Token(Token = "0x4001281")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly Task<int>[] Int32Tasks;

	[Token(Token = "0x6002328")]
	[Address(RVA = "0x53CA700", Offset = "0x53C9700", VA = "0x53CA700")]
	private static Task<int>[] CreateInt32Tasks()
	{
		return null;
	}

	[Token(Token = "0x6002329")]
	internal static Task<TResult> CreateCacheableTask<TResult>(TResult result)
	{
		return null;
	}
}
