// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.AsyncLazy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000005")]
public class AsyncLazy
{
	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x0")]
	private static Action<object> continuation;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x10")]
	private Func<UniTask> taskFactory;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x18")]
	private UniTaskCompletionSource completionSource;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x20")]
	private UniTask.Awaiter awaiter;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x30")]
	private object syncLock;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x38")]
	private bool initialized;

	[Token(Token = "0x17000002")]
	public UniTask Task
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x49D1640", Offset = "0x49D1640", VA = "0x49D1640")]
		get
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x49D1130", Offset = "0x49D1130", VA = "0x49D1130")]
	public AsyncLazy(Func<UniTask> taskFactory)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x49D11F0", Offset = "0x49D11F0", VA = "0x49D11F0")]
	internal AsyncLazy(UniTask task)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x49D1710", Offset = "0x49D1710", VA = "0x49D1710")]
	public UniTask.Awaiter GetAwaiter()
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x49D16A0", Offset = "0x49D16A0", VA = "0x49D16A0")]
	private void EnsureInitialized()
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x49D17F0", Offset = "0x49D17F0", VA = "0x49D17F0")]
	private void EnsureInitializedCore()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x49D14C0", Offset = "0x49D14C0", VA = "0x49D14C0")]
	private void SetCompletionSource(in UniTask.Awaiter awaiter)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x49D1CD0", Offset = "0x49D1CD0", VA = "0x49D1CD0")]
	private static void SetCompletionSource(object state)
	{
	}
}
[Token(Token = "0x2000006")]
public class AsyncLazy<T>
{
	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x0")]
	private static Action<object> continuation;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x0")]
	private Func<UniTask<T>> taskFactory;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x0")]
	private UniTaskCompletionSource<T> completionSource;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x0")]
	private UniTask<T>.Awaiter awaiter;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x0")]
	private object syncLock;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x0")]
	private bool initialized;

	[Token(Token = "0x17000003")]
	public UniTask<T> Task
	{
		[Token(Token = "0x6000010")]
		get
		{
			return default(UniTask<T>);
		}
	}

	[Token(Token = "0x600000E")]
	public AsyncLazy(Func<UniTask<T>> taskFactory)
	{
	}

	[Token(Token = "0x600000F")]
	internal AsyncLazy(UniTask<T> task)
	{
	}

	[Token(Token = "0x6000011")]
	public UniTask<T>.Awaiter GetAwaiter()
	{
		return default(UniTask<T>.Awaiter);
	}

	[Token(Token = "0x6000012")]
	private void EnsureInitialized()
	{
	}

	[Token(Token = "0x6000013")]
	private void EnsureInitializedCore()
	{
	}

	[Token(Token = "0x6000014")]
	private void SetCompletionSource(in UniTask<T>.Awaiter awaiter)
	{
	}

	[Token(Token = "0x6000015")]
	private static void SetCompletionSource(object state)
	{
	}
}
