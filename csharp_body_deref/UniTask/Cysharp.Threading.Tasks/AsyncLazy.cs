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

[Token(Token = "0x2000003")]
public class AsyncLazy
{
	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x0")]
	private static Action<object> continuation;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x10")]
	private Func<UniTask> taskFactory;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x18")]
	private UniTaskCompletionSource completionSource;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x20")]
	private UniTask.Awaiter awaiter;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x30")]
	private object syncLock;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x38")]
	private bool initialized;

	[Token(Token = "0x17000002")]
	public UniTask Task
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x2907320", Offset = "0x2905920", VA = "0x182907320")]
		get
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x2907260", Offset = "0x2905860", VA = "0x182907260")]
	public AsyncLazy(Func<UniTask> taskFactory)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x2907060", Offset = "0x2905660", VA = "0x182907060")]
	internal AsyncLazy(UniTask task)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x2906CD0", Offset = "0x29052D0", VA = "0x182906CD0")]
	public UniTask.Awaiter GetAwaiter()
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x2906CA0", Offset = "0x29052A0", VA = "0x182906CA0")]
	private void EnsureInitialized()
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x2906A30", Offset = "0x2905030", VA = "0x182906A30")]
	private void EnsureInitializedCore()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x2906D90", Offset = "0x2905390", VA = "0x182906D90")]
	private void SetCompletionSource(in UniTask.Awaiter awaiter)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x2906E30", Offset = "0x2905430", VA = "0x182906E30")]
	private static void SetCompletionSource(object state)
	{
	}
}
[Token(Token = "0x2000004")]
public class AsyncLazy<T>
{
	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x0")]
	private static Action<object> continuation;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x0")]
	private Func<UniTask<T>> taskFactory;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x0")]
	private UniTaskCompletionSource<T> completionSource;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x0")]
	private UniTask<T>.Awaiter awaiter;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x0")]
	private object syncLock;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x0")]
	private bool initialized;

	[Token(Token = "0x17000003")]
	public UniTask<T> Task
	{
		[Token(Token = "0x600000E")]
		get
		{
			return default(UniTask<T>);
		}
	}

	[Token(Token = "0x600000C")]
	public AsyncLazy(Func<UniTask<T>> taskFactory)
	{
	}

	[Token(Token = "0x600000D")]
	internal AsyncLazy(UniTask<T> task)
	{
	}

	[Token(Token = "0x600000F")]
	public UniTask<T>.Awaiter GetAwaiter()
	{
		return default(UniTask<T>.Awaiter);
	}

	[Token(Token = "0x6000010")]
	private void EnsureInitialized()
	{
	}

	[Token(Token = "0x6000011")]
	private void EnsureInitializedCore()
	{
	}

	[Token(Token = "0x6000012")]
	private void SetCompletionSource(in UniTask<T>.Awaiter awaiter)
	{
	}

	[Token(Token = "0x6000013")]
	private static void SetCompletionSource(object state)
	{
	}
}
