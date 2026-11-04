// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.EnumeratorAsyncExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x2000026")]
public static class EnumeratorAsyncExtensions
{
	[Token(Token = "0x2000027")]
	private sealed class EnumeratorPromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<EnumeratorPromise>
	{
		[Token(Token = "0x2000029")]
		[CompilerGenerated]
		private sealed class _003CConsumeEnumerator_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[Token(Token = "0x400007A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x400007B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			private object _003C_003E2__current;

			[Token(Token = "0x400007C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public IEnumerator enumerator;

			[Token(Token = "0x400007D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			private CustomYieldInstruction _003Ccyi_003E5__2;

			[Token(Token = "0x400007E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
			private IEnumerator _003CinnerCoroutine_003E5__3;

			[Token(Token = "0x1700001B")]
			private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
			{
				[Token(Token = "0x60000F2")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700001C")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x60000F4")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60000EF")]
			[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
			[DebuggerHidden]
			public _003CConsumeEnumerator_003Ed__19(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x60000F0")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x60000F1")]
			[Address(RVA = "0x2913670", Offset = "0x2911C70", VA = "0x182913670", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x60000F3")]
			[Address(RVA = "0x2913B60", Offset = "0x2912160", VA = "0x182913B60", Slot = "8")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x200002A")]
		[CompilerGenerated]
		private sealed class _003CUnwrapWaitAsyncOperation_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[Token(Token = "0x400007F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x4000080")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			private object _003C_003E2__current;

			[Token(Token = "0x4000081")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public AsyncOperation asyncOperation;

			[Token(Token = "0x1700001D")]
			private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
			{
				[Token(Token = "0x60000F8")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700001E")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x60000FA")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60000F5")]
			[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
			[DebuggerHidden]
			public _003CUnwrapWaitAsyncOperation_003Ed__22(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x60000F6")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x60000F7")]
			[Address(RVA = "0x291A060", Offset = "0x2918660", VA = "0x18291A060", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x60000F9")]
			[Address(RVA = "0x291A0C0", Offset = "0x29186C0", VA = "0x18291A0C0", Slot = "8")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x200002B")]
		[CompilerGenerated]
		private sealed class _003CUnwrapWaitForSeconds_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[Token(Token = "0x4000082")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x4000083")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			private object _003C_003E2__current;

			[Token(Token = "0x4000084")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public WaitForSeconds waitForSeconds;

			[Token(Token = "0x4000085")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			private float _003Csecond_003E5__2;

			[Token(Token = "0x4000086")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
			private float _003Celapsed_003E5__3;

			[Token(Token = "0x1700001F")]
			private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
			{
				[Token(Token = "0x60000FE")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000020")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000100")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60000FB")]
			[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
			[DebuggerHidden]
			public _003CUnwrapWaitForSeconds_003Ed__21(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x60000FC")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x60000FD")]
			[Address(RVA = "0x291A100", Offset = "0x2918700", VA = "0x18291A100", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x60000FF")]
			[Address(RVA = "0x291A220", Offset = "0x2918820", VA = "0x18291A220", Slot = "8")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x4000070")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<EnumeratorPromise> pool;

		[Token(Token = "0x4000071")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private EnumeratorPromise nextNode;

		[Token(Token = "0x4000072")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private IEnumerator innerEnumerator;

		[Token(Token = "0x4000073")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000074")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private int initialFrame;

		[Token(Token = "0x4000075")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		private bool loopRunning;

		[Token(Token = "0x4000076")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2D")]
		private bool calledGetResult;

		[Token(Token = "0x4000077")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x4000078")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private static readonly FieldInfo waitForSeconds_Seconds;

		[Token(Token = "0x1700001A")]
		public unsafe ref EnumeratorPromise NextNode
		{
			[Token(Token = "0x60000DF")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "15")]
			get
			{
				return ref *(EnumeratorPromise*)null;
			}
		}

		[Token(Token = "0x60000E0")]
		[Address(RVA = "0x290DBE0", Offset = "0x290C1E0", VA = "0x18290DBE0")]
		static EnumeratorPromise()
		{
		}

		[Token(Token = "0x60000E1")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		private EnumeratorPromise()
		{
		}

		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x290D4A0", Offset = "0x290BAA0", VA = "0x18290D4A0")]
		public static IUniTaskSource Create(IEnumerator innerEnumerator, PlayerLoopTiming timing, CancellationToken cancellationToken, out short token)
		{
			return null;
		}

		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x290D720", Offset = "0x290BD20", VA = "0x18290D720", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x290D7C0", Offset = "0x290BDC0", VA = "0x18290D7C0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x290DAC0", Offset = "0x290C0C0", VA = "0x18290DAC0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x290D9C0", Offset = "0x290BFC0", VA = "0x18290D9C0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x290D810", Offset = "0x290BE10", VA = "0x18290D810", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x290DA20", Offset = "0x290C020", VA = "0x18290DA20")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x290D430", Offset = "0x290BA30", VA = "0x18290D430")]
		[IteratorStateMachine(typeof(_003CConsumeEnumerator_003Ed__19))]
		private static IEnumerator ConsumeEnumerator(IEnumerator enumerator)
		{
			return null;
		}

		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x290DB70", Offset = "0x290C170", VA = "0x18290DB70")]
		[IteratorStateMachine(typeof(_003CUnwrapWaitForSeconds_003Ed__21))]
		private static IEnumerator UnwrapWaitForSeconds(WaitForSeconds waitForSeconds)
		{
			return null;
		}

		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x290DB00", Offset = "0x290C100", VA = "0x18290DB00")]
		[IteratorStateMachine(typeof(_003CUnwrapWaitAsyncOperation_003Ed__22))]
		private static IEnumerator UnwrapWaitAsyncOperation(AsyncOperation asyncOperation)
		{
			return null;
		}
	}

	[Token(Token = "0x200002C")]
	[CompilerGenerated]
	private sealed class _003CCore_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000087")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000088")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000089")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MonoBehaviour coroutineRunner;

		[Token(Token = "0x400008A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public IEnumerator inner;

		[Token(Token = "0x400008B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public AutoResetUniTaskCompletionSource source;

		[Token(Token = "0x17000021")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000104")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000022")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000106")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000101")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CCore_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000102")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000103")]
		[Address(RVA = "0x2914170", Offset = "0x2912770", VA = "0x182914170", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000105")]
		[Address(RVA = "0x29141F0", Offset = "0x29127F0", VA = "0x1829141F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x60000DA")]
	public static UniTask.Awaiter GetAwaiter<T>(this T enumerator) where T : IEnumerator
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x290D360", Offset = "0x290B960", VA = "0x18290D360")]
	public static UniTask WithCancellation(this IEnumerator enumerator, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x290D2A0", Offset = "0x290B8A0", VA = "0x18290D2A0")]
	public static UniTask ToUniTask(this IEnumerator enumerator, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x290D170", Offset = "0x290B770", VA = "0x18290D170")]
	public static UniTask ToUniTask(this IEnumerator enumerator, MonoBehaviour coroutineRunner)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x290D0E0", Offset = "0x290B6E0", VA = "0x18290D0E0")]
	[IteratorStateMachine(typeof(_003CCore_003Ed__4))]
	private static IEnumerator Core(IEnumerator inner, MonoBehaviour coroutineRunner, AutoResetUniTaskCompletionSource source)
	{
		return null;
	}
}
