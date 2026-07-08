using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks.CompilerServices;
using Cysharp.Threading.Tasks.Internal;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200014C")]
public static class UniTaskObservableExtensions
{
	[Token(Token = "0x200014D")]
	private class ToUniTaskObserver<T> : IObserver<T>
	{
		[Token(Token = "0x4000529")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> callback;

		[Token(Token = "0x400052A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly UniTaskCompletionSource<T> promise;

		[Token(Token = "0x400052B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly SingleAssignmentDisposable disposable;

		[Token(Token = "0x400052C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x400052D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly CancellationTokenRegistration registration;

		[Token(Token = "0x400052E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool hasValue;

		[Token(Token = "0x400052F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T latestValue;

		[Token(Token = "0x60007CC")]
		public ToUniTaskObserver(UniTaskCompletionSource<T> promise, SingleAssignmentDisposable disposable, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60007CD")]
		private static void OnCanceled(object state)
		{
		}

		[Token(Token = "0x60007CE")]
		public void OnNext(T value)
		{
		}

		[Token(Token = "0x60007CF")]
		public void OnError(Exception error)
		{
		}

		[Token(Token = "0x60007D0")]
		public void OnCompleted()
		{
		}
	}

	[Token(Token = "0x200014E")]
	private class FirstValueToUniTaskObserver<T> : IObserver<T>
	{
		[Token(Token = "0x4000530")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> callback;

		[Token(Token = "0x4000531")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly UniTaskCompletionSource<T> promise;

		[Token(Token = "0x4000532")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly SingleAssignmentDisposable disposable;

		[Token(Token = "0x4000533")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x4000534")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly CancellationTokenRegistration registration;

		[Token(Token = "0x4000535")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool hasValue;

		[Token(Token = "0x60007D2")]
		public FirstValueToUniTaskObserver(UniTaskCompletionSource<T> promise, SingleAssignmentDisposable disposable, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60007D3")]
		private static void OnCanceled(object state)
		{
		}

		[Token(Token = "0x60007D4")]
		public void OnNext(T value)
		{
		}

		[Token(Token = "0x60007D5")]
		public void OnError(Exception error)
		{
		}

		[Token(Token = "0x60007D6")]
		public void OnCompleted()
		{
		}
	}

	[Token(Token = "0x200014F")]
	private class ReturnObservable<T> : IObservable<T>
	{
		[Token(Token = "0x4000536")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly T value;

		[Token(Token = "0x60007D8")]
		public ReturnObservable(T value)
		{
		}

		[Token(Token = "0x60007D9")]
		public IDisposable Subscribe(IObserver<T> observer)
		{
			return null;
		}
	}

	[Token(Token = "0x2000150")]
	private class ThrowObservable<T> : IObservable<T>
	{
		[Token(Token = "0x4000537")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Exception value;

		[Token(Token = "0x60007DA")]
		public ThrowObservable(Exception value)
		{
		}

		[Token(Token = "0x60007DB")]
		public IDisposable Subscribe(IObserver<T> observer)
		{
			return null;
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000151")]
	[CompilerGenerated]
	private struct _003CFire_003Ed__3<T> : IAsyncStateMachine
	{
		[Token(Token = "0x4000538")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000539")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400053A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public UniTask<T> task;

		[Token(Token = "0x400053B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncSubject<T> subject;

		[Token(Token = "0x400053C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60007DC")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007DD")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000152")]
	[CompilerGenerated]
	private struct _003CFire_003Ed__4 : IAsyncStateMachine
	{
		[Token(Token = "0x400053D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400053E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400053F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public UniTask task;

		[Token(Token = "0x4000540")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AsyncSubject<AsyncUnit> subject;

		[Token(Token = "0x4000541")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x46D19F0", Offset = "0x46D19F0", VA = "0x46D19F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007DF")]
		[Address(RVA = "0x46D1EE0", Offset = "0x46D1EE0", VA = "0x46D1EE0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x60007C7")]
	public static UniTask<T> ToUniTask<T>(this IObservable<T> source, [Optional][DefaultParameterValue(false)] bool useFirstValue, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60007C8")]
	public static IObservable<T> ToObservable<T>(this UniTask<T> task)
	{
		return null;
	}

	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x46D14F0", Offset = "0x46D14F0", VA = "0x46D14F0")]
	public static IObservable<AsyncUnit> ToObservable(this UniTask task)
	{
		return null;
	}

	[Token(Token = "0x60007CA")]
	[AsyncStateMachine(typeof(_003CFire_003Ed__3<>))]
	private static UniTaskVoid Fire<T>(AsyncSubject<T> subject, UniTask<T> task)
	{
		return default(UniTaskVoid);
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x46D1910", Offset = "0x46D1910", VA = "0x46D1910")]
	[AsyncStateMachine(typeof(_003CFire_003Ed__4))]
	private static UniTaskVoid Fire(AsyncSubject<AsyncUnit> subject, UniTask task)
	{
		return default(UniTaskVoid);
	}
}
