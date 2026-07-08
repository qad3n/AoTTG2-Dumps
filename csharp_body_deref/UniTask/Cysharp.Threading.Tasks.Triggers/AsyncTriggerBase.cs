using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200018C")]
public abstract class AsyncTriggerBase<T> : MonoBehaviour, IUniTaskAsyncEnumerable<T>
{
	[Token(Token = "0x200018D")]
	private sealed class AsyncTriggerEnumerator : MoveNextSource, IUniTaskAsyncEnumerator<T>, IUniTaskAsyncDisposable, ITriggerHandler<T>
	{
		[Token(Token = "0x400062A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static Action<object> cancellationCallback;

		[Token(Token = "0x400062B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly AsyncTriggerBase<T> parent;

		[Token(Token = "0x400062C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400062D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration registration;

		[Token(Token = "0x400062E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool called;

		[Token(Token = "0x400062F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool isDisposed;

		[Token(Token = "0x1700006F")]
		public T Current
		{
			[Token(Token = "0x60009F8")]
			[CompilerGenerated]
			get
			{
				return (T)null;
			}
			[Token(Token = "0x60009F9")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000070")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002EPrev
		{
			[Token(Token = "0x60009FA")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60009FB")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000071")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002ENext
		{
			[Token(Token = "0x60009FC")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60009FD")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60009F2")]
		public AsyncTriggerEnumerator(AsyncTriggerBase<T> parent, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60009F3")]
		public void OnCanceled([Optional] CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60009F4")]
		public void OnNext(T value)
		{
		}

		[Token(Token = "0x60009F5")]
		public void OnCompleted()
		{
		}

		[Token(Token = "0x60009F6")]
		public void OnError(Exception ex)
		{
		}

		[Token(Token = "0x60009F7")]
		private static void CancellationCallback(object state)
		{
		}

		[Token(Token = "0x60009FE")]
		public UniTask<bool> MoveNextAsync()
		{
			return default(UniTask<bool>);
		}

		[Token(Token = "0x60009FF")]
		public UniTask DisposeAsync()
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x200018E")]
	private class AwakeMonitor : IPlayerLoopItem
	{
		[Token(Token = "0x4000633")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly AsyncTriggerBase<T> trigger;

		[Token(Token = "0x6000A01")]
		public AwakeMonitor(AsyncTriggerBase<T> trigger)
		{
		}

		[Token(Token = "0x6000A02")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000627")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TriggerEvent<T> triggerEvent;

	[Token(Token = "0x4000628")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected internal bool calledAwake;

	[Token(Token = "0x4000629")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected internal bool calledDestroy;

	[Token(Token = "0x60009EB")]
	private void Awake()
	{
	}

	[Token(Token = "0x60009EC")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60009ED")]
	internal void AddHandler(ITriggerHandler<T> handler)
	{
	}

	[Token(Token = "0x60009EE")]
	internal void RemoveHandler(ITriggerHandler<T> handler)
	{
	}

	[Token(Token = "0x60009EF")]
	protected void RaiseEvent(T value)
	{
	}

	[Token(Token = "0x60009F0")]
	public IUniTaskAsyncEnumerator<T> GetAsyncEnumerator([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60009F1")]
	protected AsyncTriggerBase()
	{
	}
}
