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
				[Address(RVA = "0x62C5190", Offset = "0x62C4190", VA = "0x62C5190", Slot = "4")]
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
				[Address(RVA = "0x62C51E0", Offset = "0x62C41E0", VA = "0x62C51E0", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60000EF")]
			[Address(RVA = "0x62C4900", Offset = "0x62C3900", VA = "0x62C4900")]
			[DebuggerHidden]
			public _003CConsumeEnumerator_003Ed__19(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x60000F0")]
			[Address(RVA = "0x62C4B30", Offset = "0x62C3B30", VA = "0x62C4B30", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x60000F1")]
			[Address(RVA = "0x62C4B40", Offset = "0x62C3B40", VA = "0x62C4B40", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x60000F3")]
			[Address(RVA = "0x62C51A0", Offset = "0x62C41A0", VA = "0x62C51A0", Slot = "8")]
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
				[Address(RVA = "0x62C5260", Offset = "0x62C4260", VA = "0x62C5260", Slot = "4")]
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
				[Address(RVA = "0x62C52B0", Offset = "0x62C42B0", VA = "0x62C52B0", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60000F5")]
			[Address(RVA = "0x62C4A20", Offset = "0x62C3A20", VA = "0x62C4A20")]
			[DebuggerHidden]
			public _003CUnwrapWaitAsyncOperation_003Ed__22(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x60000F6")]
			[Address(RVA = "0x62C51F0", Offset = "0x62C41F0", VA = "0x62C51F0", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x60000F7")]
			[Address(RVA = "0x62C5200", Offset = "0x62C4200", VA = "0x62C5200", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x60000F9")]
			[Address(RVA = "0x62C5270", Offset = "0x62C4270", VA = "0x62C5270", Slot = "8")]
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
				[Address(RVA = "0x62C5400", Offset = "0x62C4400", VA = "0x62C5400", Slot = "4")]
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
				[Address(RVA = "0x62C5450", Offset = "0x62C4450", VA = "0x62C5450", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60000FB")]
			[Address(RVA = "0x62C4990", Offset = "0x62C3990", VA = "0x62C4990")]
			[DebuggerHidden]
			public _003CUnwrapWaitForSeconds_003Ed__21(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x60000FC")]
			[Address(RVA = "0x62C52C0", Offset = "0x62C42C0", VA = "0x62C52C0", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x60000FD")]
			[Address(RVA = "0x62C52D0", Offset = "0x62C42D0", VA = "0x62C52D0", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x60000FF")]
			[Address(RVA = "0x62C5410", Offset = "0x62C4410", VA = "0x62C5410", Slot = "8")]
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
			[Address(RVA = "0x62C3D60", Offset = "0x62C2D60", VA = "0x62C3D60", Slot = "15")]
			get
			{
				return ref *(EnumeratorPromise*)null;
			}
		}

		[Token(Token = "0x60000E0")]
		[Address(RVA = "0x62C3D70", Offset = "0x62C2D70", VA = "0x62C3D70")]
		static EnumeratorPromise()
		{
		}

		[Token(Token = "0x60000E1")]
		[Address(RVA = "0x62C4030", Offset = "0x62C3030", VA = "0x62C4030")]
		private EnumeratorPromise()
		{
		}

		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x62C36F0", Offset = "0x62C26F0", VA = "0x62C36F0")]
		public static IUniTaskSource Create(IEnumerator innerEnumerator, PlayerLoopTiming timing, CancellationToken cancellationToken, out short token)
		{
			return null;
		}

		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x62C45C0", Offset = "0x62C35C0", VA = "0x62C45C0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x62C4680", Offset = "0x62C3680", VA = "0x62C4680", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x62C46D0", Offset = "0x62C36D0", VA = "0x62C46D0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x62C4780", Offset = "0x62C3780", VA = "0x62C4780", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x62C41A0", Offset = "0x62C31A0", VA = "0x62C41A0", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x62C47E0", Offset = "0x62C37E0", VA = "0x62C47E0")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x62C4130", Offset = "0x62C3130", VA = "0x62C4130")]
		[IteratorStateMachine(typeof(_003CConsumeEnumerator_003Ed__19))]
		private static IEnumerator ConsumeEnumerator(IEnumerator enumerator)
		{
			return null;
		}

		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x62C4920", Offset = "0x62C3920", VA = "0x62C4920")]
		[IteratorStateMachine(typeof(_003CUnwrapWaitForSeconds_003Ed__21))]
		private static IEnumerator UnwrapWaitForSeconds(WaitForSeconds waitForSeconds)
		{
			return null;
		}

		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x62C49B0", Offset = "0x62C39B0", VA = "0x62C49B0")]
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
			[Address(RVA = "0x62C5600", Offset = "0x62C4600", VA = "0x62C5600", Slot = "4")]
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
			[Address(RVA = "0x62C5650", Offset = "0x62C4650", VA = "0x62C5650", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000101")]
		[Address(RVA = "0x62C3D40", Offset = "0x62C2D40", VA = "0x62C3D40")]
		[DebuggerHidden]
		public _003CCore_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000102")]
		[Address(RVA = "0x62C5460", Offset = "0x62C4460", VA = "0x62C5460", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000103")]
		[Address(RVA = "0x62C5470", Offset = "0x62C4470", VA = "0x62C5470", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000105")]
		[Address(RVA = "0x62C5610", Offset = "0x62C4610", VA = "0x62C5610", Slot = "8")]
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
	[Address(RVA = "0x62C3600", Offset = "0x62C2600", VA = "0x62C3600")]
	public static UniTask WithCancellation(this IEnumerator enumerator, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x62C3930", Offset = "0x62C2930", VA = "0x62C3930")]
	public static UniTask ToUniTask(this IEnumerator enumerator, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x62C3A20", Offset = "0x62C2A20", VA = "0x62C3A20")]
	public static UniTask ToUniTask(this IEnumerator enumerator, MonoBehaviour coroutineRunner)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x62C3C50", Offset = "0x62C2C50", VA = "0x62C3C50")]
	[IteratorStateMachine(typeof(_003CCore_003Ed__4))]
	private static IEnumerator Core(IEnumerator inner, MonoBehaviour coroutineRunner, AutoResetUniTaskCompletionSource source)
	{
		return null;
	}
}
