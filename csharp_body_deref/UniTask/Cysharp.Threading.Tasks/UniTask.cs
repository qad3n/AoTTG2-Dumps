// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.UniTask
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using System.Threading.Tasks.Sources;
using Cysharp.Threading.Tasks.CompilerServices;
using Cysharp.Threading.Tasks.Internal;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Events;

namespace Cysharp.Threading.Tasks;

[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000078")]
[AsyncMethodBuilder(typeof(AsyncUniTaskMethodBuilder))]
public readonly struct UniTask
{
	[Token(Token = "0x2000079")]
	private sealed class AsyncUnitSource : IUniTaskSource<AsyncUnit>, IUniTaskSource, IValueTaskSource, IValueTaskSource<AsyncUnit>
	{
		[Token(Token = "0x4000108")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly IUniTaskSource source;

		[Token(Token = "0x600022B")]
		[Address(RVA = "0x49DB8C0", Offset = "0x49DB8C0", VA = "0x49DB8C0")]
		public AsyncUnitSource(IUniTaskSource source)
		{
		}

		[Token(Token = "0x600022C")]
		[Address(RVA = "0x49E09A0", Offset = "0x49E09A0", VA = "0x49E09A0", Slot = "22")]
		public AsyncUnit GetResult(short token)
		{
			return default(AsyncUnit);
		}

		[Token(Token = "0x600022D")]
		[Address(RVA = "0x49E0A90", Offset = "0x49E0A90", VA = "0x49E0A90", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600022E")]
		[Address(RVA = "0x49E0B40", Offset = "0x49E0B40", VA = "0x49E0B40", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600022F")]
		[Address(RVA = "0x49E0C00", Offset = "0x49E0C00", VA = "0x49E0C00", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000230")]
		[Address(RVA = "0x49E0CA0", Offset = "0x49E0CA0", VA = "0x49E0CA0", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x200007A")]
	private sealed class IsCanceledSource : IUniTaskSource<bool>, IUniTaskSource, IValueTaskSource, IValueTaskSource<bool>
	{
		[Token(Token = "0x4000109")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly IUniTaskSource source;

		[Token(Token = "0x6000231")]
		[Address(RVA = "0x49DB450", Offset = "0x49DB450", VA = "0x49DB450")]
		public IsCanceledSource(IUniTaskSource source)
		{
		}

		[Token(Token = "0x6000232")]
		[Address(RVA = "0x49E0CB0", Offset = "0x49E0CB0", VA = "0x49E0CB0", Slot = "22")]
		public bool GetResult(short token)
		{
			return default(bool);
		}

		[Token(Token = "0x6000233")]
		[Address(RVA = "0x49E0DE0", Offset = "0x49E0DE0", VA = "0x49E0DE0", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000234")]
		[Address(RVA = "0x49E0DF0", Offset = "0x49E0DF0", VA = "0x49E0DF0", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000235")]
		[Address(RVA = "0x49E0EA0", Offset = "0x49E0EA0", VA = "0x49E0EA0", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000236")]
		[Address(RVA = "0x49E0F40", Offset = "0x49E0F40", VA = "0x49E0F40", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x200007B")]
	private sealed class MemoizeSource : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x400010A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IUniTaskSource source;

		[Token(Token = "0x400010B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private ExceptionDispatchInfo exception;

		[Token(Token = "0x400010C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTaskStatus status;

		[Token(Token = "0x6000237")]
		[Address(RVA = "0x49DB650", Offset = "0x49DB650", VA = "0x49DB650")]
		public MemoizeSource(IUniTaskSource source)
		{
		}

		[Token(Token = "0x6000238")]
		[Address(RVA = "0x49E1000", Offset = "0x49E1000", VA = "0x49E1000", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000239")]
		[Address(RVA = "0x49E1250", Offset = "0x49E1250", VA = "0x49E1250", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600023A")]
		[Address(RVA = "0x49E1300", Offset = "0x49E1300", VA = "0x49E1300", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600023B")]
		[Address(RVA = "0x49E13E0", Offset = "0x49E13E0", VA = "0x49E13E0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x200007C")]
	public readonly struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400010D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly UniTask task;

		[Token(Token = "0x17000031")]
		public bool IsCompleted
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600023D")]
			[Address(RVA = "0x49E14B0", Offset = "0x49E14B0", VA = "0x49E14B0")]
			[DebuggerHidden]
			get
			{
				return default(bool);
			}
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600023C")]
		[Address(RVA = "0x49E14A0", Offset = "0x49E14A0", VA = "0x49E14A0")]
		[DebuggerHidden]
		public Awaiter(in UniTask task)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600023E")]
		[Address(RVA = "0x49E15D0", Offset = "0x49E15D0", VA = "0x49E15D0")]
		[DebuggerHidden]
		public void GetResult()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600023F")]
		[Address(RVA = "0x49E1690", Offset = "0x49E1690", VA = "0x49E1690", Slot = "5")]
		[DebuggerHidden]
		public void OnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000240")]
		[Address(RVA = "0x49E17A0", Offset = "0x49E17A0", VA = "0x49E17A0", Slot = "4")]
		[DebuggerHidden]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000241")]
		[Address(RVA = "0x49E18B0", Offset = "0x49E18B0", VA = "0x49E18B0")]
		[DebuggerHidden]
		public void SourceOnCompleted(Action<object> continuation, object state)
		{
		}
	}

	[Token(Token = "0x200007D")]
	private sealed class YieldPromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<YieldPromise>
	{
		[Token(Token = "0x400010E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<YieldPromise> pool;

		[Token(Token = "0x400010F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private YieldPromise nextNode;

		[Token(Token = "0x4000110")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000111")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000112")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private bool cancelImmediately;

		[Token(Token = "0x4000113")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x17000032")]
		public unsafe ref YieldPromise NextNode
		{
			[Token(Token = "0x6000242")]
			[Address(RVA = "0x49E1990", Offset = "0x49E1990", VA = "0x49E1990", Slot = "15")]
			get
			{
				return ref *(YieldPromise*)null;
			}
		}

		[Token(Token = "0x6000243")]
		[Address(RVA = "0x49E19A0", Offset = "0x49E19A0", VA = "0x49E19A0")]
		static YieldPromise()
		{
		}

		[Token(Token = "0x6000244")]
		[Address(RVA = "0x49E1AA0", Offset = "0x49E1AA0", VA = "0x49E1AA0")]
		private YieldPromise()
		{
		}

		[Token(Token = "0x6000245")]
		[Address(RVA = "0x49DB9A0", Offset = "0x49DB9A0", VA = "0x49DB9A0")]
		public static IUniTaskSource Create(PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000246")]
		[Address(RVA = "0x49E1AB0", Offset = "0x49E1AB0", VA = "0x49E1AB0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000247")]
		[Address(RVA = "0x49E1BD0", Offset = "0x49E1BD0", VA = "0x49E1BD0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000248")]
		[Address(RVA = "0x49E1C20", Offset = "0x49E1C20", VA = "0x49E1C20", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000249")]
		[Address(RVA = "0x49E1CD0", Offset = "0x49E1CD0", VA = "0x49E1CD0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600024A")]
		[Address(RVA = "0x49E1D30", Offset = "0x49E1D30", VA = "0x49E1D30", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600024B")]
		[Address(RVA = "0x49E1DD0", Offset = "0x49E1DD0", VA = "0x49E1DD0")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200007F")]
	private sealed class NextFramePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<NextFramePromise>
	{
		[Token(Token = "0x4000116")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<NextFramePromise> pool;

		[Token(Token = "0x4000117")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private NextFramePromise nextNode;

		[Token(Token = "0x4000118")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int frameCount;

		[Token(Token = "0x4000119")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x400011A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400011B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400011C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private bool cancelImmediately;

		[Token(Token = "0x17000033")]
		public unsafe ref NextFramePromise NextNode
		{
			[Token(Token = "0x6000250")]
			[Address(RVA = "0x49E1FD0", Offset = "0x49E1FD0", VA = "0x49E1FD0", Slot = "15")]
			get
			{
				return ref *(NextFramePromise*)null;
			}
		}

		[Token(Token = "0x6000251")]
		[Address(RVA = "0x49E1FE0", Offset = "0x49E1FE0", VA = "0x49E1FE0")]
		static NextFramePromise()
		{
		}

		[Token(Token = "0x6000252")]
		[Address(RVA = "0x49E20E0", Offset = "0x49E20E0", VA = "0x49E20E0")]
		private NextFramePromise()
		{
		}

		[Token(Token = "0x6000253")]
		[Address(RVA = "0x49DBE00", Offset = "0x49DBE00", VA = "0x49DBE00")]
		public static IUniTaskSource Create(PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000254")]
		[Address(RVA = "0x49E20F0", Offset = "0x49E20F0", VA = "0x49E20F0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000255")]
		[Address(RVA = "0x49E2210", Offset = "0x49E2210", VA = "0x49E2210", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000256")]
		[Address(RVA = "0x49E2260", Offset = "0x49E2260", VA = "0x49E2260", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000257")]
		[Address(RVA = "0x49E2310", Offset = "0x49E2310", VA = "0x49E2310", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000258")]
		[Address(RVA = "0x49E2370", Offset = "0x49E2370", VA = "0x49E2370", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000259")]
		[Address(RVA = "0x49E2460", Offset = "0x49E2460", VA = "0x49E2460")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000081")]
	private sealed class WaitForEndOfFramePromise : IUniTaskSource, IValueTaskSource, ITaskPoolNode<WaitForEndOfFramePromise>, IEnumerator
	{
		[Token(Token = "0x400011F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitForEndOfFramePromise> pool;

		[Token(Token = "0x4000120")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private WaitForEndOfFramePromise nextNode;

		[Token(Token = "0x4000121")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x4000122")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000123")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000124")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private bool cancelImmediately;

		[Token(Token = "0x4000125")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private static readonly WaitForEndOfFrame waitForEndOfFrameYieldInstruction;

		[Token(Token = "0x4000126")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
		private bool isFirst;

		[Token(Token = "0x17000034")]
		public unsafe ref WaitForEndOfFramePromise NextNode
		{
			[Token(Token = "0x600025E")]
			[Address(RVA = "0x49E2660", Offset = "0x49E2660", VA = "0x49E2660", Slot = "14")]
			get
			{
				return ref *(WaitForEndOfFramePromise*)null;
			}
		}

		[Token(Token = "0x17000035")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000267")]
			[Address(RVA = "0x49E2B00", Offset = "0x49E2B00", VA = "0x49E2B00", Slot = "16")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600025F")]
		[Address(RVA = "0x49E2670", Offset = "0x49E2670", VA = "0x49E2670")]
		static WaitForEndOfFramePromise()
		{
		}

		[Token(Token = "0x6000260")]
		[Address(RVA = "0x49E27C0", Offset = "0x49E27C0", VA = "0x49E27C0")]
		private WaitForEndOfFramePromise()
		{
		}

		[Token(Token = "0x6000261")]
		[Address(RVA = "0x49DC530", Offset = "0x49DC530", VA = "0x49DC530")]
		public static IUniTaskSource Create(MonoBehaviour coroutineRunner, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000262")]
		[Address(RVA = "0x49E27D0", Offset = "0x49E27D0", VA = "0x49E27D0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000263")]
		[Address(RVA = "0x49E28F0", Offset = "0x49E28F0", VA = "0x49E28F0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000264")]
		[Address(RVA = "0x49E2940", Offset = "0x49E2940", VA = "0x49E2940", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000265")]
		[Address(RVA = "0x49E29F0", Offset = "0x49E29F0", VA = "0x49E29F0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000266")]
		[Address(RVA = "0x49E2A50", Offset = "0x49E2A50", VA = "0x49E2A50")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x6000268")]
		[Address(RVA = "0x49E2B70", Offset = "0x49E2B70", VA = "0x49E2B70", Slot = "15")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000269")]
		[Address(RVA = "0x49E2AF0", Offset = "0x49E2AF0", VA = "0x49E2AF0", Slot = "17")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000083")]
	private sealed class DelayFramePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<DelayFramePromise>
	{
		[Token(Token = "0x4000129")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<DelayFramePromise> pool;

		[Token(Token = "0x400012A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private DelayFramePromise nextNode;

		[Token(Token = "0x400012B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int initialFrame;

		[Token(Token = "0x400012C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private int delayFrameCount;

		[Token(Token = "0x400012D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400012E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400012F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool cancelImmediately;

		[Token(Token = "0x4000130")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		private int currentFrameCount;

		[Token(Token = "0x4000131")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x17000036")]
		public unsafe ref DelayFramePromise NextNode
		{
			[Token(Token = "0x600026E")]
			[Address(RVA = "0x49E2D80", Offset = "0x49E2D80", VA = "0x49E2D80", Slot = "15")]
			get
			{
				return ref *(DelayFramePromise*)null;
			}
		}

		[Token(Token = "0x600026F")]
		[Address(RVA = "0x49E2D90", Offset = "0x49E2D90", VA = "0x49E2D90")]
		static DelayFramePromise()
		{
		}

		[Token(Token = "0x6000270")]
		[Address(RVA = "0x49E2E90", Offset = "0x49E2E90", VA = "0x49E2E90")]
		private DelayFramePromise()
		{
		}

		[Token(Token = "0x6000271")]
		[Address(RVA = "0x49DCDE0", Offset = "0x49DCDE0", VA = "0x49DCDE0")]
		public static IUniTaskSource Create(int delayFrameCount, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000272")]
		[Address(RVA = "0x49E2EA0", Offset = "0x49E2EA0", VA = "0x49E2EA0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000273")]
		[Address(RVA = "0x49E2FC0", Offset = "0x49E2FC0", VA = "0x49E2FC0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000274")]
		[Address(RVA = "0x49E3010", Offset = "0x49E3010", VA = "0x49E3010", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000275")]
		[Address(RVA = "0x49E30C0", Offset = "0x49E30C0", VA = "0x49E30C0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000276")]
		[Address(RVA = "0x49E3120", Offset = "0x49E3120", VA = "0x49E3120", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000277")]
		[Address(RVA = "0x49E3230", Offset = "0x49E3230", VA = "0x49E3230")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000085")]
	private sealed class DelayPromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<DelayPromise>
	{
		[Token(Token = "0x4000134")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<DelayPromise> pool;

		[Token(Token = "0x4000135")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private DelayPromise nextNode;

		[Token(Token = "0x4000136")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int initialFrame;

		[Token(Token = "0x4000137")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private float delayTimeSpan;

		[Token(Token = "0x4000138")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private float elapsed;

		[Token(Token = "0x4000139")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400013A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400013B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x400013C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x17000037")]
		public unsafe ref DelayPromise NextNode
		{
			[Token(Token = "0x600027C")]
			[Address(RVA = "0x49E3440", Offset = "0x49E3440", VA = "0x49E3440", Slot = "15")]
			get
			{
				return ref *(DelayPromise*)null;
			}
		}

		[Token(Token = "0x600027D")]
		[Address(RVA = "0x49E3450", Offset = "0x49E3450", VA = "0x49E3450")]
		static DelayPromise()
		{
		}

		[Token(Token = "0x600027E")]
		[Address(RVA = "0x49E3550", Offset = "0x49E3550", VA = "0x49E3550")]
		private DelayPromise()
		{
		}

		[Token(Token = "0x600027F")]
		[Address(RVA = "0x49DDCB0", Offset = "0x49DDCB0", VA = "0x49DDCB0")]
		public static IUniTaskSource Create(TimeSpan delayTimeSpan, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000280")]
		[Address(RVA = "0x49E3560", Offset = "0x49E3560", VA = "0x49E3560", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000281")]
		[Address(RVA = "0x49E3680", Offset = "0x49E3680", VA = "0x49E3680", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000282")]
		[Address(RVA = "0x49E36D0", Offset = "0x49E36D0", VA = "0x49E36D0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000283")]
		[Address(RVA = "0x49E3780", Offset = "0x49E3780", VA = "0x49E3780", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000284")]
		[Address(RVA = "0x49E37E0", Offset = "0x49E37E0", VA = "0x49E37E0", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000285")]
		[Address(RVA = "0x49E38E0", Offset = "0x49E38E0", VA = "0x49E38E0")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000087")]
	private sealed class DelayIgnoreTimeScalePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<DelayIgnoreTimeScalePromise>
	{
		[Token(Token = "0x400013F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<DelayIgnoreTimeScalePromise> pool;

		[Token(Token = "0x4000140")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private DelayIgnoreTimeScalePromise nextNode;

		[Token(Token = "0x4000141")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private float delayFrameTimeSpan;

		[Token(Token = "0x4000142")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private float elapsed;

		[Token(Token = "0x4000143")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int initialFrame;

		[Token(Token = "0x4000144")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000145")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000146")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000147")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x17000038")]
		public unsafe ref DelayIgnoreTimeScalePromise NextNode
		{
			[Token(Token = "0x600028A")]
			[Address(RVA = "0x49E3AF0", Offset = "0x49E3AF0", VA = "0x49E3AF0", Slot = "15")]
			get
			{
				return ref *(DelayIgnoreTimeScalePromise*)null;
			}
		}

		[Token(Token = "0x600028B")]
		[Address(RVA = "0x49E3B00", Offset = "0x49E3B00", VA = "0x49E3B00")]
		static DelayIgnoreTimeScalePromise()
		{
		}

		[Token(Token = "0x600028C")]
		[Address(RVA = "0x49E3C00", Offset = "0x49E3C00", VA = "0x49E3C00")]
		private DelayIgnoreTimeScalePromise()
		{
		}

		[Token(Token = "0x600028D")]
		[Address(RVA = "0x49DD4E0", Offset = "0x49DD4E0", VA = "0x49DD4E0")]
		public static IUniTaskSource Create(TimeSpan delayFrameTimeSpan, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600028E")]
		[Address(RVA = "0x49E3C10", Offset = "0x49E3C10", VA = "0x49E3C10", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600028F")]
		[Address(RVA = "0x49E3D30", Offset = "0x49E3D30", VA = "0x49E3D30", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000290")]
		[Address(RVA = "0x49E3D80", Offset = "0x49E3D80", VA = "0x49E3D80", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000291")]
		[Address(RVA = "0x49E3E30", Offset = "0x49E3E30", VA = "0x49E3E30", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000292")]
		[Address(RVA = "0x49E3E90", Offset = "0x49E3E90", VA = "0x49E3E90", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000293")]
		[Address(RVA = "0x49E3F90", Offset = "0x49E3F90", VA = "0x49E3F90")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000089")]
	private sealed class DelayRealtimePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<DelayRealtimePromise>
	{
		[Token(Token = "0x400014A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<DelayRealtimePromise> pool;

		[Token(Token = "0x400014B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private DelayRealtimePromise nextNode;

		[Token(Token = "0x400014C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private long delayTimeSpanTicks;

		[Token(Token = "0x400014D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private ValueStopwatch stopwatch;

		[Token(Token = "0x400014E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400014F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000150")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000151")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x17000039")]
		public unsafe ref DelayRealtimePromise NextNode
		{
			[Token(Token = "0x6000298")]
			[Address(RVA = "0x49E41A0", Offset = "0x49E41A0", VA = "0x49E41A0", Slot = "15")]
			get
			{
				return ref *(DelayRealtimePromise*)null;
			}
		}

		[Token(Token = "0x6000299")]
		[Address(RVA = "0x49E41B0", Offset = "0x49E41B0", VA = "0x49E41B0")]
		static DelayRealtimePromise()
		{
		}

		[Token(Token = "0x600029A")]
		[Address(RVA = "0x49E42B0", Offset = "0x49E42B0", VA = "0x49E42B0")]
		private DelayRealtimePromise()
		{
		}

		[Token(Token = "0x600029B")]
		[Address(RVA = "0x49DD930", Offset = "0x49DD930", VA = "0x49DD930")]
		public static IUniTaskSource Create(TimeSpan delayTimeSpan, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600029C")]
		[Address(RVA = "0x49E42C0", Offset = "0x49E42C0", VA = "0x49E42C0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600029D")]
		[Address(RVA = "0x49E43E0", Offset = "0x49E43E0", VA = "0x49E43E0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600029E")]
		[Address(RVA = "0x49E4430", Offset = "0x49E4430", VA = "0x49E4430", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600029F")]
		[Address(RVA = "0x49E44E0", Offset = "0x49E44E0", VA = "0x49E44E0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x49E4540", Offset = "0x49E4540", VA = "0x49E4540", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x49E4670", Offset = "0x49E4670", VA = "0x49E4670")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200008B")]
	private static class CanceledUniTaskCache<T>
	{
		[Token(Token = "0x4000154")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly UniTask<T> Task;

		[Token(Token = "0x60002A6")]
		static CanceledUniTaskCache()
		{
		}
	}

	[Token(Token = "0x200008C")]
	private sealed class ExceptionResultSource : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x4000155")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly ExceptionDispatchInfo exception;

		[Token(Token = "0x4000156")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private bool calledGet;

		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x49DE1F0", Offset = "0x49DE1F0", VA = "0x49DE1F0")]
		public ExceptionResultSource(Exception exception)
		{
		}

		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x49E4870", Offset = "0x49E4870", VA = "0x49E4870", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x49E48F0", Offset = "0x49E48F0", VA = "0x49E48F0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x49E4900", Offset = "0x49E4900", VA = "0x49E4900", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002AB")]
		[Address(RVA = "0x49E4910", Offset = "0x49E4910", VA = "0x49E4910", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x49E4930", Offset = "0x49E4930", VA = "0x49E4930", Slot = "1")]
		~ExceptionResultSource()
		{
		}
	}

	[Token(Token = "0x200008D")]
	private sealed class ExceptionResultSource<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x4000157")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly ExceptionDispatchInfo exception;

		[Token(Token = "0x4000158")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool calledGet;

		[Token(Token = "0x60002AD")]
		public ExceptionResultSource(Exception exception)
		{
		}

		[Token(Token = "0x60002AE")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x60002AF")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60002B0")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002B1")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002B2")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002B3")]
		~ExceptionResultSource()
		{
		}
	}

	[Token(Token = "0x200008E")]
	private sealed class CanceledResultSource : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x4000159")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x49DE230", Offset = "0x49DE230", VA = "0x49DE230")]
		public CanceledResultSource(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x49E4A10", Offset = "0x49E4A10", VA = "0x49E4A10", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x49E4A60", Offset = "0x49E4A60", VA = "0x49E4A60", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002B7")]
		[Address(RVA = "0x49E4A70", Offset = "0x49E4A70", VA = "0x49E4A70", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x49E4A80", Offset = "0x49E4A80", VA = "0x49E4A80", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x200008F")]
	private sealed class CanceledResultSource<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x400015A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x60002B9")]
		public CanceledResultSource(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60002BA")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x60002BB")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60002BC")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002BD")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002BE")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x2000090")]
	private sealed class DeferPromise : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x400015B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private Func<UniTask> factory;

		[Token(Token = "0x400015C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UniTask task;

		[Token(Token = "0x400015D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private Awaiter awaiter;

		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x49DE700", Offset = "0x49DE700", VA = "0x49DE700")]
		public DeferPromise(Func<UniTask> factory)
		{
		}

		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x49E4AA0", Offset = "0x49E4AA0", VA = "0x49E4AA0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002C1")]
		[Address(RVA = "0x49E4B60", Offset = "0x49E4B60", VA = "0x49E4B60", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002C2")]
		[Address(RVA = "0x49E4CD0", Offset = "0x49E4CD0", VA = "0x49E4CD0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002C3")]
		[Address(RVA = "0x49E4DC0", Offset = "0x49E4DC0", VA = "0x49E4DC0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x2000091")]
	private sealed class DeferPromise<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x400015E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<UniTask<T>> factory;

		[Token(Token = "0x400015F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T> task;

		[Token(Token = "0x4000160")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter awaiter;

		[Token(Token = "0x60002C4")]
		public DeferPromise(Func<UniTask<T>> factory)
		{
		}

		[Token(Token = "0x60002C5")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x60002C6")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60002C7")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002C8")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002C9")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x2000092")]
	private sealed class DeferPromiseWithState<TState> : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x4000161")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<TState, UniTask> factory;

		[Token(Token = "0x4000162")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private TState argument;

		[Token(Token = "0x4000163")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask task;

		[Token(Token = "0x4000164")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Awaiter awaiter;

		[Token(Token = "0x60002CA")]
		public DeferPromiseWithState(TState argument, Func<TState, UniTask> factory)
		{
		}

		[Token(Token = "0x60002CB")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002CC")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002CD")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002CE")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x2000093")]
	private sealed class DeferPromiseWithState<TState, TResult> : IUniTaskSource<TResult>, IUniTaskSource, IValueTaskSource, IValueTaskSource<TResult>
	{
		[Token(Token = "0x4000165")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<TState, UniTask<TResult>> factory;

		[Token(Token = "0x4000166")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private TState argument;

		[Token(Token = "0x4000167")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<TResult> task;

		[Token(Token = "0x4000168")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<TResult>.Awaiter awaiter;

		[Token(Token = "0x60002CF")]
		public DeferPromiseWithState(TState argument, Func<TState, UniTask<TResult>> factory)
		{
		}

		[Token(Token = "0x60002D0")]
		public TResult GetResult(short token)
		{
			return (TResult)null;
		}

		[Token(Token = "0x60002D1")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60002D2")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002D3")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002D4")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x2000094")]
	private sealed class NeverPromise<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x4000169")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> cancellationCallback;

		[Token(Token = "0x400016A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400016B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<T> core;

		[Token(Token = "0x60002D5")]
		public NeverPromise(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60002D6")]
		private static void CancellationCallback(object state)
		{
		}

		[Token(Token = "0x60002D7")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x60002D8")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002D9")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002DA")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002DB")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x2000095")]
	private sealed class WaitUntilPromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitUntilPromise>
	{
		[Token(Token = "0x400016C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilPromise> pool;

		[Token(Token = "0x400016D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private WaitUntilPromise nextNode;

		[Token(Token = "0x400016E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Func<bool> predicate;

		[Token(Token = "0x400016F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000170")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000171")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool cancelImmediately;

		[Token(Token = "0x4000172")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x1700003A")]
		public unsafe ref WaitUntilPromise NextNode
		{
			[Token(Token = "0x60002DD")]
			[Address(RVA = "0x49E4EE0", Offset = "0x49E4EE0", VA = "0x49E4EE0", Slot = "15")]
			get
			{
				return ref *(WaitUntilPromise*)null;
			}
		}

		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x49E4EF0", Offset = "0x49E4EF0", VA = "0x49E4EF0")]
		static WaitUntilPromise()
		{
		}

		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x49E4FF0", Offset = "0x49E4FF0", VA = "0x49E4FF0")]
		private WaitUntilPromise()
		{
		}

		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x49DF030", Offset = "0x49DF030", VA = "0x49DF030")]
		public static IUniTaskSource Create(Func<bool> predicate, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x49E5000", Offset = "0x49E5000", VA = "0x49E5000", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x49E5120", Offset = "0x49E5120", VA = "0x49E5120", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x49E5170", Offset = "0x49E5170", VA = "0x49E5170", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x49E5220", Offset = "0x49E5220", VA = "0x49E5220", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x49E5280", Offset = "0x49E5280", VA = "0x49E5280", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x49E53F0", Offset = "0x49E53F0", VA = "0x49E53F0")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000097")]
	private sealed class WaitUntilPromise<T> : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitUntilPromise<T>>
	{
		[Token(Token = "0x4000175")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilPromise<T>> pool;

		[Token(Token = "0x4000176")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitUntilPromise<T> nextNode;

		[Token(Token = "0x4000177")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, bool> predicate;

		[Token(Token = "0x4000178")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T argument;

		[Token(Token = "0x4000179")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400017A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400017B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool cancelImmediately;

		[Token(Token = "0x400017C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x1700003B")]
		public unsafe ref WaitUntilPromise<T> NextNode
		{
			[Token(Token = "0x60002EB")]
			get
			{
				return ref *(WaitUntilPromise<T>*)null;
			}
		}

		[Token(Token = "0x60002EC")]
		static WaitUntilPromise()
		{
		}

		[Token(Token = "0x60002ED")]
		private WaitUntilPromise()
		{
		}

		[Token(Token = "0x60002EE")]
		public static IUniTaskSource Create(T argument, Func<T, bool> predicate, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60002EF")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002F0")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002F1")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002F2")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002F3")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002F4")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000099")]
	private sealed class WaitWhilePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitWhilePromise>
	{
		[Token(Token = "0x400017F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitWhilePromise> pool;

		[Token(Token = "0x4000180")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private WaitWhilePromise nextNode;

		[Token(Token = "0x4000181")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Func<bool> predicate;

		[Token(Token = "0x4000182")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000183")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000184")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool cancelImmediately;

		[Token(Token = "0x4000185")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x1700003C")]
		public unsafe ref WaitWhilePromise NextNode
		{
			[Token(Token = "0x60002F9")]
			[Address(RVA = "0x49E5610", Offset = "0x49E5610", VA = "0x49E5610", Slot = "15")]
			get
			{
				return ref *(WaitWhilePromise*)null;
			}
		}

		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x49E5620", Offset = "0x49E5620", VA = "0x49E5620")]
		static WaitWhilePromise()
		{
		}

		[Token(Token = "0x60002FB")]
		[Address(RVA = "0x49E5720", Offset = "0x49E5720", VA = "0x49E5720")]
		private WaitWhilePromise()
		{
		}

		[Token(Token = "0x60002FC")]
		[Address(RVA = "0x49DF3F0", Offset = "0x49DF3F0", VA = "0x49DF3F0")]
		public static IUniTaskSource Create(Func<bool> predicate, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x49E5730", Offset = "0x49E5730", VA = "0x49E5730", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002FE")]
		[Address(RVA = "0x49E5850", Offset = "0x49E5850", VA = "0x49E5850", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002FF")]
		[Address(RVA = "0x49E58A0", Offset = "0x49E58A0", VA = "0x49E58A0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000300")]
		[Address(RVA = "0x49E5950", Offset = "0x49E5950", VA = "0x49E5950", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000301")]
		[Address(RVA = "0x49E59B0", Offset = "0x49E59B0", VA = "0x49E59B0", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000302")]
		[Address(RVA = "0x49E5B20", Offset = "0x49E5B20", VA = "0x49E5B20")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200009B")]
	private sealed class WaitWhilePromise<T> : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitWhilePromise<T>>
	{
		[Token(Token = "0x4000188")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitWhilePromise<T>> pool;

		[Token(Token = "0x4000189")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitWhilePromise<T> nextNode;

		[Token(Token = "0x400018A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, bool> predicate;

		[Token(Token = "0x400018B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T argument;

		[Token(Token = "0x400018C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400018D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400018E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool cancelImmediately;

		[Token(Token = "0x400018F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x1700003D")]
		public unsafe ref WaitWhilePromise<T> NextNode
		{
			[Token(Token = "0x6000307")]
			get
			{
				return ref *(WaitWhilePromise<T>*)null;
			}
		}

		[Token(Token = "0x6000308")]
		static WaitWhilePromise()
		{
		}

		[Token(Token = "0x6000309")]
		private WaitWhilePromise()
		{
		}

		[Token(Token = "0x600030A")]
		public static IUniTaskSource Create(T argument, Func<T, bool> predicate, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600030B")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600030C")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600030D")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600030E")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600030F")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000310")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200009D")]
	private sealed class WaitUntilCanceledPromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitUntilCanceledPromise>
	{
		[Token(Token = "0x4000192")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilCanceledPromise> pool;

		[Token(Token = "0x4000193")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private WaitUntilCanceledPromise nextNode;

		[Token(Token = "0x4000194")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000195")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000196")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private bool cancelImmediately;

		[Token(Token = "0x4000197")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x1700003E")]
		public unsafe ref WaitUntilCanceledPromise NextNode
		{
			[Token(Token = "0x6000315")]
			[Address(RVA = "0x49E5D40", Offset = "0x49E5D40", VA = "0x49E5D40", Slot = "15")]
			get
			{
				return ref *(WaitUntilCanceledPromise*)null;
			}
		}

		[Token(Token = "0x6000316")]
		[Address(RVA = "0x49E5D50", Offset = "0x49E5D50", VA = "0x49E5D50")]
		static WaitUntilCanceledPromise()
		{
		}

		[Token(Token = "0x6000317")]
		[Address(RVA = "0x49E5E50", Offset = "0x49E5E50", VA = "0x49E5E50")]
		private WaitUntilCanceledPromise()
		{
		}

		[Token(Token = "0x6000318")]
		[Address(RVA = "0x49DF7B0", Offset = "0x49DF7B0", VA = "0x49DF7B0")]
		public static IUniTaskSource Create(CancellationToken cancellationToken, PlayerLoopTiming timing, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000319")]
		[Address(RVA = "0x49E5E60", Offset = "0x49E5E60", VA = "0x49E5E60", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600031A")]
		[Address(RVA = "0x49E5F80", Offset = "0x49E5F80", VA = "0x49E5F80", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600031B")]
		[Address(RVA = "0x49E5FD0", Offset = "0x49E5FD0", VA = "0x49E5FD0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600031C")]
		[Address(RVA = "0x49E6080", Offset = "0x49E6080", VA = "0x49E6080", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600031D")]
		[Address(RVA = "0x49E60E0", Offset = "0x49E60E0", VA = "0x49E60E0", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600031E")]
		[Address(RVA = "0x49E6160", Offset = "0x49E6160", VA = "0x49E6160")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200009F")]
	private sealed class WaitUntilValueChangedUnityObjectPromise<T, U> : IUniTaskSource<U>, IUniTaskSource, IValueTaskSource, IValueTaskSource<U>, IPlayerLoopItem, ITaskPoolNode<WaitUntilValueChangedUnityObjectPromise<T, U>>
	{
		[Token(Token = "0x400019A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilValueChangedUnityObjectPromise<T, U>> pool;

		[Token(Token = "0x400019B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitUntilValueChangedUnityObjectPromise<T, U> nextNode;

		[Token(Token = "0x400019C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T target;

		[Token(Token = "0x400019D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UnityEngine.Object targetAsUnityObject;

		[Token(Token = "0x400019E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private U currentValue;

		[Token(Token = "0x400019F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, U> monitorFunction;

		[Token(Token = "0x40001A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IEqualityComparer<U> equalityComparer;

		[Token(Token = "0x40001A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x40001A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x40001A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool cancelImmediately;

		[Token(Token = "0x40001A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<U> core;

		[Token(Token = "0x1700003F")]
		public unsafe ref WaitUntilValueChangedUnityObjectPromise<T, U> NextNode
		{
			[Token(Token = "0x6000323")]
			get
			{
				return ref *(WaitUntilValueChangedUnityObjectPromise<T, U>*)null;
			}
		}

		[Token(Token = "0x6000324")]
		static WaitUntilValueChangedUnityObjectPromise()
		{
		}

		[Token(Token = "0x6000325")]
		private WaitUntilValueChangedUnityObjectPromise()
		{
		}

		[Token(Token = "0x6000326")]
		public static IUniTaskSource<U> Create(T target, Func<T, U> monitorFunction, IEqualityComparer<U> equalityComparer, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000327")]
		public U GetResult(short token)
		{
			return (U)null;
		}

		[Token(Token = "0x6000328")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000329")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600032A")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600032B")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600032C")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600032D")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20000A1")]
	private sealed class WaitUntilValueChangedStandardObjectPromise<T, U> : IUniTaskSource<U>, IUniTaskSource, IValueTaskSource, IValueTaskSource<U>, IPlayerLoopItem, ITaskPoolNode<WaitUntilValueChangedStandardObjectPromise<T, U>> where T : class
	{
		[Token(Token = "0x40001A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilValueChangedStandardObjectPromise<T, U>> pool;

		[Token(Token = "0x40001A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitUntilValueChangedStandardObjectPromise<T, U> nextNode;

		[Token(Token = "0x40001A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WeakReference<T> target;

		[Token(Token = "0x40001AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private U currentValue;

		[Token(Token = "0x40001AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, U> monitorFunction;

		[Token(Token = "0x40001AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IEqualityComparer<U> equalityComparer;

		[Token(Token = "0x40001AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x40001AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x40001AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool cancelImmediately;

		[Token(Token = "0x40001B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<U> core;

		[Token(Token = "0x17000040")]
		public unsafe ref WaitUntilValueChangedStandardObjectPromise<T, U> NextNode
		{
			[Token(Token = "0x6000332")]
			get
			{
				return ref *(WaitUntilValueChangedStandardObjectPromise<T, U>*)null;
			}
		}

		[Token(Token = "0x6000333")]
		static WaitUntilValueChangedStandardObjectPromise()
		{
		}

		[Token(Token = "0x6000334")]
		private WaitUntilValueChangedStandardObjectPromise()
		{
		}

		[Token(Token = "0x6000335")]
		public static IUniTaskSource<U> Create(T target, Func<T, U> monitorFunction, IEqualityComparer<U> equalityComparer, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000336")]
		public U GetResult(short token)
		{
			return (U)null;
		}

		[Token(Token = "0x6000337")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000338")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000339")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600033A")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600033B")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600033C")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20000A3")]
	private sealed class WhenAllPromise<T> : IUniTaskSource<T[]>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T[]>
	{
		[Token(Token = "0x40001B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T[] result;

		[Token(Token = "0x40001B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completeCount;

		[Token(Token = "0x40001B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<T[]> core;

		[Token(Token = "0x6000341")]
		public WhenAllPromise(UniTask<T>[] tasks, int tasksLength)
		{
		}

		[Token(Token = "0x6000342")]
		private static void TryInvokeContinuation(WhenAllPromise<T> self, in UniTask<T>.Awaiter awaiter, int i)
		{
		}

		[Token(Token = "0x6000343")]
		public T[] GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x6000344")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000345")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000346")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000347")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000A5")]
	private sealed class WhenAllPromise : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x40001B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int completeCount;

		[Token(Token = "0x40001B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		private int tasksLength;

		[Token(Token = "0x40001BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x600034B")]
		[Address(RVA = "0x49DFB80", Offset = "0x49DFB80", VA = "0x49DFB80")]
		public WhenAllPromise(UniTask[] tasks, int tasksLength)
		{
		}

		[Token(Token = "0x600034C")]
		[Address(RVA = "0x49E6360", Offset = "0x49E6360", VA = "0x49E6360")]
		private static void TryInvokeContinuation(WhenAllPromise self, in Awaiter awaiter)
		{
		}

		[Token(Token = "0x600034D")]
		[Address(RVA = "0x49E6540", Offset = "0x49E6540", VA = "0x49E6540", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600034E")]
		[Address(RVA = "0x49E65C0", Offset = "0x49E65C0", VA = "0x49E65C0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600034F")]
		[Address(RVA = "0x49E6610", Offset = "0x49E6610", VA = "0x49E6610", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000350")]
		[Address(RVA = "0x49E66C0", Offset = "0x49E66C0", VA = "0x49E66C0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000A7")]
	private sealed class WhenAllPromise<T1, T2> : IUniTaskSource<(T1, T2)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2)>
	{
		[Token(Token = "0x40001BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2)> core;

		[Token(Token = "0x6000354")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2)
		{
		}

		[Token(Token = "0x6000355")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000356")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000357")]
		public (T1, T2) GetResult(short token)
		{
			return default((T1, T2));
		}

		[Token(Token = "0x6000358")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000359")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600035A")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600035B")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000A9")]
	private sealed class WhenAllPromise<T1, T2, T3> : IUniTaskSource<(T1, T2, T3)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3)>
	{
		[Token(Token = "0x40001C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3)> core;

		[Token(Token = "0x6000360")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
		{
		}

		[Token(Token = "0x6000361")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000362")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000363")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000364")]
		public (T1, T2, T3) GetResult(short token)
		{
			return default((T1, T2, T3));
		}

		[Token(Token = "0x6000365")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000366")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000367")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000368")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000AB")]
	private sealed class WhenAllPromise<T1, T2, T3, T4> : IUniTaskSource<(T1, T2, T3, T4)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4)>
	{
		[Token(Token = "0x40001CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40001D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4)> core;

		[Token(Token = "0x600036E")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4)
		{
		}

		[Token(Token = "0x600036F")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000370")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000371")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000372")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000373")]
		public (T1, T2, T3, T4) GetResult(short token)
		{
			return default((T1, T2, T3, T4));
		}

		[Token(Token = "0x6000374")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000375")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000376")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000377")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000AD")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5> : IUniTaskSource<(T1, T2, T3, T4, T5)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5)>
	{
		[Token(Token = "0x40001D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40001DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x40001DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5)> core;

		[Token(Token = "0x600037E")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5)
		{
		}

		[Token(Token = "0x600037F")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000380")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000381")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000382")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000383")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000384")]
		public (T1, T2, T3, T4, T5) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5));
		}

		[Token(Token = "0x6000385")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000386")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000387")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000388")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000AF")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6> : IUniTaskSource<(T1, T2, T3, T4, T5, T6)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6)>
	{
		[Token(Token = "0x40001E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40001E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x40001EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x40001EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6)> core;

		[Token(Token = "0x6000390")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6)
		{
		}

		[Token(Token = "0x6000391")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000392")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000393")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000394")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000395")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000396")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000397")]
		public (T1, T2, T3, T4, T5, T6) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6));
		}

		[Token(Token = "0x6000398")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000399")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600039A")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600039B")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B1")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7)>
	{
		[Token(Token = "0x40001F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40001F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x40001F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x40001FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x40001FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7)> core;

		[Token(Token = "0x60003A4")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7)
		{
		}

		[Token(Token = "0x60003A5")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003A6")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003A7")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003A8")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003A9")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AA")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AB")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AC")]
		public (T1, T2, T3, T4, T5, T6, T7) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7));
		}

		[Token(Token = "0x60003AD")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60003AE")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003AF")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003B0")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B3")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8)>
	{
		[Token(Token = "0x4000205")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x4000206")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x4000207")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x4000208")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x4000209")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x400020A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x400020B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x400020C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x400020D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400020E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8)> core;

		[Token(Token = "0x60003BA")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8)
		{
		}

		[Token(Token = "0x60003BB")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003BC")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003BD")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003BE")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003BF")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C0")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C1")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C2")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C3")]
		public (T1, T2, T3, T4, T5, T6, T7, T8) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8));
		}

		[Token(Token = "0x60003C4")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60003C5")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003C6")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003C7")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B5")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9)>
	{
		[Token(Token = "0x4000218")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x4000219")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x400021A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x400021B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x400021C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x400021D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x400021E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x400021F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x4000220")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x4000221")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000222")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9)> core;

		[Token(Token = "0x60003D2")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9)
		{
		}

		[Token(Token = "0x60003D3")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003D4")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003D5")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003D6")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003D7")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003D8")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003D9")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003DA")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003DB")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003DC")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9));
		}

		[Token(Token = "0x60003DD")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60003DE")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003DF")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003E0")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B7")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>
	{
		[Token(Token = "0x400022D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x400022E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x400022F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x4000230")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x4000231")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x4000232")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x4000233")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x4000234")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x4000235")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x4000236")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x4000237")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000238")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)> core;

		[Token(Token = "0x60003EC")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10)
		{
		}

		[Token(Token = "0x60003ED")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003EE")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003EF")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003F0")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003F1")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003F2")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003F3")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003F4")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003F5")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003F6")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003F7")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10));
		}

		[Token(Token = "0x60003F8")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60003F9")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003FA")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003FB")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B9")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>
	{
		[Token(Token = "0x4000244")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x4000245")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x4000246")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x4000247")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x4000248")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x4000249")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x400024A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x400024B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x400024C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x400024D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x400024E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x400024F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000250")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)> core;

		[Token(Token = "0x6000408")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11)
		{
		}

		[Token(Token = "0x6000409")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600040A")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600040B")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600040C")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600040D")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600040E")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600040F")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000410")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000411")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000412")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000413")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000414")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11));
		}

		[Token(Token = "0x6000415")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000416")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000417")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000418")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000BB")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>
	{
		[Token(Token = "0x400025D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x400025E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x400025F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x4000260")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x4000261")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x4000262")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x4000263")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x4000264")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x4000265")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x4000266")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x4000267")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x4000268")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T12 t12;

		[Token(Token = "0x4000269")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400026A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)> core;

		[Token(Token = "0x6000426")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12)
		{
		}

		[Token(Token = "0x6000427")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000428")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000429")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600042A")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600042B")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600042C")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600042D")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600042E")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600042F")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000430")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000431")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000432")]
		private static void TryInvokeContinuationT12(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000433")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12));
		}

		[Token(Token = "0x6000434")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000435")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000436")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000437")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000BD")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>
	{
		[Token(Token = "0x4000278")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x4000279")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x400027A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x400027B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x400027C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x400027D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x400027E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x400027F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x4000280")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x4000281")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x4000282")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x4000283")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T12 t12;

		[Token(Token = "0x4000284")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T13 t13;

		[Token(Token = "0x4000285")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000286")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)> core;

		[Token(Token = "0x6000446")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13)
		{
		}

		[Token(Token = "0x6000447")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000448")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000449")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600044A")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600044B")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600044C")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600044D")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600044E")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600044F")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000450")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000451")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000452")]
		private static void TryInvokeContinuationT12(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000453")]
		private static void TryInvokeContinuationT13(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000454")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13));
		}

		[Token(Token = "0x6000455")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000456")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000457")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000458")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000BF")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>
	{
		[Token(Token = "0x4000295")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x4000296")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x4000297")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x4000298")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x4000299")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x400029A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x400029B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x400029C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x400029D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x400029E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x400029F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x40002A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T12 t12;

		[Token(Token = "0x40002A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T13 t13;

		[Token(Token = "0x40002A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T14 t14;

		[Token(Token = "0x40002A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)> core;

		[Token(Token = "0x6000468")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14)
		{
		}

		[Token(Token = "0x6000469")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046A")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046B")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046C")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046D")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046E")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046F")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000470")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000471")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000472")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000473")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000474")]
		private static void TryInvokeContinuationT12(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000475")]
		private static void TryInvokeContinuationT13(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000476")]
		private static void TryInvokeContinuationT14(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T14>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000477")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14));
		}

		[Token(Token = "0x6000478")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000479")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600047A")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600047B")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000C1")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>
	{
		[Token(Token = "0x40002B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40002B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40002B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40002B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40002B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x40002B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x40002BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x40002BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x40002BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x40002BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x40002BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x40002BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T12 t12;

		[Token(Token = "0x40002C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T13 t13;

		[Token(Token = "0x40002C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T14 t14;

		[Token(Token = "0x40002C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T15 t15;

		[Token(Token = "0x40002C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)> core;

		[Token(Token = "0x600048C")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14, UniTask<T15> task15)
		{
		}

		[Token(Token = "0x600048D")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600048E")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600048F")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000490")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000491")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000492")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000493")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000494")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000495")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000496")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000497")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000498")]
		private static void TryInvokeContinuationT12(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000499")]
		private static void TryInvokeContinuationT13(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600049A")]
		private static void TryInvokeContinuationT14(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T14>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600049B")]
		private static void TryInvokeContinuationT15(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T15>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600049C")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15));
		}

		[Token(Token = "0x600049D")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600049E")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600049F")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004A0")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000C3")]
	private sealed class WhenAnyLRPromise<T> : IUniTaskSource<(bool, T)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(bool, T)>
	{
		[Token(Token = "0x40002D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(bool, T)> core;

		[Token(Token = "0x60004B2")]
		public WhenAnyLRPromise(UniTask<T> leftTask, UniTask rightTask)
		{
		}

		[Token(Token = "0x60004B3")]
		private static void TryLeftInvokeContinuation(WhenAnyLRPromise<T> self, in UniTask<T>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004B4")]
		private static void TryRightInvokeContinuation(WhenAnyLRPromise<T> self, in Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004B5")]
		public (bool, T) GetResult(short token)
		{
			return default((bool, T));
		}

		[Token(Token = "0x60004B6")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004B7")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004B8")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004B9")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000C5")]
	private sealed class WhenAnyPromise<T> : IUniTaskSource<(int, T)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T)>
	{
		[Token(Token = "0x40002DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T)> core;

		[Token(Token = "0x60004BE")]
		public WhenAnyPromise(UniTask<T>[] tasks, int tasksLength)
		{
		}

		[Token(Token = "0x60004BF")]
		private static void TryInvokeContinuation(WhenAnyPromise<T> self, in UniTask<T>.Awaiter awaiter, int i)
		{
		}

		[Token(Token = "0x60004C0")]
		public (int, T) GetResult(short token)
		{
			return default((int, T));
		}

		[Token(Token = "0x60004C1")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004C2")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004C3")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004C4")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000C7")]
	private sealed class WhenAnyPromise : IUniTaskSource<int>, IUniTaskSource, IValueTaskSource, IValueTaskSource<int>
	{
		[Token(Token = "0x40002DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int completedCount;

		[Token(Token = "0x40002DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UniTaskCompletionSourceCore<int> core;

		[Token(Token = "0x60004C8")]
		[Address(RVA = "0x49E0240", Offset = "0x49E0240", VA = "0x49E0240")]
		public WhenAnyPromise(UniTask[] tasks, int tasksLength)
		{
		}

		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x49E6980", Offset = "0x49E6980", VA = "0x49E6980")]
		private static void TryInvokeContinuation(WhenAnyPromise self, in Awaiter awaiter, int i)
		{
		}

		[Token(Token = "0x60004CA")]
		[Address(RVA = "0x49E6B50", Offset = "0x49E6B50", VA = "0x49E6B50", Slot = "22")]
		public int GetResult(short token)
		{
			return default(int);
		}

		[Token(Token = "0x60004CB")]
		[Address(RVA = "0x49E6BD0", Offset = "0x49E6BD0", VA = "0x49E6BD0", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004CC")]
		[Address(RVA = "0x49E6C20", Offset = "0x49E6C20", VA = "0x49E6C20", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x49E6C80", Offset = "0x49E6C80", VA = "0x49E6C80", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x49E6D30", Offset = "0x49E6D30", VA = "0x49E6D30", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000C9")]
	private sealed class WhenAnyPromise<T1, T2> : IUniTaskSource<(int, T1, T2)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2)>
	{
		[Token(Token = "0x40002E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2)> core;

		[Token(Token = "0x60004D2")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2)
		{
		}

		[Token(Token = "0x60004D3")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004D4")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004D5")]
		public (int, T1, T2) GetResult(short token)
		{
			return default((int, T1, T2));
		}

		[Token(Token = "0x60004D6")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004D7")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004D8")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004D9")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000CB")]
	private sealed class WhenAnyPromise<T1, T2, T3> : IUniTaskSource<(int, T1, T2, T3)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3)>
	{
		[Token(Token = "0x40002E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3)> core;

		[Token(Token = "0x60004DE")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
		{
		}

		[Token(Token = "0x60004DF")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004E0")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004E1")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004E2")]
		public (int, T1, T2, T3) GetResult(short token)
		{
			return default((int, T1, T2, T3));
		}

		[Token(Token = "0x60004E3")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004E4")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004E5")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004E6")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000CD")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4> : IUniTaskSource<(int, T1, T2, T3, T4)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4)>
	{
		[Token(Token = "0x40002ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4)> core;

		[Token(Token = "0x60004EC")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4)
		{
		}

		[Token(Token = "0x60004ED")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004EE")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004EF")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004F0")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004F1")]
		public (int, T1, T2, T3, T4) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4));
		}

		[Token(Token = "0x60004F2")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004F3")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004F4")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004F5")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000CF")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5> : IUniTaskSource<(int, T1, T2, T3, T4, T5)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5)>
	{
		[Token(Token = "0x40002F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5)> core;

		[Token(Token = "0x60004FC")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5)
		{
		}

		[Token(Token = "0x60004FD")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004FE")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004FF")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000500")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000501")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000502")]
		public (int, T1, T2, T3, T4, T5) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5));
		}

		[Token(Token = "0x6000503")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000504")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000505")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000506")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D1")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6)>
	{
		[Token(Token = "0x40002FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6)> core;

		[Token(Token = "0x600050E")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6)
		{
		}

		[Token(Token = "0x600050F")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000510")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000511")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000512")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000513")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000514")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000515")]
		public (int, T1, T2, T3, T4, T5, T6) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6));
		}

		[Token(Token = "0x6000516")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000517")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000518")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000519")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D3")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7)>
	{
		[Token(Token = "0x4000305")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000306")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7)> core;

		[Token(Token = "0x6000522")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7)
		{
		}

		[Token(Token = "0x6000523")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000524")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000525")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000526")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000527")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000528")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000529")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600052A")]
		public (int, T1, T2, T3, T4, T5, T6, T7) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7));
		}

		[Token(Token = "0x600052B")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600052C")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600052D")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600052E")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D5")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8)>
	{
		[Token(Token = "0x400030F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000310")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8)> core;

		[Token(Token = "0x6000538")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8)
		{
		}

		[Token(Token = "0x6000539")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600053A")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600053B")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600053C")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600053D")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600053E")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600053F")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000540")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000541")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8));
		}

		[Token(Token = "0x6000542")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000543")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000544")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000545")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D7")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9)>
	{
		[Token(Token = "0x400031A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400031B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9)> core;

		[Token(Token = "0x6000550")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9)
		{
		}

		[Token(Token = "0x6000551")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000552")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000553")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000554")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000555")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000556")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000557")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000558")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000559")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600055A")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9));
		}

		[Token(Token = "0x600055B")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600055C")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600055D")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600055E")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D9")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>
	{
		[Token(Token = "0x4000326")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000327")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10)> core;

		[Token(Token = "0x600056A")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10)
		{
		}

		[Token(Token = "0x600056B")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600056C")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600056D")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600056E")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600056F")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000570")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000571")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000572")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000573")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000574")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000575")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10));
		}

		[Token(Token = "0x6000576")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000577")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000578")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000579")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000DB")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>
	{
		[Token(Token = "0x4000333")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000334")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11)> core;

		[Token(Token = "0x6000586")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11)
		{
		}

		[Token(Token = "0x6000587")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000588")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000589")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600058A")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600058B")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600058C")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600058D")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600058E")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600058F")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000590")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000591")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000592")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11));
		}

		[Token(Token = "0x6000593")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000594")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000595")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000596")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000DD")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>
	{
		[Token(Token = "0x4000341")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000342")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11, T12 result12)> core;

		[Token(Token = "0x60005A4")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12)
		{
		}

		[Token(Token = "0x60005A5")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005A6")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005A7")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005A8")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005A9")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005AA")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005AB")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005AC")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005AD")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005AE")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005AF")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B0")]
		private static void TryInvokeContinuationT12(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B1")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12));
		}

		[Token(Token = "0x60005B2")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005B3")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60005B4")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005B5")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000DF")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>
	{
		[Token(Token = "0x4000350")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000351")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11, T12 result12, T13 result13)> core;

		[Token(Token = "0x60005C4")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13)
		{
		}

		[Token(Token = "0x60005C5")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005C6")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005C7")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005C8")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005C9")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005CA")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005CB")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005CC")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005CD")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005CE")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005CF")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D0")]
		private static void TryInvokeContinuationT12(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D1")]
		private static void TryInvokeContinuationT13(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D2")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13));
		}

		[Token(Token = "0x60005D3")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005D4")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60005D5")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005D6")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000E1")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>
	{
		[Token(Token = "0x4000360")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000361")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11, T12 result12, T13 result13, T14 result14)> core;

		[Token(Token = "0x60005E6")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14)
		{
		}

		[Token(Token = "0x60005E7")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005E8")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005E9")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005EA")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005EB")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005EC")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005ED")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005EE")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005EF")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005F0")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005F1")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005F2")]
		private static void TryInvokeContinuationT12(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005F3")]
		private static void TryInvokeContinuationT13(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005F4")]
		private static void TryInvokeContinuationT14(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T14>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005F5")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14));
		}

		[Token(Token = "0x60005F6")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005F7")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60005F8")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005F9")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000E3")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>
	{
		[Token(Token = "0x4000371")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000372")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11, T12 result12, T13 result13, T14 result14, T15 result15)> core;

		[Token(Token = "0x600060A")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14, UniTask<T15> task15)
		{
		}

		[Token(Token = "0x600060B")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600060C")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600060D")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600060E")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600060F")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000610")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000611")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000612")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000613")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000614")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000615")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000616")]
		private static void TryInvokeContinuationT12(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000617")]
		private static void TryInvokeContinuationT13(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000618")]
		private static void TryInvokeContinuationT14(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T14>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000619")]
		private static void TryInvokeContinuationT15(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T15>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600061A")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15));
		}

		[Token(Token = "0x600061B")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600061C")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600061D")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600061E")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F4")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__100 : IAsyncStateMachine
	{
		[Token(Token = "0x400039A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400039B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400039C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400039D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool configureAwait;

		[Token(Token = "0x400039E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Func<object, UniTask> action;

		[Token(Token = "0x400039F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public object state;

		[Token(Token = "0x40003A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private Awaiter _003C_003Eu__2;

		[Token(Token = "0x40003A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private YieldAwaitable.Awaiter _003C_003Eu__3;

		[Token(Token = "0x600064F")]
		[Address(RVA = "0x49E7220", Offset = "0x49E7220", VA = "0x49E7220", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000650")]
		[Address(RVA = "0x49E7DC0", Offset = "0x49E7DC0", VA = "0x49E7DC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F5")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__101<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40003A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40003A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool configureAwait;

		[Token(Token = "0x40003A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<T> func;

		[Token(Token = "0x40003AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E7__wrap3;

		[Token(Token = "0x40003AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private YieldAwaitable.Awaiter _003C_003Eu__2;

		[Token(Token = "0x6000651")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000652")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F6")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__102<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40003AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40003B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool configureAwait;

		[Token(Token = "0x40003B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<UniTask<T>> func;

		[Token(Token = "0x40003B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E7__wrap3;

		[Token(Token = "0x40003B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__2;

		[Token(Token = "0x40003B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private YieldAwaitable.Awaiter _003C_003Eu__3;

		[Token(Token = "0x6000653")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000654")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F7")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__103<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40003BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40003BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool configureAwait;

		[Token(Token = "0x40003BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<object, T> func;

		[Token(Token = "0x40003BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public object state;

		[Token(Token = "0x40003C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E7__wrap3;

		[Token(Token = "0x40003C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private YieldAwaitable.Awaiter _003C_003Eu__2;

		[Token(Token = "0x6000655")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000656")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F8")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__104<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40003C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40003C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool configureAwait;

		[Token(Token = "0x40003C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<object, UniTask<T>> func;

		[Token(Token = "0x40003CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public object state;

		[Token(Token = "0x40003CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E7__wrap3;

		[Token(Token = "0x40003CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__2;

		[Token(Token = "0x40003D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private YieldAwaitable.Awaiter _003C_003Eu__3;

		[Token(Token = "0x6000657")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000658")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F9")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__97 : IAsyncStateMachine
	{
		[Token(Token = "0x40003D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40003D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool configureAwait;

		[Token(Token = "0x40003D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action action;

		[Token(Token = "0x40003D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		private YieldAwaitable.Awaiter _003C_003Eu__2;

		[Token(Token = "0x6000659")]
		[Address(RVA = "0x49E7DD0", Offset = "0x49E7DD0", VA = "0x49E7DD0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600065A")]
		[Address(RVA = "0x49E8330", Offset = "0x49E8330", VA = "0x49E8330", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000FA")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__98 : IAsyncStateMachine
	{
		[Token(Token = "0x40003DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40003DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool configureAwait;

		[Token(Token = "0x40003DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action<object> action;

		[Token(Token = "0x40003DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public object state;

		[Token(Token = "0x40003E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private YieldAwaitable.Awaiter _003C_003Eu__2;

		[Token(Token = "0x600065B")]
		[Address(RVA = "0x49E8340", Offset = "0x49E8340", VA = "0x49E8340", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600065C")]
		[Address(RVA = "0x49E88B0", Offset = "0x49E88B0", VA = "0x49E88B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000FB")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__99 : IAsyncStateMachine
	{
		[Token(Token = "0x40003E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40003E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool configureAwait;

		[Token(Token = "0x40003E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Func<UniTask> action;

		[Token(Token = "0x40003E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private Awaiter _003C_003Eu__2;

		[Token(Token = "0x40003ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private YieldAwaitable.Awaiter _003C_003Eu__3;

		[Token(Token = "0x600065D")]
		[Address(RVA = "0x49E88C0", Offset = "0x49E88C0", VA = "0x49E88C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600065E")]
		[Address(RVA = "0x49E9400", Offset = "0x49E9400", VA = "0x49E9400", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000FC")]
	[CompilerGenerated]
	private struct _003CWaitForEndOfFrame_003Ed__24 : IAsyncStateMachine
	{
		[Token(Token = "0x40003EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40003F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private Awaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x600065F")]
		[Address(RVA = "0x49E9410", Offset = "0x49E9410", VA = "0x49E9410", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000660")]
		[Address(RVA = "0x49E9750", Offset = "0x49E9750", VA = "0x49E9750", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000104")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly IUniTaskSource source;

	[Token(Token = "0x4000105")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly short token;

	[Token(Token = "0x4000106")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly UniTask CanceledUniTask;

	[Token(Token = "0x4000107")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly UniTask CompletedTask;

	[Token(Token = "0x17000030")]
	public UniTaskStatus Status
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x49DB180", Offset = "0x49DB180", VA = "0x49DB180")]
		[DebuggerHidden]
		get
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x49DB050", Offset = "0x49DB050", VA = "0x49DB050")]
	public static IEnumerator ToCoroutine(Func<UniTask> taskFactory)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x49DB160", Offset = "0x49DB160", VA = "0x49DB160")]
	[DebuggerHidden]
	public UniTask(IUniTaskSource source, short token)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x49DB230", Offset = "0x49DB230", VA = "0x49DB230")]
	[DebuggerHidden]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x49DB260", Offset = "0x49DB260", VA = "0x49DB260")]
	public UniTask<bool> SuppressCancellationThrow()
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x49DA9A0", Offset = "0x49DA9A0", VA = "0x49DA9A0")]
	public static implicit operator ValueTask(in UniTask self)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x49DB480", Offset = "0x49DB480", VA = "0x49DB480", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x49DB5B0", Offset = "0x49DB5B0", VA = "0x49DB5B0")]
	public UniTask Preserve()
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x49DB680", Offset = "0x49DB680", VA = "0x49DB680")]
	public UniTask<AsyncUnit> AsAsyncUnitUniTask()
	{
		return default(UniTask<AsyncUnit>);
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x49DB8F0", Offset = "0x49DB8F0", VA = "0x49DB8F0")]
	public static YieldAwaitable Yield()
	{
		return default(YieldAwaitable);
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x49DB900", Offset = "0x49DB900", VA = "0x49DB900")]
	public static YieldAwaitable Yield(PlayerLoopTiming timing)
	{
		return default(YieldAwaitable);
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x49DB910", Offset = "0x49DB910", VA = "0x49DB910")]
	public static UniTask Yield(CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x49DBCA0", Offset = "0x49DBCA0", VA = "0x49DBCA0")]
	public static UniTask Yield(PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x49DBD40", Offset = "0x49DBD40", VA = "0x49DBD40")]
	public static UniTask NextFrame()
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x49DC1E0", Offset = "0x49DC1E0", VA = "0x49DC1E0")]
	public static UniTask NextFrame(PlayerLoopTiming timing)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x49DC2A0", Offset = "0x49DC2A0", VA = "0x49DC2A0")]
	public static UniTask NextFrame(CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x49DC330", Offset = "0x49DC330", VA = "0x49DC330")]
	public static UniTask NextFrame(PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x49DC3D0", Offset = "0x49DC3D0", VA = "0x49DC3D0")]
	[AsyncStateMachine(typeof(_003CWaitForEndOfFrame_003Ed__24))]
	public static UniTask WaitForEndOfFrame([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x49DC470", Offset = "0x49DC470", VA = "0x49DC470")]
	public static UniTask WaitForEndOfFrame(MonoBehaviour coroutineRunner)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x49DC810", Offset = "0x49DC810", VA = "0x49DC810")]
	public static UniTask WaitForEndOfFrame(MonoBehaviour coroutineRunner, CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x49DC8B0", Offset = "0x49DC8B0", VA = "0x49DC8B0")]
	public static YieldAwaitable WaitForFixedUpdate()
	{
		return default(YieldAwaitable);
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x49DC910", Offset = "0x49DC910", VA = "0x49DC910")]
	public static UniTask WaitForFixedUpdate(CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x49DCA00", Offset = "0x49DCA00", VA = "0x49DCA00")]
	public static UniTask WaitForSeconds(float duration, [Optional][DefaultParameterValue(false)] bool ignoreTimeScale, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x49DCC60", Offset = "0x49DCC60", VA = "0x49DCC60")]
	public static UniTask WaitForSeconds(int duration, [Optional][DefaultParameterValue(false)] bool ignoreTimeScale, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x49DCCD0", Offset = "0x49DCCD0", VA = "0x49DCCD0")]
	public static UniTask DelayFrame(int delayFrameCount, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x49DCB70", Offset = "0x49DCB70", VA = "0x49DCB70")]
	public static UniTask Delay(int millisecondsDelay, [Optional][DefaultParameterValue(false)] bool ignoreTimeScale, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x49DD1C0", Offset = "0x49DD1C0", VA = "0x49DD1C0")]
	public static UniTask Delay(TimeSpan delayTimeSpan, [Optional][DefaultParameterValue(false)] bool ignoreTimeScale, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x49DD440", Offset = "0x49DD440", VA = "0x49DD440")]
	public static UniTask Delay(int millisecondsDelay, DelayType delayType, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x49DD230", Offset = "0x49DD230", VA = "0x49DD230")]
	public static UniTask Delay(TimeSpan delayTimeSpan, DelayType delayType, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x49DE0E0", Offset = "0x49DE0E0", VA = "0x49DE0E0")]
	public static UniTask FromException(Exception ex)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001C2")]
	public static UniTask<T> FromException<T>(Exception ex)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001C3")]
	public static UniTask<T> FromResult<T>(T value)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x49D27F0", Offset = "0x49D27F0", VA = "0x49D27F0")]
	public static UniTask FromCanceled([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001C5")]
	public static UniTask<T> FromCanceled<T>([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x49DE260", Offset = "0x49DE260", VA = "0x49DE260")]
	public static UniTask Create(Func<UniTask> factory)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x49DE280", Offset = "0x49DE280", VA = "0x49DE280")]
	public static UniTask Create(Func<CancellationToken, UniTask> factory, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001C8")]
	public static UniTask Create<T>(T state, Func<T, UniTask> factory)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001C9")]
	public static UniTask<T> Create<T>(Func<UniTask<T>> factory)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x49DE2A0", Offset = "0x49DE2A0", VA = "0x49DE2A0")]
	public static AsyncLazy Lazy(Func<UniTask> factory)
	{
		return null;
	}

	[Token(Token = "0x60001CB")]
	public static AsyncLazy<T> Lazy<T>(Func<UniTask<T>> factory)
	{
		return null;
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x49DE2F0", Offset = "0x49DE2F0", VA = "0x49DE2F0")]
	public static void Void(Func<UniTaskVoid> asyncAction)
	{
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x49DE320", Offset = "0x49DE320", VA = "0x49DE320")]
	public static void Void(Func<CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x60001CE")]
	public static void Void<T>(Func<T, UniTaskVoid> asyncAction, T state)
	{
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x49DE350", Offset = "0x49DE350", VA = "0x49DE350")]
	public static Action Action(Func<UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x49DE410", Offset = "0x49DE410", VA = "0x49DE410")]
	public static Action Action(Func<CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001D1")]
	public static Action Action<T>(T state, Func<T, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x49DE4E0", Offset = "0x49DE4E0", VA = "0x49DE4E0")]
	public static UnityAction UnityAction(Func<UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x49DE5A0", Offset = "0x49DE5A0", VA = "0x49DE5A0")]
	public static UnityAction UnityAction(Func<CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001D4")]
	public static UnityAction UnityAction<T>(T state, Func<T, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001D5")]
	public static UnityAction<T> UnityAction<T>(Func<T, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001D6")]
	public static UnityAction<T0, T1> UnityAction<T0, T1>(Func<T0, T1, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001D7")]
	public static UnityAction<T0, T1, T2> UnityAction<T0, T1, T2>(Func<T0, T1, T2, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001D8")]
	public static UnityAction<T0, T1, T2, T3> UnityAction<T0, T1, T2, T3>(Func<T0, T1, T2, T3, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001D9")]
	public static UnityAction<T> UnityAction<T>(Func<T, CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001DA")]
	public static UnityAction<T0, T1> UnityAction<T0, T1>(Func<T0, T1, CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001DB")]
	public static UnityAction<T0, T1, T2> UnityAction<T0, T1, T2>(Func<T0, T1, T2, CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001DC")]
	public static UnityAction<T0, T1, T2, T3> UnityAction<T0, T1, T2, T3>(Func<T0, T1, T2, T3, CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x49DE670", Offset = "0x49DE670", VA = "0x49DE670")]
	public static UniTask Defer(Func<UniTask> factory)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001DE")]
	public static UniTask<T> Defer<T>(Func<UniTask<T>> factory)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001DF")]
	public static UniTask Defer<TState>(TState state, Func<TState, UniTask> factory)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001E0")]
	public static UniTask<TResult> Defer<TState, TResult>(TState state, Func<TState, UniTask<TResult>> factory)
	{
		return default(UniTask<TResult>);
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x49DE730", Offset = "0x49DE730", VA = "0x49DE730")]
	public static UniTask Never(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001E2")]
	public static UniTask<T> Never<T>(CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x49DE7F0", Offset = "0x49DE7F0", VA = "0x49DE7F0")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask Run(Action action, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x49DE900", Offset = "0x49DE900", VA = "0x49DE900")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask Run(Action<object> action, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x49DEA40", Offset = "0x49DEA40", VA = "0x49DEA40")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask Run(Func<UniTask> action, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x49DEB50", Offset = "0x49DEB50", VA = "0x49DEB50")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask Run(Func<object, UniTask> action, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001E7")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask<T> Run<T>(Func<T> func, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E8")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask<T> Run<T>(Func<UniTask<T>> func, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E9")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask<T> Run<T>(Func<object, T> func, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001EA")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask<T> Run<T>(Func<object, UniTask<T>> func, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x49DE840", Offset = "0x49DE840", VA = "0x49DE840")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__97))]
	public static UniTask RunOnThreadPool(Action action, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x49DE960", Offset = "0x49DE960", VA = "0x49DE960")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__98))]
	public static UniTask RunOnThreadPool(Action<object> action, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x49DEA90", Offset = "0x49DEA90", VA = "0x49DEA90")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__99))]
	public static UniTask RunOnThreadPool(Func<UniTask> action, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x49DEBB0", Offset = "0x49DEBB0", VA = "0x49DEBB0")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__100))]
	public static UniTask RunOnThreadPool(Func<object, UniTask> action, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001EF")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__101<>))]
	public static UniTask<T> RunOnThreadPool<T>(Func<T> func, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001F0")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__102<>))]
	public static UniTask<T> RunOnThreadPool<T>(Func<UniTask<T>> func, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001F1")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__103<>))]
	public static UniTask<T> RunOnThreadPool<T>(Func<object, T> func, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001F2")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__104<>))]
	public static UniTask<T> RunOnThreadPool<T>(Func<object, UniTask<T>> func, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x49DECA0", Offset = "0x49DECA0", VA = "0x49DECA0")]
	public static SwitchToMainThreadAwaitable SwitchToMainThread([Optional] CancellationToken cancellationToken)
	{
		return default(SwitchToMainThreadAwaitable);
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x49DECF0", Offset = "0x49DECF0", VA = "0x49DECF0")]
	public static SwitchToMainThreadAwaitable SwitchToMainThread(PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken)
	{
		return default(SwitchToMainThreadAwaitable);
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x49DED20", Offset = "0x49DED20", VA = "0x49DED20")]
	public static ReturnToMainThread ReturnToMainThread([Optional] CancellationToken cancellationToken)
	{
		return default(ReturnToMainThread);
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x49DED70", Offset = "0x49DED70", VA = "0x49DED70")]
	public static ReturnToMainThread ReturnToMainThread(PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken)
	{
		return default(ReturnToMainThread);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x49DEDA0", Offset = "0x49DEDA0", VA = "0x49DEDA0")]
	public static void Post(Action action, PlayerLoopTiming timing = PlayerLoopTiming.Update)
	{
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x49DEDF0", Offset = "0x49DEDF0", VA = "0x49DEDF0")]
	public static SwitchToThreadPoolAwaitable SwitchToThreadPool()
	{
		return default(SwitchToThreadPoolAwaitable);
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x49DEE00", Offset = "0x49DEE00", VA = "0x49DEE00")]
	public static SwitchToTaskPoolAwaitable SwitchToTaskPool()
	{
		return default(SwitchToTaskPoolAwaitable);
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x49DEE10", Offset = "0x49DEE10", VA = "0x49DEE10")]
	public static SwitchToSynchronizationContextAwaitable SwitchToSynchronizationContext(SynchronizationContext synchronizationContext, [Optional] CancellationToken cancellationToken)
	{
		return default(SwitchToSynchronizationContextAwaitable);
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x49DEED0", Offset = "0x49DEED0", VA = "0x49DEED0")]
	public static ReturnToSynchronizationContext ReturnToSynchronizationContext(SynchronizationContext synchronizationContext, [Optional] CancellationToken cancellationToken)
	{
		return default(ReturnToSynchronizationContext);
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x49DEF40", Offset = "0x49DEF40", VA = "0x49DEF40")]
	public static ReturnToSynchronizationContext ReturnToCurrentSynchronizationContext([Optional][DefaultParameterValue(true)] bool dontPostWhenSameContext, [Optional] CancellationToken cancellationToken)
	{
		return default(ReturnToSynchronizationContext);
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x49DEF90", Offset = "0x49DEF90", VA = "0x49DEF90")]
	public static UniTask WaitUntil(Func<bool> predicate, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001FE")]
	public static UniTask WaitUntil<T>(T state, Func<T, bool> predicate, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x49DF350", Offset = "0x49DF350", VA = "0x49DF350")]
	public static UniTask WaitWhile(Func<bool> predicate, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000200")]
	public static UniTask WaitWhile<T>(T state, Func<T, bool> predicate, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x49DF710", Offset = "0x49DF710", VA = "0x49DF710")]
	public static UniTask WaitUntilCanceled(CancellationToken cancellationToken, PlayerLoopTiming timing = PlayerLoopTiming.Update, bool completeImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000202")]
	public static UniTask<U> WaitUntilValueChanged<T, U>(T target, Func<T, U> monitorFunction, [Optional][DefaultParameterValue(8)] PlayerLoopTiming monitorTiming, [Optional] IEqualityComparer<U> equalityComparer, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false) where T : class
	{
		return default(UniTask<U>);
	}

	[Token(Token = "0x6000203")]
	public static UniTask<T[]> WhenAll<T>(params UniTask<T>[] tasks)
	{
		return default(UniTask<T[]>);
	}

	[Token(Token = "0x6000204")]
	public static UniTask<T[]> WhenAll<T>(IEnumerable<UniTask<T>> tasks)
	{
		return default(UniTask<T[]>);
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x49DFAB0", Offset = "0x49DFAB0", VA = "0x49DFAB0")]
	public static UniTask WhenAll(params UniTask[] tasks)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x49E0040", Offset = "0x49E0040", VA = "0x49E0040")]
	public static UniTask WhenAll(IEnumerable<UniTask> tasks)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000207")]
	public static UniTask<(T1, T2)> WhenAll<T1, T2>(UniTask<T1> task1, UniTask<T2> task2)
	{
		return default(UniTask<(T1, T2)>);
	}

	[Token(Token = "0x6000208")]
	public static UniTask<(T1, T2, T3)> WhenAll<T1, T2, T3>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
	{
		return default(UniTask<(T1, T2, T3)>);
	}

	[Token(Token = "0x6000209")]
	public static UniTask<(T1, T2, T3, T4)> WhenAll<T1, T2, T3, T4>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4)
	{
		return default(UniTask<(T1, T2, T3, T4)>);
	}

	[Token(Token = "0x600020A")]
	public static UniTask<(T1, T2, T3, T4, T5)> WhenAll<T1, T2, T3, T4, T5>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5)
	{
		return default(UniTask<(T1, T2, T3, T4, T5)>);
	}

	[Token(Token = "0x600020B")]
	public static UniTask<(T1, T2, T3, T4, T5, T6)> WhenAll<T1, T2, T3, T4, T5, T6>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6)>);
	}

	[Token(Token = "0x600020C")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7)> WhenAll<T1, T2, T3, T4, T5, T6, T7>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7)>);
	}

	[Token(Token = "0x600020D")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8)>);
	}

	[Token(Token = "0x600020E")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9)>);
	}

	[Token(Token = "0x600020F")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>);
	}

	[Token(Token = "0x6000210")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>);
	}

	[Token(Token = "0x6000211")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>);
	}

	[Token(Token = "0x6000212")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>);
	}

	[Token(Token = "0x6000213")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>);
	}

	[Token(Token = "0x6000214")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14, UniTask<T15> task15)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>);
	}

	[Token(Token = "0x6000215")]
	public static UniTask<(bool, T)> WhenAny<T>(UniTask<T> leftTask, UniTask rightTask)
	{
		return default(UniTask<(bool, T)>);
	}

	[Token(Token = "0x6000216")]
	public static UniTask<(int, T)> WhenAny<T>(params UniTask<T>[] tasks)
	{
		return default(UniTask<(int, T)>);
	}

	[Token(Token = "0x6000217")]
	public static UniTask<(int, T)> WhenAny<T>(IEnumerable<UniTask<T>> tasks)
	{
		return default(UniTask<(int, T)>);
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x49E01A0", Offset = "0x49E01A0", VA = "0x49E01A0")]
	public static UniTask<int> WhenAny(params UniTask[] tasks)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x49E0720", Offset = "0x49E0720", VA = "0x49E0720")]
	public static UniTask<int> WhenAny(IEnumerable<UniTask> tasks)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x600021A")]
	public static UniTask<(int, T1, T2)> WhenAny<T1, T2>(UniTask<T1> task1, UniTask<T2> task2)
	{
		return default(UniTask<(int, T1, T2)>);
	}

	[Token(Token = "0x600021B")]
	public static UniTask<(int, T1, T2, T3)> WhenAny<T1, T2, T3>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
	{
		return default(UniTask<(int, T1, T2, T3)>);
	}

	[Token(Token = "0x600021C")]
	public static UniTask<(int, T1, T2, T3, T4)> WhenAny<T1, T2, T3, T4>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4)
	{
		return default(UniTask<(int, T1, T2, T3, T4)>);
	}

	[Token(Token = "0x600021D")]
	public static UniTask<(int, T1, T2, T3, T4, T5)> WhenAny<T1, T2, T3, T4, T5>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5)>);
	}

	[Token(Token = "0x600021E")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6)> WhenAny<T1, T2, T3, T4, T5, T6>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6)>);
	}

	[Token(Token = "0x600021F")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7)> WhenAny<T1, T2, T3, T4, T5, T6, T7>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7)>);
	}

	[Token(Token = "0x6000220")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8)>);
	}

	[Token(Token = "0x6000221")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9)>);
	}

	[Token(Token = "0x6000222")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>);
	}

	[Token(Token = "0x6000223")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>);
	}

	[Token(Token = "0x6000224")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>);
	}

	[Token(Token = "0x6000225")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>);
	}

	[Token(Token = "0x6000226")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>);
	}

	[Token(Token = "0x6000227")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14, UniTask<T15> task15)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>);
	}

	[Token(Token = "0x6000228")]
	public static IUniTaskAsyncEnumerable<WhenEachResult<T>> WhenEach<T>(IEnumerable<UniTask<T>> tasks)
	{
		return null;
	}

	[Token(Token = "0x6000229")]
	public static IUniTaskAsyncEnumerable<WhenEachResult<T>> WhenEach<T>(params UniTask<T>[] tasks)
	{
		return null;
	}
}
[StructLayout((LayoutKind)3)]
[Token(Token = "0x20000FE")]
[AsyncMethodBuilder(typeof(AsyncUniTaskMethodBuilder<>))]
public readonly struct UniTask<T>
{
	[Token(Token = "0x20000FF")]
	private sealed class IsCanceledSource : IUniTaskSource<(bool, T)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(bool, T)>
	{
		[Token(Token = "0x40003F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly IUniTaskSource<T> source;

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600066D")]
		[DebuggerHidden]
		public IsCanceledSource(IUniTaskSource<T> source)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600066E")]
		[DebuggerHidden]
		public (bool, T) GetResult(short token)
		{
			return default((bool, T));
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600066F")]
		[DebuggerHidden]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000670")]
		[DebuggerHidden]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000671")]
		[DebuggerHidden]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000672")]
		[DebuggerHidden]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x2000100")]
	private sealed class MemoizeSource : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x40003F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IUniTaskSource<T> source;

		[Token(Token = "0x40003F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T result;

		[Token(Token = "0x40003F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ExceptionDispatchInfo exception;

		[Token(Token = "0x40003FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskStatus status;

		[Token(Token = "0x6000673")]
		public MemoizeSource(IUniTaskSource<T> source)
		{
		}

		[Token(Token = "0x6000674")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x6000675")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000676")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000677")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000678")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x2000101")]
	public readonly struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x40003FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly UniTask<T> task;

		[Token(Token = "0x17000042")]
		public bool IsCompleted
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600067A")]
			[DebuggerHidden]
			get
			{
				return default(bool);
			}
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000679")]
		[DebuggerHidden]
		public Awaiter(in UniTask<T> task)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600067B")]
		[DebuggerHidden]
		public T GetResult()
		{
			return (T)null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600067C")]
		[DebuggerHidden]
		public void OnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600067D")]
		[DebuggerHidden]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600067E")]
		[DebuggerHidden]
		public void SourceOnCompleted(Action<object> continuation, object state)
		{
		}
	}

	[Token(Token = "0x40003F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly IUniTaskSource<T> source;

	[Token(Token = "0x40003F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly T result;

	[Token(Token = "0x40003F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly short token;

	[Token(Token = "0x17000041")]
	public UniTaskStatus Status
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000665")]
		[DebuggerHidden]
		get
		{
			return default(UniTaskStatus);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000663")]
	[DebuggerHidden]
	public UniTask(T result)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000664")]
	[DebuggerHidden]
	public UniTask(IUniTaskSource<T> source, short token)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000666")]
	[DebuggerHidden]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}

	[Token(Token = "0x6000667")]
	public UniTask<T> Preserve()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x6000668")]
	public UniTask AsUniTask()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000669")]
	public static implicit operator UniTask(UniTask<T> self)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600066A")]
	public static implicit operator ValueTask<T>(in UniTask<T> self)
	{
		return default(ValueTask<T>);
	}

	[Token(Token = "0x600066B")]
	public UniTask<(bool, T)> SuppressCancellationThrow()
	{
		return default(UniTask<(bool, T)>);
	}

	[Token(Token = "0x600066C")]
	public override string ToString()
	{
		return null;
	}
}
