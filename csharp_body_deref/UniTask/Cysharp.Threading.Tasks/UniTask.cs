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
	private sealed class YieldPromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<YieldPromise>
	{
		[Token(Token = "0x4000108")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<YieldPromise> pool;

		[Token(Token = "0x4000109")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private YieldPromise nextNode;

		[Token(Token = "0x400010A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400010B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400010C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private bool cancelImmediately;

		[Token(Token = "0x400010D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x17000031")]
		public unsafe ref YieldPromise NextNode
		{
			[Token(Token = "0x600022B")]
			[Address(RVA = "0x46BB8A0", Offset = "0x46BB8A0", VA = "0x46BB8A0", Slot = "15")]
			get
			{
				return ref *(YieldPromise*)null;
			}
		}

		[Token(Token = "0x600022C")]
		[Address(RVA = "0x46BB8B0", Offset = "0x46BB8B0", VA = "0x46BB8B0")]
		static YieldPromise()
		{
		}

		[Token(Token = "0x600022D")]
		[Address(RVA = "0x46BB9B0", Offset = "0x46BB9B0", VA = "0x46BB9B0")]
		private YieldPromise()
		{
		}

		[Token(Token = "0x600022E")]
		[Address(RVA = "0x46B6110", Offset = "0x46B6110", VA = "0x46B6110")]
		public static IUniTaskSource Create(PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600022F")]
		[Address(RVA = "0x46BB9C0", Offset = "0x46BB9C0", VA = "0x46BB9C0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000230")]
		[Address(RVA = "0x46BBAE0", Offset = "0x46BBAE0", VA = "0x46BBAE0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000231")]
		[Address(RVA = "0x46BBB30", Offset = "0x46BBB30", VA = "0x46BBB30", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000232")]
		[Address(RVA = "0x46BBBE0", Offset = "0x46BBBE0", VA = "0x46BBBE0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000233")]
		[Address(RVA = "0x46BBC40", Offset = "0x46BBC40", VA = "0x46BBC40", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000234")]
		[Address(RVA = "0x46BBCE0", Offset = "0x46BBCE0", VA = "0x46BBCE0")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200007B")]
	private sealed class NextFramePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<NextFramePromise>
	{
		[Token(Token = "0x4000110")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<NextFramePromise> pool;

		[Token(Token = "0x4000111")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private NextFramePromise nextNode;

		[Token(Token = "0x4000112")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int frameCount;

		[Token(Token = "0x4000113")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x4000114")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000115")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000116")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private bool cancelImmediately;

		[Token(Token = "0x17000032")]
		public unsafe ref NextFramePromise NextNode
		{
			[Token(Token = "0x6000239")]
			[Address(RVA = "0x46BBEE0", Offset = "0x46BBEE0", VA = "0x46BBEE0", Slot = "15")]
			get
			{
				return ref *(NextFramePromise*)null;
			}
		}

		[Token(Token = "0x600023A")]
		[Address(RVA = "0x46BBEF0", Offset = "0x46BBEF0", VA = "0x46BBEF0")]
		static NextFramePromise()
		{
		}

		[Token(Token = "0x600023B")]
		[Address(RVA = "0x46BBFF0", Offset = "0x46BBFF0", VA = "0x46BBFF0")]
		private NextFramePromise()
		{
		}

		[Token(Token = "0x600023C")]
		[Address(RVA = "0x46B6570", Offset = "0x46B6570", VA = "0x46B6570")]
		public static IUniTaskSource Create(PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600023D")]
		[Address(RVA = "0x46BC000", Offset = "0x46BC000", VA = "0x46BC000", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600023E")]
		[Address(RVA = "0x46BC120", Offset = "0x46BC120", VA = "0x46BC120", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600023F")]
		[Address(RVA = "0x46BC170", Offset = "0x46BC170", VA = "0x46BC170", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000240")]
		[Address(RVA = "0x46BC220", Offset = "0x46BC220", VA = "0x46BC220", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x46BC280", Offset = "0x46BC280", VA = "0x46BC280", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000242")]
		[Address(RVA = "0x46BC370", Offset = "0x46BC370", VA = "0x46BC370")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200007D")]
	private sealed class WaitForEndOfFramePromise : IUniTaskSource, IValueTaskSource, ITaskPoolNode<WaitForEndOfFramePromise>, IEnumerator
	{
		[Token(Token = "0x4000119")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitForEndOfFramePromise> pool;

		[Token(Token = "0x400011A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private WaitForEndOfFramePromise nextNode;

		[Token(Token = "0x400011B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x400011C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400011D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400011E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private bool cancelImmediately;

		[Token(Token = "0x400011F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private static readonly WaitForEndOfFrame waitForEndOfFrameYieldInstruction;

		[Token(Token = "0x4000120")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
		private bool isFirst;

		[Token(Token = "0x17000033")]
		public unsafe ref WaitForEndOfFramePromise NextNode
		{
			[Token(Token = "0x6000247")]
			[Address(RVA = "0x46BC570", Offset = "0x46BC570", VA = "0x46BC570", Slot = "14")]
			get
			{
				return ref *(WaitForEndOfFramePromise*)null;
			}
		}

		[Token(Token = "0x17000034")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000250")]
			[Address(RVA = "0x46BCA10", Offset = "0x46BCA10", VA = "0x46BCA10", Slot = "16")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000248")]
		[Address(RVA = "0x46BC580", Offset = "0x46BC580", VA = "0x46BC580")]
		static WaitForEndOfFramePromise()
		{
		}

		[Token(Token = "0x6000249")]
		[Address(RVA = "0x46BC6D0", Offset = "0x46BC6D0", VA = "0x46BC6D0")]
		private WaitForEndOfFramePromise()
		{
		}

		[Token(Token = "0x600024A")]
		[Address(RVA = "0x46B6CA0", Offset = "0x46B6CA0", VA = "0x46B6CA0")]
		public static IUniTaskSource Create(MonoBehaviour coroutineRunner, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600024B")]
		[Address(RVA = "0x46BC6E0", Offset = "0x46BC6E0", VA = "0x46BC6E0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600024C")]
		[Address(RVA = "0x46BC800", Offset = "0x46BC800", VA = "0x46BC800", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600024D")]
		[Address(RVA = "0x46BC850", Offset = "0x46BC850", VA = "0x46BC850", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600024E")]
		[Address(RVA = "0x46BC900", Offset = "0x46BC900", VA = "0x46BC900", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600024F")]
		[Address(RVA = "0x46BC960", Offset = "0x46BC960", VA = "0x46BC960")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x6000251")]
		[Address(RVA = "0x46BCA80", Offset = "0x46BCA80", VA = "0x46BCA80", Slot = "15")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000252")]
		[Address(RVA = "0x46BCA00", Offset = "0x46BCA00", VA = "0x46BCA00", Slot = "17")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x200007F")]
	private sealed class DelayFramePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<DelayFramePromise>
	{
		[Token(Token = "0x4000123")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<DelayFramePromise> pool;

		[Token(Token = "0x4000124")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private DelayFramePromise nextNode;

		[Token(Token = "0x4000125")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int initialFrame;

		[Token(Token = "0x4000126")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private int delayFrameCount;

		[Token(Token = "0x4000127")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000128")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000129")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool cancelImmediately;

		[Token(Token = "0x400012A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		private int currentFrameCount;

		[Token(Token = "0x400012B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x17000035")]
		public unsafe ref DelayFramePromise NextNode
		{
			[Token(Token = "0x6000257")]
			[Address(RVA = "0x46BCC90", Offset = "0x46BCC90", VA = "0x46BCC90", Slot = "15")]
			get
			{
				return ref *(DelayFramePromise*)null;
			}
		}

		[Token(Token = "0x6000258")]
		[Address(RVA = "0x46BCCA0", Offset = "0x46BCCA0", VA = "0x46BCCA0")]
		static DelayFramePromise()
		{
		}

		[Token(Token = "0x6000259")]
		[Address(RVA = "0x46BCDA0", Offset = "0x46BCDA0", VA = "0x46BCDA0")]
		private DelayFramePromise()
		{
		}

		[Token(Token = "0x600025A")]
		[Address(RVA = "0x46B7550", Offset = "0x46B7550", VA = "0x46B7550")]
		public static IUniTaskSource Create(int delayFrameCount, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600025B")]
		[Address(RVA = "0x46BCDB0", Offset = "0x46BCDB0", VA = "0x46BCDB0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600025C")]
		[Address(RVA = "0x46BCED0", Offset = "0x46BCED0", VA = "0x46BCED0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600025D")]
		[Address(RVA = "0x46BCF20", Offset = "0x46BCF20", VA = "0x46BCF20", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600025E")]
		[Address(RVA = "0x46BCFD0", Offset = "0x46BCFD0", VA = "0x46BCFD0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600025F")]
		[Address(RVA = "0x46BD030", Offset = "0x46BD030", VA = "0x46BD030", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000260")]
		[Address(RVA = "0x46BD140", Offset = "0x46BD140", VA = "0x46BD140")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000081")]
	private sealed class DelayPromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<DelayPromise>
	{
		[Token(Token = "0x400012E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<DelayPromise> pool;

		[Token(Token = "0x400012F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private DelayPromise nextNode;

		[Token(Token = "0x4000130")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int initialFrame;

		[Token(Token = "0x4000131")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private float delayTimeSpan;

		[Token(Token = "0x4000132")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private float elapsed;

		[Token(Token = "0x4000133")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000134")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000135")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000136")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x17000036")]
		public unsafe ref DelayPromise NextNode
		{
			[Token(Token = "0x6000265")]
			[Address(RVA = "0x46BD350", Offset = "0x46BD350", VA = "0x46BD350", Slot = "15")]
			get
			{
				return ref *(DelayPromise*)null;
			}
		}

		[Token(Token = "0x6000266")]
		[Address(RVA = "0x46BD360", Offset = "0x46BD360", VA = "0x46BD360")]
		static DelayPromise()
		{
		}

		[Token(Token = "0x6000267")]
		[Address(RVA = "0x46BD460", Offset = "0x46BD460", VA = "0x46BD460")]
		private DelayPromise()
		{
		}

		[Token(Token = "0x6000268")]
		[Address(RVA = "0x46B8420", Offset = "0x46B8420", VA = "0x46B8420")]
		public static IUniTaskSource Create(TimeSpan delayTimeSpan, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000269")]
		[Address(RVA = "0x46BD470", Offset = "0x46BD470", VA = "0x46BD470", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600026A")]
		[Address(RVA = "0x46BD590", Offset = "0x46BD590", VA = "0x46BD590", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600026B")]
		[Address(RVA = "0x46BD5E0", Offset = "0x46BD5E0", VA = "0x46BD5E0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600026C")]
		[Address(RVA = "0x46BD690", Offset = "0x46BD690", VA = "0x46BD690", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600026D")]
		[Address(RVA = "0x46BD6F0", Offset = "0x46BD6F0", VA = "0x46BD6F0", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600026E")]
		[Address(RVA = "0x46BD7F0", Offset = "0x46BD7F0", VA = "0x46BD7F0")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000083")]
	private sealed class DelayIgnoreTimeScalePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<DelayIgnoreTimeScalePromise>
	{
		[Token(Token = "0x4000139")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<DelayIgnoreTimeScalePromise> pool;

		[Token(Token = "0x400013A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private DelayIgnoreTimeScalePromise nextNode;

		[Token(Token = "0x400013B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private float delayFrameTimeSpan;

		[Token(Token = "0x400013C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private float elapsed;

		[Token(Token = "0x400013D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int initialFrame;

		[Token(Token = "0x400013E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400013F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000140")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000141")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x17000037")]
		public unsafe ref DelayIgnoreTimeScalePromise NextNode
		{
			[Token(Token = "0x6000273")]
			[Address(RVA = "0x46BDA00", Offset = "0x46BDA00", VA = "0x46BDA00", Slot = "15")]
			get
			{
				return ref *(DelayIgnoreTimeScalePromise*)null;
			}
		}

		[Token(Token = "0x6000274")]
		[Address(RVA = "0x46BDA10", Offset = "0x46BDA10", VA = "0x46BDA10")]
		static DelayIgnoreTimeScalePromise()
		{
		}

		[Token(Token = "0x6000275")]
		[Address(RVA = "0x46BDB10", Offset = "0x46BDB10", VA = "0x46BDB10")]
		private DelayIgnoreTimeScalePromise()
		{
		}

		[Token(Token = "0x6000276")]
		[Address(RVA = "0x46B7C50", Offset = "0x46B7C50", VA = "0x46B7C50")]
		public static IUniTaskSource Create(TimeSpan delayFrameTimeSpan, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000277")]
		[Address(RVA = "0x46BDB20", Offset = "0x46BDB20", VA = "0x46BDB20", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000278")]
		[Address(RVA = "0x46BDC40", Offset = "0x46BDC40", VA = "0x46BDC40", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000279")]
		[Address(RVA = "0x46BDC90", Offset = "0x46BDC90", VA = "0x46BDC90", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600027A")]
		[Address(RVA = "0x46BDD40", Offset = "0x46BDD40", VA = "0x46BDD40", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600027B")]
		[Address(RVA = "0x46BDDA0", Offset = "0x46BDDA0", VA = "0x46BDDA0", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600027C")]
		[Address(RVA = "0x46BDEA0", Offset = "0x46BDEA0", VA = "0x46BDEA0")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000085")]
	private sealed class DelayRealtimePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<DelayRealtimePromise>
	{
		[Token(Token = "0x4000144")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<DelayRealtimePromise> pool;

		[Token(Token = "0x4000145")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private DelayRealtimePromise nextNode;

		[Token(Token = "0x4000146")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private long delayTimeSpanTicks;

		[Token(Token = "0x4000147")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private ValueStopwatch stopwatch;

		[Token(Token = "0x4000148")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000149")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400014A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x400014B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x17000038")]
		public unsafe ref DelayRealtimePromise NextNode
		{
			[Token(Token = "0x6000281")]
			[Address(RVA = "0x46BE0B0", Offset = "0x46BE0B0", VA = "0x46BE0B0", Slot = "15")]
			get
			{
				return ref *(DelayRealtimePromise*)null;
			}
		}

		[Token(Token = "0x6000282")]
		[Address(RVA = "0x46BE0C0", Offset = "0x46BE0C0", VA = "0x46BE0C0")]
		static DelayRealtimePromise()
		{
		}

		[Token(Token = "0x6000283")]
		[Address(RVA = "0x46BE1C0", Offset = "0x46BE1C0", VA = "0x46BE1C0")]
		private DelayRealtimePromise()
		{
		}

		[Token(Token = "0x6000284")]
		[Address(RVA = "0x46B80A0", Offset = "0x46B80A0", VA = "0x46B80A0")]
		public static IUniTaskSource Create(TimeSpan delayTimeSpan, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000285")]
		[Address(RVA = "0x46BE1D0", Offset = "0x46BE1D0", VA = "0x46BE1D0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000286")]
		[Address(RVA = "0x46BE2F0", Offset = "0x46BE2F0", VA = "0x46BE2F0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000287")]
		[Address(RVA = "0x46BE340", Offset = "0x46BE340", VA = "0x46BE340", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000288")]
		[Address(RVA = "0x46BE3F0", Offset = "0x46BE3F0", VA = "0x46BE3F0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000289")]
		[Address(RVA = "0x46BE450", Offset = "0x46BE450", VA = "0x46BE450", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600028A")]
		[Address(RVA = "0x46BE580", Offset = "0x46BE580", VA = "0x46BE580")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000087")]
	private static class CanceledUniTaskCache<T>
	{
		[Token(Token = "0x400014E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly UniTask<T> Task;

		[Token(Token = "0x600028F")]
		static CanceledUniTaskCache()
		{
		}
	}

	[Token(Token = "0x2000088")]
	private sealed class ExceptionResultSource : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x400014F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly ExceptionDispatchInfo exception;

		[Token(Token = "0x4000150")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private bool calledGet;

		[Token(Token = "0x6000290")]
		[Address(RVA = "0x46B8960", Offset = "0x46B8960", VA = "0x46B8960")]
		public ExceptionResultSource(Exception exception)
		{
		}

		[Token(Token = "0x6000291")]
		[Address(RVA = "0x46BE780", Offset = "0x46BE780", VA = "0x46BE780", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000292")]
		[Address(RVA = "0x46BE800", Offset = "0x46BE800", VA = "0x46BE800", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000293")]
		[Address(RVA = "0x46BE810", Offset = "0x46BE810", VA = "0x46BE810", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000294")]
		[Address(RVA = "0x46BE820", Offset = "0x46BE820", VA = "0x46BE820", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000295")]
		[Address(RVA = "0x46BE840", Offset = "0x46BE840", VA = "0x46BE840", Slot = "1")]
		~ExceptionResultSource()
		{
		}
	}

	[Token(Token = "0x2000089")]
	private sealed class ExceptionResultSource<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x4000151")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly ExceptionDispatchInfo exception;

		[Token(Token = "0x4000152")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool calledGet;

		[Token(Token = "0x6000296")]
		public ExceptionResultSource(Exception exception)
		{
		}

		[Token(Token = "0x6000297")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x6000298")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000299")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600029A")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600029B")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600029C")]
		~ExceptionResultSource()
		{
		}
	}

	[Token(Token = "0x200008A")]
	private sealed class CanceledResultSource : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x4000153")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x600029D")]
		[Address(RVA = "0x46B89A0", Offset = "0x46B89A0", VA = "0x46B89A0")]
		public CanceledResultSource(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x600029E")]
		[Address(RVA = "0x46BE920", Offset = "0x46BE920", VA = "0x46BE920", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600029F")]
		[Address(RVA = "0x46BE970", Offset = "0x46BE970", VA = "0x46BE970", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x46BE980", Offset = "0x46BE980", VA = "0x46BE980", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x46BE990", Offset = "0x46BE990", VA = "0x46BE990", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x200008B")]
	private sealed class CanceledResultSource<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x4000154")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x60002A2")]
		public CanceledResultSource(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60002A3")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x60002A4")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60002A5")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002A6")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002A7")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x200008C")]
	private sealed class DeferPromise : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x4000155")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private Func<UniTask> factory;

		[Token(Token = "0x4000156")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UniTask task;

		[Token(Token = "0x4000157")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private Awaiter awaiter;

		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x46B8E70", Offset = "0x46B8E70", VA = "0x46B8E70")]
		public DeferPromise(Func<UniTask> factory)
		{
		}

		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x46BE9B0", Offset = "0x46BE9B0", VA = "0x46BE9B0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x46BEA70", Offset = "0x46BEA70", VA = "0x46BEA70", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002AB")]
		[Address(RVA = "0x46BEBE0", Offset = "0x46BEBE0", VA = "0x46BEBE0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x46BECD0", Offset = "0x46BECD0", VA = "0x46BECD0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x200008D")]
	private sealed class DeferPromise<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x4000158")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<UniTask<T>> factory;

		[Token(Token = "0x4000159")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T> task;

		[Token(Token = "0x400015A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter awaiter;

		[Token(Token = "0x60002AD")]
		public DeferPromise(Func<UniTask<T>> factory)
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
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002B2")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x200008E")]
	private sealed class DeferPromiseWithState<TState> : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x400015B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<TState, UniTask> factory;

		[Token(Token = "0x400015C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private TState argument;

		[Token(Token = "0x400015D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask task;

		[Token(Token = "0x400015E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Awaiter awaiter;

		[Token(Token = "0x60002B3")]
		public DeferPromiseWithState(TState argument, Func<TState, UniTask> factory)
		{
		}

		[Token(Token = "0x60002B4")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002B5")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002B6")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002B7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x200008F")]
	private sealed class DeferPromiseWithState<TState, TResult> : IUniTaskSource<TResult>, IUniTaskSource, IValueTaskSource, IValueTaskSource<TResult>
	{
		[Token(Token = "0x400015F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<TState, UniTask<TResult>> factory;

		[Token(Token = "0x4000160")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private TState argument;

		[Token(Token = "0x4000161")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<TResult> task;

		[Token(Token = "0x4000162")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<TResult>.Awaiter awaiter;

		[Token(Token = "0x60002B8")]
		public DeferPromiseWithState(TState argument, Func<TState, UniTask<TResult>> factory)
		{
		}

		[Token(Token = "0x60002B9")]
		public TResult GetResult(short token)
		{
			return (TResult)null;
		}

		[Token(Token = "0x60002BA")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60002BB")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002BC")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002BD")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x2000090")]
	private sealed class NeverPromise<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x4000163")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> cancellationCallback;

		[Token(Token = "0x4000164")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000165")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<T> core;

		[Token(Token = "0x60002BE")]
		public NeverPromise(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60002BF")]
		private static void CancellationCallback(object state)
		{
		}

		[Token(Token = "0x60002C0")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x60002C1")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002C2")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002C3")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002C4")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x2000091")]
	private sealed class WaitUntilPromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitUntilPromise>
	{
		[Token(Token = "0x4000166")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilPromise> pool;

		[Token(Token = "0x4000167")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private WaitUntilPromise nextNode;

		[Token(Token = "0x4000168")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Func<bool> predicate;

		[Token(Token = "0x4000169")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400016A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400016B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool cancelImmediately;

		[Token(Token = "0x400016C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x17000039")]
		public unsafe ref WaitUntilPromise NextNode
		{
			[Token(Token = "0x60002C6")]
			[Address(RVA = "0x46BEDF0", Offset = "0x46BEDF0", VA = "0x46BEDF0", Slot = "15")]
			get
			{
				return ref *(WaitUntilPromise*)null;
			}
		}

		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x46BEE00", Offset = "0x46BEE00", VA = "0x46BEE00")]
		static WaitUntilPromise()
		{
		}

		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x46BEF00", Offset = "0x46BEF00", VA = "0x46BEF00")]
		private WaitUntilPromise()
		{
		}

		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x46B97A0", Offset = "0x46B97A0", VA = "0x46B97A0")]
		public static IUniTaskSource Create(Func<bool> predicate, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x46BEF10", Offset = "0x46BEF10", VA = "0x46BEF10", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x46BF030", Offset = "0x46BF030", VA = "0x46BF030", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x46BF080", Offset = "0x46BF080", VA = "0x46BF080", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x46BF130", Offset = "0x46BF130", VA = "0x46BF130", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x46BF190", Offset = "0x46BF190", VA = "0x46BF190", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x46BF300", Offset = "0x46BF300", VA = "0x46BF300")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000093")]
	private sealed class WaitUntilPromise<T> : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitUntilPromise<T>>
	{
		[Token(Token = "0x400016F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilPromise<T>> pool;

		[Token(Token = "0x4000170")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitUntilPromise<T> nextNode;

		[Token(Token = "0x4000171")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, bool> predicate;

		[Token(Token = "0x4000172")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T argument;

		[Token(Token = "0x4000173")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000174")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000175")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool cancelImmediately;

		[Token(Token = "0x4000176")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x1700003A")]
		public unsafe ref WaitUntilPromise<T> NextNode
		{
			[Token(Token = "0x60002D4")]
			get
			{
				return ref *(WaitUntilPromise<T>*)null;
			}
		}

		[Token(Token = "0x60002D5")]
		static WaitUntilPromise()
		{
		}

		[Token(Token = "0x60002D6")]
		private WaitUntilPromise()
		{
		}

		[Token(Token = "0x60002D7")]
		public static IUniTaskSource Create(T argument, Func<T, bool> predicate, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60002D8")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002D9")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002DA")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002DB")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002DC")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002DD")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000095")]
	private sealed class WaitWhilePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitWhilePromise>
	{
		[Token(Token = "0x4000179")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitWhilePromise> pool;

		[Token(Token = "0x400017A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private WaitWhilePromise nextNode;

		[Token(Token = "0x400017B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Func<bool> predicate;

		[Token(Token = "0x400017C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400017D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400017E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool cancelImmediately;

		[Token(Token = "0x400017F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x1700003B")]
		public unsafe ref WaitWhilePromise NextNode
		{
			[Token(Token = "0x60002E2")]
			[Address(RVA = "0x46BF520", Offset = "0x46BF520", VA = "0x46BF520", Slot = "15")]
			get
			{
				return ref *(WaitWhilePromise*)null;
			}
		}

		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x46BF530", Offset = "0x46BF530", VA = "0x46BF530")]
		static WaitWhilePromise()
		{
		}

		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x46BF630", Offset = "0x46BF630", VA = "0x46BF630")]
		private WaitWhilePromise()
		{
		}

		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x46B9B60", Offset = "0x46B9B60", VA = "0x46B9B60")]
		public static IUniTaskSource Create(Func<bool> predicate, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x46BF640", Offset = "0x46BF640", VA = "0x46BF640", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x46BF760", Offset = "0x46BF760", VA = "0x46BF760", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x46BF7B0", Offset = "0x46BF7B0", VA = "0x46BF7B0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x46BF860", Offset = "0x46BF860", VA = "0x46BF860", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x46BF8C0", Offset = "0x46BF8C0", VA = "0x46BF8C0", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x46BFA30", Offset = "0x46BFA30", VA = "0x46BFA30")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000097")]
	private sealed class WaitWhilePromise<T> : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitWhilePromise<T>>
	{
		[Token(Token = "0x4000182")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitWhilePromise<T>> pool;

		[Token(Token = "0x4000183")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitWhilePromise<T> nextNode;

		[Token(Token = "0x4000184")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, bool> predicate;

		[Token(Token = "0x4000185")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T argument;

		[Token(Token = "0x4000186")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000187")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000188")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool cancelImmediately;

		[Token(Token = "0x4000189")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x1700003C")]
		public unsafe ref WaitWhilePromise<T> NextNode
		{
			[Token(Token = "0x60002F0")]
			get
			{
				return ref *(WaitWhilePromise<T>*)null;
			}
		}

		[Token(Token = "0x60002F1")]
		static WaitWhilePromise()
		{
		}

		[Token(Token = "0x60002F2")]
		private WaitWhilePromise()
		{
		}

		[Token(Token = "0x60002F3")]
		public static IUniTaskSource Create(T argument, Func<T, bool> predicate, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60002F4")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60002F5")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002F6")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60002F7")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60002F8")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002F9")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000099")]
	private sealed class WaitUntilCanceledPromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<WaitUntilCanceledPromise>
	{
		[Token(Token = "0x400018C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilCanceledPromise> pool;

		[Token(Token = "0x400018D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private WaitUntilCanceledPromise nextNode;

		[Token(Token = "0x400018E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400018F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000190")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private bool cancelImmediately;

		[Token(Token = "0x4000191")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UniTaskCompletionSourceCore<object> core;

		[Token(Token = "0x1700003D")]
		public unsafe ref WaitUntilCanceledPromise NextNode
		{
			[Token(Token = "0x60002FE")]
			[Address(RVA = "0x46BFC50", Offset = "0x46BFC50", VA = "0x46BFC50", Slot = "15")]
			get
			{
				return ref *(WaitUntilCanceledPromise*)null;
			}
		}

		[Token(Token = "0x60002FF")]
		[Address(RVA = "0x46BFC60", Offset = "0x46BFC60", VA = "0x46BFC60")]
		static WaitUntilCanceledPromise()
		{
		}

		[Token(Token = "0x6000300")]
		[Address(RVA = "0x46BFD60", Offset = "0x46BFD60", VA = "0x46BFD60")]
		private WaitUntilCanceledPromise()
		{
		}

		[Token(Token = "0x6000301")]
		[Address(RVA = "0x46B9F20", Offset = "0x46B9F20", VA = "0x46B9F20")]
		public static IUniTaskSource Create(CancellationToken cancellationToken, PlayerLoopTiming timing, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000302")]
		[Address(RVA = "0x46BFD70", Offset = "0x46BFD70", VA = "0x46BFD70", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000303")]
		[Address(RVA = "0x46BFE90", Offset = "0x46BFE90", VA = "0x46BFE90", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000304")]
		[Address(RVA = "0x46BFEE0", Offset = "0x46BFEE0", VA = "0x46BFEE0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000305")]
		[Address(RVA = "0x46BFF90", Offset = "0x46BFF90", VA = "0x46BFF90", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000306")]
		[Address(RVA = "0x46BFFF0", Offset = "0x46BFFF0", VA = "0x46BFFF0", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000307")]
		[Address(RVA = "0x46C0070", Offset = "0x46C0070", VA = "0x46C0070")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200009B")]
	private sealed class WaitUntilValueChangedUnityObjectPromise<T, U> : IUniTaskSource<U>, IUniTaskSource, IValueTaskSource, IValueTaskSource<U>, IPlayerLoopItem, ITaskPoolNode<WaitUntilValueChangedUnityObjectPromise<T, U>>
	{
		[Token(Token = "0x4000194")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilValueChangedUnityObjectPromise<T, U>> pool;

		[Token(Token = "0x4000195")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitUntilValueChangedUnityObjectPromise<T, U> nextNode;

		[Token(Token = "0x4000196")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T target;

		[Token(Token = "0x4000197")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UnityEngine.Object targetAsUnityObject;

		[Token(Token = "0x4000198")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private U currentValue;

		[Token(Token = "0x4000199")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, U> monitorFunction;

		[Token(Token = "0x400019A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IEqualityComparer<U> equalityComparer;

		[Token(Token = "0x400019B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400019C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400019D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool cancelImmediately;

		[Token(Token = "0x400019E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<U> core;

		[Token(Token = "0x1700003E")]
		public unsafe ref WaitUntilValueChangedUnityObjectPromise<T, U> NextNode
		{
			[Token(Token = "0x600030C")]
			get
			{
				return ref *(WaitUntilValueChangedUnityObjectPromise<T, U>*)null;
			}
		}

		[Token(Token = "0x600030D")]
		static WaitUntilValueChangedUnityObjectPromise()
		{
		}

		[Token(Token = "0x600030E")]
		private WaitUntilValueChangedUnityObjectPromise()
		{
		}

		[Token(Token = "0x600030F")]
		public static IUniTaskSource<U> Create(T target, Func<T, U> monitorFunction, IEqualityComparer<U> equalityComparer, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000310")]
		public U GetResult(short token)
		{
			return (U)null;
		}

		[Token(Token = "0x6000311")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000312")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000313")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000314")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000315")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000316")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200009D")]
	private sealed class WaitUntilValueChangedStandardObjectPromise<T, U> : IUniTaskSource<U>, IUniTaskSource, IValueTaskSource, IValueTaskSource<U>, IPlayerLoopItem, ITaskPoolNode<WaitUntilValueChangedStandardObjectPromise<T, U>> where T : class
	{
		[Token(Token = "0x40001A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<WaitUntilValueChangedStandardObjectPromise<T, U>> pool;

		[Token(Token = "0x40001A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WaitUntilValueChangedStandardObjectPromise<T, U> nextNode;

		[Token(Token = "0x40001A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WeakReference<T> target;

		[Token(Token = "0x40001A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private U currentValue;

		[Token(Token = "0x40001A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, U> monitorFunction;

		[Token(Token = "0x40001A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IEqualityComparer<U> equalityComparer;

		[Token(Token = "0x40001A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x40001A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x40001A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool cancelImmediately;

		[Token(Token = "0x40001AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<U> core;

		[Token(Token = "0x1700003F")]
		public unsafe ref WaitUntilValueChangedStandardObjectPromise<T, U> NextNode
		{
			[Token(Token = "0x600031B")]
			get
			{
				return ref *(WaitUntilValueChangedStandardObjectPromise<T, U>*)null;
			}
		}

		[Token(Token = "0x600031C")]
		static WaitUntilValueChangedStandardObjectPromise()
		{
		}

		[Token(Token = "0x600031D")]
		private WaitUntilValueChangedStandardObjectPromise()
		{
		}

		[Token(Token = "0x600031E")]
		public static IUniTaskSource<U> Create(T target, Func<T, U> monitorFunction, IEqualityComparer<U> equalityComparer, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600031F")]
		public U GetResult(short token)
		{
			return (U)null;
		}

		[Token(Token = "0x6000320")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000321")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000322")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000323")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000324")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000325")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200009F")]
	private sealed class WhenAllPromise<T1, T2> : IUniTaskSource<(T1, T2)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2)>
	{
		[Token(Token = "0x40001AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2)> core;

		[Token(Token = "0x600032A")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2)
		{
		}

		[Token(Token = "0x600032B")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600032C")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600032D")]
		public (T1, T2) GetResult(short token)
		{
			return default((T1, T2));
		}

		[Token(Token = "0x600032E")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600032F")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000330")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000331")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000A1")]
	private sealed class WhenAllPromise<T1, T2, T3> : IUniTaskSource<(T1, T2, T3)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3)>
	{
		[Token(Token = "0x40001B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3)> core;

		[Token(Token = "0x6000336")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
		{
		}

		[Token(Token = "0x6000337")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000338")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000339")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600033A")]
		public (T1, T2, T3) GetResult(short token)
		{
			return default((T1, T2, T3));
		}

		[Token(Token = "0x600033B")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600033C")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600033D")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600033E")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000A3")]
	private sealed class WhenAllPromise<T1, T2, T3, T4> : IUniTaskSource<(T1, T2, T3, T4)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4)>
	{
		[Token(Token = "0x40001BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40001C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4)> core;

		[Token(Token = "0x6000344")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4)
		{
		}

		[Token(Token = "0x6000345")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000346")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000347")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000348")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000349")]
		public (T1, T2, T3, T4) GetResult(short token)
		{
			return default((T1, T2, T3, T4));
		}

		[Token(Token = "0x600034A")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600034B")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600034C")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600034D")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000A5")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5> : IUniTaskSource<(T1, T2, T3, T4, T5)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5)>
	{
		[Token(Token = "0x40001C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40001CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x40001CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5)> core;

		[Token(Token = "0x6000354")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5)
		{
		}

		[Token(Token = "0x6000355")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000356")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000357")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000358")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000359")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600035A")]
		public (T1, T2, T3, T4, T5) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5));
		}

		[Token(Token = "0x600035B")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600035C")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600035D")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600035E")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000A7")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6> : IUniTaskSource<(T1, T2, T3, T4, T5, T6)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6)>
	{
		[Token(Token = "0x40001D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40001D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x40001DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x40001DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6)> core;

		[Token(Token = "0x6000366")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6)
		{
		}

		[Token(Token = "0x6000367")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000368")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000369")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600036A")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600036B")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600036C")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600036D")]
		public (T1, T2, T3, T4, T5, T6) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6));
		}

		[Token(Token = "0x600036E")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600036F")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000370")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000371")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000A9")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7)>
	{
		[Token(Token = "0x40001E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40001E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x40001E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x40001EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x40001EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7)> core;

		[Token(Token = "0x600037A")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7)
		{
		}

		[Token(Token = "0x600037B")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600037C")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600037D")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600037E")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600037F")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000380")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000381")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000382")]
		public (T1, T2, T3, T4, T5, T6, T7) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7));
		}

		[Token(Token = "0x6000383")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000384")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000385")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000386")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000AB")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8)>
	{
		[Token(Token = "0x40001F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40001F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40001F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40001F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40001F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x40001FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x40001FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x40001FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x40001FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40001FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8)> core;

		[Token(Token = "0x6000390")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8)
		{
		}

		[Token(Token = "0x6000391")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000392")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000393")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000394")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000395")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000396")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000397")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000398")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000399")]
		public (T1, T2, T3, T4, T5, T6, T7, T8) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8));
		}

		[Token(Token = "0x600039A")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600039B")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600039C")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600039D")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000AD")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9)>
	{
		[Token(Token = "0x4000208")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x4000209")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x400020A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x400020B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x400020C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x400020D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x400020E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x400020F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x4000210")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x4000211")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000212")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9)> core;

		[Token(Token = "0x60003A8")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9)
		{
		}

		[Token(Token = "0x60003A9")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AA")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AB")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AC")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AD")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AE")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003AF")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003B0")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003B1")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003B2")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9));
		}

		[Token(Token = "0x60003B3")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60003B4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003B5")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003B6")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000AF")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>
	{
		[Token(Token = "0x400021D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x400021E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x400021F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x4000220")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x4000221")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x4000222")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x4000223")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x4000224")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x4000225")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x4000226")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x4000227")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000228")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)> core;

		[Token(Token = "0x60003C2")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10)
		{
		}

		[Token(Token = "0x60003C3")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C4")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C5")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C6")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C7")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C8")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003C9")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003CA")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003CB")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003CC")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003CD")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10));
		}

		[Token(Token = "0x60003CE")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60003CF")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003D0")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003D1")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B1")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>
	{
		[Token(Token = "0x4000234")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x4000235")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x4000236")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x4000237")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x4000238")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x4000239")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x400023A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x400023B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x400023C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x400023D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x400023E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x400023F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000240")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)> core;

		[Token(Token = "0x60003DE")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11)
		{
		}

		[Token(Token = "0x60003DF")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E0")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E1")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E2")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E3")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E4")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E5")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E6")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E7")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E8")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003E9")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003EA")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11));
		}

		[Token(Token = "0x60003EB")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60003EC")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003ED")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60003EE")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B3")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>
	{
		[Token(Token = "0x400024D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x400024E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x400024F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x4000250")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x4000251")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x4000252")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x4000253")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x4000254")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x4000255")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x4000256")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x4000257")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x4000258")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T12 t12;

		[Token(Token = "0x4000259")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400025A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)> core;

		[Token(Token = "0x60003FC")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12)
		{
		}

		[Token(Token = "0x60003FD")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003FE")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60003FF")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000400")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000401")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000402")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000403")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000404")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000405")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000406")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000407")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000408")]
		private static void TryInvokeContinuationT12(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000409")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12));
		}

		[Token(Token = "0x600040A")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600040B")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600040C")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600040D")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B5")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>
	{
		[Token(Token = "0x4000268")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x4000269")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x400026A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x400026B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x400026C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x400026D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x400026E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x400026F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x4000270")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x4000271")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x4000272")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x4000273")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T12 t12;

		[Token(Token = "0x4000274")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T13 t13;

		[Token(Token = "0x4000275")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000276")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)> core;

		[Token(Token = "0x600041C")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13)
		{
		}

		[Token(Token = "0x600041D")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600041E")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600041F")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000420")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000421")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000422")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000423")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000424")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000425")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000426")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000427")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000428")]
		private static void TryInvokeContinuationT12(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000429")]
		private static void TryInvokeContinuationT13(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600042A")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13));
		}

		[Token(Token = "0x600042B")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600042C")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600042D")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600042E")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B7")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>
	{
		[Token(Token = "0x4000285")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x4000286")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x4000287")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x4000288")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x4000289")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x400028A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x400028B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x400028C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x400028D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x400028E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x400028F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x4000290")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T12 t12;

		[Token(Token = "0x4000291")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T13 t13;

		[Token(Token = "0x4000292")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T14 t14;

		[Token(Token = "0x4000293")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000294")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)> core;

		[Token(Token = "0x600043E")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14)
		{
		}

		[Token(Token = "0x600043F")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000440")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000441")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000442")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000443")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000444")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000445")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000446")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000447")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000448")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000449")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600044A")]
		private static void TryInvokeContinuationT12(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600044B")]
		private static void TryInvokeContinuationT13(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600044C")]
		private static void TryInvokeContinuationT14(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T14>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600044D")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14));
		}

		[Token(Token = "0x600044E")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600044F")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000450")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000451")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000B9")]
	private sealed class WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> : IUniTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>
	{
		[Token(Token = "0x40002A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T1 t1;

		[Token(Token = "0x40002A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T2 t2;

		[Token(Token = "0x40002A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T3 t3;

		[Token(Token = "0x40002A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T4 t4;

		[Token(Token = "0x40002A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T5 t5;

		[Token(Token = "0x40002A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T6 t6;

		[Token(Token = "0x40002AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T7 t7;

		[Token(Token = "0x40002AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T8 t8;

		[Token(Token = "0x40002AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T9 t9;

		[Token(Token = "0x40002AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T10 t10;

		[Token(Token = "0x40002AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T11 t11;

		[Token(Token = "0x40002AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T12 t12;

		[Token(Token = "0x40002B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T13 t13;

		[Token(Token = "0x40002B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T14 t14;

		[Token(Token = "0x40002B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T15 t15;

		[Token(Token = "0x40002B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)> core;

		[Token(Token = "0x6000462")]
		public WhenAllPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14, UniTask<T15> task15)
		{
		}

		[Token(Token = "0x6000463")]
		private static void TryInvokeContinuationT1(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000464")]
		private static void TryInvokeContinuationT2(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000465")]
		private static void TryInvokeContinuationT3(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000466")]
		private static void TryInvokeContinuationT4(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000467")]
		private static void TryInvokeContinuationT5(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000468")]
		private static void TryInvokeContinuationT6(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000469")]
		private static void TryInvokeContinuationT7(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046A")]
		private static void TryInvokeContinuationT8(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046B")]
		private static void TryInvokeContinuationT9(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046C")]
		private static void TryInvokeContinuationT10(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046D")]
		private static void TryInvokeContinuationT11(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046E")]
		private static void TryInvokeContinuationT12(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600046F")]
		private static void TryInvokeContinuationT13(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000470")]
		private static void TryInvokeContinuationT14(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T14>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000471")]
		private static void TryInvokeContinuationT15(WhenAllPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T15>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000472")]
		public (T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15) GetResult(short token)
		{
			return default((T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15));
		}

		[Token(Token = "0x6000473")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000474")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000475")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000476")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000BB")]
	private sealed class WhenAllPromise<T> : IUniTaskSource<T[]>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T[]>
	{
		[Token(Token = "0x40002C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T[] result;

		[Token(Token = "0x40002C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completeCount;

		[Token(Token = "0x40002C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<T[]> core;

		[Token(Token = "0x6000488")]
		public WhenAllPromise(UniTask<T>[] tasks, int tasksLength)
		{
		}

		[Token(Token = "0x6000489")]
		private static void TryInvokeContinuation(WhenAllPromise<T> self, in UniTask<T>.Awaiter awaiter, int i)
		{
		}

		[Token(Token = "0x600048A")]
		public T[] GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x600048B")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600048C")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600048D")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600048E")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000BD")]
	private sealed class WhenAllPromise : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x40002CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int completeCount;

		[Token(Token = "0x40002CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		private int tasksLength;

		[Token(Token = "0x40002CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x6000492")]
		[Address(RVA = "0x46BA2F0", Offset = "0x46BA2F0", VA = "0x46BA2F0")]
		public WhenAllPromise(UniTask[] tasks, int tasksLength)
		{
		}

		[Token(Token = "0x6000493")]
		[Address(RVA = "0x46C0270", Offset = "0x46C0270", VA = "0x46C0270")]
		private static void TryInvokeContinuation(WhenAllPromise self, in Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000494")]
		[Address(RVA = "0x46C0450", Offset = "0x46C0450", VA = "0x46C0450", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000495")]
		[Address(RVA = "0x46C04D0", Offset = "0x46C04D0", VA = "0x46C04D0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000496")]
		[Address(RVA = "0x46C0520", Offset = "0x46C0520", VA = "0x46C0520", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000497")]
		[Address(RVA = "0x46C05D0", Offset = "0x46C05D0", VA = "0x46C05D0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000BF")]
	private sealed class WhenAnyPromise<T1, T2> : IUniTaskSource<(int, T1, T2)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2)>
	{
		[Token(Token = "0x40002CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2)> core;

		[Token(Token = "0x600049B")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2)
		{
		}

		[Token(Token = "0x600049C")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600049D")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600049E")]
		public (int, T1, T2) GetResult(short token)
		{
			return default((int, T1, T2));
		}

		[Token(Token = "0x600049F")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004A0")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004A1")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004A2")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000C1")]
	private sealed class WhenAnyPromise<T1, T2, T3> : IUniTaskSource<(int, T1, T2, T3)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3)>
	{
		[Token(Token = "0x40002D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3)> core;

		[Token(Token = "0x60004A7")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
		{
		}

		[Token(Token = "0x60004A8")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004A9")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004AA")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004AB")]
		public (int, T1, T2, T3) GetResult(short token)
		{
			return default((int, T1, T2, T3));
		}

		[Token(Token = "0x60004AC")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004AD")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004AE")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004AF")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000C3")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4> : IUniTaskSource<(int, T1, T2, T3, T4)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4)>
	{
		[Token(Token = "0x40002DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4)> core;

		[Token(Token = "0x60004B5")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4)
		{
		}

		[Token(Token = "0x60004B6")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004B7")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004B8")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004B9")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004BA")]
		public (int, T1, T2, T3, T4) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4));
		}

		[Token(Token = "0x60004BB")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004BC")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004BD")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004BE")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000C5")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5> : IUniTaskSource<(int, T1, T2, T3, T4, T5)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5)>
	{
		[Token(Token = "0x40002E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5)> core;

		[Token(Token = "0x60004C5")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5)
		{
		}

		[Token(Token = "0x60004C6")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004C7")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004C8")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004C9")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004CA")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004CB")]
		public (int, T1, T2, T3, T4, T5) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5));
		}

		[Token(Token = "0x60004CC")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004CD")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004CE")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004CF")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000C7")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6)>
	{
		[Token(Token = "0x40002E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6)> core;

		[Token(Token = "0x60004D7")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6)
		{
		}

		[Token(Token = "0x60004D8")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004D9")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004DA")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004DB")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004DC")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004DD")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004DE")]
		public (int, T1, T2, T3, T4, T5, T6) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6));
		}

		[Token(Token = "0x60004DF")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004E0")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004E1")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004E2")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000C9")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7)>
	{
		[Token(Token = "0x40002F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7)> core;

		[Token(Token = "0x60004EB")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7)
		{
		}

		[Token(Token = "0x60004EC")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004ED")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004EE")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004EF")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004F0")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004F1")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004F2")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60004F3")]
		public (int, T1, T2, T3, T4, T5, T6, T7) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7));
		}

		[Token(Token = "0x60004F4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004F5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60004F6")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60004F7")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000CB")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8)>
	{
		[Token(Token = "0x40002FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x40002FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8)> core;

		[Token(Token = "0x6000501")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8)
		{
		}

		[Token(Token = "0x6000502")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000503")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000504")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000505")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000506")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000507")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000508")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000509")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600050A")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8));
		}

		[Token(Token = "0x600050B")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600050C")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600050D")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600050E")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000CD")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9)>
	{
		[Token(Token = "0x4000307")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000308")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9)> core;

		[Token(Token = "0x6000519")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9)
		{
		}

		[Token(Token = "0x600051A")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600051B")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600051C")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600051D")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600051E")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600051F")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000520")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000521")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000522")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000523")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9));
		}

		[Token(Token = "0x6000524")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000525")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000526")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000527")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000CF")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>
	{
		[Token(Token = "0x4000313")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000314")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10)> core;

		[Token(Token = "0x6000533")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10)
		{
		}

		[Token(Token = "0x6000534")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000535")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000536")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000537")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000538")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000539")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600053A")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600053B")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600053C")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600053D")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600053E")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10));
		}

		[Token(Token = "0x600053F")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000540")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000541")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000542")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D1")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>
	{
		[Token(Token = "0x4000320")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000321")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11)> core;

		[Token(Token = "0x600054F")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11)
		{
		}

		[Token(Token = "0x6000550")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000551")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000552")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000553")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000554")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000555")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000556")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000557")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000558")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000559")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600055A")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600055B")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11));
		}

		[Token(Token = "0x600055C")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600055D")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600055E")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600055F")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D3")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>
	{
		[Token(Token = "0x400032E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400032F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11, T12 result12)> core;

		[Token(Token = "0x600056D")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12)
		{
		}

		[Token(Token = "0x600056E")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600056F")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000570")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000571")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000572")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000573")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000574")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000575")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000576")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000577")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000578")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000579")]
		private static void TryInvokeContinuationT12(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600057A")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12));
		}

		[Token(Token = "0x600057B")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600057C")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600057D")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600057E")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D5")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>
	{
		[Token(Token = "0x400033D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400033E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11, T12 result12, T13 result13)> core;

		[Token(Token = "0x600058D")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13)
		{
		}

		[Token(Token = "0x600058E")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600058F")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000590")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000591")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000592")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000593")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000594")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000595")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000596")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000597")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000598")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x6000599")]
		private static void TryInvokeContinuationT12(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600059A")]
		private static void TryInvokeContinuationT13(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x600059B")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13));
		}

		[Token(Token = "0x600059C")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600059D")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600059E")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600059F")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D7")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>
	{
		[Token(Token = "0x400034D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400034E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11, T12 result12, T13 result13, T14 result14)> core;

		[Token(Token = "0x60005AF")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14)
		{
		}

		[Token(Token = "0x60005B0")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B1")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B2")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B3")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B4")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B5")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B6")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B7")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B8")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005B9")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005BA")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005BB")]
		private static void TryInvokeContinuationT12(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005BC")]
		private static void TryInvokeContinuationT13(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005BD")]
		private static void TryInvokeContinuationT14(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> self, in UniTask<T14>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005BE")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14));
		}

		[Token(Token = "0x60005BF")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005C0")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60005C1")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005C2")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000D9")]
	private sealed class WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> : IUniTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>
	{
		[Token(Token = "0x400035E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x400035F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T1 result1, T2 result2, T3 result3, T4 result4, T5 result5, T6 result6, T7 result7, T8 result8, T9 result9, T10 result10, T11 result11, T12 result12, T13 result13, T14 result14, T15 result15)> core;

		[Token(Token = "0x60005D3")]
		public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14, UniTask<T15> task15)
		{
		}

		[Token(Token = "0x60005D4")]
		private static void TryInvokeContinuationT1(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T1>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D5")]
		private static void TryInvokeContinuationT2(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T2>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D6")]
		private static void TryInvokeContinuationT3(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T3>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D7")]
		private static void TryInvokeContinuationT4(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T4>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D8")]
		private static void TryInvokeContinuationT5(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T5>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005D9")]
		private static void TryInvokeContinuationT6(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T6>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005DA")]
		private static void TryInvokeContinuationT7(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T7>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005DB")]
		private static void TryInvokeContinuationT8(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T8>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005DC")]
		private static void TryInvokeContinuationT9(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T9>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005DD")]
		private static void TryInvokeContinuationT10(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T10>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005DE")]
		private static void TryInvokeContinuationT11(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T11>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005DF")]
		private static void TryInvokeContinuationT12(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T12>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005E0")]
		private static void TryInvokeContinuationT13(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T13>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005E1")]
		private static void TryInvokeContinuationT14(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T14>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005E2")]
		private static void TryInvokeContinuationT15(WhenAnyPromise<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> self, in UniTask<T15>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005E3")]
		public (int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15) GetResult(short token)
		{
			return default((int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15));
		}

		[Token(Token = "0x60005E4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005E5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60005E6")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005E7")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000DB")]
	private sealed class WhenAnyLRPromise<T> : IUniTaskSource<(bool, T)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(bool, T)>
	{
		[Token(Token = "0x4000370")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000371")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(bool, T)> core;

		[Token(Token = "0x60005F9")]
		public WhenAnyLRPromise(UniTask<T> leftTask, UniTask rightTask)
		{
		}

		[Token(Token = "0x60005FA")]
		private static void TryLeftInvokeContinuation(WhenAnyLRPromise<T> self, in UniTask<T>.Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005FB")]
		private static void TryRightInvokeContinuation(WhenAnyLRPromise<T> self, in Awaiter awaiter)
		{
		}

		[Token(Token = "0x60005FC")]
		public (bool, T) GetResult(short token)
		{
			return default((bool, T));
		}

		[Token(Token = "0x60005FD")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60005FE")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60005FF")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000600")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000DD")]
	private sealed class WhenAnyPromise<T> : IUniTaskSource<(int, T)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(int, T)>
	{
		[Token(Token = "0x4000375")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completedCount;

		[Token(Token = "0x4000376")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<(int, T)> core;

		[Token(Token = "0x6000605")]
		public WhenAnyPromise(UniTask<T>[] tasks, int tasksLength)
		{
		}

		[Token(Token = "0x6000606")]
		private static void TryInvokeContinuation(WhenAnyPromise<T> self, in UniTask<T>.Awaiter awaiter, int i)
		{
		}

		[Token(Token = "0x6000607")]
		public (int, T) GetResult(short token)
		{
			return default((int, T));
		}

		[Token(Token = "0x6000608")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000609")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600060A")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600060B")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000DF")]
	private sealed class WhenAnyPromise : IUniTaskSource<int>, IUniTaskSource, IValueTaskSource, IValueTaskSource<int>
	{
		[Token(Token = "0x4000379")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int completedCount;

		[Token(Token = "0x400037A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UniTaskCompletionSourceCore<int> core;

		[Token(Token = "0x600060F")]
		[Address(RVA = "0x46BA9B0", Offset = "0x46BA9B0", VA = "0x46BA9B0")]
		public WhenAnyPromise(UniTask[] tasks, int tasksLength)
		{
		}

		[Token(Token = "0x6000610")]
		[Address(RVA = "0x46C0890", Offset = "0x46C0890", VA = "0x46C0890")]
		private static void TryInvokeContinuation(WhenAnyPromise self, in Awaiter awaiter, int i)
		{
		}

		[Token(Token = "0x6000611")]
		[Address(RVA = "0x46C0A60", Offset = "0x46C0A60", VA = "0x46C0A60", Slot = "22")]
		public int GetResult(short token)
		{
			return default(int);
		}

		[Token(Token = "0x6000612")]
		[Address(RVA = "0x46C0AE0", Offset = "0x46C0AE0", VA = "0x46C0AE0", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000613")]
		[Address(RVA = "0x46C0B30", Offset = "0x46C0B30", VA = "0x46C0B30", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000614")]
		[Address(RVA = "0x46C0B90", Offset = "0x46C0B90", VA = "0x46C0B90", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000615")]
		[Address(RVA = "0x46C0C40", Offset = "0x46C0C40", VA = "0x46C0C40", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000E1")]
	private sealed class AsyncUnitSource : IUniTaskSource<AsyncUnit>, IUniTaskSource, IValueTaskSource, IValueTaskSource<AsyncUnit>
	{
		[Token(Token = "0x400037D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly IUniTaskSource source;

		[Token(Token = "0x6000619")]
		[Address(RVA = "0x46BB780", Offset = "0x46BB780", VA = "0x46BB780")]
		public AsyncUnitSource(IUniTaskSource source)
		{
		}

		[Token(Token = "0x600061A")]
		[Address(RVA = "0x46C0F20", Offset = "0x46C0F20", VA = "0x46C0F20", Slot = "22")]
		public AsyncUnit GetResult(short token)
		{
			return default(AsyncUnit);
		}

		[Token(Token = "0x600061B")]
		[Address(RVA = "0x46C1010", Offset = "0x46C1010", VA = "0x46C1010", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600061C")]
		[Address(RVA = "0x46C10C0", Offset = "0x46C10C0", VA = "0x46C10C0", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600061D")]
		[Address(RVA = "0x46C1180", Offset = "0x46C1180", VA = "0x46C1180", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600061E")]
		[Address(RVA = "0x46C1220", Offset = "0x46C1220", VA = "0x46C1220", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}
	}

	[Token(Token = "0x20000E2")]
	private sealed class IsCanceledSource : IUniTaskSource<bool>, IUniTaskSource, IValueTaskSource, IValueTaskSource<bool>
	{
		[Token(Token = "0x400037E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly IUniTaskSource source;

		[Token(Token = "0x600061F")]
		[Address(RVA = "0x46BB310", Offset = "0x46BB310", VA = "0x46BB310")]
		public IsCanceledSource(IUniTaskSource source)
		{
		}

		[Token(Token = "0x6000620")]
		[Address(RVA = "0x46C1230", Offset = "0x46C1230", VA = "0x46C1230", Slot = "22")]
		public bool GetResult(short token)
		{
			return default(bool);
		}

		[Token(Token = "0x6000621")]
		[Address(RVA = "0x46C1360", Offset = "0x46C1360", VA = "0x46C1360", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000622")]
		[Address(RVA = "0x46C1370", Offset = "0x46C1370", VA = "0x46C1370", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000623")]
		[Address(RVA = "0x46C1420", Offset = "0x46C1420", VA = "0x46C1420", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000624")]
		[Address(RVA = "0x46C14C0", Offset = "0x46C14C0", VA = "0x46C14C0", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x20000E3")]
	private sealed class MemoizeSource : IUniTaskSource, IValueTaskSource
	{
		[Token(Token = "0x400037F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IUniTaskSource source;

		[Token(Token = "0x4000380")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private ExceptionDispatchInfo exception;

		[Token(Token = "0x4000381")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTaskStatus status;

		[Token(Token = "0x6000625")]
		[Address(RVA = "0x46BB510", Offset = "0x46BB510", VA = "0x46BB510")]
		public MemoizeSource(IUniTaskSource source)
		{
		}

		[Token(Token = "0x6000626")]
		[Address(RVA = "0x46C1580", Offset = "0x46C1580", VA = "0x46C1580", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000627")]
		[Address(RVA = "0x46C17D0", Offset = "0x46C17D0", VA = "0x46C17D0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000628")]
		[Address(RVA = "0x46C1880", Offset = "0x46C1880", VA = "0x46C1880", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000629")]
		[Address(RVA = "0x46C1960", Offset = "0x46C1960", VA = "0x46C1960", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x20000E4")]
	public readonly struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000382")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly UniTask task;

		[Token(Token = "0x17000040")]
		public bool IsCompleted
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600062B")]
			[Address(RVA = "0x46C1A30", Offset = "0x46C1A30", VA = "0x46C1A30")]
			[DebuggerHidden]
			get
			{
				return default(bool);
			}
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600062A")]
		[Address(RVA = "0x46C1A20", Offset = "0x46C1A20", VA = "0x46C1A20")]
		[DebuggerHidden]
		public Awaiter(in UniTask task)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600062C")]
		[Address(RVA = "0x46C1B50", Offset = "0x46C1B50", VA = "0x46C1B50")]
		[DebuggerHidden]
		public void GetResult()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600062D")]
		[Address(RVA = "0x46C1C10", Offset = "0x46C1C10", VA = "0x46C1C10", Slot = "5")]
		[DebuggerHidden]
		public void OnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600062E")]
		[Address(RVA = "0x46C1D20", Offset = "0x46C1D20", VA = "0x46C1D20", Slot = "4")]
		[DebuggerHidden]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600062F")]
		[Address(RVA = "0x46C1E30", Offset = "0x46C1E30", VA = "0x46C1E30")]
		[DebuggerHidden]
		public void SourceOnCompleted(Action<object> continuation, object state)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F4")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__82 : IAsyncStateMachine
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
		public Action action;

		[Token(Token = "0x400039F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		private YieldAwaitable.Awaiter _003C_003Eu__2;

		[Token(Token = "0x600064F")]
		[Address(RVA = "0x46C2120", Offset = "0x46C2120", VA = "0x46C2120", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000650")]
		[Address(RVA = "0x46C26E0", Offset = "0x46C26E0", VA = "0x46C26E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F5")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__83 : IAsyncStateMachine
	{
		[Token(Token = "0x40003A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40003A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool configureAwait;

		[Token(Token = "0x40003A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action<object> action;

		[Token(Token = "0x40003A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public object state;

		[Token(Token = "0x40003A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private YieldAwaitable.Awaiter _003C_003Eu__2;

		[Token(Token = "0x6000651")]
		[Address(RVA = "0x46C26F0", Offset = "0x46C26F0", VA = "0x46C26F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000652")]
		[Address(RVA = "0x46C2C60", Offset = "0x46C2C60", VA = "0x46C2C60", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F6")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__84 : IAsyncStateMachine
	{
		[Token(Token = "0x40003AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40003AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool configureAwait;

		[Token(Token = "0x40003B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Func<UniTask> action;

		[Token(Token = "0x40003B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private Awaiter _003C_003Eu__2;

		[Token(Token = "0x40003B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private YieldAwaitable.Awaiter _003C_003Eu__3;

		[Token(Token = "0x6000653")]
		[Address(RVA = "0x46C2C70", Offset = "0x46C2C70", VA = "0x46C2C70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000654")]
		[Address(RVA = "0x46C37B0", Offset = "0x46C37B0", VA = "0x46C37B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F7")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__85 : IAsyncStateMachine
	{
		[Token(Token = "0x40003B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40003B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool configureAwait;

		[Token(Token = "0x40003BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Func<object, UniTask> action;

		[Token(Token = "0x40003BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public object state;

		[Token(Token = "0x40003BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private Awaiter _003C_003Eu__2;

		[Token(Token = "0x40003C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private YieldAwaitable.Awaiter _003C_003Eu__3;

		[Token(Token = "0x6000655")]
		[Address(RVA = "0x46C37C0", Offset = "0x46C37C0", VA = "0x46C37C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000656")]
		[Address(RVA = "0x46C4300", Offset = "0x46C4300", VA = "0x46C4300", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F8")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__86<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40003C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40003C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool configureAwait;

		[Token(Token = "0x40003C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<T> func;

		[Token(Token = "0x40003C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E7__wrap3;

		[Token(Token = "0x40003CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private YieldAwaitable.Awaiter _003C_003Eu__2;

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
	private struct _003CRunOnThreadPool_003Ed__87<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40003CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40003CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool configureAwait;

		[Token(Token = "0x40003D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<UniTask<T>> func;

		[Token(Token = "0x40003D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E7__wrap3;

		[Token(Token = "0x40003D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__2;

		[Token(Token = "0x40003D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private YieldAwaitable.Awaiter _003C_003Eu__3;

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
	[Token(Token = "0x20000FA")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__88<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40003D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40003D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool configureAwait;

		[Token(Token = "0x40003DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<object, T> func;

		[Token(Token = "0x40003DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public object state;

		[Token(Token = "0x40003DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E7__wrap3;

		[Token(Token = "0x40003E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private YieldAwaitable.Awaiter _003C_003Eu__2;

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
	[Token(Token = "0x20000FB")]
	[CompilerGenerated]
	private struct _003CRunOnThreadPool_003Ed__89<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40003E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40003E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40003E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40003E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool configureAwait;

		[Token(Token = "0x40003E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<object, UniTask<T>> func;

		[Token(Token = "0x40003E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public object state;

		[Token(Token = "0x40003E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private SwitchToThreadPoolAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40003E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40003EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40003EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E7__wrap3;

		[Token(Token = "0x40003EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__2;

		[Token(Token = "0x40003ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private YieldAwaitable.Awaiter _003C_003Eu__3;

		[Token(Token = "0x600065D")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600065E")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000FC")]
	[CompilerGenerated]
	private struct _003CWaitForEndOfFrame_003Ed__9 : IAsyncStateMachine
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
		[Address(RVA = "0x46C4310", Offset = "0x46C4310", VA = "0x46C4310", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000660")]
		[Address(RVA = "0x46C4650", Offset = "0x46C4650", VA = "0x46C4650", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000104")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly UniTask CanceledUniTask;

	[Token(Token = "0x4000105")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly UniTask CompletedTask;

	[Token(Token = "0x4000106")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly IUniTaskSource source;

	[Token(Token = "0x4000107")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly short token;

	[Token(Token = "0x17000030")]
	public UniTaskStatus Status
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x46BB040", Offset = "0x46BB040", VA = "0x46BB040")]
		[DebuggerHidden]
		get
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x46B5F50", Offset = "0x46B5F50", VA = "0x46B5F50")]
	public static IEnumerator ToCoroutine(Func<UniTask> taskFactory)
	{
		return null;
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x46B6060", Offset = "0x46B6060", VA = "0x46B6060")]
	public static YieldAwaitable Yield()
	{
		return default(YieldAwaitable);
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x46B6070", Offset = "0x46B6070", VA = "0x46B6070")]
	public static YieldAwaitable Yield(PlayerLoopTiming timing)
	{
		return default(YieldAwaitable);
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x46B6080", Offset = "0x46B6080", VA = "0x46B6080")]
	public static UniTask Yield(CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x46B6410", Offset = "0x46B6410", VA = "0x46B6410")]
	public static UniTask Yield(PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x46B64B0", Offset = "0x46B64B0", VA = "0x46B64B0")]
	public static UniTask NextFrame()
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x46B6950", Offset = "0x46B6950", VA = "0x46B6950")]
	public static UniTask NextFrame(PlayerLoopTiming timing)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x46B6A10", Offset = "0x46B6A10", VA = "0x46B6A10")]
	public static UniTask NextFrame(CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x46B6AA0", Offset = "0x46B6AA0", VA = "0x46B6AA0")]
	public static UniTask NextFrame(PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x46B6B40", Offset = "0x46B6B40", VA = "0x46B6B40")]
	[AsyncStateMachine(typeof(_003CWaitForEndOfFrame_003Ed__9))]
	public static UniTask WaitForEndOfFrame([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x46B6BE0", Offset = "0x46B6BE0", VA = "0x46B6BE0")]
	public static UniTask WaitForEndOfFrame(MonoBehaviour coroutineRunner)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x46B6F80", Offset = "0x46B6F80", VA = "0x46B6F80")]
	public static UniTask WaitForEndOfFrame(MonoBehaviour coroutineRunner, CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x46B7020", Offset = "0x46B7020", VA = "0x46B7020")]
	public static YieldAwaitable WaitForFixedUpdate()
	{
		return default(YieldAwaitable);
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x46B7080", Offset = "0x46B7080", VA = "0x46B7080")]
	public static UniTask WaitForFixedUpdate(CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x46B7170", Offset = "0x46B7170", VA = "0x46B7170")]
	public static UniTask WaitForSeconds(float duration, [Optional][DefaultParameterValue(false)] bool ignoreTimeScale, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x46B73D0", Offset = "0x46B73D0", VA = "0x46B73D0")]
	public static UniTask WaitForSeconds(int duration, [Optional][DefaultParameterValue(false)] bool ignoreTimeScale, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x46B7440", Offset = "0x46B7440", VA = "0x46B7440")]
	public static UniTask DelayFrame(int delayFrameCount, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x46B72E0", Offset = "0x46B72E0", VA = "0x46B72E0")]
	public static UniTask Delay(int millisecondsDelay, [Optional][DefaultParameterValue(false)] bool ignoreTimeScale, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x46B7930", Offset = "0x46B7930", VA = "0x46B7930")]
	public static UniTask Delay(TimeSpan delayTimeSpan, [Optional][DefaultParameterValue(false)] bool ignoreTimeScale, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x46B7BB0", Offset = "0x46B7BB0", VA = "0x46B7BB0")]
	public static UniTask Delay(int millisecondsDelay, DelayType delayType, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x46B79A0", Offset = "0x46B79A0", VA = "0x46B79A0")]
	public static UniTask Delay(TimeSpan delayTimeSpan, DelayType delayType, [Optional][DefaultParameterValue(8)] PlayerLoopTiming delayTiming, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x46B8850", Offset = "0x46B8850", VA = "0x46B8850")]
	public static UniTask FromException(Exception ex)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001BA")]
	public static UniTask<T> FromException<T>(Exception ex)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001BB")]
	public static UniTask<T> FromResult<T>(T value)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x46AD6F0", Offset = "0x46AD6F0", VA = "0x46AD6F0")]
	public static UniTask FromCanceled([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001BD")]
	public static UniTask<T> FromCanceled<T>([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x46B89D0", Offset = "0x46B89D0", VA = "0x46B89D0")]
	public static UniTask Create(Func<UniTask> factory)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x46B89F0", Offset = "0x46B89F0", VA = "0x46B89F0")]
	public static UniTask Create(Func<CancellationToken, UniTask> factory, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001C0")]
	public static UniTask Create<T>(T state, Func<T, UniTask> factory)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001C1")]
	public static UniTask<T> Create<T>(Func<UniTask<T>> factory)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x46B8A10", Offset = "0x46B8A10", VA = "0x46B8A10")]
	public static AsyncLazy Lazy(Func<UniTask> factory)
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	public static AsyncLazy<T> Lazy<T>(Func<UniTask<T>> factory)
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x46B8A60", Offset = "0x46B8A60", VA = "0x46B8A60")]
	public static void Void(Func<UniTaskVoid> asyncAction)
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x46B8A90", Offset = "0x46B8A90", VA = "0x46B8A90")]
	public static void Void(Func<CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x60001C6")]
	public static void Void<T>(Func<T, UniTaskVoid> asyncAction, T state)
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x46B8AC0", Offset = "0x46B8AC0", VA = "0x46B8AC0")]
	public static Action Action(Func<UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x46B8B80", Offset = "0x46B8B80", VA = "0x46B8B80")]
	public static Action Action(Func<CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001C9")]
	public static Action Action<T>(T state, Func<T, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x46B8C50", Offset = "0x46B8C50", VA = "0x46B8C50")]
	public static UnityAction UnityAction(Func<UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x46B8D10", Offset = "0x46B8D10", VA = "0x46B8D10")]
	public static UnityAction UnityAction(Func<CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001CC")]
	public static UnityAction UnityAction<T>(T state, Func<T, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001CD")]
	public static UnityAction<T> UnityAction<T>(Func<T, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001CE")]
	public static UnityAction<T0, T1> UnityAction<T0, T1>(Func<T0, T1, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001CF")]
	public static UnityAction<T0, T1, T2> UnityAction<T0, T1, T2>(Func<T0, T1, T2, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001D0")]
	public static UnityAction<T0, T1, T2, T3> UnityAction<T0, T1, T2, T3>(Func<T0, T1, T2, T3, UniTaskVoid> asyncAction)
	{
		return null;
	}

	[Token(Token = "0x60001D1")]
	public static UnityAction<T> UnityAction<T>(Func<T, CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001D2")]
	public static UnityAction<T0, T1> UnityAction<T0, T1>(Func<T0, T1, CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001D3")]
	public static UnityAction<T0, T1, T2> UnityAction<T0, T1, T2>(Func<T0, T1, T2, CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001D4")]
	public static UnityAction<T0, T1, T2, T3> UnityAction<T0, T1, T2, T3>(Func<T0, T1, T2, T3, CancellationToken, UniTaskVoid> asyncAction, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x46B8DE0", Offset = "0x46B8DE0", VA = "0x46B8DE0")]
	public static UniTask Defer(Func<UniTask> factory)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001D6")]
	public static UniTask<T> Defer<T>(Func<UniTask<T>> factory)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001D7")]
	public static UniTask Defer<TState>(TState state, Func<TState, UniTask> factory)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001D8")]
	public static UniTask<TResult> Defer<TState, TResult>(TState state, Func<TState, UniTask<TResult>> factory)
	{
		return default(UniTask<TResult>);
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x46B8EA0", Offset = "0x46B8EA0", VA = "0x46B8EA0")]
	public static UniTask Never(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001DA")]
	public static UniTask<T> Never<T>(CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x46B8F60", Offset = "0x46B8F60", VA = "0x46B8F60")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask Run(Action action, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x46B9070", Offset = "0x46B9070", VA = "0x46B9070")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask Run(Action<object> action, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x46B91B0", Offset = "0x46B91B0", VA = "0x46B91B0")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask Run(Func<UniTask> action, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x46B92C0", Offset = "0x46B92C0", VA = "0x46B92C0")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask Run(Func<object, UniTask> action, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001DF")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask<T> Run<T>(Func<T> func, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E0")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask<T> Run<T>(Func<UniTask<T>> func, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E1")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask<T> Run<T>(Func<object, T> func, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E2")]
	[Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don't want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
	public static UniTask<T> Run<T>(Func<object, UniTask<T>> func, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x46B8FB0", Offset = "0x46B8FB0", VA = "0x46B8FB0")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__82))]
	public static UniTask RunOnThreadPool(Action action, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x46B90D0", Offset = "0x46B90D0", VA = "0x46B90D0")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__83))]
	public static UniTask RunOnThreadPool(Action<object> action, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x46B9200", Offset = "0x46B9200", VA = "0x46B9200")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__84))]
	public static UniTask RunOnThreadPool(Func<UniTask> action, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x46B9320", Offset = "0x46B9320", VA = "0x46B9320")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__85))]
	public static UniTask RunOnThreadPool(Func<object, UniTask> action, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001E7")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__86<>))]
	public static UniTask<T> RunOnThreadPool<T>(Func<T> func, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E8")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__87<>))]
	public static UniTask<T> RunOnThreadPool<T>(Func<UniTask<T>> func, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001E9")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__88<>))]
	public static UniTask<T> RunOnThreadPool<T>(Func<object, T> func, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001EA")]
	[AsyncStateMachine(typeof(_003CRunOnThreadPool_003Ed__89<>))]
	public static UniTask<T> RunOnThreadPool<T>(Func<object, UniTask<T>> func, object state, [Optional][DefaultParameterValue(true)] bool configureAwait, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x46B9410", Offset = "0x46B9410", VA = "0x46B9410")]
	public static SwitchToMainThreadAwaitable SwitchToMainThread([Optional] CancellationToken cancellationToken)
	{
		return default(SwitchToMainThreadAwaitable);
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x46B9460", Offset = "0x46B9460", VA = "0x46B9460")]
	public static SwitchToMainThreadAwaitable SwitchToMainThread(PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken)
	{
		return default(SwitchToMainThreadAwaitable);
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x46B9490", Offset = "0x46B9490", VA = "0x46B9490")]
	public static ReturnToMainThread ReturnToMainThread([Optional] CancellationToken cancellationToken)
	{
		return default(ReturnToMainThread);
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x46B94E0", Offset = "0x46B94E0", VA = "0x46B94E0")]
	public static ReturnToMainThread ReturnToMainThread(PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken)
	{
		return default(ReturnToMainThread);
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x46B9510", Offset = "0x46B9510", VA = "0x46B9510")]
	public static void Post(Action action, PlayerLoopTiming timing = PlayerLoopTiming.Update)
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x46B9560", Offset = "0x46B9560", VA = "0x46B9560")]
	public static SwitchToThreadPoolAwaitable SwitchToThreadPool()
	{
		return default(SwitchToThreadPoolAwaitable);
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x46B9570", Offset = "0x46B9570", VA = "0x46B9570")]
	public static SwitchToTaskPoolAwaitable SwitchToTaskPool()
	{
		return default(SwitchToTaskPoolAwaitable);
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x46B9580", Offset = "0x46B9580", VA = "0x46B9580")]
	public static SwitchToSynchronizationContextAwaitable SwitchToSynchronizationContext(SynchronizationContext synchronizationContext, [Optional] CancellationToken cancellationToken)
	{
		return default(SwitchToSynchronizationContextAwaitable);
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x46B9640", Offset = "0x46B9640", VA = "0x46B9640")]
	public static ReturnToSynchronizationContext ReturnToSynchronizationContext(SynchronizationContext synchronizationContext, [Optional] CancellationToken cancellationToken)
	{
		return default(ReturnToSynchronizationContext);
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x46B96B0", Offset = "0x46B96B0", VA = "0x46B96B0")]
	public static ReturnToSynchronizationContext ReturnToCurrentSynchronizationContext([Optional][DefaultParameterValue(true)] bool dontPostWhenSameContext, [Optional] CancellationToken cancellationToken)
	{
		return default(ReturnToSynchronizationContext);
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x46B9700", Offset = "0x46B9700", VA = "0x46B9700")]
	public static UniTask WaitUntil(Func<bool> predicate, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001F6")]
	public static UniTask WaitUntil<T>(T state, Func<T, bool> predicate, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x46B9AC0", Offset = "0x46B9AC0", VA = "0x46B9AC0")]
	public static UniTask WaitWhile(Func<bool> predicate, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001F8")]
	public static UniTask WaitWhile<T>(T state, Func<T, bool> predicate, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x46B9E80", Offset = "0x46B9E80", VA = "0x46B9E80")]
	public static UniTask WaitUntilCanceled(CancellationToken cancellationToken, PlayerLoopTiming timing = PlayerLoopTiming.Update, bool completeImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60001FA")]
	public static UniTask<U> WaitUntilValueChanged<T, U>(T target, Func<T, U> monitorFunction, [Optional][DefaultParameterValue(8)] PlayerLoopTiming monitorTiming, [Optional] IEqualityComparer<U> equalityComparer, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false) where T : class
	{
		return default(UniTask<U>);
	}

	[Token(Token = "0x60001FB")]
	public static UniTask<(T1, T2)> WhenAll<T1, T2>(UniTask<T1> task1, UniTask<T2> task2)
	{
		return default(UniTask<(T1, T2)>);
	}

	[Token(Token = "0x60001FC")]
	public static UniTask<(T1, T2, T3)> WhenAll<T1, T2, T3>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
	{
		return default(UniTask<(T1, T2, T3)>);
	}

	[Token(Token = "0x60001FD")]
	public static UniTask<(T1, T2, T3, T4)> WhenAll<T1, T2, T3, T4>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4)
	{
		return default(UniTask<(T1, T2, T3, T4)>);
	}

	[Token(Token = "0x60001FE")]
	public static UniTask<(T1, T2, T3, T4, T5)> WhenAll<T1, T2, T3, T4, T5>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5)
	{
		return default(UniTask<(T1, T2, T3, T4, T5)>);
	}

	[Token(Token = "0x60001FF")]
	public static UniTask<(T1, T2, T3, T4, T5, T6)> WhenAll<T1, T2, T3, T4, T5, T6>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6)>);
	}

	[Token(Token = "0x6000200")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7)> WhenAll<T1, T2, T3, T4, T5, T6, T7>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7)>);
	}

	[Token(Token = "0x6000201")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8)>);
	}

	[Token(Token = "0x6000202")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9)>);
	}

	[Token(Token = "0x6000203")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>);
	}

	[Token(Token = "0x6000204")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>);
	}

	[Token(Token = "0x6000205")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>);
	}

	[Token(Token = "0x6000206")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>);
	}

	[Token(Token = "0x6000207")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>);
	}

	[Token(Token = "0x6000208")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)> WhenAll<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14, UniTask<T15> task15)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>);
	}

	[Token(Token = "0x6000209")]
	public static UniTask<T[]> WhenAll<T>(params UniTask<T>[] tasks)
	{
		return default(UniTask<T[]>);
	}

	[Token(Token = "0x600020A")]
	public static UniTask<T[]> WhenAll<T>(IEnumerable<UniTask<T>> tasks)
	{
		return default(UniTask<T[]>);
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x46BA220", Offset = "0x46BA220", VA = "0x46BA220")]
	public static UniTask WhenAll(params UniTask[] tasks)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x46BA7B0", Offset = "0x46BA7B0", VA = "0x46BA7B0")]
	public static UniTask WhenAll(IEnumerable<UniTask> tasks)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600020D")]
	public static UniTask<(int, T1, T2)> WhenAny<T1, T2>(UniTask<T1> task1, UniTask<T2> task2)
	{
		return default(UniTask<(int, T1, T2)>);
	}

	[Token(Token = "0x600020E")]
	public static UniTask<(int, T1, T2, T3)> WhenAny<T1, T2, T3>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
	{
		return default(UniTask<(int, T1, T2, T3)>);
	}

	[Token(Token = "0x600020F")]
	public static UniTask<(int, T1, T2, T3, T4)> WhenAny<T1, T2, T3, T4>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4)
	{
		return default(UniTask<(int, T1, T2, T3, T4)>);
	}

	[Token(Token = "0x6000210")]
	public static UniTask<(int, T1, T2, T3, T4, T5)> WhenAny<T1, T2, T3, T4, T5>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5)>);
	}

	[Token(Token = "0x6000211")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6)> WhenAny<T1, T2, T3, T4, T5, T6>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6)>);
	}

	[Token(Token = "0x6000212")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7)> WhenAny<T1, T2, T3, T4, T5, T6, T7>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7)>);
	}

	[Token(Token = "0x6000213")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8)>);
	}

	[Token(Token = "0x6000214")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9)>);
	}

	[Token(Token = "0x6000215")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>);
	}

	[Token(Token = "0x6000216")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>);
	}

	[Token(Token = "0x6000217")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>);
	}

	[Token(Token = "0x6000218")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>);
	}

	[Token(Token = "0x6000219")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>);
	}

	[Token(Token = "0x600021A")]
	public static UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)> WhenAny<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14, UniTask<T15> task15)
	{
		return default(UniTask<(int, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>);
	}

	[Token(Token = "0x600021B")]
	public static UniTask<(bool, T)> WhenAny<T>(UniTask<T> leftTask, UniTask rightTask)
	{
		return default(UniTask<(bool, T)>);
	}

	[Token(Token = "0x600021C")]
	public static UniTask<(int, T)> WhenAny<T>(params UniTask<T>[] tasks)
	{
		return default(UniTask<(int, T)>);
	}

	[Token(Token = "0x600021D")]
	public static UniTask<(int, T)> WhenAny<T>(IEnumerable<UniTask<T>> tasks)
	{
		return default(UniTask<(int, T)>);
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x46BA910", Offset = "0x46BA910", VA = "0x46BA910")]
	public static UniTask<int> WhenAny(params UniTask[] tasks)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x46BAE90", Offset = "0x46BAE90", VA = "0x46BAE90")]
	public static UniTask<int> WhenAny(IEnumerable<UniTask> tasks)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000220")]
	public static IUniTaskAsyncEnumerable<WhenEachResult<T>> WhenEach<T>(IEnumerable<UniTask<T>> tasks)
	{
		return null;
	}

	[Token(Token = "0x6000221")]
	public static IUniTaskAsyncEnumerable<WhenEachResult<T>> WhenEach<T>(params UniTask<T>[] tasks)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000222")]
	[Address(RVA = "0x46BB020", Offset = "0x46BB020", VA = "0x46BB020")]
	[DebuggerHidden]
	public UniTask(IUniTaskSource source, short token)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000224")]
	[Address(RVA = "0x46BB0F0", Offset = "0x46BB0F0", VA = "0x46BB0F0")]
	[DebuggerHidden]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x46BB120", Offset = "0x46BB120", VA = "0x46BB120")]
	public UniTask<bool> SuppressCancellationThrow()
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x46B58A0", Offset = "0x46B58A0", VA = "0x46B58A0")]
	public static implicit operator ValueTask(in UniTask self)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x46BB340", Offset = "0x46BB340", VA = "0x46BB340", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x46BB470", Offset = "0x46BB470", VA = "0x46BB470")]
	public UniTask Preserve()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x46BB540", Offset = "0x46BB540", VA = "0x46BB540")]
	public UniTask<AsyncUnit> AsAsyncUnitUniTask()
	{
		return default(UniTask<AsyncUnit>);
	}
}
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000114")]
[AsyncMethodBuilder(typeof(AsyncUniTaskMethodBuilder<>))]
public readonly struct UniTask<T>
{
	[Token(Token = "0x2000115")]
	private sealed class IsCanceledSource : IUniTaskSource<(bool, T)>, IUniTaskSource, IValueTaskSource, IValueTaskSource<(bool, T)>
	{
		[Token(Token = "0x400042F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly IUniTaskSource<T> source;

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006BB")]
		[DebuggerHidden]
		public IsCanceledSource(IUniTaskSource<T> source)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006BC")]
		[DebuggerHidden]
		public (bool, T) GetResult(short token)
		{
			return default((bool, T));
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006BD")]
		[DebuggerHidden]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006BE")]
		[DebuggerHidden]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006BF")]
		[DebuggerHidden]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006C0")]
		[DebuggerHidden]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}
	}

	[Token(Token = "0x2000116")]
	private sealed class MemoizeSource : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[Token(Token = "0x4000430")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IUniTaskSource<T> source;

		[Token(Token = "0x4000431")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T result;

		[Token(Token = "0x4000432")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ExceptionDispatchInfo exception;

		[Token(Token = "0x4000433")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskStatus status;

		[Token(Token = "0x60006C1")]
		public MemoizeSource(IUniTaskSource<T> source)
		{
		}

		[Token(Token = "0x60006C2")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x60006C3")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60006C4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60006C5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60006C6")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x2000117")]
	public readonly struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000434")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly UniTask<T> task;

		[Token(Token = "0x1700004E")]
		public bool IsCompleted
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60006C8")]
			[DebuggerHidden]
			get
			{
				return default(bool);
			}
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006C7")]
		[DebuggerHidden]
		public Awaiter(in UniTask<T> task)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006C9")]
		[DebuggerHidden]
		public T GetResult()
		{
			return (T)null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006CA")]
		[DebuggerHidden]
		public void OnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006CB")]
		[DebuggerHidden]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006CC")]
		[DebuggerHidden]
		public void SourceOnCompleted(Action<object> continuation, object state)
		{
		}
	}

	[Token(Token = "0x400042C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly IUniTaskSource<T> source;

	[Token(Token = "0x400042D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly T result;

	[Token(Token = "0x400042E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly short token;

	[Token(Token = "0x1700004D")]
	public UniTaskStatus Status
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60006B3")]
		[DebuggerHidden]
		get
		{
			return default(UniTaskStatus);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B1")]
	[DebuggerHidden]
	public UniTask(T result)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B2")]
	[DebuggerHidden]
	public UniTask(IUniTaskSource<T> source, short token)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006B4")]
	[DebuggerHidden]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}

	[Token(Token = "0x60006B5")]
	public UniTask<T> Preserve()
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60006B6")]
	public UniTask AsUniTask()
	{
		return default(UniTask);
	}

	[Token(Token = "0x60006B7")]
	public static implicit operator UniTask(UniTask<T> self)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60006B8")]
	public static implicit operator ValueTask<T>(in UniTask<T> self)
	{
		return default(ValueTask<T>);
	}

	[Token(Token = "0x60006B9")]
	public UniTask<(bool, T)> SuppressCancellationThrow()
	{
		return default(UniTask<(bool, T)>);
	}

	[Token(Token = "0x60006BA")]
	public override string ToString()
	{
		return null;
	}
}
