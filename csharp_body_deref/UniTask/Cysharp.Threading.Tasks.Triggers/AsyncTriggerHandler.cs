using System;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.ParticleSystemJobs;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000190")]
public sealed class AsyncTriggerHandler<T> : IAsyncOneShotTrigger, IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>, ITriggerHandler<T>, IDisposable, IAsyncFixedUpdateHandler, IAsyncLateUpdateHandler, IAsyncOnAnimatorIKHandler, IAsyncOnAnimatorMoveHandler, IAsyncOnApplicationFocusHandler, IAsyncOnApplicationPauseHandler, IAsyncOnApplicationQuitHandler, IAsyncOnAudioFilterReadHandler, IAsyncOnBecameInvisibleHandler, IAsyncOnBecameVisibleHandler, IAsyncOnBeforeTransformParentChangedHandler, IAsyncOnCanvasGroupChangedHandler, IAsyncOnCollisionEnterHandler, IAsyncOnCollisionEnter2DHandler, IAsyncOnCollisionExitHandler, IAsyncOnCollisionExit2DHandler, IAsyncOnCollisionStayHandler, IAsyncOnCollisionStay2DHandler, IAsyncOnControllerColliderHitHandler, IAsyncOnDisableHandler, IAsyncOnDrawGizmosHandler, IAsyncOnDrawGizmosSelectedHandler, IAsyncOnEnableHandler, IAsyncOnGUIHandler, IAsyncOnJointBreakHandler, IAsyncOnJointBreak2DHandler, IAsyncOnMouseDownHandler, IAsyncOnMouseDragHandler, IAsyncOnMouseEnterHandler, IAsyncOnMouseExitHandler, IAsyncOnMouseOverHandler, IAsyncOnMouseUpHandler, IAsyncOnMouseUpAsButtonHandler, IAsyncOnParticleCollisionHandler, IAsyncOnParticleSystemStoppedHandler, IAsyncOnParticleTriggerHandler, IAsyncOnParticleUpdateJobScheduledHandler, IAsyncOnPostRenderHandler, IAsyncOnPreCullHandler, IAsyncOnPreRenderHandler, IAsyncOnRectTransformDimensionsChangeHandler, IAsyncOnRectTransformRemovedHandler, IAsyncOnRenderImageHandler, IAsyncOnRenderObjectHandler, IAsyncOnServerInitializedHandler, IAsyncOnTransformChildrenChangedHandler, IAsyncOnTransformParentChangedHandler, IAsyncOnTriggerEnterHandler, IAsyncOnTriggerEnter2DHandler, IAsyncOnTriggerExitHandler, IAsyncOnTriggerExit2DHandler, IAsyncOnTriggerStayHandler, IAsyncOnTriggerStay2DHandler, IAsyncOnValidateHandler, IAsyncOnWillRenderObjectHandler, IAsyncResetHandler, IAsyncUpdateHandler, IAsyncOnBeginDragHandler, IAsyncOnCancelHandler, IAsyncOnDeselectHandler, IAsyncOnDragHandler, IAsyncOnDropHandler, IAsyncOnEndDragHandler, IAsyncOnInitializePotentialDragHandler, IAsyncOnMoveHandler, IAsyncOnPointerClickHandler, IAsyncOnPointerDownHandler, IAsyncOnPointerEnterHandler, IAsyncOnPointerExitHandler, IAsyncOnPointerUpHandler, IAsyncOnScrollHandler, IAsyncOnSelectHandler, IAsyncOnSubmitHandler, IAsyncOnUpdateSelectedHandler
{
	[Token(Token = "0x4000634")]
	[FieldOffset(Offset = "0x0")]
	private static Action<object> cancellationCallback;

	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x0")]
	private readonly AsyncTriggerBase<T> trigger;

	[Token(Token = "0x4000636")]
	[FieldOffset(Offset = "0x0")]
	private CancellationToken cancellationToken;

	[Token(Token = "0x4000637")]
	[FieldOffset(Offset = "0x0")]
	private CancellationTokenRegistration registration;

	[Token(Token = "0x4000638")]
	[FieldOffset(Offset = "0x0")]
	private bool isDisposed;

	[Token(Token = "0x4000639")]
	[FieldOffset(Offset = "0x0")]
	private bool callOnce;

	[Token(Token = "0x400063A")]
	[FieldOffset(Offset = "0x0")]
	private UniTaskCompletionSourceCore<T> core;

