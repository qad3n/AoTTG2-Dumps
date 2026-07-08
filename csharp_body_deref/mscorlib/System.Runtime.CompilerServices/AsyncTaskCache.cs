using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x2000495")]
internal static class AsyncTaskCache
{
	[Token(Token = "0x400131D")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Task<bool> TrueTask;

	[Token(Token = "0x400131E")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly Task<bool> FalseTask;

	[Token(Token = "0x400131F")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly Task<int>[] Int32Tasks;

	[Token(Token = "0x60022DB")]
	[Address(RVA = "0x4EDD250", Offset = "0x4EDD250", VA = "0x4EDD250")]
	private static Task<int>[] CreateInt32Tasks()
	{
		return null;
	}

	[Token(Token = "0x60022DC")]
	internal static Task<TResult> CreateCacheableTask<TResult>(TResult result)
	{
		return null;
	}
}
