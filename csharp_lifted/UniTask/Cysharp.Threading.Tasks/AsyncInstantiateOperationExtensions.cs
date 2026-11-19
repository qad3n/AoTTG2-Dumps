// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.AsyncInstantiateOperationExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200016C")]
public static class AsyncInstantiateOperationExtensions
{
	[Token(Token = "0x200016D")]
	private sealed class AsyncInstantiateOperationConfiguredSource : IUniTaskSource<UnityEngine.Object[]>, IUniTaskSource, IValueTaskSource, IValueTaskSource<UnityEngine.Object[]>, IPlayerLoopItem, ITaskPoolNode<AsyncInstantiateOperationConfiguredSource>
	{
		[Token(Token = "0x40005B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AsyncInstantiateOperationConfiguredSource> pool;

		[Token(Token = "0x40005B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private AsyncInstantiateOperationConfiguredSource nextNode;

		[Token(Token = "0x40005B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private AsyncInstantiateOperation asyncOperation;

		[Token(Token = "0x40005B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x40005B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x40005B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x40005B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x40005B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x40005BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<UnityEngine.Object[]> core;

		[Token(Token = "0x40005BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000065")]
		public unsafe ref AsyncInstantiateOperationConfiguredSource NextNode
		{
			[Token(Token = "0x60008DF")]
			[Address(RVA = "0x62EFCD0", Offset = "0x62EECD0", VA = "0x62EFCD0", Slot = "24")]
			get
			{
				return ref *(AsyncInstantiateOperationConfiguredSource*)null;
			}
		}

		[Token(Token = "0x60008E0")]
		[Address(RVA = "0x62EFCE0", Offset = "0x62EECE0", VA = "0x62EFCE0")]
		static AsyncInstantiateOperationConfiguredSource()
		{
		}

		[Token(Token = "0x60008E1")]
		[Address(RVA = "0x62EFDE0", Offset = "0x62EEDE0", VA = "0x62EFDE0")]
		private AsyncInstantiateOperationConfiguredSource()
		{
		}

		[Token(Token = "0x60008E2")]
		[Address(RVA = "0x62EF8D0", Offset = "0x62EE8D0", VA = "0x62EF8D0")]
		public static IUniTaskSource<UnityEngine.Object[]> Create(AsyncInstantiateOperation asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60008E3")]
		[Address(RVA = "0x62EFE60", Offset = "0x62EEE60", VA = "0x62EFE60", Slot = "22")]
		public UnityEngine.Object[] GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x60008E4")]
		[Address(RVA = "0x62EFF70", Offset = "0x62EEF70", VA = "0x62EFF70", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60008E5")]
		[Address(RVA = "0x62EFF80", Offset = "0x62EEF80", VA = "0x62EFF80", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008E6")]
		[Address(RVA = "0x62EFFD0", Offset = "0x62EEFD0", VA = "0x62EFFD0", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008E7")]
		[Address(RVA = "0x62F0080", Offset = "0x62EF080", VA = "0x62F0080", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008E8")]
		[Address(RVA = "0x62F00E0", Offset = "0x62EF0E0", VA = "0x62F00E0", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008E9")]
		[Address(RVA = "0x62F0280", Offset = "0x62EF280", VA = "0x62F0280")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60008EA")]
		[Address(RVA = "0x62F0370", Offset = "0x62EF370", VA = "0x62F0370")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x200016F")]
	private sealed class AsyncInstantiateOperationConfiguredSource<T> : IUniTaskSource<T[]>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T[]>, IPlayerLoopItem, ITaskPoolNode<AsyncInstantiateOperationConfiguredSource<T>> where T : UnityEngine.Object
	{
		[Token(Token = "0x40005BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AsyncInstantiateOperationConfiguredSource<T>> pool;

		[Token(Token = "0x40005BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AsyncInstantiateOperationConfiguredSource<T> nextNode;

		[Token(Token = "0x40005C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AsyncInstantiateOperation<T> asyncOperation;

		[Token(Token = "0x40005C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IProgress<float> progress;

		[Token(Token = "0x40005C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x40005C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x40005C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool cancelImmediately;

		[Token(Token = "0x40005C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool completed;

		[Token(Token = "0x40005C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<T[]> core;

		[Token(Token = "0x40005C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000066")]
		public unsafe ref AsyncInstantiateOperationConfiguredSource<T> NextNode
		{
			[Token(Token = "0x60008EF")]
			get
			{
				return ref *(AsyncInstantiateOperationConfiguredSource<T>*)null;
			}
		}

		[Token(Token = "0x60008F0")]
		static AsyncInstantiateOperationConfiguredSource()
		{
		}

		[Token(Token = "0x60008F1")]
		private AsyncInstantiateOperationConfiguredSource()
		{
		}

		[Token(Token = "0x60008F2")]
		public static IUniTaskSource<T[]> Create(AsyncInstantiateOperation<T> asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60008F3")]
		public T[] GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x60008F4")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60008F5")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008F6")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008F7")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008F8")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008F9")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60008FA")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x60008D9")]
	public static UniTask<UnityEngine.Object[]> WithCancellation<T>(this AsyncInstantiateOperation asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60008DA")]
	public static UniTask<UnityEngine.Object[]> WithCancellation<T>(this AsyncInstantiateOperation asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x62EF6F0", Offset = "0x62EE6F0", VA = "0x62EF6F0")]
	public static UniTask<UnityEngine.Object[]> ToUniTask(this AsyncInstantiateOperation asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60008DC")]
	public static UniTask<T[]> WithCancellation<T>(this AsyncInstantiateOperation<T> asyncOperation, CancellationToken cancellationToken) where T : UnityEngine.Object
	{
		return default(UniTask<T[]>);
	}

	[Token(Token = "0x60008DD")]
	public static UniTask<T[]> WithCancellation<T>(this AsyncInstantiateOperation<T> asyncOperation, CancellationToken cancellationToken, bool cancelImmediately) where T : UnityEngine.Object
	{
		return default(UniTask<T[]>);
	}

	[Token(Token = "0x60008DE")]
	public static UniTask<T[]> ToUniTask<T>(this AsyncInstantiateOperation<T> asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false) where T : UnityEngine.Object
	{
		return default(UniTask<T[]>);
	}
}