	[Token(Token = "0x17000072")]
	internal CancellationToken CancellationToken
	{
		[Token(Token = "0x6000A05")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x17000073")]
	private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002EPrev
	{
		[Token(Token = "0x6000A06")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A07")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	private ITriggerHandler<T> Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002ENext
	{
		[Token(Token = "0x6000A08")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A09")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000A04")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOneShotTrigger_002EOneShotAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A0A")]
	internal AsyncTriggerHandler(AsyncTriggerBase<T> trigger, bool callOnce)
	{
	}

	[Token(Token = "0x6000A0B")]
	internal AsyncTriggerHandler(AsyncTriggerBase<T> trigger, CancellationToken cancellationToken, bool callOnce)
	{
	}

	[Token(Token = "0x6000A0C")]
	private static void CancellationCallback(object state)
	{
	}

	[Token(Token = "0x6000A0D")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000A0E")]
	private T Cysharp_002EThreading_002ETasks_002EIUniTaskSource_003CT_003E_002EGetResult(short token)
	{
		return (T)null;
	}

	[Token(Token = "0x6000A0F")]
	private void Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002EOnNext(T value)
	{
	}

	[Token(Token = "0x6000A10")]
	private void Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002EOnCanceled(CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000A11")]
	private void Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002EOnCompleted()
	{
	}

	[Token(Token = "0x6000A12")]
	private void Cysharp_002EThreading_002ETasks_002EITriggerHandler_003CT_003E_002EOnError(Exception ex)
	{
	}

	[Token(Token = "0x6000A13")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x6000A14")]
	private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000A15")]
	private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EUnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000A16")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EOnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x6000A17")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncFixedUpdateHandler_002EFixedUpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A18")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncLateUpdateHandler_002ELateUpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A19")]
	private UniTask<int> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnAnimatorIKHandler_002EOnAnimatorIKAsync()
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000A1A")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnAnimatorMoveHandler_002EOnAnimatorMoveAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A1B")]
	private UniTask<bool> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnApplicationFocusHandler_002EOnApplicationFocusAsync()
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000A1C")]
	private UniTask<bool> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnApplicationPauseHandler_002EOnApplicationPauseAsync()
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000A1D")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnApplicationQuitHandler_002EOnApplicationQuitAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A1E")]
	private UniTask<(float[], int)> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnAudioFilterReadHandler_002EOnAudioFilterReadAsync()
	{
		return default(UniTask<(float[], int)>);
	}

	[Token(Token = "0x6000A1F")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnBecameInvisibleHandler_002EOnBecameInvisibleAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A20")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnBecameVisibleHandler_002EOnBecameVisibleAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A21")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnBeforeTransformParentChangedHandler_002EOnBeforeTransformParentChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A22")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnCanvasGroupChangedHandler_002EOnCanvasGroupChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A23")]
	private UniTask<Collision> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnCollisionEnterHandler_002EOnCollisionEnterAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000A24")]
	private UniTask<Collision2D> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnCollisionEnter2DHandler_002EOnCollisionEnter2DAsync()
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000A25")]
	private UniTask<Collision> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnCollisionExitHandler_002EOnCollisionExitAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000A26")]
	private UniTask<Collision2D> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnCollisionExit2DHandler_002EOnCollisionExit2DAsync()
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000A27")]
	private UniTask<Collision> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnCollisionStayHandler_002EOnCollisionStayAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000A28")]
	private UniTask<Collision2D> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnCollisionStay2DHandler_002EOnCollisionStay2DAsync()
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000A29")]
	private UniTask<ControllerColliderHit> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnControllerColliderHitHandler_002EOnControllerColliderHitAsync()
	{
		return default(UniTask<ControllerColliderHit>);
	}

	[Token(Token = "0x6000A2A")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnDisableHandler_002EOnDisableAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A2B")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnDrawGizmosHandler_002EOnDrawGizmosAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A2C")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnDrawGizmosSelectedHandler_002EOnDrawGizmosSelectedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A2D")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnEnableHandler_002EOnEnableAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A2E")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnGUIHandler_002EOnGUIAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A2F")]
	private UniTask<float> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnJointBreakHandler_002EOnJointBreakAsync()
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000A30")]
	private UniTask<Joint2D> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnJointBreak2DHandler_002EOnJointBreak2DAsync()
	{
		return default(UniTask<Joint2D>);
	}

	[Token(Token = "0x6000A31")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnMouseDownHandler_002EOnMouseDownAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A32")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnMouseDragHandler_002EOnMouseDragAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A33")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnMouseEnterHandler_002EOnMouseEnterAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A34")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnMouseExitHandler_002EOnMouseExitAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A35")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnMouseOverHandler_002EOnMouseOverAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A36")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnMouseUpHandler_002EOnMouseUpAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A37")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnMouseUpAsButtonHandler_002EOnMouseUpAsButtonAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A38")]
	private UniTask<GameObject> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnParticleCollisionHandler_002EOnParticleCollisionAsync()
	{
		return default(UniTask<GameObject>);
	}

	[Token(Token = "0x6000A39")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnParticleSystemStoppedHandler_002EOnParticleSystemStoppedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A3A")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnParticleTriggerHandler_002EOnParticleTriggerAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A3B")]
	private UniTask<ParticleSystemJobData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnParticleUpdateJobScheduledHandler_002EOnParticleUpdateJobScheduledAsync()
	{
		return default(UniTask<ParticleSystemJobData>);
	}

	[Token(Token = "0x6000A3C")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnPostRenderHandler_002EOnPostRenderAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A3D")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnPreCullHandler_002EOnPreCullAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A3E")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnPreRenderHandler_002EOnPreRenderAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A3F")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnRectTransformDimensionsChangeHandler_002EOnRectTransformDimensionsChangeAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A40")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnRectTransformRemovedHandler_002EOnRectTransformRemovedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A41")]
	private UniTask<(RenderTexture, RenderTexture)> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnRenderImageHandler_002EOnRenderImageAsync()
	{
		return default(UniTask<(RenderTexture, RenderTexture)>);
	}

	[Token(Token = "0x6000A42")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnRenderObjectHandler_002EOnRenderObjectAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A43")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnServerInitializedHandler_002EOnServerInitializedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A44")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnTransformChildrenChangedHandler_002EOnTransformChildrenChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A45")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnTransformParentChangedHandler_002EOnTransformParentChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A46")]
	private UniTask<Collider> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnTriggerEnterHandler_002EOnTriggerEnterAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000A47")]
	private UniTask<Collider2D> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnTriggerEnter2DHandler_002EOnTriggerEnter2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000A48")]
	private UniTask<Collider> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnTriggerExitHandler_002EOnTriggerExitAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000A49")]
	private UniTask<Collider2D> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnTriggerExit2DHandler_002EOnTriggerExit2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000A4A")]
	private UniTask<Collider> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnTriggerStayHandler_002EOnTriggerStayAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000A4B")]
	private UniTask<Collider2D> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnTriggerStay2DHandler_002EOnTriggerStay2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000A4C")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnValidateHandler_002EOnValidateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A4D")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnWillRenderObjectHandler_002EOnWillRenderObjectAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A4E")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncResetHandler_002EResetAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A4F")]
	private UniTask Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncUpdateHandler_002EUpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A50")]
	private UniTask<PointerEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnBeginDragHandler_002EOnBeginDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000A51")]
	private UniTask<BaseEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnCancelHandler_002EOnCancelAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000A52")]
	private UniTask<BaseEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnDeselectHandler_002EOnDeselectAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000A53")]
	private UniTask<PointerEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnDragHandler_002EOnDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000A54")]
	private UniTask<PointerEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnDropHandler_002EOnDropAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000A55")]
	private UniTask<PointerEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnEndDragHandler_002EOnEndDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000A56")]
	private UniTask<PointerEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnInitializePotentialDragHandler_002EOnInitializePotentialDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000A57")]
	private UniTask<AxisEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnMoveHandler_002EOnMoveAsync()
	{
		return default(UniTask<AxisEventData>);
	}

	[Token(Token = "0x6000A58")]
	private UniTask<PointerEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnPointerClickHandler_002EOnPointerClickAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000A59")]
	private UniTask<PointerEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnPointerDownHandler_002EOnPointerDownAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000A5A")]
	private UniTask<PointerEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnPointerEnterHandler_002EOnPointerEnterAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000A5B")]
	private UniTask<PointerEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnPointerExitHandler_002EOnPointerExitAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000A5C")]
	private UniTask<PointerEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnPointerUpHandler_002EOnPointerUpAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000A5D")]
	private UniTask<PointerEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnScrollHandler_002EOnScrollAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000A5E")]
	private UniTask<BaseEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnSelectHandler_002EOnSelectAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000A5F")]
	private UniTask<BaseEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnSubmitHandler_002EOnSubmitAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000A60")]
	private UniTask<BaseEventData> Cysharp_002EThreading_002ETasks_002ETriggers_002EIAsyncOnUpdateSelectedHandler_002EOnUpdateSelectedAsync()
	{
		return default(UniTask<BaseEventData>);
	}
}
