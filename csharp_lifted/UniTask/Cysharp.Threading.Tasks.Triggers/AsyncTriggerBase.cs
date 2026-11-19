// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200018F")]
public abstract class AsyncTriggerBase<T> : MonoBehaviour, IUniTaskAsyncEnumerable<T>
{
	[Token(Token = "0x2000190")]
	private sealed class AsyncTriggerEnumerator : MoveNextSource, IUniTaskAsyncEnumerator<T>, IUniTaskAsyncDisposable, ITriggerHandler<T>
	{
		[Token(Token = "0x400063D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static Action<object> cancellationCallback;

		[Token(Token = "0x400063E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly AsyncTriggerBase<T> parent;

		[Token(Token = "0x400063F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000640")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration registration;

		[Token(Token = "0x4000641")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool called;

		[Token(Token = "0x4000642")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool isDisposed;

		[Token(Token = "0x17000071")]
		public T Current
		{
			[Token(Token = "0x6000A1C")]
			[CompilerGenerated]
			get
			{
				return (T)null;
			}
			[Token(Token = "0x6000A1D")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000072")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002EPrev
		{
			[Token(Token = "0x6000A1E")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000A1F")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000073")]
		private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002ENext
		{
			[Token(Token = "0x6000A20")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000A21")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000A16")]
		public AsyncTriggerEnumerator(AsyncTriggerBase<T> parent, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000A17")]
		public void OnCanceled([Optional] CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000A18")]
		public void OnNext(T value)
		{
		}

		[Token(Token = "0x6000A19")]
		public void OnCompleted()
		{
		}

		[Token(Token = "0x6000A1A")]
		public void OnError(Exception ex)
		{
		}

		[Token(Token = "0x6000A1B")]
		private static void CancellationCallback(object state)
		{
		}

		[Token(Token = "0x6000A22")]
		public UniTask<bool> MoveNextAsync()
		{
			return default(UniTask<bool>);
		}

		[Token(Token = "0x6000A23")]
		public UniTask DisposeAsync()
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x2000191")]
	private class AwakeMonitor : IPlayerLoopItem
	{
		[Token(Token = "0x4000646")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly AsyncTriggerBase<T> trigger;

		[Token(Token = "0x6000A25")]
		public AwakeMonitor(AsyncTriggerBase<T> trigger)
		{
		}

		[Token(Token = "0x6000A26")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x400063A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TriggerEvent<T> triggerEvent;

	[Token(Token = "0x400063B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected internal bool calledAwake;

	[Token(Token = "0x400063C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected internal bool calledDestroy;

	[Token(Token = "0x6000A0F")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000A10")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000A11")]
	internal void AddHandler(ITriggerHandler<T> handler)
	{
	}

	[Token(Token = "0x6000A12")]
	internal void RemoveHandler(ITriggerHandler<T> handler)
	{
	}

	[Token(Token = "0x6000A13")]
	protected void RaiseEvent(T value)
	{
	}

	[Token(Token = "0x6000A14")]
	public IUniTaskAsyncEnumerator<T> GetAsyncEnumerator([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A15")]
	protected AsyncTriggerBase()
	{
	}
}
