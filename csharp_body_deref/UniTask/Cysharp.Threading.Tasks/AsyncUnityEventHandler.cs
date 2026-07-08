using System;
using System.Threading;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000177")]
public class AsyncUnityEventHandler : IUniTaskSource, IValueTaskSource, IDisposable, IAsyncClickEventHandler
{
	[Token(Token = "0x40005B9")]
	[FieldOffset(Offset = "0x0")]
	private static Action<object> cancellationCallback;

	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0x10")]
	private readonly UnityAction action;

	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0x18")]
	private readonly UnityEvent unityEvent;

	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0x20")]
	private CancellationToken cancellationToken;

	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x28")]
	private CancellationTokenRegistration registration;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x40")]
	private bool isDisposed;

	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0x41")]
	private bool callOnce;

	[Token(Token = "0x40005C0")]
	[FieldOffset(Offset = "0x48")]
	private UniTaskCompletionSourceCore<AsyncUnit> core;

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x46D6860", Offset = "0x46D6860", VA = "0x46D6860")]
	public AsyncUnityEventHandler(UnityEvent unityEvent, CancellationToken cancellationToken, bool callOnce)
	{
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x46D6AA0", Offset = "0x46D6AA0", VA = "0x46D6AA0")]
	public UniTask OnInvokeAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x46DD7A0", Offset = "0x46DD7A0", VA = "0x46DD7A0")]
	private void Invoke()
	{
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x46DD820", Offset = "0x46DD820", VA = "0x46DD820")]
	private static void CancellationCallback(object state)
	{
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x46DD8F0", Offset = "0x46DD8F0", VA = "0x46DD8F0", Slot = "14")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x46DD960", Offset = "0x46DD960", VA = "0x46DD960", Slot = "15")]
	private UniTask Cysharp_002EThreading_002ETasks_002EIAsyncClickEventHandler_002EOnClickAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x46DD970", Offset = "0x46DD970", VA = "0x46DD970", Slot = "6")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x46DDAE0", Offset = "0x46DDAE0", VA = "0x46DDAE0", Slot = "4")]
	private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x46DDB30", Offset = "0x46DDB30", VA = "0x46DDB30", Slot = "7")]
	private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EUnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x46DDBE0", Offset = "0x46DDBE0", VA = "0x46DDBE0", Slot = "5")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EOnCompleted(Action<object> continuation, object state, short token)
	{
	}
}
[Token(Token = "0x2000178")]
public class AsyncUnityEventHandler<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>, IDisposable, IAsyncValueChangedEventHandler<T>, IAsyncEndEditEventHandler<T>, IAsyncEndTextSelectionEventHandler<T>, IAsyncTextSelectionEventHandler<T>, IAsyncDeselectEventHandler<T>, IAsyncSelectEventHandler<T>, IAsyncSubmitEventHandler<T>
{
	[Token(Token = "0x40005C1")]
	[FieldOffset(Offset = "0x0")]
	private static Action<object> cancellationCallback;

	[Token(Token = "0x40005C2")]
	[FieldOffset(Offset = "0x0")]
	private readonly UnityAction<T> action;

	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x0")]
	private readonly UnityEvent<T> unityEvent;

	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x0")]
	private CancellationToken cancellationToken;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x0")]
	private CancellationTokenRegistration registration;

	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x0")]
	private bool isDisposed;

	[Token(Token = "0x40005C7")]
	[FieldOffset(Offset = "0x0")]
	private bool callOnce;

	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0x0")]
	private UniTaskCompletionSourceCore<T> core;

	[Token(Token = "0x60008F1")]
	public AsyncUnityEventHandler(UnityEvent<T> unityEvent, CancellationToken cancellationToken, bool callOnce)
	{
	}

	[Token(Token = "0x60008F2")]
	public UniTask<T> OnInvokeAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60008F3")]
	private void Invoke(T result)
	{
	}

	[Token(Token = "0x60008F4")]
	private static void CancellationCallback(object state)
	{
	}

	[Token(Token = "0x60008F5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60008F6")]
	private UniTask<T> Cysharp_002EThreading_002ETasks_002EIAsyncValueChangedEventHandler_003CT_003E_002EOnValueChangedAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60008F7")]
	private UniTask<T> Cysharp_002EThreading_002ETasks_002EIAsyncEndEditEventHandler_003CT_003E_002EOnEndEditAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60008F8")]
	private UniTask<T> Cysharp_002EThreading_002ETasks_002EIAsyncEndTextSelectionEventHandler_003CT_003E_002EOnEndTextSelectionAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60008F9")]
	private UniTask<T> Cysharp_002EThreading_002ETasks_002EIAsyncTextSelectionEventHandler_003CT_003E_002EOnTextSelectionAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60008FA")]
	private UniTask<T> Cysharp_002EThreading_002ETasks_002EIAsyncDeselectEventHandler_003CT_003E_002EOnDeselectAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60008FB")]
	private UniTask<T> Cysharp_002EThreading_002ETasks_002EIAsyncSelectEventHandler_003CT_003E_002EOnSelectAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60008FC")]
	private UniTask<T> Cysharp_002EThreading_002ETasks_002EIAsyncSubmitEventHandler_003CT_003E_002EOnSubmitAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60008FD")]
	private T Cysharp_002EThreading_002ETasks_002EIUniTaskSource_003CT_003E_002EGetResult(short token)
	{
		return (T)null;
	}

	[Token(Token = "0x60008FE")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x60008FF")]
	private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000900")]
	private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EUnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000901")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EOnCompleted(Action<object> continuation, object state, short token)
	{
	}
}
