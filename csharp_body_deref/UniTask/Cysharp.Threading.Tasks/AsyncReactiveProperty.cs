// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.AsyncReactiveProperty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks;

[Serializable]
[Token(Token = "0x2000009")]
public class AsyncReactiveProperty<T> : IAsyncReactiveProperty<T>, IReadOnlyAsyncReactiveProperty<T>, IUniTaskAsyncEnumerable<T>, IDisposable
{
	[Token(Token = "0x200000A")]
	private sealed class WaitAsyncSource : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>, ITriggerHandler<T>, ITaskPoolNode<WaitAsyncSource>
	{
		[Token(Token = "0x4000016")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static Action<object> cancellationCallback;

		[Token(Token = "0x4000017")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitAsyncSource> pool;

		[Token(Token = "0x4000018")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitAsyncSource nextNode;

		[Token(Token = "0x4000019")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AsyncReactiveProperty<T> parent;

		[Token(Token = "0x400001A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400001B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400001C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<T> core;

		[Token(Token = "0x17000007")]
		private unsafe ref WaitAsyncSource Cysharp_002EThreading_002ETasks_002EITaskPoolNode_003CCysharp_002EThreading_002ETasks_002EAsyncReactiveProperty_003CT_003E_002EWaitAsyncSource_003E_002ENextNode
		{
			[Token(Token = "0x6000026")]
			get
			{
				return ref *(WaitAsyncSource*)null;
			}
		}

		[Token(Token = "0x17000008")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002EPrev
		{
			[Token(Token = "0x6000031")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000032")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000009")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002ENext
		{
			[Token(Token = "0x6000033")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000034")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000027")]
		static WaitAsyncSource()
		{
		}

		[Token(Token = "0x6000028")]
		private WaitAsyncSource()
		{
		}

		[Token(Token = "0x6000029")]
		public static IUniTaskSource<T> Create(AsyncReactiveProperty<T> parent, CancellationToken cancellationToken, out short token)
		{
			return null;
		}

		[Token(Token = "0x600002A")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x600002B")]
		private static void CancellationCallback(object state)
		{
		}

		[Token(Token = "0x600002C")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x600002D")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600002E")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600002F")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000030")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000035")]
		public void OnCanceled(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000036")]
		public void OnCompleted()
		{
		}

		[Token(Token = "0x6000037")]
		public void OnError(Exception ex)
		{
		}

		[Token(Token = "0x6000038")]
		public void OnNext(T value)
		{
		}
	}

	[Token(Token = "0x200000C")]
	private sealed class WithoutCurrentEnumerable : IUniTaskAsyncEnumerable<T>
	{
		[Token(Token = "0x4000020")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly AsyncReactiveProperty<T> parent;

		[Token(Token = "0x600003C")]
		public WithoutCurrentEnumerable(AsyncReactiveProperty<T> parent)
		{
		}

		[Token(Token = "0x600003D")]
		public IUniTaskAsyncEnumerator<T> GetAsyncEnumerator([Optional] CancellationToken cancellationToken)
		{
			return null;
		}
	}

	[Token(Token = "0x200000D")]
	private sealed class Enumerator : MoveNextSource, IUniTaskAsyncEnumerator<T>, IUniTaskAsyncDisposable, ITriggerHandler<T>
	{
		[Token(Token = "0x4000021")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static Action<object> cancellationCallback;

		[Token(Token = "0x4000022")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly AsyncReactiveProperty<T> parent;

		[Token(Token = "0x4000023")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x4000024")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000025")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T value;

		[Token(Token = "0x4000026")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool isDisposed;

		[Token(Token = "0x4000027")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool firstCall;

		[Token(Token = "0x1700000A")]
		public T Current
		{
			[Token(Token = "0x600003F")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x1700000B")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002EPrev
		{
			[Token(Token = "0x6000040")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000041")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700000C")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002ENext
		{
			[Token(Token = "0x6000042")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000043")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x600003E")]
		public Enumerator(AsyncReactiveProperty<T> parent, CancellationToken cancellationToken, bool publishCurrentValue)
		{
		}

		[Token(Token = "0x6000044")]
		public UniTask<bool> MoveNextAsync()
		{
			return default(UniTask<bool>);
		}

		[Token(Token = "0x6000045")]
		public UniTask DisposeAsync()
		{
			return default(UniTask);
		}

		[Token(Token = "0x6000046")]
		public void OnNext(T value)
		{
		}

		[Token(Token = "0x6000047")]
		public void OnCanceled(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000048")]
		public void OnCompleted()
		{
		}

		[Token(Token = "0x6000049")]
		public void OnError(Exception ex)
		{
		}

		[Token(Token = "0x600004A")]
		private static void CancellationCallback(object state)
		{
		}
	}

	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TriggerEvent<T> triggerEvent;

	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[SerializeField]
	private T latestValue;

	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool isValueType;

	[Token(Token = "0x17000006")]
	public T Value
	{
		[Token(Token = "0x600001C")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x600001D")]
		set
		{
		}
	}

	[Token(Token = "0x600001E")]
	public AsyncReactiveProperty(T value)
	{
	}

	[Token(Token = "0x600001F")]
	public IUniTaskAsyncEnumerable<T> WithoutCurrent()
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	public IUniTaskAsyncEnumerator<T> GetAsyncEnumerator(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000022")]
	public static implicit operator T(AsyncReactiveProperty<T> value)
	{
		return (T)null;
	}

	[Token(Token = "0x6000023")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000024")]
	public UniTask<T> WaitAsync([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x6000025")]
	static AsyncReactiveProperty()
	{
	}
}
