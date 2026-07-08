using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000028")]
public static class EnumeratorAsyncExtensions
{
	[Token(Token = "0x2000029")]
	private sealed class EnumeratorPromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<EnumeratorPromise>
	{
		[Token(Token = "0x200002B")]
		[CompilerGenerated]
		private sealed class _003CConsumeEnumerator_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[Token(Token = "0x400007F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x4000080")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			private object _003C_003E2__current;

			[Token(Token = "0x4000081")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public IEnumerator enumerator;

			[Token(Token = "0x4000082")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			private CustomYieldInstruction _003Ccyi_003E5__2;

			[Token(Token = "0x4000083")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
			private IEnumerator _003CinnerCoroutine_003E5__3;

			[Token(Token = "0x1700001B")]
			private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
			{
				[Token(Token = "0x60000F4")]
				[Address(RVA = "0x46B03C0", Offset = "0x46B03C0", VA = "0x46B03C0", Slot = "4")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700001C")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x60000F6")]
				[Address(RVA = "0x46B0410", Offset = "0x46B0410", VA = "0x46B0410", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60000F1")]
			[Address(RVA = "0x46AFAD0", Offset = "0x46AFAD0", VA = "0x46AFAD0")]
			[DebuggerHidden]
			public _003CConsumeEnumerator_003Ed__19(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x60000F2")]
			[Address(RVA = "0x46AFD00", Offset = "0x46AFD00", VA = "0x46AFD00", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x60000F3")]
			[Address(RVA = "0x46AFD10", Offset = "0x46AFD10", VA = "0x46AFD10", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x60000F5")]
			[Address(RVA = "0x46B03D0", Offset = "0x46B03D0", VA = "0x46B03D0", Slot = "8")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x200002C")]
		[CompilerGenerated]
		private sealed class _003CUnwrapWaitAsyncOperation_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[Token(Token = "0x4000084")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x4000085")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			private object _003C_003E2__current;

			[Token(Token = "0x4000086")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public AsyncOperation asyncOperation;

			[Token(Token = "0x1700001D")]
			private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
			{
				[Token(Token = "0x60000FA")]
				[Address(RVA = "0x46B0490", Offset = "0x46B0490", VA = "0x46B0490", Slot = "4")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700001E")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x60000FC")]
				[Address(RVA = "0x46B04E0", Offset = "0x46B04E0", VA = "0x46B04E0", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60000F7")]
			[Address(RVA = "0x46AFBF0", Offset = "0x46AFBF0", VA = "0x46AFBF0")]
			[DebuggerHidden]
			public _003CUnwrapWaitAsyncOperation_003Ed__22(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x60000F8")]
			[Address(RVA = "0x46B0420", Offset = "0x46B0420", VA = "0x46B0420", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x60000F9")]
			[Address(RVA = "0x46B0430", Offset = "0x46B0430", VA = "0x46B0430", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x60000FB")]
			[Address(RVA = "0x46B04A0", Offset = "0x46B04A0", VA = "0x46B04A0", Slot = "8")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x200002D")]
		[CompilerGenerated]
		private sealed class _003CUnwrapWaitForSeconds_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[Token(Token = "0x4000087")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x4000088")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			private object _003C_003E2__current;

			[Token(Token = "0x4000089")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public WaitForSeconds waitForSeconds;

			[Token(Token = "0x400008A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			private float _003Csecond_003E5__2;

			[Token(Token = "0x400008B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
			private float _003Celapsed_003E5__3;

			[Token(Token = "0x1700001F")]
			private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
			{
				[Token(Token = "0x6000100")]
				[Address(RVA = "0x46B0620", Offset = "0x46B0620", VA = "0x46B0620", Slot = "4")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000020")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000102")]
				[Address(RVA = "0x46B0670", Offset = "0x46B0670", VA = "0x46B0670", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60000FD")]
			[Address(RVA = "0x46AFB60", Offset = "0x46AFB60", VA = "0x46AFB60")]
			[DebuggerHidden]
			public _003CUnwrapWaitForSeconds_003Ed__21(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x60000FE")]
			[Address(RVA = "0x46B04F0", Offset = "0x46B04F0", VA = "0x46B04F0", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x60000FF")]
			[Address(RVA = "0x46B0500", Offset = "0x46B0500", VA = "0x46B0500", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000101")]
			[Address(RVA = "0x46B0630", Offset = "0x46B0630", VA = "0x46B0630", Slot = "8")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x4000075")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<EnumeratorPromise> pool;

		[Token(Token = "0x4000076")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private EnumeratorPromise nextNode;

		[Token(Token = "0x4000077")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private IEnumerator innerEnumerator;

		[Token(Token = "0x4000078")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000079")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private int initialFrame;

		[Token(Token = "0x400007A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		private bool loopRunning;

		[Token(Token = "0x400007B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2D")]
		private bool calledGetResult;

		[Token(Token = "0x400007C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x400007D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private static readonly FieldInfo waitForSeconds_Seconds;

		[Token(Token = "0x1700001A")]
		public unsafe ref EnumeratorPromise NextNode
		{
			[Token(Token = "0x60000E1")]
			[Address(RVA = "0x46AEFB0", Offset = "0x46AEFB0", VA = "0x46AEFB0", Slot = "15")]
			get
			{
				return ref *(EnumeratorPromise*)null;
			}
		}

		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x46AEFC0", Offset = "0x46AEFC0", VA = "0x46AEFC0")]
		static EnumeratorPromise()
		{
		}

		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x46AF280", Offset = "0x46AF280", VA = "0x46AF280")]
		private EnumeratorPromise()
		{
		}

		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x46AE9C0", Offset = "0x46AE9C0", VA = "0x46AE9C0")]
		public static IUniTaskSource Create(IEnumerator innerEnumerator, PlayerLoopTiming timing, CancellationToken cancellationToken, out short token)
		{
			return null;
		}

		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x46AF790", Offset = "0x46AF790", VA = "0x46AF790", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x46AF850", Offset = "0x46AF850", VA = "0x46AF850", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x46AF8A0", Offset = "0x46AF8A0", VA = "0x46AF8A0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x46AF950", Offset = "0x46AF950", VA = "0x46AF950", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x46AF3F0", Offset = "0x46AF3F0", VA = "0x46AF3F0", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x46AF9B0", Offset = "0x46AF9B0", VA = "0x46AF9B0")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x46AF380", Offset = "0x46AF380", VA = "0x46AF380")]
		[IteratorStateMachine(typeof(_003CConsumeEnumerator_003Ed__19))]
		private static IEnumerator ConsumeEnumerator(IEnumerator enumerator)
		{
			return null;
		}

		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x46AFAF0", Offset = "0x46AFAF0", VA = "0x46AFAF0")]
		[IteratorStateMachine(typeof(_003CUnwrapWaitForSeconds_003Ed__21))]
		private static IEnumerator UnwrapWaitForSeconds(WaitForSeconds waitForSeconds)
		{
			return null;
		}

		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x46AFB80", Offset = "0x46AFB80", VA = "0x46AFB80")]
		[IteratorStateMachine(typeof(_003CUnwrapWaitAsyncOperation_003Ed__22))]
		private static IEnumerator UnwrapWaitAsyncOperation(AsyncOperation asyncOperation)
		{
			return null;
		}
	}

	[Token(Token = "0x200002E")]
	[CompilerGenerated]
	private sealed class _003CCore_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400008C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400008D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400008E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MonoBehaviour coroutineRunner;

		[Token(Token = "0x400008F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public IEnumerator inner;

		[Token(Token = "0x4000090")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public AutoResetUniTaskCompletionSource source;

		[Token(Token = "0x17000021")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000106")]
			[Address(RVA = "0x46B0830", Offset = "0x46B0830", VA = "0x46B0830", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000022")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000108")]
			[Address(RVA = "0x46B0880", Offset = "0x46B0880", VA = "0x46B0880", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000103")]
		[Address(RVA = "0x46AEF90", Offset = "0x46AEF90", VA = "0x46AEF90")]
		[DebuggerHidden]
		public _003CCore_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000104")]
		[Address(RVA = "0x46B0680", Offset = "0x46B0680", VA = "0x46B0680", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000105")]
		[Address(RVA = "0x46B0690", Offset = "0x46B0690", VA = "0x46B0690", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000107")]
		[Address(RVA = "0x46B0840", Offset = "0x46B0840", VA = "0x46B0840", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x60000DC")]
	public static UniTask.Awaiter GetAwaiter<T>(this T enumerator) where T : IEnumerator
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x46AE8C0", Offset = "0x46AE8C0", VA = "0x46AE8C0")]
	public static UniTask WithCancellation(this IEnumerator enumerator, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x46AEC00", Offset = "0x46AEC00", VA = "0x46AEC00")]
	public static UniTask ToUniTask(this IEnumerator enumerator, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x46AED00", Offset = "0x46AED00", VA = "0x46AED00")]
	public static UniTask ToUniTask(this IEnumerator enumerator, MonoBehaviour coroutineRunner)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x46AEE90", Offset = "0x46AEE90", VA = "0x46AEE90")]
	[IteratorStateMachine(typeof(_003CCore_003Ed__4))]
	private static IEnumerator Core(IEnumerator inner, MonoBehaviour coroutineRunner, AutoResetUniTaskCompletionSource source)
	{
		return null;
	}
}
