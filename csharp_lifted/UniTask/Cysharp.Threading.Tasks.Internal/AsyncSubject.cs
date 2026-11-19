// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.AsyncSubject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000253")]
internal sealed class AsyncSubject<T> : IObservable<T>, IObserver<T>
{
	[Token(Token = "0x2000254")]
	private class Subscription : IDisposable
	{
		[Token(Token = "0x40006BB")]
		[FieldOffset(Offset = "0x0")]
		private readonly object gate;

		[Token(Token = "0x40006BC")]
		[FieldOffset(Offset = "0x0")]
		private AsyncSubject<T> parent;

		[Token(Token = "0x40006BD")]
		[FieldOffset(Offset = "0x0")]
		private IObserver<T> unsubscribeTarget;

		[Token(Token = "0x6000D5B")]
		public Subscription(AsyncSubject<T> parent, IObserver<T> unsubscribeTarget)
		{
		}

		[Token(Token = "0x6000D5C")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x40006B4")]
	[FieldOffset(Offset = "0x0")]
	private object observerLock;

	[Token(Token = "0x40006B5")]
	[FieldOffset(Offset = "0x0")]
	private T lastValue;

	[Token(Token = "0x40006B6")]
	[FieldOffset(Offset = "0x0")]
	private bool hasValue;

	[Token(Token = "0x40006B7")]
	[FieldOffset(Offset = "0x0")]
	private bool isStopped;

	[Token(Token = "0x40006B8")]
	[FieldOffset(Offset = "0x0")]
	private bool isDisposed;

	[Token(Token = "0x40006B9")]
	[FieldOffset(Offset = "0x0")]
	private Exception lastError;

	[Token(Token = "0x40006BA")]
	[FieldOffset(Offset = "0x0")]
	private IObserver<T> outObserver;

	[Token(Token = "0x1700007E")]
	public T Value
	{
		[Token(Token = "0x6000D51")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x1700007F")]
	public bool HasObservers
	{
		[Token(Token = "0x6000D52")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000080")]
	public bool IsCompleted
	{
		[Token(Token = "0x6000D53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000D54")]
	public void OnCompleted()
	{
	}

	[Token(Token = "0x6000D55")]
	public void OnError(Exception error)
	{
	}

	[Token(Token = "0x6000D56")]
	public void OnNext(T value)
	{
	}

	[Token(Token = "0x6000D57")]
	public IDisposable Subscribe(IObserver<T> observer)
	{
		return null;
	}

	[Token(Token = "0x6000D58")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D59")]
	private void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x6000D5A")]
	public AsyncSubject()
	{
	}
}
