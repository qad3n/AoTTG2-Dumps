using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks.Sources;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200000E")]
public class ReadOnlyAsyncReactiveProperty<T> : IReadOnlyAsyncReactiveProperty<T>, IUniTaskAsyncEnumerable<T>, IDisposable
{
	[Token(Token = "0x200000F")]
	private sealed class WaitAsyncSource : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>, ITriggerHandler<T>, ITaskPoolNode<WaitAsyncSource>
	{
		[Token(Token = "0x400002E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static Action<object> cancellationCallback;

		[Token(Token = "0x400002F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitAsyncSource> pool;

		[Token(Token = "0x4000030")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitAsyncSource nextNode;

		[Token(Token = "0x4000031")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ReadOnlyAsyncReactiveProperty<T> parent;

		[Token(Token = "0x4000032")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000033")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000034")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<T> core;

		[Token(Token = "0x1700000E")]
		private unsafe ref WaitAsyncSource Cysharp_002EThreading_002ETasks_002EITaskPoolNode_003CCysharp_002EThreading_002ETasks_002EReadOnlyAsyncReactiveProperty_003CT_003E_002EWaitAsyncSource_003E_002ENextNode
		{
			[Token(Token = "0x6000057")]
			get
			{
				return ref *(WaitAsyncSource*)null;
			}
		}

		[Token(Token = "0x1700000F")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002EPrev
		{
			[Token(Token = "0x6000062")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000063")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000010")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002ENext
		{
			[Token(Token = "0x6000064")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000065")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000058")]
		static WaitAsyncSource()
		{
		}

		[Token(Token = "0x6000059")]
		private WaitAsyncSource()
		{
		}

		[Token(Token = "0x600005A")]
		public static IUniTaskSource<T> Create(ReadOnlyAsyncReactiveProperty<T> parent, CancellationToken cancellationToken, out short token)
		{
			return null;
		}

		[Token(Token = "0x600005B")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x600005C")]
		private static void CancellationCallback(object state)
		{
		}

		[Token(Token = "0x600005D")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x600005E")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600005F")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000060")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000061")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000066")]
		public void OnCanceled(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000067")]
		public void OnCompleted()
		{
		}

		[Token(Token = "0x6000068")]
		public void OnError(Exception ex)
		{
		}

		[Token(Token = "0x6000069")]
		public void OnNext(T value)
		{
		}
	}

	[Token(Token = "0x2000011")]
	private sealed class WithoutCurrentEnumerable : IUniTaskAsyncEnumerable<T>
	{
		[Token(Token = "0x4000038")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly ReadOnlyAsyncReactiveProperty<T> parent;

		[Token(Token = "0x600006D")]
		public WithoutCurrentEnumerable(ReadOnlyAsyncReactiveProperty<T> parent)
		{
		}

		[Token(Token = "0x600006E")]
		public IUniTaskAsyncEnumerator<T> GetAsyncEnumerator([Optional] CancellationToken cancellationToken)
		{
			return null;
		}
	}

	[Token(Token = "0x2000012")]
	private sealed class Enumerator : MoveNextSource, IUniTaskAsyncEnumerator<T>, IUniTaskAsyncDisposable, ITriggerHandler<T>
	{
		[Token(Token = "0x4000039")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static Action<object> cancellationCallback;

		[Token(Token = "0x400003A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly ReadOnlyAsyncReactiveProperty<T> parent;

		[Token(Token = "0x400003B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x400003C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400003D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T value;

		[Token(Token = "0x400003E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool isDisposed;

		[Token(Token = "0x400003F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool firstCall;

		[Token(Token = "0x17000011")]
		public T Current
		{
			[Token(Token = "0x6000070")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000012")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002EPrev
		{
			[Token(Token = "0x6000071")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000072")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000013")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002ENext
		{
			[Token(Token = "0x6000073")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000074")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x600006F")]
		public Enumerator(ReadOnlyAsyncReactiveProperty<T> parent, CancellationToken cancellationToken, bool publishCurrentValue)
		{
		}

		[Token(Token = "0x6000075")]
		public UniTask<bool> MoveNextAsync()
		{
			return default(UniTask<bool>);
		}

		[Token(Token = "0x6000076")]
		public UniTask DisposeAsync()
		{
			return default(UniTask);
		}

		[Token(Token = "0x6000077")]
		public void OnNext(T value)
		{
		}

		[Token(Token = "0x6000078")]
		public void OnCanceled(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000079")]
		public void OnCompleted()
		{
		}

		[Token(Token = "0x600007A")]
		public void OnError(Exception ex)
		{
		}

		[Token(Token = "0x600007B")]
		private static void CancellationCallback(object state)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000013")]
	[CompilerGenerated]
	private struct _003CConsumeEnumerator_003Ed__7 : IAsyncStateMachine
	{
		[Token(Token = "0x4000042")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000043")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000044")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ReadOnlyAsyncReactiveProperty<T> _003C_003E4__this;

		[Token(Token = "0x4000045")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public IUniTaskAsyncEnumerable<T> source;

		[Token(Token = "0x4000046")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000047")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x4000048")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x4000049")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<bool>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x400004A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask.Awaiter _003C_003Eu__2;

		[Token(Token = "0x600007D")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600007E")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x400002A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TriggerEvent<T> triggerEvent;

	[Token(Token = "0x400002B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private T latestValue;

	[Token(Token = "0x400002C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IUniTaskAsyncEnumerator<T> enumerator;

	[Token(Token = "0x400002D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool isValueType;

	[Token(Token = "0x1700000D")]
	public T Value
	{
		[Token(Token = "0x600004C")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x600004D")]
	public ReadOnlyAsyncReactiveProperty(T initialValue, IUniTaskAsyncEnumerable<T> source, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x600004E")]
	public ReadOnlyAsyncReactiveProperty(IUniTaskAsyncEnumerable<T> source, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x600004F")]
	[AsyncStateMachine(typeof(ReadOnlyAsyncReactiveProperty<>._003CConsumeEnumerator_003Ed__7))]
	private UniTaskVoid ConsumeEnumerator(IUniTaskAsyncEnumerable<T> source, CancellationToken cancellationToken)
	{
		return default(UniTaskVoid);
	}

	[Token(Token = "0x6000050")]
	public IUniTaskAsyncEnumerable<T> WithoutCurrent()
	{
		return null;
	}

	[Token(Token = "0x6000051")]
	public IUniTaskAsyncEnumerator<T> GetAsyncEnumerator(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000052")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000053")]
	public static implicit operator T(ReadOnlyAsyncReactiveProperty<T> value)
	{
		return (T)null;
	}

	[Token(Token = "0x6000054")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000055")]
	public UniTask<T> WaitAsync([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x6000056")]
	static ReadOnlyAsyncReactiveProperty()
	{
	}
}
