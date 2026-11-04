// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.AsyncUnityEventHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Threading;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200017A")]
public class AsyncUnityEventHandler : IUniTaskSource, IValueTaskSource, IDisposable, IAsyncClickEventHandler
{
	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x0")]
	private static Action<object> cancellationCallback;

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x10")]
	private readonly UnityAction action;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x18")]
	private readonly UnityEvent unityEvent;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0x20")]
	private CancellationToken cancellationToken;

	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0x28")]
	private CancellationTokenRegistration registration;

	[Token(Token = "0x40005D1")]
	[FieldOffset(Offset = "0x40")]
	private bool isDisposed;

	[Token(Token = "0x40005D2")]
	[FieldOffset(Offset = "0x41")]
	private bool callOnce;

	[Token(Token = "0x40005D3")]
	[FieldOffset(Offset = "0x48")]
	private UniTaskCompletionSourceCore<AsyncUnit> core;

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x293E800", Offset = "0x293CE00", VA = "0x18293E800")]
	public AsyncUnityEventHandler(UnityEvent unityEvent, CancellationToken cancellationToken, bool callOnce)
	{
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x293E6C0", Offset = "0x293CCC0", VA = "0x18293E6C0")]
	public UniTask OnInvokeAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x293E650", Offset = "0x293CC50", VA = "0x18293E650")]
	private void Invoke()
	{
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x293E310", Offset = "0x293C910", VA = "0x18293E310")]
	private static void CancellationCallback(object state)
	{
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x293E5E0", Offset = "0x293CBE0", VA = "0x18293E5E0", Slot = "14")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x293E390", Offset = "0x293C990", VA = "0x18293E390", Slot = "15")]
	private UniTask Cysharp_002EThreading_002ETasks_002EIAsyncClickEventHandler_002EOnClickAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x293E450", Offset = "0x293CA50", VA = "0x18293E450", Slot = "6")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x293E4F0", Offset = "0x293CAF0", VA = "0x18293E4F0", Slot = "4")]
	private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x293E5A0", Offset = "0x293CBA0", VA = "0x18293E5A0", Slot = "7")]
	private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EUnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x293E540", Offset = "0x293CB40", VA = "0x18293E540", Slot = "5")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EOnCompleted(Action<object> continuation, object state, short token)
	{
	}
}
[Token(Token = "0x200017B")]
public class AsyncUnityEventHandler<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>, IDisposable, IAsyncValueChangedEventHandler<T>, IAsyncEndEditEventHandler<T>, IAsyncEndTextSelectionEventHandler<T>, IAsyncTextSelectionEventHandler<T>, IAsyncDeselectEventHandler<T>, IAsyncSelectEventHandler<T>, IAsyncSubmitEventHandler<T>
{
	[Token(Token = "0x40005D4")]
	[FieldOffset(Offset = "0x0")]
	private static Action<object> cancellationCallback;

	[Token(Token = "0x40005D5")]
	[FieldOffset(Offset = "0x0")]
	private readonly UnityAction<T> action;

	[Token(Token = "0x40005D6")]
	[FieldOffset(Offset = "0x0")]
	private readonly UnityEvent<T> unityEvent;

	[Token(Token = "0x40005D7")]
	[FieldOffset(Offset = "0x0")]
	private CancellationToken cancellationToken;

	[Token(Token = "0x40005D8")]
	[FieldOffset(Offset = "0x0")]
	private CancellationTokenRegistration registration;

	[Token(Token = "0x40005D9")]
	[FieldOffset(Offset = "0x0")]
	private bool isDisposed;

	[Token(Token = "0x40005DA")]
	[FieldOffset(Offset = "0x0")]
	private bool callOnce;

	[Token(Token = "0x40005DB")]
	[FieldOffset(Offset = "0x0")]
	private UniTaskCompletionSourceCore<T> core;

	[Token(Token = "0x6000915")]
	public AsyncUnityEventHandler(UnityEvent<T> unityEvent, CancellationToken cancellationToken, bool callOnce)
	{
	}

	[Token(Token = "0x6000916")]
	public UniTask<T> OnInvokeAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x6000917")]
	private void Invoke(T result)
	{
	}

	[Token(Token = "0x6000918")]
	private static void CancellationCallback(object state)
	{
	}

	[Token(Token = "0x6000919")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600091A")]
	private UniTask<T> Cysharp_002EThreading_002ETasks_002EIAsyncValueChangedEventHandler_003CT_003E_002EOnValueChangedAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x600091B")]
	private UniTask<T> Cysharp_002EThreading_002ETasks_002EIAsyncEndEditEventHandler_003CT_003E_002EOnEndEditAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x600091C")]
	private UniTask<T> Cysharp_002EThreading_002ETasks_002EIAsyncEndTextSelectionEventHandler_003CT_003E_002EOnEndTextSelectionAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x600091D")]
	private UniTask<T> Cysharp_002EThreading_002ETasks_002EIAsyncTextSelectionEventHandler_003CT_003E_002EOnTextSelectionAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x600091E")]
	private UniTask<T> Cysharp_002EThreading_002ETasks_002EIAsyncDeselectEventHandler_003CT_003E_002EOnDeselectAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x600091F")]
	private UniTask<T> Cysharp_002EThreading_002ETasks_002EIAsyncSelectEventHandler_003CT_003E_002EOnSelectAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x6000920")]
	private UniTask<T> Cysharp_002EThreading_002ETasks_002EIAsyncSubmitEventHandler_003CT_003E_002EOnSubmitAsync()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x6000921")]
	private T Cysharp_002EThreading_002ETasks_002EIUniTaskSource_003CT_003E_002EGetResult(short token)
	{
		return (T)null;
	}

	[Token(Token = "0x6000922")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x6000923")]
	private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000924")]
	private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EUnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000925")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EOnCompleted(Action<object> continuation, object state, short token)
	{
	}
}
