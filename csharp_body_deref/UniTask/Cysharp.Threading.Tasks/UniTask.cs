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
[Token(Token = "0x2000076")]
[AsyncMethodBuilder(typeof(AsyncUniTaskMethodBuilder))]
public readonly struct UniTask
{
	[Token(Token = "0x2000077")]
	private sealed class YieldPromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<YieldPromise>
	{
		[Token(Token = "0x4000103")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<YieldPromise> pool;

		[Token(Token = "0x4000104")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private YieldPromise nextNode;

		[Token(Token = "0x4000105")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000106")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000107")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private bool cancelImmediately;

		[Token(Token = "0x4000108")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x17000031")]
		public unsafe ref YieldPromise NextNode
		{
			[Token(Token = "0x6000229")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "15")]
			get
			{
				return ref *(YieldPromise*)null;
			}
		}

		[Token(Token = "0x600022A")]
		[Address(RVA = "0x2924DB0", Offset = "0x29233B0", VA = "0x182924DB0")]
		static YieldPromise()
		{
		}

		[Token(Token = "0x600022B")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		private YieldPromise()
		{
		}

		[Token(Token = "0x600022C")]
		[Address(RVA = "0x29247A0", Offset = "0x2922DA0", VA = "0x1829247A0")]
		public static IUniTaskSource Create(PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600022D")]
		[Address(RVA = "0x2924AE0", Offset = "0x29230E0", VA = "0x182924AE0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600022E")]
		[Address(RVA = "0x2924B70", Offset = "0x2923170", VA = "0x182924B70", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600022F")]
		[Address(RVA = "0x2924D70", Offset = "0x2923370", VA = "0x182924D70", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000230")]
		[Address(RVA = "0x2924C70", Offset = "0x2923270", VA = "0x182924C70", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000231")]
		[Address(RVA = "0x2924BC0", Offset = "0x29231C0", VA = "0x182924BC0", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000232")]
		[Address(RVA = "0x2924CD0", Offset = "0x29232D0", VA = "0x182924CD0")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000079")]
	private sealed class NextFramePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<NextFramePromise>
	{
		[Token(Token = "0x400010B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<NextFramePromise> pool;

		[Token(Token = "0x400010C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private NextFramePromise nextNode;

		[Token(Token = "0x400010D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int frameCount;

		[Token(Token = "0x400010E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x400010F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000110")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000111")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private bool cancelImmediately;

		[Token(Token = "0x17000032")]
		public unsafe ref NextFramePromise NextNode
		{
			[Token(Token = "0x6000237")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "15")]
			get
			{
				return ref *(NextFramePromise*)null;
			}
		}

		[Token(Token = "0x6000238")]
		[Address(RVA = "0x290F3B0", Offset = "0x290D9B0", VA = "0x18290F3B0")]
		static NextFramePromise()
		{
		}

		[Token(Token = "0x6000239")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		private NextFramePromise()
		{
		}

		[Token(Token = "0x600023A")]
		[Address(RVA = "0x290ED20", Offset = "0x290D320", VA = "0x18290ED20")]
		public static IUniTaskSource Create(PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600023B")]
		[Address(RVA = "0x290F0A0", Offset = "0x290D6A0", VA = "0x18290F0A0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600023C")]
		[Address(RVA = "0x290F130", Offset = "0x290D730", VA = "0x18290F130", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600023D")]
		[Address(RVA = "0x290F370", Offset = "0x290D970", VA = "0x18290F370", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600023E")]
		[Address(RVA = "0x290F270", Offset = "0x290D870", VA = "0x18290F270", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600023F")]
		[Address(RVA = "0x290F180", Offset = "0x290D780", VA = "0x18290F180", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000240")]
		[Address(RVA = "0x290F2D0", Offset = "0x290D8D0", VA = "0x18290F2D0")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200007B")]
	private sealed class WaitForEndOfFramePromise : IUniTaskSource, IValueTaskSource, ITaskPoolNode<WaitForEndOfFramePromise>, IEnumerator
	{
		[Token(Token = "0x4000114")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitForEndOfFramePromise> pool;

		[Token(Token = "0x4000115")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private WaitForEndOfFramePromise nextNode;

		[Token(Token = "0x4000116")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x4000117")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000118")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000119")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private bool cancelImmediately;

		[Token(Token = "0x400011A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private static readonly WaitForEndOfFrame waitForEndOfFrameYieldInstruction;

		[Token(Token = "0x400011B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
		private bool isFirst;

		[Token(Token = "0x17000033")]
		public unsafe ref WaitForEndOfFramePromise NextNode
		{
			[Token(Token = "0x6000245")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "14")]
			get
			{
				return ref *(WaitForEndOfFramePromise*)null;
			}
		}

		[Token(Token = "0x17000034")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600024E")]
			[Address(RVA = "0x29220D0", Offset = "0x29206D0", VA = "0x1829220D0", Slot = "16")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000246")]
		[Address(RVA = "0x2922200", Offset = "0x2920800", VA = "0x182922200")]
		static WaitForEndOfFramePromise()
		{
		}

		[Token(Token = "0x6000247")]
		[Address(RVA = "0x2922360", Offset = "0x2920960", VA = "0x182922360")]
		private WaitForEndOfFramePromise()
		{
		}

		[Token(Token = "0x6000248")]
		[Address(RVA = "0x2921BB0", Offset = "0x29201B0", VA = "0x182921BB0")]
		public static IUniTaskSource Create(MonoBehaviour coroutineRunner, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000249")]
		[Address(RVA = "0x2921ED0", Offset = "0x29204D0", VA = "0x182921ED0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600024A")]
		[Address(RVA = "0x2921F60", Offset = "0x2920560", VA = "0x182921F60", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600024B")]
		[Address(RVA = "0x29221C0", Offset = "0x29207C0", VA = "0x1829221C0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600024C")]
		[Address(RVA = "0x2921FB0", Offset = "0x29205B0", VA = "0x182921FB0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600024D")]
		[Address(RVA = "0x2922120", Offset = "0x2920720", VA = "0x182922120")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x600024F")]
		[Address(RVA = "0x2922010", Offset = "0x2920610", VA = "0x182922010", Slot = "15")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000250")]
		[Address(RVA = "0x1D64700", Offset = "0x1D62D00", VA = "0x181D64700", Slot = "17")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x200007D")]
	private sealed class DelayFramePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<DelayFramePromise>
	{
		[Token(Token = "0x400011E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<DelayFramePromise> pool;

		[Token(Token = "0x400011F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private DelayFramePromise nextNode;

		[Token(Token = "0x4000120")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int initialFrame;

		[Token(Token = "0x4000121")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private int delayFrameCount;

		[Token(Token = "0x4000122")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000123")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000124")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool cancelImmediately;

		[Token(Token = "0x4000125")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		private int currentFrameCount;

		[Token(Token = "0x4000126")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x17000035")]
		public unsafe ref DelayFramePromise NextNode
		{
			[Token(Token = "0x6000255")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "15")]
			get
			{
				return ref *(DelayFramePromise*)null;
			}
		}

		[Token(Token = "0x6000256")]
		[Address(RVA = "0x290B5C0", Offset = "0x2909BC0", VA = "0x18290B5C0")]
		static DelayFramePromise()
		{
		}

		[Token(Token = "0x6000257")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		private DelayFramePromise()
		{
		}

		[Token(Token = "0x6000258")]
		[Address(RVA = "0x290AF00", Offset = "0x2909500", VA = "0x18290AF00")]
		public static IUniTaskSource Create(int delayFrameCount, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000259")]
		[Address(RVA = "0x290B290", Offset = "0x2909890", VA = "0x18290B290", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600025A")]
		[Address(RVA = "0x290B320", Offset = "0x2909920", VA = "0x18290B320", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600025B")]
		[Address(RVA = "0x290B580", Offset = "0x2909B80", VA = "0x18290B580", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600025C")]
		[Address(RVA = "0x290B480", Offset = "0x2909A80", VA = "0x18290B480", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600025D")]
		[Address(RVA = "0x290B370", Offset = "0x2909970", VA = "0x18290B370", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600025E")]
		[Address(RVA = "0x290B4E0", Offset = "0x2909AE0", VA = "0x18290B4E0")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200007F")]
	private sealed class DelayPromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<DelayPromise>
	{
		[Token(Token = "0x4000129")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<DelayPromise> pool;

		[Token(Token = "0x400012A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private DelayPromise nextNode;

		[Token(Token = "0x400012B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int initialFrame;

		[Token(Token = "0x400012C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private float delayTimeSpan;

		[Token(Token = "0x400012D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private float elapsed;

		[Token(Token = "0x400012E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400012F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000130")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000131")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x17000036")]
		public unsafe ref DelayPromise NextNode
		{
			[Token(Token = "0x6000263")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "15")]
			get
			{
				return ref *(DelayPromise*)null;
			}
		}

		[Token(Token = "0x6000264")]
		[Address(RVA = "0x290C5C0", Offset = "0x290ABC0", VA = "0x18290C5C0")]
		static DelayPromise()
		{
		}

		[Token(Token = "0x6000265")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		private DelayPromise()
		{
		}

		[Token(Token = "0x6000266")]
		[Address(RVA = "0x290BEC0", Offset = "0x290A4C0", VA = "0x18290BEC0")]
		public static IUniTaskSource Create(TimeSpan delayTimeSpan, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000267")]
		[Address(RVA = "0x290C2B0", Offset = "0x290A8B0", VA = "0x18290C2B0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000268")]
		[Address(RVA = "0x290C340", Offset = "0x290A940", VA = "0x18290C340", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000269")]
		[Address(RVA = "0x290C580", Offset = "0x290AB80", VA = "0x18290C580", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600026A")]
		[Address(RVA = "0x290C480", Offset = "0x290AA80", VA = "0x18290C480", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600026B")]
		[Address(RVA = "0x290C390", Offset = "0x290A990", VA = "0x18290C390", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600026C")]
		[Address(RVA = "0x290C4E0", Offset = "0x290AAE0", VA = "0x18290C4E0")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000081")]
	private sealed class DelayIgnoreTimeScalePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<DelayIgnoreTimeScalePromise>
	{
		[Token(Token = "0x4000134")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<DelayIgnoreTimeScalePromise> pool;

		[Token(Token = "0x4000135")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private DelayIgnoreTimeScalePromise nextNode;

		[Token(Token = "0x4000136")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private float delayFrameTimeSpan;

		[Token(Token = "0x4000137")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private float elapsed;

		[Token(Token = "0x4000138")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int initialFrame;

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
		public unsafe ref DelayIgnoreTimeScalePromise NextNode
		{
			[Token(Token = "0x6000271")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "15")]
			get
			{
				return ref *(DelayIgnoreTimeScalePromise*)null;
			}
		}

		[Token(Token = "0x6000272")]
		[Address(RVA = "0x290BDC0", Offset = "0x290A3C0", VA = "0x18290BDC0")]
		static DelayIgnoreTimeScalePromise()
		{
		}

		[Token(Token = "0x6000273")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		private DelayIgnoreTimeScalePromise()
		{
		}

		[Token(Token = "0x6000274")]
		[Address(RVA = "0x290B6C0", Offset = "0x2909CC0", VA = "0x18290B6C0")]
		public static IUniTaskSource Create(TimeSpan delayFrameTimeSpan, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000275")]
		[Address(RVA = "0x290BAB0", Offset = "0x290A0B0", VA = "0x18290BAB0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000276")]
		[Address(RVA = "0x290BB40", Offset = "0x290A140", VA = "0x18290BB40", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000277")]
		[Address(RVA = "0x290BD80", Offset = "0x290A380", VA = "0x18290BD80", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000278")]
		[Address(RVA = "0x290BC80", Offset = "0x290A280", VA = "0x18290BC80", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000279")]
		[Address(RVA = "0x290BB90", Offset = "0x290A190", VA = "0x18290BB90", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600027A")]
		[Address(RVA = "0x290BCE0", Offset = "0x290A2E0", VA = "0x18290BCE0")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000083")]
	private sealed class DelayRealtimePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<DelayRealtimePromise>
	{
		[Token(Token = "0x400013F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<DelayRealtimePromise> pool;

		[Token(Token = "0x4000140")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private DelayRealtimePromise nextNode;

		[Token(Token = "0x4000141")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private long delayTimeSpanTicks;

		[Token(Token = "0x4000142")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private ValueStopwatch stopwatch;

		[Token(Token = "0x4000143")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000144")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000145")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000146")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x17000038")]
		public unsafe ref DelayRealtimePromise NextNode
		{
			[Token(Token = "0x600027F")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "15")]
			get
			{
				return ref *(DelayRealtimePromise*)null;
			}
		}

		[Token(Token = "0x6000280")]
		[Address(RVA = "0x290CDC0", Offset = "0x290B3C0", VA = "0x18290CDC0")]
		static DelayRealtimePromise()
		{
		}

		[Token(Token = "0x6000281")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		private DelayRealtimePromise()
		{
		}

		[Token(Token = "0x6000282")]
		[Address(RVA = "0x290C6C0", Offset = "0x290ACC0", VA = "0x18290C6C0")]
		public static IUniTaskSource Create(TimeSpan delayTimeSpan, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000283")]
		[Address(RVA = "0x290CA70", Offset = "0x290B070", VA = "0x18290CA70", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000284")]
		[Address(RVA = "0x290CB00", Offset = "0x290B100", VA = "0x18290CB00", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000285")]
		[Address(RVA = "0x290CD80", Offset = "0x290B380", VA = "0x18290CD80", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000286")]
		[Address(RVA = "0x290CC80", Offset = "0x290B280", VA = "0x18290CC80", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000287")]
		[Address(RVA = "0x290CB50", Offset = "0x290B150", VA = "0x18290CB50", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000288")]
		[Address(RVA = "0x290CCE0", Offset = "0x290B2E0", VA = "0x18290CCE0")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000085")]
	private static class CanceledUniTaskCache<T>
	{
		[Token(Token = "0x4000149")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly UniTask<T> Task;

		[Token(Token = "0x600028D")]
		static CanceledUniTaskCache()
		{
		}
	}

	[Token(Token = "0x2000086")]
	private sealed class ExceptionResultSource : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x400014A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly ExceptionDispatchInfo exception;

		[Token(Token = "0x400014B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private bool calledGet;

		[Token(Token = "0x600028E")]
		[Address(RVA = "0x16E4310", Offset = "0x16E2910", VA = "0x1816E4310")]
		public ExceptionResultSource(Exception exception)
		{
		}

		[Token(Token = "0x600028F")]
		[Address(RVA = "0x290DFB0", Offset = "0x290C5B0", VA = "0x18290DFB0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000290")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000291")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000292")]
		[Address(RVA = "0x12BC920", Offset = "0x12BAF20", VA = "0x1812BC920", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000293")]
		[Address(RVA = "0x290DF00", Offset = "0x290C500", VA = "0x18290DF00", Slot = "1")]
		~ExceptionResultSource()
		{
		}
	}

	[Token(Token = "0x2000087")]
	private sealed class ExceptionResultSource<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x400014C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly ExceptionDispatchInfo exception;

		[Token(Token = "0x400014D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool calledGet;

		[Token(Token = "0x6000294")]
		public ExceptionResultSource(Exception exception)
		{
		}

		[Token(Token = "0x6000295")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x6000296")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000297")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000298")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000299")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600029A")]
		~ExceptionResultSource()
		{
		}
	}

	[Token(Token = "0x2000088")]
	private sealed class CanceledResultSource : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x400014E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x600029B")]
		[Address(RVA = "0x12BC950", Offset = "0x12BAF50", VA = "0x1812BC950")]
		public CanceledResultSource(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x600029C")]
		[Address(RVA = "0x2909700", Offset = "0x2907D00", VA = "0x182909700", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600029D")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600029E")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600029F")]
		[Address(RVA = "0x12BC920", Offset = "0x12BAF20", VA = "0x1812BC920", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x2000089")]
	private sealed class CanceledResultSource<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x400014F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x60002A0")]
		public CanceledResultSource(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60002A1")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x60002A2")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60002A3")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002A4")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002A5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x200008A")]
	private sealed class DeferPromise : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x4000150")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private Func<UniTask> factory;

		[Token(Token = "0x4000151")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UniTask task;

		[Token(Token = "0x4000152")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private Awaiter awaiter;

		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		public DeferPromise(Func<UniTask> factory)
		{
		}

		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x290AC70", Offset = "0x2909270", VA = "0x18290AC70", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x290ACD0", Offset = "0x29092D0", VA = "0x18290ACD0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x290ADD0", Offset = "0x29093D0", VA = "0x18290ADD0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x290AE70", Offset = "0x2909470", VA = "0x18290AE70", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x200008B")]
	private sealed class DeferPromise<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x4000153")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<UniTask<T>> factory;

		[Token(Token = "0x4000154")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T> task;

		[Token(Token = "0x4000155")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter awaiter;

		[Token(Token = "0x60002AB")]
		public DeferPromise(Func<UniTask<T>> factory)
		{
		}

		[Token(Token = "0x60002AC")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x60002AD")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60002AE")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002AF")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002B0")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x200008C")]
	private sealed class DeferPromiseWithState<TState> : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x4000156")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<TState, UniTask> factory;

		[Token(Token = "0x4000157")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private TState argument;

		[Token(Token = "0x4000158")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask task;

		[Token(Token = "0x4000159")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Awaiter awaiter;

		[Token(Token = "0x60002B1")]
		public DeferPromiseWithState(TState argument, Func<TState, UniTask> factory)
		{
		}

		[Token(Token = "0x60002B2")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002B3")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002B4")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002B5")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x200008D")]
	private sealed class DeferPromiseWithState<TState, TResult> : IUniTaskSource<TResult>, IUniTaskSource, IValueTaskSource, IValueTaskSource<TResult>
	{
		[Token(Token = "0x400015A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<TState, UniTask<TResult>> factory;

		[Token(Token = "0x400015B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private TState argument;

		[Token(Token = "0x400015C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<TResult> task;

		[Token(Token = "0x400015D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<TResult>.Awaiter awaiter;

		[Token(Token = "0x60002B6")]
		public DeferPromiseWithState(TState argument, Func<TState, UniTask<TResult>> factory)
		{
		}

		[Token(Token = "0x60002B7")]
		public TResult GetResult(short token)
		{
			return (TResult)null;
		}

		[Token(Token = "0x60002B8")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60002B9")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002BA")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002BB")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x200008E")]
	private sealed class NeverPromise<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x400015E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> cancellationCallback;

		[Token(Token = "0x400015F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000160")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<T> core;

		[Token(Token = "0x60002BC")]
		public NeverPromise(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60002BD")]
		private static void CancellationCallback(object state)
		{
		}

		[Token(Token = "0x60002BE")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x60002BF")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002C0")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002C1")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002C2")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x200008F")]
	private sealed class WaitUntilPromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitUntilPromise>
	{
		[Token(Token = "0x4000161")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilPromise> pool;

		[Token(Token = "0x4000162")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private WaitUntilPromise nextNode;

		[Token(Token = "0x4000163")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Func<bool> predicate;

		[Token(Token = "0x4000164")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000165")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000166")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool cancelImmediately;

		[Token(Token = "0x4000167")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x17000039")]
		public unsafe ref WaitUntilPromise NextNode
		{
			[Token(Token = "0x60002C4")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "15")]
			get
			{
				return ref *(WaitUntilPromise*)null;
			}
		}

		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x29230D0", Offset = "0x29216D0", VA = "0x1829230D0")]
		static WaitUntilPromise()
		{
		}

		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		private WaitUntilPromise()
		{
		}

		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x2922A50", Offset = "0x2921050", VA = "0x182922A50")]
		public static IUniTaskSource Create(Func<bool> predicate, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x2922DB0", Offset = "0x29213B0", VA = "0x182922DB0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x2922E40", Offset = "0x2921440", VA = "0x182922E40", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x2923090", Offset = "0x2921690", VA = "0x182923090", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x2922F80", Offset = "0x2921580", VA = "0x182922F80", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x2922E90", Offset = "0x2921490", VA = "0x182922E90", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x2922FE0", Offset = "0x29215E0", VA = "0x182922FE0")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000091")]
	private sealed class WaitUntilPromise<T> : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitUntilPromise<T>>
	{
		[Token(Token = "0x400016A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilPromise<T>> pool;

		[Token(Token = "0x400016B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitUntilPromise<T> nextNode;

		[Token(Token = "0x400016C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, bool> predicate;

		[Token(Token = "0x400016D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T argument;

		[Token(Token = "0x400016E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400016F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000170")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool cancelImmediately;

		[Token(Token = "0x4000171")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x1700003A")]
		public unsafe ref WaitUntilPromise<T> NextNode
		{
			[Token(Token = "0x60002D2")]
			get
			{
				return ref *(WaitUntilPromise<T>*)null;
			}
		}

		[Token(Token = "0x60002D3")]
		static WaitUntilPromise()
		{
		}

		[Token(Token = "0x60002D4")]
		private WaitUntilPromise()
		{
		}

		[Token(Token = "0x60002D5")]
		public static IUniTaskSource Create(T argument, Func<T, bool> predicate, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60002D6")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002D7")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002D8")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002D9")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002DA")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002DB")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000093")]
	private sealed class WaitWhilePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitWhilePromise>
	{
		[Token(Token = "0x4000174")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitWhilePromise> pool;

		[Token(Token = "0x4000175")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private WaitWhilePromise nextNode;

		[Token(Token = "0x4000176")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Func<bool> predicate;

		[Token(Token = "0x4000177")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000178")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000179")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool cancelImmediately;

		[Token(Token = "0x400017A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x1700003B")]
		public unsafe ref WaitWhilePromise NextNode
		{
			[Token(Token = "0x60002E0")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "15")]
			get
			{
				return ref *(WaitWhilePromise*)null;
			}
		}

		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x2923850", Offset = "0x2921E50", VA = "0x182923850")]
		static WaitWhilePromise()
		{
		}

		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		private WaitWhilePromise()
		{
		}

		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x29231D0", Offset = "0x29217D0", VA = "0x1829231D0")]
		public static IUniTaskSource Create(Func<bool> predicate, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x2923530", Offset = "0x2921B30", VA = "0x182923530", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x29235C0", Offset = "0x2921BC0", VA = "0x1829235C0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x2923810", Offset = "0x2921E10", VA = "0x182923810", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x2923700", Offset = "0x2921D00", VA = "0x182923700", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x2923610", Offset = "0x2921C10", VA = "0x182923610", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x2923760", Offset = "0x2921D60", VA = "0x182923760")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000095")]
	private sealed class WaitWhilePromise<T> : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitWhilePromise<T>>
	{
		[Token(Token = "0x400017D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitWhilePromise<T>> pool;

		[Token(Token = "0x400017E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitWhilePromise<T> nextNode;

		[Token(Token = "0x400017F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, bool> predicate;

		[Token(Token = "0x4000180")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T argument;

		[Token(Token = "0x4000181")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000182")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000183")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool cancelImmediately;

		[Token(Token = "0x4000184")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x1700003C")]
		public unsafe ref WaitWhilePromise<T> NextNode
		{
			[Token(Token = "0x60002EE")]
			get
			{
				return ref *(WaitWhilePromise<T>*)null;
			}
		}

		[Token(Token = "0x60002EF")]
		static WaitWhilePromise()
		{
		}

		[Token(Token = "0x60002F0")]
		private WaitWhilePromise()
		{
		}

		[Token(Token = "0x60002F1")]
		public static IUniTaskSource Create(T argument, Func<T, bool> predicate, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60002F2")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002F3")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002F4")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002F5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002F6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002F7")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000097")]
	private sealed class WaitUntilCanceledPromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitUntilCanceledPromise>
	{
		[Token(Token = "0x4000187")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilCanceledPromise> pool;

		[Token(Token = "0x4000188")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private WaitUntilCanceledPromise nextNode;

		[Token(Token = "0x4000189")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400018A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400018B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private bool cancelImmediately;

		[Token(Token = "0x400018C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x1700003D")]
		public unsafe ref WaitUntilCanceledPromise NextNode
		{
			[Token(Token = "0x60002FC")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "15")]
			get
			{
				return ref *(WaitUntilCanceledPromise*)null;
			}
		}

		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x2922950", Offset = "0x2920F50", VA = "0x182922950")]
		static WaitUntilCanceledPromise()
		{
		}

		[Token(Token = "0x60002FE")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		private WaitUntilCanceledPromise()
		{
		}

		[Token(Token = "0x60002FF")]
		[Address(RVA = "0x2922370", Offset = "0x2920970", VA = "0x182922370")]
		public static IUniTaskSource Create(CancellationToken cancellationToken, PlayerLoopTiming timing, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000300")]
		[Address(RVA = "0x29226B0", Offset = "0x2920CB0", VA = "0x1829226B0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000301")]
		[Address(RVA = "0x2922740", Offset = "0x2920D40", VA = "0x182922740", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000302")]
		[Address(RVA = "0x2922910", Offset = "0x2920F10", VA = "0x182922910", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000303")]
		[Address(RVA = "0x2922810", Offset = "0x2920E10", VA = "0x182922810", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000304")]
		[Address(RVA = "0x2922790", Offset = "0x2920D90", VA = "0x182922790", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000305")]
		[Address(RVA = "0x2922870", Offset = "0x2920E70", VA = "0x182922870")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000099")]
	private sealed class WaitUntilValueChangedUnityObjectPromise<T, U> : IUniTaskSource<U>, IUniTaskSource, IValueTaskSource, IValueTaskSource<U>, IPlayerLoopItem, ITaskPoolNode<WaitUntilValueChangedUnityObjectPromise<T, U>>
	{
		[Token(Token = "0x400018F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilValueChangedUnityObjectPromise<T, U>> pool;

		[Token(Token = "0x4000190")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitUntilValueChangedUnityObjectPromise<T, U> nextNode;

		[Token(Token = "0x4000191")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T target;

		[Token(Token = "0x4000192")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UnityEngine.Object targetAsUnityObject;

		[Token(Token = "0x4000193")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private U currentValue;

		[Token(Token = "0x4000194")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, U> monitorFunction;

		[Token(Token = "0x4000195")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IEqualityComparer<U> equalityComparer;

		[Token(Token = "0x4000196")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000197")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000198")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool cancelImmediately;

		[Token(Token = "0x4000199")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<U> core;

		[Token(Token = "0x1700003E")]
		public unsafe ref WaitUntilValueChangedUnityObjectPromise<T, U> NextNode
		{
			[Token(Token = "0x600030A")]
			get
			{
				return ref *(WaitUntilValueChangedUnityObjectPromise<T, U>*)null;
			}
		}

		[Token(Token = "0x600030B")]
		static WaitUntilValueChangedUnityObjectPromise()
		{
		}

		[Token(Token = "0x600030C")]
		private WaitUntilValueChangedUnityObjectPromise()
		{
		}

		[Token(Token = "0x600030D")]
		public static IUniTaskSource<U> Create(T target, Func<T, U> monitorFunction, IEqualityComparer<U> equalityComparer, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600030E")]
		public U GetResult(short token)
		{
			return (U)null;
		}

		[Token(Token = "0x600030F")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000310")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000311")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000312")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000313")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000314")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200009B")]
	private sealed class WaitUntilValueChangedStandardObjectPromise<T, U> : IUniTaskSource<U>, IUniTaskSource, IValueTaskSource, IValueTaskSource<U>, IPlayerLoopItem, ITaskPoolNode<WaitUntilValueChangedStandardObjectPromise<T, U>> where T : class
	{
		[Token(Token = "0x400019C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilValueChangedStandardObjectPromise<T, U>> pool;

		[Token(Token = "0x400019D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitUntilValueChangedStandardObjectPromise<T, U> nextNode;

		[Token(Token = "0x400019E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WeakReference<T> target;

		[Token(Token = "0x400019F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private U currentValue;

		[Token(Token = "0x40001A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, U> monitorFunction;

		[Token(Token = "0x40001A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IEqualityComparer<U> equalityComparer;

		[Token(Token = "0x40001A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x40001A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x40001A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool cancelImmediately;

		[Token(Token = "0x40001A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<U> core;

		[Token(Token = "0x1700003F")]
		public unsafe ref WaitUntilValueChangedStandardObjectPromise<T, U> NextNode
		{
			[Token(Token = "0x6000319")]
			get
			{
				return ref *(WaitUntilValueChangedStandardObjectPromise<T, U>*)null;
			}
		}

		[Token(Token = "0x600031A")]
		static WaitUntilValueChangedStandardObjectPromise()
		{
		}

		[Token(Token = "0x600031B")]
		private WaitUntilValueChangedStandardObjectPromise()
		{
		}

		[Token(Token = "0x600031C")]
		public static IUniTaskSource<U> Create(T target, Func<T, U> monitorFunction, IEqualityComparer<U> equalityComparer, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600031D")]
		public U GetResult(short token)
		{
			return (U)null;
		}

		[Token(Token = "0x600031E")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600031F")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000320")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000321")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000322")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000323")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200009D")]
	private sealed class WhenAllPromise<T1, T2> : IUniTaskSource<(T1, T2)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2)>
	{
		[Token(Token = "0x40001A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2)> core;

		[Token(Token = "0x6000328")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2)
		{
		}

		[Token(Token = "0x6000329")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600032A")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600032B")]
		public (T1, T2) GetResult(short token)
		{
			return default((T1, T2));
		}

		[Token(Token = "0x600032C")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600032D")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600032E")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600032F")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x200009F")]
	private sealed class WhenAllPromise<T1, T2, T3> : IUniTaskSource<(T1, T2, T3)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3)>
	{
		[Token(Token = "0x40001AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3)> core;

		[Token(Token = "0x6000334")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
		{
		}

		[Token(Token = "0x6000335")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000336")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000337")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000338")]
		public (T1, T2, T3) GetResult(short token)
		{
			return default((T1, T2, T3));
		}

		[Token(Token = "0x6000339")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600033A")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600033B")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600033C")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000A1")]
	private sealed class WhenAllPromise<T1, T2, T3, T4> : IUniTaskSource<(T1, T2, T3, T4)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4)>
	{
		[Token(Token = "0x40001B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40001BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4)> core;

		[Token(Token = "0x6000342")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4)
		{
		}

		[Token(Token = "0x6000343")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000344")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000345")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000346")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000347")]
		public (T1, T2, T3, T4) GetResult(short token)
		{
			return default((T1, T2, T3, T4));
		}

		[Token(Token = "0x6000348")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000349")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600034A")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600034B")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000A3")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5> : IUniTaskSource<(T1, T2, T3, T4, T5)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5)>
	{
		[Token(Token = "0x40001C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40001C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x40001C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5)> core;

		[Token(Token = "0x6000352")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5)
		{
		}

		[Token(Token = "0x6000353")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000354")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000355")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000356")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000357")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000358")]
		public (T1, T2, T3, T4, T5) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5));
		}

		[Token(Token = "0x6000359")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600035A")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600035B")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600035C")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000A5")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6> : IUniTaskSource<(T1, T2, T3, T4, T5, T6)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6)>
	{
		[Token(Token = "0x40001D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40001D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x40001D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x40001D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6)> core;

		[Token(Token = "0x6000364")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6)
		{
		}

		[Token(Token = "0x6000365")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000366")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000367")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000368")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000369")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600036A")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600036B")]
		public (T1, T2, T3, T4, T5, T6) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6));
		}

		[Token(Token = "0x600036C")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600036D")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600036E")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600036F")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000A7")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7)>
	{
		[Token(Token = "0x40001DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40001E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x40001E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x40001E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x40001E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7)> core;

		[Token(Token = "0x6000378")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7)
		{
		}

		[Token(Token = "0x6000379")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600037A")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600037B")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600037C")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600037D")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600037E")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600037F")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000380")]
		public (T1, T2, T3, T4, T5, T6, T7) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7));
		}

		[Token(Token = "0x6000381")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000382")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000383")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000384")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000A9")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8)>
	{
		[Token(Token = "0x40001F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40001F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x40001F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x40001F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x40001F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x40001F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8)> core;

		[Token(Token = "0x600038E")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8)
		{
		}

		[Token(Token = "0x600038F")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000390")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000391")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000392")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000393")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000394")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000395")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000396")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000397")]
		public (T1, T2, T3, T4, T5, T6, T7, T8) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8));
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

	[Token(Token = "0x20000AB")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9)>
	{
		[Token(Token = "0x4000203")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x4000204")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x4000205")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x4000206")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x4000207")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x4000208")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x4000209")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x400020A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x400020B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x400020C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400020D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9)> core;

		[Token(Token = "0x60003A6")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9)
		{
		}

		[Token(Token = "0x60003A7")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003A8")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003A9")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AA")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AB")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AC")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AD")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AE")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AF")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003B0")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9));
		}

		[Token(Token = "0x60003B1")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60003B2")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003B3")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003B4")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000AD")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>
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
		private T10 t10;

		[Token(Token = "0x4000222")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000223")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)> core;

		[Token(Token = "0x60003C0")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10)
		{
		}

		[Token(Token = "0x60003C1")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C2")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C3")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C4")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C5")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C6")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C7")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C8")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C9")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003CA")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003CB")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10));
		}

		[Token(Token = "0x60003CC")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60003CD")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003CE")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003CF")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000AF")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>
	{
		[Token(Token = "0x400022F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x4000230")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x4000231")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x4000232")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x4000233")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x4000234")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x4000235")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x4000236")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x4000237")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x4000238")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x4000239")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x400023A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400023B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)> core;

		[Token(Token = "0x60003DC")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11)
		{
		}

		[Token(Token = "0x60003DD")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003DE")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003DF")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E0")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E1")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E2")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E3")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E4")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E5")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E6")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E7")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E8")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11));
		}

		[Token(Token = "0x60003E9")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60003EA")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003EB")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003EC")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B1")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>
	{
		[Token(Token = "0x4000248")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x4000249")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x400024A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x400024B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x400024C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x400024D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x400024E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x400024F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x4000250")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x4000251")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x4000252")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x4000253")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T12 t12;

		[Token(Token = "0x4000254")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000255")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)> core;

		[Token(Token = "0x60003FA")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12)
		{
		}

		[Token(Token = "0x60003FB")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003FC")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003FD")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003FE")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003FF")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000400")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000401")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000402")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000403")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000404")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000405")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000406")]
		private static void TryInvokeContinuationT12(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000407")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12));
		}

		[Token(Token = "0x6000408")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000409")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600040A")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600040B")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B3")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>
	{
		[Token(Token = "0x4000263")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x4000264")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x4000265")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x4000266")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x4000267")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x4000268")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x4000269")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x400026A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x400026B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x400026C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x400026D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x400026E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T12 t12;

		[Token(Token = "0x400026F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T13 t13;

		[Token(Token = "0x4000270")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000271")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)> core;

		[Token(Token = "0x600041A")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13)
		{
		}

		[Token(Token = "0x600041B")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600041C")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600041D")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600041E")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600041F")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000420")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000421")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000422")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000423")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000424")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000425")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000426")]
		private static void TryInvokeContinuationT12(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000427")]
		private static void TryInvokeContinuationT13(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000428")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13));
		}

		[Token(Token = "0x6000429")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600042A")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600042B")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600042C")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B5")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>
	{
		[Token(Token = "0x4000280")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x4000281")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x4000282")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x4000283")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x4000284")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x4000285")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x4000286")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x4000287")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x4000288")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x4000289")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x400028A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x400028B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T12 t12;

		[Token(Token = "0x400028C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T13 t13;

		[Token(Token = "0x400028D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T14 t14;

		[Token(Token = "0x400028E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400028F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)> core;

		[Token(Token = "0x600043C")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14)
		{
		}

		[Token(Token = "0x600043D")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600043E")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600043F")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000440")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000441")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000442")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000443")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000444")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000445")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000446")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000447")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000448")]
		private static void TryInvokeContinuationT12(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000449")]
		private static void TryInvokeContinuationT13(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600044A")]
		private static void TryInvokeContinuationT14(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T14>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600044B")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14));
		}

		[Token(Token = "0x600044C")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600044D")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600044E")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600044F")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B7")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>
	{
		[Token(Token = "0x400029F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40002A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40002A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40002A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40002A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x40002A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x40002A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x40002A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x40002A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x40002A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x40002A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x40002AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T12 t12;

		[Token(Token = "0x40002AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T13 t13;

		[Token(Token = "0x40002AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T14 t14;

		[Token(Token = "0x40002AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T15 t15;

		[Token(Token = "0x40002AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)> core;

		[Token(Token = "0x6000460")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14, UniTask<T15> task15)
		{
		}

		[Token(Token = "0x6000461")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000462")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000463")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000464")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000465")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000466")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000467")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000468")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000469")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046A")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046B")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046C")]
		private static void TryInvokeContinuationT12(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046D")]
		private static void TryInvokeContinuationT13(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046E")]
		private static void TryInvokeContinuationT14(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T14>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046F")]
		private static void TryInvokeContinuationT15(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T15>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000470")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15));
		}

		[Token(Token = "0x6000471")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000472")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000473")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000474")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B9")]
	private sealed class WhenAllPromise<T> : IUniTaskSource<T[]>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T[]>
	{
		[Token(Token = "0x40002C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T[] result;

		[Token(Token = "0x40002C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completeCount;

		[Token(Token = "0x40002C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<T[]> core;

		[Token(Token = "0x6000486")]
		public WhenAllPromise(UniTask<T>[] tasks, int tasksLength)
		{
		}

		[Token(Token = "0x6000487")]
		private static void TryInvokeContinuation(WhenAllPromise<T> self, in UniTask<T>.Awaiter awaiter, int i)
		{
		}

		[Token(Token = "0x6000488")]
		public T[] GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x6000489")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600048A")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600048B")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600048C")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000BB")]
	private sealed class WhenAllPromise : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x40002C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int completeCount;

		[Token(Token = "0x40002C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		private int tasksLength;

		[Token(Token = "0x40002C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x6000490")]
		[Address(RVA = "0x2923BD0", Offset = "0x29221D0", VA = "0x182923BD0")]
		public WhenAllPromise(UniTask[] tasks, int tasksLength)
		{
		}

		[Token(Token = "0x6000491")]
		[Address(RVA = "0x2923A80", Offset = "0x2922080", VA = "0x182923A80")]
		private static void TryInvokeContinuation(WhenAllPromise self, in Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000492")]
		[Address(RVA = "0x2923950", Offset = "0x2921F50", VA = "0x182923950", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000493")]
		[Address(RVA = "0x29239D0", Offset = "0x2921FD0", VA = "0x1829239D0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000494")]
		[Address(RVA = "0x2923B90", Offset = "0x2922190", VA = "0x182923B90", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000495")]
		[Address(RVA = "0x2923A20", Offset = "0x2922020", VA = "0x182923A20", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000BD")]
	private sealed class WhenAnyPromise<T1, T2> : IUniTaskSource<(int, T1, T2)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2)>
	{
		[Token(Token = "0x40002CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2)> core;

		[Token(Token = "0x6000499")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2)
		{
		}

		[Token(Token = "0x600049A")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600049B")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600049C")]
		public (int, T1, T2) GetResult(short token)
		{
			return default((int, T1, T2));
		}

		[Token(Token = "0x600049D")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600049E")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600049F")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004A0")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000BF")]
	private sealed class WhenAnyPromise<T1, T2, T3> : IUniTaskSource<(int, T1, T2, T3)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3)>
	{
		[Token(Token = "0x40002CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3)> core;

		[Token(Token = "0x60004A5")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
		{
		}

		[Token(Token = "0x60004A6")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004A7")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004A8")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004A9")]
		public (int, T1, T2, T3) GetResult(short token)
		{
			return default((int, T1, T2, T3));
		}

		[Token(Token = "0x60004AA")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004AB")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004AC")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004AD")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000C1")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4> : IUniTaskSource<(int, T1, T2, T3, T4)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4)>
	{
		[Token(Token = "0x40002D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4)> core;

		[Token(Token = "0x60004B3")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4)
		{
		}

		[Token(Token = "0x60004B4")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004B5")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004B6")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004B7")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004B8")]
		public (int, T1, T2, T3, T4) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4));
		}

		[Token(Token = "0x60004B9")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004BA")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004BB")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004BC")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000C3")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5> : IUniTaskSource<(int, T1, T2, T3, T4, T5)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5)>
	{
		[Token(Token = "0x40002DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5)> core;

		[Token(Token = "0x60004C3")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5)
		{
		}

		[Token(Token = "0x60004C4")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004C5")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004C6")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004C7")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004C8")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004C9")]
		public (int, T1, T2, T3, T4, T5) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5));
		}

		[Token(Token = "0x60004CA")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004CB")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004CC")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004CD")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000C5")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6)>
	{
		[Token(Token = "0x40002E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6)> core;

		[Token(Token = "0x60004D5")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6)
		{
		}

		[Token(Token = "0x60004D6")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004D7")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004D8")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004D9")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004DA")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004DB")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004DC")]
		public (int, T1, T2, T3, T4, T5, T6) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6));
		}

		[Token(Token = "0x60004DD")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004DE")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004DF")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004E0")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000C7")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7)>
	{
		[Token(Token = "0x40002ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7)> core;

		[Token(Token = "0x60004E9")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7)
		{
		}

		[Token(Token = "0x60004EA")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004EB")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004EC")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004ED")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004EE")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004EF")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004F0")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004F1")]
		public (int, T1, T2, T3, T4, T5, T6, T7) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7));
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

	[Token(Token = "0x20000C9")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8)>
	{
		[Token(Token = "0x40002F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8)> core;

		[Token(Token = "0x60004FF")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8)
		{
		}

		[Token(Token = "0x6000500")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000501")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000502")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000503")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000504")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000505")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000506")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000507")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000508")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8));
		}

		[Token(Token = "0x6000509")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600050A")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600050B")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600050C")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000CB")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9)>
	{
		[Token(Token = "0x4000302")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000303")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9)> core;

		[Token(Token = "0x6000517")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9)
		{
		}

		[Token(Token = "0x6000518")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000519")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600051A")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600051B")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600051C")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600051D")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600051E")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600051F")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000520")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000521")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9));
		}

		[Token(Token = "0x6000522")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000523")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000524")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000525")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000CD")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>
	{
		[Token(Token = "0x400030E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400030F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10)> core;

		[Token(Token = "0x6000531")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10)
		{
		}

		[Token(Token = "0x6000532")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000533")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000534")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000535")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000536")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000537")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000538")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000539")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600053A")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600053B")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600053C")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10));
		}

		[Token(Token = "0x600053D")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600053E")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600053F")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000540")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000CF")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>
	{
		[Token(Token = "0x400031B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400031C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11)> core;

		[Token(Token = "0x600054D")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11)
		{
		}

		[Token(Token = "0x600054E")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600054F")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000550")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000551")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000552")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000553")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000554")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000555")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000556")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000557")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000558")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000559")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11));
		}

		[Token(Token = "0x600055A")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600055B")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600055C")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600055D")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D1")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>
	{
		[Token(Token = "0x4000329")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400032A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11, T12 result12)> core;

		[Token(Token = "0x600056B")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12)
		{
		}

		[Token(Token = "0x600056C")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600056D")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600056E")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600056F")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000570")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000571")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000572")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000573")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000574")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000575")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000576")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000577")]
		private static void TryInvokeContinuationT12(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000578")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12));
		}

		[Token(Token = "0x6000579")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600057A")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600057B")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600057C")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D3")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>
	{
		[Token(Token = "0x4000338")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000339")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11, T12 result12, T13 result13)> core;

		[Token(Token = "0x600058B")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13)
		{
		}

		[Token(Token = "0x600058C")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600058D")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600058E")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600058F")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000590")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000591")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000592")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000593")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000594")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000595")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000596")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000597")]
		private static void TryInvokeContinuationT12(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000598")]
		private static void TryInvokeContinuationT13(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000599")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13));
		}

		[Token(Token = "0x600059A")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600059B")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600059C")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600059D")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D5")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>
	{
		[Token(Token = "0x4000348")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000349")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11, T12 result12, T13 result13, T14 result14)> core;

		[Token(Token = "0x60005AD")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14)
		{
		}

		[Token(Token = "0x60005AE")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005AF")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B0")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B1")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B2")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B3")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B4")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B5")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B6")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B7")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B8")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B9")]
		private static void TryInvokeContinuationT12(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005BA")]
		private static void TryInvokeContinuationT13(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005BB")]
		private static void TryInvokeContinuationT14(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T14>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005BC")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14));
		}

		[Token(Token = "0x60005BD")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005BE")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60005BF")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005C0")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D7")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>
	{
		[Token(Token = "0x4000359")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400035A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11, T12 result12, T13 result13, T14 result14, T15 result15)> core;

		[Token(Token = "0x60005D1")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14, UniTask<T15> task15)
		{
		}

		[Token(Token = "0x60005D2")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D3")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D4")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D5")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D6")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D7")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D8")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D9")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005DA")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005DB")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005DC")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005DD")]
		private static void TryInvokeContinuationT12(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005DE")]
		private static void TryInvokeContinuationT13(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005DF")]
		private static void TryInvokeContinuationT14(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T14>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005E0")]
		private static void TryInvokeContinuationT15(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T15>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005E1")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15));
		}

		[Token(Token = "0x60005E2")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005E3")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60005E4")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005E5")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D9")]
	private sealed class WhenAnyLRPromise<T> : IUniTaskSource<(bool, T)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(bool, T)>
	{
		[Token(Token = "0x400036B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400036C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(bool, T)> core;

		[Token(Token = "0x60005F7")]
		public WhenAnyLRPromise(UniTask<T> leftTask, UniTask rightTask)
		{
		}

		[Token(Token = "0x60005F8")]
		private static void TryLeftInvokeContinuation(WhenAnyLRPromise<T> self, in UniTask<T>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005F9")]
		private static void TryRightInvokeContinuation(WhenAnyLRPromise<T> self, in Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005FA")]
		public (bool, T) GetResult(short token)
		{
			return default((bool, T));
		}

		[Token(Token = "0x60005FB")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005FC")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60005FD")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005FE")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000DB")]
	private sealed class WhenAnyPromise<T> : IUniTaskSource<(int, T)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T)>
	{
		[Token(Token = "0x4000370")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000371")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T)> core;

		[Token(Token = "0x6000603")]
		public WhenAnyPromise(UniTask<T>[] tasks, int tasksLength)
		{
		}

		[Token(Token = "0x6000604")]
		private static void TryInvokeContinuation(WhenAnyPromise<T> self, in UniTask<T>.Awaiter awaiter, int i)
		{
		}

		[Token(Token = "0x6000605")]
		public (int, T) GetResult(short token)
		{
			return default((int, T));
		}

		[Token(Token = "0x6000606")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000607")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000608")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000609")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000DD")]
	private sealed class WhenAnyPromise : IUniTaskSource<int>, IUniTaskSource, IValueTaskSource, IValueTaskSource<int>
	{
		[Token(Token = "0x4000374")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int completedCount;

		[Token(Token = "0x4000375")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UniTaskCompletionSourceCore<int> core;

		[Token(Token = "0x600060D")]
		[Address(RVA = "0x29243D0", Offset = "0x29229D0", VA = "0x1829243D0")]
		public WhenAnyPromise(UniTask[] tasks, int tasksLength)
		{
		}

		[Token(Token = "0x600060E")]
		[Address(RVA = "0x2924230", Offset = "0x2922830", VA = "0x182924230")]
		private static void TryInvokeContinuation(WhenAnyPromise self, in Awaiter awaiter, int i)
		{
		}

		[Token(Token = "0x600060F")]
		[Address(RVA = "0x2923EA0", Offset = "0x29224A0", VA = "0x182923EA0", Slot = "22")]
		public int GetResult(short token)
		{
			return default(int);
		}

		[Token(Token = "0x6000610")]
		[Address(RVA = "0x2923F20", Offset = "0x2922520", VA = "0x182923F20", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000611")]
		[Address(RVA = "0x2924070", Offset = "0x2922670", VA = "0x182924070", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000612")]
		[Address(RVA = "0x2924320", Offset = "0x2922920", VA = "0x182924320", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000613")]
		[Address(RVA = "0x2923EA0", Offset = "0x29224A0", VA = "0x182923EA0", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000DF")]
	private sealed class AsyncUnitSource : IUniTaskSource<AsyncUnit>, IUniTaskSource, IValueTaskSource, IValueTaskSource<AsyncUnit>
	{
		[Token(Token = "0x4000378")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly IUniTaskSource source;

		[Token(Token = "0x6000617")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		public AsyncUnitSource(IUniTaskSource source)
		{
		}

		[Token(Token = "0x6000618")]
		[Address(RVA = "0x2907420", Offset = "0x2905A20", VA = "0x182907420", Slot = "22")]
		public AsyncUnit GetResult(short token)
		{
			return default(AsyncUnit);
		}

		[Token(Token = "0x6000619")]
		[Address(RVA = "0x29074B0", Offset = "0x2905AB0", VA = "0x1829074B0", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600061A")]
		[Address(RVA = "0x2907510", Offset = "0x2905B10", VA = "0x182907510", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600061B")]
		[Address(RVA = "0x2907580", Offset = "0x2905B80", VA = "0x182907580", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600061C")]
		[Address(RVA = "0x29073A0", Offset = "0x29059A0", VA = "0x1829073A0", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000E0")]
	private sealed class IsCanceledSource : IUniTaskSource<bool>, IUniTaskSource, IValueTaskSource, IValueTaskSource<bool>
	{
		[Token(Token = "0x4000379")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly IUniTaskSource source;

		[Token(Token = "0x600061D")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		public IsCanceledSource(IUniTaskSource source)
		{
		}

		[Token(Token = "0x600061E")]
		[Address(RVA = "0x290E3D0", Offset = "0x290C9D0", VA = "0x18290E3D0", Slot = "22")]
		public bool GetResult(short token)
		{
			return default(bool);
		}

		[Token(Token = "0x600061F")]
		[Address(RVA = "0x290E350", Offset = "0x290C950", VA = "0x18290E350", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000620")]
		[Address(RVA = "0x290E460", Offset = "0x290CA60", VA = "0x18290E460", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000621")]
		[Address(RVA = "0x290E530", Offset = "0x290CB30", VA = "0x18290E530", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000622")]
		[Address(RVA = "0x290E4C0", Offset = "0x290CAC0", VA = "0x18290E4C0", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000E1")]
	private sealed class MemoizeSource : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x400037A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IUniTaskSource source;

		[Token(Token = "0x400037B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private ExceptionDispatchInfo exception;

		[Token(Token = "0x400037C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTaskStatus status;

		[Token(Token = "0x6000623")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		public MemoizeSource(IUniTaskSource source)
		{
		}

		[Token(Token = "0x6000624")]
		[Address(RVA = "0x290E580", Offset = "0x290CB80", VA = "0x18290E580", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000625")]
		[Address(RVA = "0x290E6F0", Offset = "0x290CCF0", VA = "0x18290E6F0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000626")]
		[Address(RVA = "0x290E760", Offset = "0x290CD60", VA = "0x18290E760", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000627")]
		[Address(RVA = "0x290E7F0", Offset = "0x290CDF0", VA = "0x18290E7F0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x20000E2")]
	public readonly struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400037D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly UniTask task;

		[Token(Token = "0x17000040")]
		public bool IsCompleted
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000629")]
			[Address(RVA = "0x2909470", Offset = "0x2907A70", VA = "0x182909470")]
			[DebuggerHidden]
			get
			{
				return default(bool);
			}
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000628")]
		[Address(RVA = "0xEF4190", Offset = "0xEF2790", VA = "0x180EF4190")]
		[DebuggerHidden]
		public Awaiter(in UniTask task)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600062A")]
		[Address(RVA = "0x2908620", Offset = "0x2906C20", VA = "0x182908620")]
		[DebuggerHidden]
		public void GetResult()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600062B")]
		[Address(RVA = "0x2908A50", Offset = "0x2907050", VA = "0x182908A50", Slot = "5")]
		[DebuggerHidden]
		public void OnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600062C")]
		[Address(RVA = "0x2908F60", Offset = "0x2907560", VA = "0x182908F60", Slot = "4")]
		[DebuggerHidden]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600062D")]
		[Address(RVA = "0x2908C20", Offset = "0x2907220", VA = "0x182908C20")]
		[DebuggerHidden]
		public void SourceOnCompleted(Action<object> continuation, object state)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F2")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__82 : IAsyncStateMachine
	{
		[Token(Token = "0x4000395")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000396")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000397")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000398")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool configureAwait;

		[Token(Token = "0x4000399")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action action;

		[Token(Token = "0x400039A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x400039B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x400039C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x400039D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		private YieldAwaitable.Awaiter _003C_003Eu__2;

		[Token(Token = "0x600064D")]
		[Address(RVA = "0x2914DD0", Offset = "0x29133D0", VA = "0x182914DD0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600064E")]
		[Address(RVA = "0x8E6930", Offset = "0x8E4F30", VA = "0x1808E6930", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F3")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__83 : IAsyncStateMachine
	{
		[Token(Token = "0x400039E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400039F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40003A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool configureAwait;

		[Token(Token = "0x40003A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action<object> action;

		[Token(Token = "0x40003A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public object state;

		[Token(Token = "0x40003A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private YieldAwaitable.Awaiter _003C_003Eu__2;

		[Token(Token = "0x600064F")]
		[Address(RVA = "0x29152A0", Offset = "0x29138A0", VA = "0x1829152A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000650")]
		[Address(RVA = "0x8E6930", Offset = "0x8E4F30", VA = "0x1808E6930", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F4")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__84 : IAsyncStateMachine
	{
		[Token(Token = "0x40003A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40003AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool configureAwait;

		[Token(Token = "0x40003AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Func<UniTask> action;

		[Token(Token = "0x40003AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private Awaiter _003C_003Eu__2;

		[Token(Token = "0x40003B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private YieldAwaitable.Awaiter _003C_003Eu__3;

		[Token(Token = "0x6000651")]
		[Address(RVA = "0x2915780", Offset = "0x2913D80", VA = "0x182915780", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000652")]
		[Address(RVA = "0x8E6930", Offset = "0x8E4F30", VA = "0x1808E6930", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F5")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__85 : IAsyncStateMachine
	{
		[Token(Token = "0x40003B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40003B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool configureAwait;

		[Token(Token = "0x40003B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Func<object, UniTask> action;

		[Token(Token = "0x40003B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public object state;

		[Token(Token = "0x40003B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private Awaiter _003C_003Eu__2;

		[Token(Token = "0x40003BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private YieldAwaitable.Awaiter _003C_003Eu__3;

		[Token(Token = "0x6000653")]
		[Address(RVA = "0x2915EF0", Offset = "0x29144F0", VA = "0x182915EF0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000654")]
		[Address(RVA = "0x8E6930", Offset = "0x8E4F30", VA = "0x1808E6930", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F6")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__86<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40003BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40003BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool configureAwait;

		[Token(Token = "0x40003C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<T> func;

		[Token(Token = "0x40003C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E7__wrap3;

		[Token(Token = "0x40003C6")]
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
	[Token(Token = "0x20000F7")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__87<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40003C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40003C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool configureAwait;

		[Token(Token = "0x40003CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<UniTask<T>> func;

		[Token(Token = "0x40003CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E7__wrap3;

		[Token(Token = "0x40003D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__2;

		[Token(Token = "0x40003D1")]
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
	[Token(Token = "0x20000F8")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__88<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40003D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40003D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool configureAwait;

		[Token(Token = "0x40003D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<object, T> func;

		[Token(Token = "0x40003D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public object state;

		[Token(Token = "0x40003D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E7__wrap3;

		[Token(Token = "0x40003DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private YieldAwaitable.Awaiter _003C_003Eu__2;

		[Token(Token = "0x6000659")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600065A")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F9")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__89<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40003DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40003DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool configureAwait;

		[Token(Token = "0x40003E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<object, UniTask<T>> func;

		[Token(Token = "0x40003E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public object state;

		[Token(Token = "0x40003E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E7__wrap3;

		[Token(Token = "0x40003E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__2;

		[Token(Token = "0x40003E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private YieldAwaitable.Awaiter _003C_003Eu__3;

		[Token(Token = "0x600065B")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600065C")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000FA")]
	[CompilerGenerated]
	private struct _003CWaitForEndOfFrame_003Ed__9 : IAsyncStateMachine
	{
		[Token(Token = "0x40003E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40003EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private Awaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x600065D")]
		[Address(RVA = "0x291A260", Offset = "0x2918860", VA = "0x18291A260", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600065E")]
		[Address(RVA = "0x8E6930", Offset = "0x8E4F30", VA = "0x1808E6930", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40000FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly UniTask CanceledUniTask;

	[Token(Token = "0x4000100")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly UniTask CompletedTask;

	[Token(Token = "0x4000101")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly IUniTaskSource source;

	[Token(Token = "0x4000102")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly short token;

	[Token(Token = "0x17000030")]
	public UniTaskStatus Status
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000221")]
		[Address(RVA = "0x2921AE0", Offset = "0x29200E0", VA = "0x182921AE0")]
		[DebuggerHidden]
		get
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x2920990", Offset = "0x291EF90", VA = "0x182920990")]
	public static IEnumerator ToCoroutine(Func<UniTask> taskFactory)
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x846F50", Offset = "0x845550", VA = "0x180846F50")]
	public static YieldAwaitable Yield()
	{
		return default(YieldAwaitable);
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x611500", Offset = "0x60FB00", VA = "0x180611500")]
	public static YieldAwaitable Yield(PlayerLoopTiming timing)
	{
		return default(YieldAwaitable);
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x2921900", Offset = "0x291FF00", VA = "0x182921900")]
	public static UniTask Yield(CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x2921860", Offset = "0x291FE60", VA = "0x182921860")]
	public static UniTask Yield(PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x291FBB0", Offset = "0x291E1B0", VA = "0x18291FBB0")]
	public static UniTask NextFrame()
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x291FAE0", Offset = "0x291E0E0", VA = "0x18291FAE0")]
	public static UniTask NextFrame(PlayerLoopTiming timing)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x291F990", Offset = "0x291DF90", VA = "0x18291F990")]
	public static UniTask NextFrame(CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x291FA40", Offset = "0x291E040", VA = "0x18291FA40")]
	public static UniTask NextFrame(PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x2920D00", Offset = "0x291F300", VA = "0x182920D00")]
	[AsyncStateMachine(typeof(_003CWaitForEndOfFrame_003Ed__9))]
	public static UniTask WaitForEndOfFrame([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x2920E60", Offset = "0x291F460", VA = "0x182920E60")]
	public static UniTask WaitForEndOfFrame(MonoBehaviour coroutineRunner)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x2920DC0", Offset = "0x291F3C0", VA = "0x182920DC0")]
	public static UniTask WaitForEndOfFrame(MonoBehaviour coroutineRunner, CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x2921010", Offset = "0x291F610", VA = "0x182921010")]
	public static YieldAwaitable WaitForFixedUpdate()
	{
		return default(YieldAwaitable);
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x2920F30", Offset = "0x291F530", VA = "0x182920F30")]
	public static UniTask WaitForFixedUpdate(CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x29210F0", Offset = "0x291F6F0", VA = "0x1829210F0")]
	public static UniTask WaitForSeconds(float duration, [Optional][DefaultParameterValue(false)] bool ignoreTimeScale, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x2921050", Offset = "0x291F650", VA = "0x182921050")]
	public static UniTask WaitForSeconds(int duration, [Optional][DefaultParameterValue(false)] bool ignoreTimeScale, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x291EF80", Offset = "0x291D580", VA = "0x18291EF80")]
	public static UniTask DelayFrame(int delayFrameCount, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x291F0A0", Offset = "0x291D6A0", VA = "0x18291F0A0")]
	public static UniTask Delay(int millisecondsDelay, [Optional][DefaultParameterValue(false)] bool ignoreTimeScale, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x291F1A0", Offset = "0x291D7A0", VA = "0x18291F1A0")]
	public static UniTask Delay(TimeSpan delayTimeSpan, [Optional][DefaultParameterValue(false)] bool ignoreTimeScale, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x291F230", Offset = "0x291D830", VA = "0x18291F230")]
	public static UniTask Delay(int millisecondsDelay, DelayType delayType, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x291F2F0", Offset = "0x291D8F0", VA = "0x18291F2F0")]
	public static UniTask Delay(TimeSpan delayTimeSpan, DelayType delayType, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x291F680", Offset = "0x291DC80", VA = "0x18291F680")]
	public static UniTask FromException(Exception ex)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B8")]
	public static UniTask<T> FromException<T>(Exception ex)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001B9")]
	public static UniTask<T> FromResult<T>(T value)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x291F570", Offset = "0x291DB70", VA = "0x18291F570")]
	public static UniTask FromCanceled([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001BB")]
	public static UniTask<T> FromCanceled<T>([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x291EEB0", Offset = "0x291D4B0", VA = "0x18291EEB0")]
	public static UniTask Create(Func<UniTask> factory)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x291EE70", Offset = "0x291D470", VA = "0x18291EE70")]
	public static UniTask Create(Func<CancellationToken, UniTask> factory, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001BE")]
	public static UniTask Create<T>(T state, Func<T, UniTask> factory)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001BF")]
	public static UniTask<T> Create<T>(Func<UniTask<T>> factory)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x291F7D0", Offset = "0x291DDD0", VA = "0x18291F7D0")]
	public static AsyncLazy Lazy(Func<UniTask> factory)
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	public static AsyncLazy<T> Lazy<T>(Func<UniTask<T>> factory)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x2920CC0", Offset = "0x291F2C0", VA = "0x182920CC0")]
	public static void Void(Func<UniTaskVoid> asyncAction)
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x2920C80", Offset = "0x291F280", VA = "0x182920C80")]
	public static void Void(Func<CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x60001C4")]
	public static void Void<T>(Func<T, UniTaskVoid> asyncAction, T state)
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x291EB40", Offset = "0x291D140", VA = "0x18291EB40")]
	public static Action Action(Func<UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x291EBF0", Offset = "0x291D1F0", VA = "0x18291EBF0")]
	public static Action Action(Func<CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001C7")]
	public static Action Action<T>(T state, Func<T, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x2920BD0", Offset = "0x291F1D0", VA = "0x182920BD0")]
	public static UnityAction UnityAction(Func<UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x2920B00", Offset = "0x291F100", VA = "0x182920B00")]
	public static UnityAction UnityAction(Func<CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001CA")]
	public static UnityAction UnityAction<T>(T state, Func<T, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001CB")]
	public static UnityAction<T> UnityAction<T>(Func<T, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001CC")]
	public static UnityAction<T0, T1> UnityAction<T0, T1>(Func<T0, T1, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001CD")]
	public static UnityAction<T0, T1, T2> UnityAction<T0, T1, T2>(Func<T0, T1, T2, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001CE")]
	public static UnityAction<T0, T1, T2, T3> UnityAction<T0, T1, T2, T3>(Func<T0, T1, T2, T3, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001CF")]
	public static UnityAction<T> UnityAction<T>(Func<T, CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001D0")]
	public static UnityAction<T0, T1> UnityAction<T0, T1>(Func<T0, T1, CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001D1")]
	public static UnityAction<T0, T1, T2> UnityAction<T0, T1, T2>(Func<T0, T1, T2, CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001D2")]
	public static UnityAction<T0, T1, T2, T3> UnityAction<T0, T1, T2, T3>(Func<T0, T1, T2, T3, CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x291EEF0", Offset = "0x291D4F0", VA = "0x18291EEF0")]
	public static UniTask Defer(Func<UniTask> factory)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001D4")]
	public static UniTask<T> Defer<T>(Func<UniTask<T>> factory)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001D5")]
	public static UniTask Defer<TState>(TState state, Func<TState, UniTask> factory)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001D6")]
	public static UniTask<TResult> Defer<TState, TResult>(TState state, Func<TState, UniTask<TResult>> factory)
	{
		return default(UniTask<TResult>);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x291F8B0", Offset = "0x291DEB0", VA = "0x18291F8B0")]
	public static UniTask Never(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001D8")]
	public static UniTask<T> Never<T>(CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x2920500", Offset = "0x291EB00", VA = "0x182920500")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask Run(Action action, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x2920620", Offset = "0x291EC20", VA = "0x182920620")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask Run(Action<object> action, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x29202A0", Offset = "0x291E8A0", VA = "0x1829202A0")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask Run(Func<UniTask> action, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x29203C0", Offset = "0x291E9C0", VA = "0x1829203C0")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask Run(Func<object, UniTask> action, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001DD")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask<T> Run<T>(Func<T> func, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001DE")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask<T> Run<T>(Func<UniTask<T>> func, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001DF")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask<T> Run<T>(Func<object, T> func, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E0")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask<T> Run<T>(Func<object, UniTask<T>> func, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x29201B0", Offset = "0x291E7B0", VA = "0x1829201B0")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__82))]
	public static UniTask RunOnThreadPool(Action action, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x291FFB0", Offset = "0x291E5B0", VA = "0x18291FFB0")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__83))]
	public static UniTask RunOnThreadPool(Action<object> action, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x29200C0", Offset = "0x291E6C0", VA = "0x1829200C0")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__84))]
	public static UniTask RunOnThreadPool(Func<UniTask> action, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x291FEA0", Offset = "0x291E4A0", VA = "0x18291FEA0")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__85))]
	public static UniTask RunOnThreadPool(Func<object, UniTask> action, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001E5")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__86<>))]
	public static UniTask<T> RunOnThreadPool<T>(Func<T> func, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E6")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__87<>))]
	public static UniTask<T> RunOnThreadPool<T>(Func<UniTask<T>> func, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E7")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__88<>))]
	public static UniTask<T> RunOnThreadPool<T>(Func<object, T> func, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E8")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__89<>))]
	public static UniTask<T> RunOnThreadPool<T>(Func<object, UniTask<T>> func, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x291FDF0", Offset = "0x291E3F0", VA = "0x18291FDF0")]
	public static SwitchToMainThreadAwaitable SwitchToMainThread([Optional] CancellationToken cancellationToken)
	{
		return default(SwitchToMainThreadAwaitable);
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x291FE20", Offset = "0x291E420", VA = "0x18291FE20")]
	public static SwitchToMainThreadAwaitable SwitchToMainThread(PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken)
	{
		return default(SwitchToMainThreadAwaitable);
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x291FDF0", Offset = "0x291E3F0", VA = "0x18291FDF0")]
	public static ReturnToMainThread ReturnToMainThread([Optional] CancellationToken cancellationToken)
	{
		return default(ReturnToMainThread);
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x291FE20", Offset = "0x291E420", VA = "0x18291FE20")]
	public static ReturnToMainThread ReturnToMainThread(PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken)
	{
		return default(ReturnToMainThread);
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x291FC70", Offset = "0x291E270", VA = "0x18291FC70")]
	public static void Post(Action action, PlayerLoopTiming timing = PlayerLoopTiming.Update)
	{
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	public static SwitchToThreadPoolAwaitable SwitchToThreadPool()
	{
		return default(SwitchToThreadPoolAwaitable);
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	public static SwitchToTaskPoolAwaitable SwitchToTaskPool()
	{
		return default(SwitchToTaskPoolAwaitable);
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x2920900", Offset = "0x291EF00", VA = "0x182920900")]
	public static SwitchToSynchronizationContextAwaitable SwitchToSynchronizationContext(SynchronizationContext synchronizationContext, [Optional] CancellationToken cancellationToken)
	{
		return default(SwitchToSynchronizationContextAwaitable);
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x291FE50", Offset = "0x291E450", VA = "0x18291FE50")]
	public static ReturnToSynchronizationContext ReturnToSynchronizationContext(SynchronizationContext synchronizationContext, [Optional] CancellationToken cancellationToken)
	{
		return default(ReturnToSynchronizationContext);
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x291FD90", Offset = "0x291E390", VA = "0x18291FD90")]
	public static ReturnToSynchronizationContext ReturnToCurrentSynchronizationContext([Optional][DefaultParameterValue(true)] bool dontPostWhenSameContext, [Optional] CancellationToken cancellationToken)
	{
		return default(ReturnToSynchronizationContext);
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x2921310", Offset = "0x291F910", VA = "0x182921310")]
	public static UniTask WaitUntil(Func<bool> predicate, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001F4")]
	public static UniTask WaitUntil<T>(T state, Func<T, bool> predicate, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x29213B0", Offset = "0x291F9B0", VA = "0x1829213B0")]
	public static UniTask WaitWhile(Func<bool> predicate, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001F6")]
	public static UniTask WaitWhile<T>(T state, Func<T, bool> predicate, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x2921270", Offset = "0x291F870", VA = "0x182921270")]
	public static UniTask WaitUntilCanceled(CancellationToken cancellationToken, PlayerLoopTiming timing = PlayerLoopTiming.Update, bool completeImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001F8")]
	public static UniTask<U> WaitUntilValueChanged<T, U>(T target, Func<T, U> monitorFunction, [Optional][DefaultParameterValue(8)] PlayerLoopTiming monitorTiming, [Optional] IEqualityComparer<U> equalityComparer, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false) where T : class
	{
		return default(UniTask<U>);
	}

	[Token(Token = "0x60001F9")]
	public static UniTask<(T1, T2)> WhenAll<T1, T2>(UniTask<T1> task1, UniTask<T2> task2)
	{
		return default(UniTask<(T1, T2)>);
	}

	[Token(Token = "0x60001FA")]
	public static UniTask<(T1, T2, T3)> WhenAll<T1, T2, T3>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
	{
		return default(UniTask<(T1, T2, T3)>);
	}

	[Token(Token = "0x60001FB")]
	public static UniTask<(T1, T2, T3, T4)> WhenAll<T1, T2, T3, T4>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4)
	{
		return default(UniTask<(T1, T2, T3, T4)>);
	}

	[Token(Token = "0x60001FC")]
	public static UniTask<(T1, T2, T3, T4, T5)> WhenAll<T1, T2, T3, T4, T5>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5)
	{
		return default(UniTask<(T1, T2, T3, T4, T5)>);
	}

	[Token(Token = "0x60001FD")]
	public static UniTask<(T1, T2, T3, T4, T5, T6)> WhenAll<T1, T2, T3, T4, T5, T6>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6)>);
	}

	[Token(Token = "0x60001FE")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7)> WhenAll<T1, T2, T3, T4, T5, T6, T7>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7)>);
	}

	[Token(Token = "0x60001FF")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8)>);
	}

	[Token(Token = "0x6000200")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9)>);
	}

	[Token(Token = "0x6000201")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>);
	}

	[Token(Token = "0x6000202")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>);
	}

	[Token(Token = "0x6000203")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>);
	}

	[Token(Token = "0x6000204")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>);
	}

	[Token(Token = "0x6000205")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>);
	}

	[Token(Token = "0x6000206")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14, UniTask<T15> task15)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>);
	}

	[Token(Token = "0x6000207")]
	public static UniTask<T[]> WhenAll<T>(params UniTask<T>[] tasks)
	{
		return default(UniTask<T[]>);
	}

	[Token(Token = "0x6000208")]
	public static UniTask<T[]> WhenAll<T>(IEnumerable<UniTask<T>> tasks)
	{
		return default(UniTask<T[]>);
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x2921590", Offset = "0x291FB90", VA = "0x182921590")]
	public static UniTask WhenAll(params UniTask[] tasks)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x2921450", Offset = "0x291FA50", VA = "0x182921450")]
	public static UniTask WhenAll(IEnumerable<UniTask> tasks)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600020B")]
	public static UniTask<(int, T1, T2)> WhenAny<T1, T2>(UniTask<T1> task1, UniTask<T2> task2)
	{
		return default(UniTask<(int, T1, T2)>);
	}

	[Token(Token = "0x600020C")]
	public static UniTask<(int, T1, T2, T3)> WhenAny<T1, T2, T3>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
	{
		return default(UniTask<(int, T1, T2, T3)>);
	}

	[Token(Token = "0x600020D")]
	public static UniTask<(int, T1, T2, T3, T4)> WhenAny<T1, T2, T3, T4>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4)
	{
		return default(UniTask<(int, T1, T2, T3, T4)>);
	}

	[Token(Token = "0x600020E")]
	public static UniTask<(int, T1, T2, T3, T4, T5)> WhenAny<T1, T2, T3, T4, T5>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5)>);
	}

	[Token(Token = "0x600020F")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6)> WhenAny<T1, T2, T3, T4, T5, T6>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6)>);
	}

	[Token(Token = "0x6000210")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7)> WhenAny<T1, T2, T3, T4, T5, T6, T7>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7)>);
	}

	[Token(Token = "0x6000211")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8)>);
	}

	[Token(Token = "0x6000212")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9)>);
	}

	[Token(Token = "0x6000213")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>);
	}

	[Token(Token = "0x6000214")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>);
	}

	[Token(Token = "0x6000215")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>);
	}

	[Token(Token = "0x6000216")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>);
	}

	[Token(Token = "0x6000217")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>);
	}

	[Token(Token = "0x6000218")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14, UniTask<T15> task15)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>);
	}

	[Token(Token = "0x6000219")]
	public static UniTask<(bool, T)> WhenAny<T>(UniTask<T> leftTask, UniTask rightTask)
	{
		return default(UniTask<(bool, T)>);
	}

	[Token(Token = "0x600021A")]
	public static UniTask<(int, T)> WhenAny<T>(params UniTask<T>[] tasks)
	{
		return default(UniTask<(int, T)>);
	}

	[Token(Token = "0x600021B")]
	public static UniTask<(int, T)> WhenAny<T>(IEnumerable<UniTask<T>> tasks)
	{
		return default(UniTask<(int, T)>);
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x2921670", Offset = "0x291FC70", VA = "0x182921670")]
	public static UniTask<int> WhenAny(params UniTask[] tasks)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x2921710", Offset = "0x291FD10", VA = "0x182921710")]
	public static UniTask<int> WhenAny(IEnumerable<UniTask> tasks)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x600021E")]
	public static IUniTaskAsyncEnumerable<WhenEachResult<T>> WhenEach<T>(IEnumerable<UniTask<T>> tasks)
	{
		return null;
	}

	[Token(Token = "0x600021F")]
	public static IUniTaskAsyncEnumerable<WhenEachResult<T>> WhenEach<T>(params UniTask<T>[] tasks)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000220")]
	[Address(RVA = "0x2921AB0", Offset = "0x29200B0", VA = "0x182921AB0")]
	[DebuggerHidden]
	public UniTask(IUniTaskSource source, short token)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000222")]
	[Address(RVA = "0x291F7A0", Offset = "0x291DDA0", VA = "0x18291F7A0")]
	[DebuggerHidden]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x2920760", Offset = "0x291ED60", VA = "0x182920760")]
	public UniTask<bool> SuppressCancellationThrow()
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x2921B40", Offset = "0x2920140", VA = "0x182921B40")]
	public static implicit operator ValueTask(in UniTask self)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x2920A30", Offset = "0x291F030", VA = "0x182920A30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x291FCD0", Offset = "0x291E2D0", VA = "0x18291FCD0")]
	public UniTask Preserve()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x291ECC0", Offset = "0x291D2C0", VA = "0x18291ECC0")]
	public UniTask<AsyncUnit> AsAsyncUnitUniTask()
	{
		return default(UniTask<AsyncUnit>);
	}
}
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000112")]
[AsyncMethodBuilder(typeof(AsyncUniTaskMethodBuilder<>))]
public readonly struct UniTask<T>
{
	[Token(Token = "0x2000113")]
	private sealed class IsCanceledSource : IUniTaskSource<(bool, T)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(bool, T)>
	{
		[Token(Token = "0x400042A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly IUniTaskSource<T> source;

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006B9")]
		[DebuggerHidden]
		public IsCanceledSource(IUniTaskSource<T> source)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006BA")]
		[DebuggerHidden]
		public (bool, T) GetResult(short token)
		{
			return default((bool, T));
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006BB")]
		[DebuggerHidden]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006BC")]
		[DebuggerHidden]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006BD")]
		[DebuggerHidden]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006BE")]
		[DebuggerHidden]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x2000114")]
	private sealed class MemoizeSource : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x400042B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IUniTaskSource<T> source;

		[Token(Token = "0x400042C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T result;

		[Token(Token = "0x400042D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ExceptionDispatchInfo exception;

		[Token(Token = "0x400042E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskStatus status;

		[Token(Token = "0x60006BF")]
		public MemoizeSource(IUniTaskSource<T> source)
		{
		}

		[Token(Token = "0x60006C0")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x60006C1")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60006C2")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60006C3")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60006C4")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x2000115")]
	public readonly struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400042F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly UniTask<T> task;

		[Token(Token = "0x1700004E")]
		public bool IsCompleted
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60006C6")]
			[DebuggerHidden]
			get
			{
				return default(bool);
			}
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006C5")]
		[DebuggerHidden]
		public Awaiter(in UniTask<T> task)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006C7")]
		[DebuggerHidden]
		public T GetResult()
		{
			return (T)null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006C8")]
		[DebuggerHidden]
		public void OnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006C9")]
		[DebuggerHidden]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006CA")]
		[DebuggerHidden]
		public void SourceOnCompleted(Action<object> continuation, object state)
		{
		}
	}

	[Token(Token = "0x4000427")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly IUniTaskSource<T> source;

	[Token(Token = "0x4000428")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly T result;

	[Token(Token = "0x4000429")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly short token;

	[Token(Token = "0x1700004D")]
	public UniTaskStatus Status
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006B1")]
		[DebuggerHidden]
		get
		{
			return default(UniTaskStatus);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AF")]
	[DebuggerHidden]
	public UniTask(T result)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B0")]
	[DebuggerHidden]
	public UniTask(IUniTaskSource<T> source, short token)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B2")]
	[DebuggerHidden]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}

	[Token(Token = "0x60006B3")]
	public UniTask<T> Preserve()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60006B4")]
	public UniTask AsUniTask()
	{
		return default(UniTask);
	}

	[Token(Token = "0x60006B5")]
	public static implicit operator UniTask(UniTask<T> self)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60006B6")]
	public static implicit operator ValueTask<T>(in UniTask<T> self)
	{
		return default(ValueTask<T>);
	}

	[Token(Token = "0x60006B7")]
	public UniTask<(bool, T)> SuppressCancellationThrow()
	{
		return default(UniTask<(bool, T)>);
	}

	[Token(Token = "0x60006B8")]
	public override string ToString()
	{
		return null;
	}
}
