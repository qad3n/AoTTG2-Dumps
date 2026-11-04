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
[Token(Token = "0x2000007")]
public class AsyncReactiveProperty<T> : IAsyncReactiveProperty<T>, IReadOnlyAsyncReactiveProperty<T>, IUniTaskAsyncEnumerable<T>, IDisposable
{
	[Token(Token = "0x2000008")]
	private sealed class WaitAsyncSource : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>, ITriggerHandler<T>, ITaskPoolNode<WaitAsyncSource>
	{
		[Token(Token = "0x4000011")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static Action<object> cancellationCallback;

		[Token(Token = "0x4000012")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitAsyncSource> pool;

		[Token(Token = "0x4000013")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitAsyncSource nextNode;

		[Token(Token = "0x4000014")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AsyncReactiveProperty<T> parent;

		[Token(Token = "0x4000015")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000016")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000017")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<T> core;

		[Token(Token = "0x17000007")]
		private unsafe ref WaitAsyncSource Cysharp_002EThreading_002ETasks_002EITaskPoolNode_003CCysharp_002EThreading_002ETasks_002EAsyncReactiveProperty_003CT_003E_002EWaitAsyncSource_003E_002ENextNode
		{
			[Token(Token = "0x6000024")]
			get
			{
				return ref *(WaitAsyncSource*)null;
			}
		}

		[Token(Token = "0x17000008")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002EPrev
		{
			[Token(Token = "0x600002F")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000030")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000009")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002ENext
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

		[Token(Token = "0x6000025")]
		static WaitAsyncSource()
		{
		}

		[Token(Token = "0x6000026")]
		private WaitAsyncSource()
		{
		}

		[Token(Token = "0x6000027")]
		public static IUniTaskSource<T> Create(AsyncReactiveProperty<T> parent, CancellationToken cancellationToken, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000028")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x6000029")]
		private static void CancellationCallback(object state)
		{
		}

		[Token(Token = "0x600002A")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x600002B")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600002C")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600002D")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600002E")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000033")]
		public void OnCanceled(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000034")]
		public void OnCompleted()
		{
		}

		[Token(Token = "0x6000035")]
		public void OnError(Exception ex)
		{
		}

		[Token(Token = "0x6000036")]
		public void OnNext(T value)
		{
		}
	}

	[Token(Token = "0x200000A")]
	private sealed class WithoutCurrentEnumerable : IUniTaskAsyncEnumerable<T>
	{
		[Token(Token = "0x400001B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly AsyncReactiveProperty<T> parent;

		[Token(Token = "0x600003A")]
		public WithoutCurrentEnumerable(AsyncReactiveProperty<T> parent)
		{
		}

		[Token(Token = "0x600003B")]
		public IUniTaskAsyncEnumerator<T> GetAsyncEnumerator([Optional] CancellationToken cancellationToken)
		{
			return null;
		}
	}

	[Token(Token = "0x200000B")]
	private sealed class Enumerator : MoveNextSource, IUniTaskAsyncEnumerator<T>, IUniTaskAsyncDisposable, ITriggerHandler<T>
	{
		[Token(Token = "0x400001C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static Action<object> cancellationCallback;

		[Token(Token = "0x400001D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly AsyncReactiveProperty<T> parent;

		[Token(Token = "0x400001E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x400001F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000020")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T value;

		[Token(Token = "0x4000021")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool isDisposed;

		[Token(Token = "0x4000022")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool firstCall;

		[Token(Token = "0x1700000A")]
		public T Current
		{
			[Token(Token = "0x600003D")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x1700000B")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002EPrev
		{
			[Token(Token = "0x600003E")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600003F")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700000C")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002ENext
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

		[Token(Token = "0x600003C")]
		public Enumerator(AsyncReactiveProperty<T> parent, CancellationToken cancellationToken, bool publishCurrentValue)
		{
		}

		[Token(Token = "0x6000042")]
		public UniTask<bool> MoveNextAsync()
		{
			return default(UniTask<bool>);
		}

		[Token(Token = "0x6000043")]
		public UniTask DisposeAsync()
		{
			return default(UniTask);
		}

		[Token(Token = "0x6000044")]
		public void OnNext(T value)
		{
		}

		[Token(Token = "0x6000045")]
		public void OnCanceled(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000046")]
		public void OnCompleted()
		{
		}

		[Token(Token = "0x6000047")]
		public void OnError(Exception ex)
		{
		}

		[Token(Token = "0x6000048")]
		private static void CancellationCallback(object state)
		{
		}
	}

	[Token(Token = "0x400000E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TriggerEvent<T> triggerEvent;

	[Token(Token = "0x400000F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[SerializeField]
	private T latestValue;

	[Token(Token = "0x4000010")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool isValueType;

	[Token(Token = "0x17000006")]
	public T Value
	{
		[Token(Token = "0x600001A")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x600001B")]
		set
		{
		}
	}

	[Token(Token = "0x600001C")]
	public AsyncReactiveProperty(T value)
	{
	}

	[Token(Token = "0x600001D")]
	public IUniTaskAsyncEnumerable<T> WithoutCurrent()
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	public IUniTaskAsyncEnumerator<T> GetAsyncEnumerator(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000020")]
	public static implicit operator T(AsyncReactiveProperty<T> value)
	{
		return (T)null;
	}

	[Token(Token = "0x6000021")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000022")]
	public UniTask<T> WaitAsync([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x6000023")]
	static AsyncReactiveProperty()
	{
	}
}
