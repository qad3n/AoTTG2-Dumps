using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000250")]
internal sealed class AsyncSubject<T> : IObservable<T>, IObserver<T>
{
	[Token(Token = "0x2000251")]
	private class Subscription : IDisposable
	{
		[Token(Token = "0x40006A8")]
		[FieldOffset(Offset = "0x0")]
		private readonly object gate;

		[Token(Token = "0x40006A9")]
		[FieldOffset(Offset = "0x0")]
		private AsyncSubject<T> parent;

		[Token(Token = "0x40006AA")]
		[FieldOffset(Offset = "0x0")]
		private IObserver<T> unsubscribeTarget;

		[Token(Token = "0x6000D37")]
		public Subscription(AsyncSubject<T> parent, IObserver<T> unsubscribeTarget)
		{
		}

		[Token(Token = "0x6000D38")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x40006A1")]
	[FieldOffset(Offset = "0x0")]
	private object observerLock;

	[Token(Token = "0x40006A2")]
	[FieldOffset(Offset = "0x0")]
	private T lastValue;

	[Token(Token = "0x40006A3")]
	[FieldOffset(Offset = "0x0")]
	private bool hasValue;

	[Token(Token = "0x40006A4")]
	[FieldOffset(Offset = "0x0")]
	private bool isStopped;

	[Token(Token = "0x40006A5")]
	[FieldOffset(Offset = "0x0")]
	private bool isDisposed;

	[Token(Token = "0x40006A6")]
	[FieldOffset(Offset = "0x0")]
	private Exception lastError;

	[Token(Token = "0x40006A7")]
	[FieldOffset(Offset = "0x0")]
	private IObserver<T> outObserver;

	[Token(Token = "0x1700007C")]
	public T Value
	{
		[Token(Token = "0x6000D2D")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x1700007D")]
	public bool HasObservers
	{
		[Token(Token = "0x6000D2E")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007E")]
	public bool IsCompleted
	{
		[Token(Token = "0x6000D2F")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000D30")]
	public void OnCompleted()
	{
	}

	[Token(Token = "0x6000D31")]
	public void OnError(Exception error)
	{
	}

	[Token(Token = "0x6000D32")]
	public void OnNext(T value)
	{
	}

	[Token(Token = "0x6000D33")]
	public IDisposable Subscribe(IObserver<T> observer)
	{
		return null;
	}

	[Token(Token = "0x6000D34")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D35")]
	private void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x6000D36")]
	public AsyncSubject()
	{
	}
}
