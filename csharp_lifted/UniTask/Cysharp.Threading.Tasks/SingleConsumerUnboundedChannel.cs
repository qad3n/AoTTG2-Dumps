// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.SingleConsumerUnboundedChannel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000021")]
internal class SingleConsumerUnboundedChannel<T> : Channel<T>
{
	[Token(Token = "0x2000022")]
	private sealed class SingleConsumerUnboundedChannelWriter : ChannelWriter<T>
	{
		[Token(Token = "0x400005F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly SingleConsumerUnboundedChannel<T> parent;

		[Token(Token = "0x60000BE")]
		public SingleConsumerUnboundedChannelWriter(SingleConsumerUnboundedChannel<T> parent)
		{
		}

		[Token(Token = "0x60000BF")]
		public override bool TryWrite(T item)
		{
			return default(bool);
		}

		[Token(Token = "0x60000C0")]
		public override bool TryComplete([Optional] Exception error)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000023")]
	private sealed class SingleConsumerUnboundedChannelReader : ChannelReader<T>, IUniTaskSource<bool>, IUniTaskSource, IValueTaskSource, IValueTaskSource<bool>
	{
		[Token(Token = "0x2000024")]
		private sealed class ReadAllAsyncEnumerable : IUniTaskAsyncEnumerable<T>, IUniTaskAsyncEnumerator<T>, IUniTaskAsyncDisposable
		{
			[Token(Token = "0x4000066")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private readonly Action<object> CancellationCallback1Delegate;

			[Token(Token = "0x4000067")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private readonly Action<object> CancellationCallback2Delegate;

			[Token(Token = "0x4000068")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private readonly SingleConsumerUnboundedChannelReader parent;

			[Token(Token = "0x4000069")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private CancellationToken cancellationToken1;

			[Token(Token = "0x400006A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private CancellationToken cancellationToken2;

			[Token(Token = "0x400006B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private CancellationTokenRegistration cancellationTokenRegistration1;

			[Token(Token = "0x400006C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private CancellationTokenRegistration cancellationTokenRegistration2;

			[Token(Token = "0x400006D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private T current;

			[Token(Token = "0x400006E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private bool cacheValue;

			[Token(Token = "0x400006F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private bool running;

			[Token(Token = "0x17000019")]
			public T Current
			{
				[Token(Token = "0x60000D1")]
				get
				{
					return (T)null;
				}
			}

			[Token(Token = "0x60000CF")]
			public ReadAllAsyncEnumerable(SingleConsumerUnboundedChannelReader parent, CancellationToken cancellationToken)
			{
			}

			[Token(Token = "0x60000D0")]
			public IUniTaskAsyncEnumerator<T> GetAsyncEnumerator([Optional] CancellationToken cancellationToken)
			{
				return null;
			}

			[Token(Token = "0x60000D2")]
			public UniTask<bool> MoveNextAsync()
			{
				return default(UniTask<bool>);
			}

			[Token(Token = "0x60000D3")]
			public UniTask DisposeAsync()
			{
				return default(UniTask);
			}

			[Token(Token = "0x60000D4")]
			private static void CancellationCallback1(object state)
			{
			}

			[Token(Token = "0x60000D5")]
			private static void CancellationCallback2(object state)
			{
			}
		}

		[Token(Token = "0x4000060")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Action<object> CancellationCallbackDelegate;

		[Token(Token = "0x4000061")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly SingleConsumerUnboundedChannel<T> parent;

		[Token(Token = "0x4000062")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000063")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000064")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<bool> core;

		[Token(Token = "0x4000065")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal bool isWaiting;

		[Token(Token = "0x17000018")]
		public override UniTask Completion
		{
			[Token(Token = "0x60000C2")]
			get
			{
				return default(UniTask);
			}
		}

		[Token(Token = "0x60000C1")]
		public SingleConsumerUnboundedChannelReader(SingleConsumerUnboundedChannel<T> parent)
		{
		}

		[Token(Token = "0x60000C3")]
		public override bool TryRead(out T item)
		{
			return default(bool);
		}

		[Token(Token = "0x60000C4")]
		public override UniTask<bool> WaitToReadAsync(CancellationToken cancellationToken)
		{
			return default(UniTask<bool>);
		}

		[Token(Token = "0x60000C5")]
		public void SingalContinuation()
		{
		}

		[Token(Token = "0x60000C6")]
		public void SingalCancellation(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60000C7")]
		public void SingalCompleted(Exception error)
		{
		}

		[Token(Token = "0x60000C8")]
		public override IUniTaskAsyncEnumerable<T> ReadAllAsync([Optional] CancellationToken cancellationToken)
		{
			return null;
		}

		[Token(Token = "0x60000C9")]
		private bool Cysharp_002EThreading_002ETasks_002EIUniTaskSource_003CSystem_002EBoolean_003E_002EGetResult(short token)
		{
			return default(bool);
		}

		[Token(Token = "0x60000CA")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60000CB")]
		private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60000CC")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EOnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60000CD")]
		private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EUnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60000CE")]
		private static void CancellationCallback(object state)
		{
		}
	}

	[Token(Token = "0x4000059")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Queue<T> items;

	[Token(Token = "0x400005A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly SingleConsumerUnboundedChannelReader readerSource;

	[Token(Token = "0x400005B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private UniTaskCompletionSource completedTaskSource;

	[Token(Token = "0x400005C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private UniTask completedTask;

	[Token(Token = "0x400005D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Exception completionError;

	[Token(Token = "0x400005E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private bool closed;

	[Token(Token = "0x60000BD")]
	public SingleConsumerUnboundedChannel()
	{
	}
}
