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
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000127")]
public static class UniTaskExtensions
{
	[Token(Token = "0x2000128")]
	private sealed class AttachExternalCancellationSource : IUniTaskSource, IValueTaskSource
	{
		[StructLayout((LayoutKind)3)]
		[Token(Token = "0x2000129")]
		[CompilerGenerated]
		private struct _003CRunTask_003Ed__5 : IAsyncStateMachine
		{
			[Token(Token = "0x400045E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int _003C_003E1__state;

			[Token(Token = "0x400045F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			[Token(Token = "0x4000460")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public UniTask task;

			[Token(Token = "0x4000461")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public AttachExternalCancellationSource _003C_003E4__this;

			[Token(Token = "0x4000462")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			private UniTask.Awaiter _003C_003Eu__1;

			[Token(Token = "0x600076E")]
			[Address(RVA = "0x46CB620", Offset = "0x46CB620", VA = "0x46CB620", Slot = "4")]
			private void MoveNext()
			{
			}

			[Token(Token = "0x600076F")]
			[Address(RVA = "0x46CBC00", Offset = "0x46CBC00", VA = "0x46CBC00", Slot = "5")]
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}
		}

		[Token(Token = "0x400045A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> cancellationCallbackDelegate;

		[Token(Token = "0x400045B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400045C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private CancellationTokenRegistration tokenRegistration;

		[Token(Token = "0x400045D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x6000766")]
		[Address(RVA = "0x46CA720", Offset = "0x46CA720", VA = "0x46CA720")]
		public AttachExternalCancellationSource(UniTask task, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000767")]
		[Address(RVA = "0x46CB2A0", Offset = "0x46CB2A0", VA = "0x46CB2A0")]
		[AsyncStateMachine(typeof(_003CRunTask_003Ed__5))]
		private UniTaskVoid RunTask(UniTask task)
		{
			return default(UniTaskVoid);
		}

		[Token(Token = "0x6000768")]
		[Address(RVA = "0x46CB370", Offset = "0x46CB370", VA = "0x46CB370")]
		private static void CancellationCallback(object state)
		{
		}

		[Token(Token = "0x6000769")]
		[Address(RVA = "0x46CB3E0", Offset = "0x46CB3E0", VA = "0x46CB3E0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600076A")]
		[Address(RVA = "0x46CB430", Offset = "0x46CB430", VA = "0x46CB430", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600076B")]
		[Address(RVA = "0x46CB480", Offset = "0x46CB480", VA = "0x46CB480", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600076C")]
		[Address(RVA = "0x46CB4E0", Offset = "0x46CB4E0", VA = "0x46CB4E0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x200012A")]
	private sealed class AttachExternalCancellationSource<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>
	{
		[StructLayout((LayoutKind)3)]
		[Token(Token = "0x200012B")]
		[CompilerGenerated]
		private struct _003CRunTask_003Ed__5 : IAsyncStateMachine
		{
			[Token(Token = "0x4000467")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int _003C_003E1__state;

			[Token(Token = "0x4000468")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			[Token(Token = "0x4000469")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public UniTask<T> task;

			[Token(Token = "0x400046A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public AttachExternalCancellationSource<T> _003C_003E4__this;

			[Token(Token = "0x400046B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private UniTask<T>.Awaiter _003C_003Eu__1;

			[Token(Token = "0x6000779")]
			private void MoveNext()
			{
			}

			[Token(Token = "0x600077A")]
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}
		}

		[Token(Token = "0x4000463")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> cancellationCallbackDelegate;

		[Token(Token = "0x4000464")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000465")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenRegistration tokenRegistration;

		[Token(Token = "0x4000466")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTaskCompletionSourceCore<T> core;

		[Token(Token = "0x6000770")]
		public AttachExternalCancellationSource(UniTask<T> task, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000771")]
		[AsyncStateMachine(typeof(AttachExternalCancellationSource<>._003CRunTask_003Ed__5))]
		private UniTaskVoid RunTask(UniTask<T> task)
		{
			return default(UniTaskVoid);
		}

		[Token(Token = "0x6000772")]
		private static void CancellationCallback(object state)
		{
		}

		[Token(Token = "0x6000773")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000774")]
		public T GetResult(short token)
		{
			return (T)null;
		}

		[Token(Token = "0x6000775")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000776")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000777")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}
	}

	[Token(Token = "0x200012C")]
	private sealed class ToCoroutineEnumerator : IEnumerator
	{
		[StructLayout((LayoutKind)3)]
		[Token(Token = "0x200012D")]
		[CompilerGenerated]
		private struct _003CRunTask_003Ed__6 : IAsyncStateMachine
		{
			[Token(Token = "0x4000471")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int _003C_003E1__state;

			[Token(Token = "0x4000472")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			[Token(Token = "0x4000473")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public UniTask task;

			[Token(Token = "0x4000474")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public ToCoroutineEnumerator _003C_003E4__this;

			[Token(Token = "0x4000475")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			private UniTask.Awaiter _003C_003Eu__1;

			[Token(Token = "0x6000780")]
			[Address(RVA = "0x46CBE20", Offset = "0x46CBE20", VA = "0x46CBE20", Slot = "4")]
			private void MoveNext()
			{
			}

			[Token(Token = "0x6000781")]
			[Address(RVA = "0x46CC390", Offset = "0x46CC390", VA = "0x46CC390", Slot = "5")]
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}
		}

		[Token(Token = "0x400046C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private bool completed;

		[Token(Token = "0x400046D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UniTask task;

		[Token(Token = "0x400046E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private Action<Exception> exceptionHandler;

		[Token(Token = "0x400046F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool isStarted;

		[Token(Token = "0x4000470")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ExceptionDispatchInfo exception;

		[Token(Token = "0x17000056")]
		public object Current
		{
			[Token(Token = "0x600077D")]
			[Address(RVA = "0x46CBCE0", Offset = "0x46CBCE0", VA = "0x46CBCE0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600077B")]
		[Address(RVA = "0x46CA8C0", Offset = "0x46CA8C0", VA = "0x46CA8C0")]
		public ToCoroutineEnumerator(UniTask task, Action<Exception> exceptionHandler)
		{
		}

		[Token(Token = "0x600077C")]
		[Address(RVA = "0x46CBC10", Offset = "0x46CBC10", VA = "0x46CBC10")]
		[AsyncStateMachine(typeof(_003CRunTask_003Ed__6))]
		private UniTaskVoid RunTask(UniTask task)
		{
			return default(UniTaskVoid);
		}

		[Token(Token = "0x600077E")]
		[Address(RVA = "0x46CBCF0", Offset = "0x46CBCF0", VA = "0x46CBCF0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600077F")]
		[Address(RVA = "0x46CBE10", Offset = "0x46CBE10", VA = "0x46CBE10", Slot = "6")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200012E")]
	private sealed class ToCoroutineEnumerator<T> : IEnumerator
	{
		[StructLayout((LayoutKind)3)]
		[Token(Token = "0x200012F")]
		[CompilerGenerated]
		private struct _003CRunTask_003Ed__8 : IAsyncStateMachine
		{
			[Token(Token = "0x400047D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int _003C_003E1__state;

			[Token(Token = "0x400047E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			[Token(Token = "0x400047F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public UniTask<T> task;

			[Token(Token = "0x4000480")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public ToCoroutineEnumerator<T> _003C_003E4__this;

			[Token(Token = "0x4000481")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private UniTask<T>.Awaiter _003C_003Eu__1;

			[Token(Token = "0x6000787")]
			private void MoveNext()
			{
			}

			[Token(Token = "0x6000788")]
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}
		}

		[Token(Token = "0x4000476")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool completed;

		[Token(Token = "0x4000477")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Action<T> resultHandler;

		[Token(Token = "0x4000478")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Action<Exception> exceptionHandler;

		[Token(Token = "0x4000479")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool isStarted;

		[Token(Token = "0x400047A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T> task;

		[Token(Token = "0x400047B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object current;

		[Token(Token = "0x400047C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ExceptionDispatchInfo exception;

		[Token(Token = "0x17000057")]
		public object Current
		{
			[Token(Token = "0x6000784")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000782")]
		public ToCoroutineEnumerator(UniTask<T> task, Action<T> resultHandler, Action<Exception> exceptionHandler)
		{
		}

		[Token(Token = "0x6000783")]
		[AsyncStateMachine(typeof(ToCoroutineEnumerator<>._003CRunTask_003Ed__8))]
		private UniTaskVoid RunTask(UniTask<T> task)
		{
			return default(UniTaskVoid);
		}

		[Token(Token = "0x6000785")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000786")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000134")]
	[CompilerGenerated]
	private struct _003CContinueWith_003Ed__54<T> : IAsyncStateMachine
	{
		[Token(Token = "0x400048C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400048D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400048E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Action<T> continuationFunction;

		[Token(Token = "0x400048F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public UniTask<T> task;

		[Token(Token = "0x4000490")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Action<T> _003C_003E7__wrap1;

		[Token(Token = "0x4000491")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6000797")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000798")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000135")]
	[CompilerGenerated]
	private struct _003CContinueWith_003Ed__55<T> : IAsyncStateMachine
	{
		[Token(Token = "0x4000492")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000493")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000494")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<T, UniTask> continuationFunction;

		[Token(Token = "0x4000495")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public UniTask<T> task;

		[Token(Token = "0x4000496")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, UniTask> _003C_003E7__wrap1;

		[Token(Token = "0x4000497")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x4000498")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask.Awaiter _003C_003Eu__2;

		[Token(Token = "0x6000799")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600079A")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000136")]
	[CompilerGenerated]
	private struct _003CContinueWith_003Ed__56<T, TR> : IAsyncStateMachine
	{
		[Token(Token = "0x4000499")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400049A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<TR> _003C_003Et__builder;

		[Token(Token = "0x400049B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<T, TR> continuationFunction;

		[Token(Token = "0x400049C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public UniTask<T> task;

		[Token(Token = "0x400049D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, TR> _003C_003E7__wrap1;

		[Token(Token = "0x400049E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x600079B")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600079C")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000137")]
	[CompilerGenerated]
	private struct _003CContinueWith_003Ed__57<T, TR> : IAsyncStateMachine
	{
		[Token(Token = "0x400049F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40004A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<TR> _003C_003Et__builder;

		[Token(Token = "0x40004A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<T, UniTask<TR>> continuationFunction;

		[Token(Token = "0x40004A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public UniTask<T> task;

		[Token(Token = "0x40004A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<T, UniTask<TR>> _003C_003E7__wrap1;

		[Token(Token = "0x40004A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40004A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<TR>.Awaiter _003C_003Eu__2;

		[Token(Token = "0x600079D")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600079E")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000138")]
	[CompilerGenerated]
	private struct _003CContinueWith_003Ed__58 : IAsyncStateMachine
	{
		[Token(Token = "0x40004A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40004A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40004A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public UniTask task;

		[Token(Token = "0x40004A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action continuationFunction;

		[Token(Token = "0x40004AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UniTask.Awaiter _003C_003Eu__1;

		[Token(Token = "0x600079F")]
		[Address(RVA = "0x46CCC30", Offset = "0x46CCC30", VA = "0x46CCC30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007A0")]
		[Address(RVA = "0x46CD0F0", Offset = "0x46CD0F0", VA = "0x46CD0F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000139")]
	[CompilerGenerated]
	private struct _003CContinueWith_003Ed__59 : IAsyncStateMachine
	{
		[Token(Token = "0x40004AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40004AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40004AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public UniTask task;

		[Token(Token = "0x40004AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Func<UniTask> continuationFunction;

		[Token(Token = "0x40004AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UniTask.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60007A1")]
		[Address(RVA = "0x46CD100", Offset = "0x46CD100", VA = "0x46CD100", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007A2")]
		[Address(RVA = "0x46CD8B0", Offset = "0x46CD8B0", VA = "0x46CD8B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200013A")]
	[CompilerGenerated]
	private struct _003CContinueWith_003Ed__60<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40004B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40004B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40004B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public UniTask task;

		[Token(Token = "0x40004B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<T> continuationFunction;

		[Token(Token = "0x40004B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60007A3")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007A4")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200013B")]
	[CompilerGenerated]
	private struct _003CContinueWith_003Ed__61<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40004B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40004B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40004B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public UniTask task;

		[Token(Token = "0x40004B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<UniTask<T>> continuationFunction;

		[Token(Token = "0x40004B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40004BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__2;

		[Token(Token = "0x60007A5")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007A6")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200013C")]
	[CompilerGenerated]
	private struct _003CForgetCoreWithCatch_003Ed__50 : IAsyncStateMachine
	{
		[Token(Token = "0x40004BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40004BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40004BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public UniTask task;

		[Token(Token = "0x40004BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool handleExceptionOnMainThread;

		[Token(Token = "0x40004BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action<Exception> exceptionHandler;

		[Token(Token = "0x40004C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40004C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40004C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UniTask.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40004C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private Exception _003Cex_003E5__4;

		[Token(Token = "0x40004C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private SwitchToMainThreadAwaitable.Awaiter _003C_003Eu__2;

		[Token(Token = "0x60007A7")]
		[Address(RVA = "0x46CD8C0", Offset = "0x46CD8C0", VA = "0x46CD8C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007A8")]
		[Address(RVA = "0x46CE0C0", Offset = "0x46CE0C0", VA = "0x46CE0C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200013D")]
	[CompilerGenerated]
	private struct _003CForgetCoreWithCatch_003Ed__53<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40004C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40004C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40004C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public UniTask<T> task;

		[Token(Token = "0x40004C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool handleExceptionOnMainThread;

		[Token(Token = "0x40004C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Action<Exception> exceptionHandler;

		[Token(Token = "0x40004CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object _003C_003E7__wrap1;

		[Token(Token = "0x40004CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x40004CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40004CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Exception _003Cex_003E5__4;

		[Token(Token = "0x40004CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private SwitchToMainThreadAwaitable.Awaiter _003C_003Eu__2;

		[Token(Token = "0x60007A9")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007AA")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200013E")]
	[CompilerGenerated]
	private struct _003CTimeout_003Ed__44 : IAsyncStateMachine
	{
		[Token(Token = "0x40004CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40004D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40004D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public TimeSpan timeout;

		[Token(Token = "0x40004D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DelayType delayType;

		[Token(Token = "0x40004D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public PlayerLoopTiming timeoutCheckTiming;

		[Token(Token = "0x40004D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public UniTask task;

		[Token(Token = "0x40004D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationTokenSource taskCancellationTokenSource;

		[Token(Token = "0x40004D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationTokenSource _003CdelayCancellationTokenSource_003E5__2;

		[Token(Token = "0x40004D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private UniTask<(int winArgumentIndex, bool result1, bool result2)>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60007AB")]
		[Address(RVA = "0x46CE0D0", Offset = "0x46CE0D0", VA = "0x46CE0D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007AC")]
		[Address(RVA = "0x46CE980", Offset = "0x46CE980", VA = "0x46CE980", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200013F")]
	[CompilerGenerated]
	private struct _003CTimeout_003Ed__45<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40004D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40004D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40004DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TimeSpan timeout;

		[Token(Token = "0x40004DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public DelayType delayType;

		[Token(Token = "0x40004DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public PlayerLoopTiming timeoutCheckTiming;

		[Token(Token = "0x40004DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public UniTask<T> task;

		[Token(Token = "0x40004DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationTokenSource taskCancellationTokenSource;

		[Token(Token = "0x40004DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenSource _003CdelayCancellationTokenSource_003E5__2;

		[Token(Token = "0x40004E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<(int winArgumentIndex, (bool IsCanceled, T Result) result1, bool result2)>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60007AD")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007AE")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000140")]
	[CompilerGenerated]
	private struct _003CTimeoutWithoutException_003Ed__46 : IAsyncStateMachine
	{
		[Token(Token = "0x40004E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40004E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x40004E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public TimeSpan timeout;

		[Token(Token = "0x40004E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public DelayType delayType;

		[Token(Token = "0x40004E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public PlayerLoopTiming timeoutCheckTiming;

		[Token(Token = "0x40004E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public UniTask task;

		[Token(Token = "0x40004E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationTokenSource taskCancellationTokenSource;

		[Token(Token = "0x40004E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private CancellationTokenSource _003CdelayCancellationTokenSource_003E5__2;

		[Token(Token = "0x40004E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTask<(int winArgumentIndex, bool result1, bool result2)>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60007AF")]
		[Address(RVA = "0x46CE990", Offset = "0x46CE990", VA = "0x46CE990", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007B0")]
		[Address(RVA = "0x46CF1F0", Offset = "0x46CF1F0", VA = "0x46CF1F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000141")]
	[CompilerGenerated]
	private struct _003CTimeoutWithoutException_003Ed__47<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40004EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40004EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<(bool IsTimeout, T Result)> _003C_003Et__builder;

		[Token(Token = "0x40004EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TimeSpan timeout;

		[Token(Token = "0x40004ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public DelayType delayType;

		[Token(Token = "0x40004EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public PlayerLoopTiming timeoutCheckTiming;

		[Token(Token = "0x40004EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public UniTask<T> task;

		[Token(Token = "0x40004F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationTokenSource taskCancellationTokenSource;

		[Token(Token = "0x40004F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationTokenSource _003CdelayCancellationTokenSource_003E5__2;

		[Token(Token = "0x40004F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<(int winArgumentIndex, (bool IsCanceled, T Result) result1, bool result2)>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60007B1")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007B2")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000142")]
	[CompilerGenerated]
	private struct _003CUnwrap_003Ed__62<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40004F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40004F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40004F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public UniTask<UniTask<T>> task;

		[Token(Token = "0x40004F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<UniTask<T>>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40004F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__2;

		[Token(Token = "0x60007B3")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007B4")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000143")]
	[CompilerGenerated]
	private struct _003CUnwrap_003Ed__63 : IAsyncStateMachine
	{
		[Token(Token = "0x40004F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40004F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40004FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public UniTask<UniTask> task;

		[Token(Token = "0x40004FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UniTask<UniTask>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x40004FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private UniTask.Awaiter _003C_003Eu__2;

		[Token(Token = "0x60007B5")]
		[Address(RVA = "0x46CF240", Offset = "0x46CF240", VA = "0x46CF240", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007B6")]
		[Address(RVA = "0x46CFA20", Offset = "0x46CFA20", VA = "0x46CFA20", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000144")]
	[CompilerGenerated]
	private struct _003CUnwrap_003Ed__64<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40004FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40004FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40004FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Task<UniTask<T>> task;

		[Token(Token = "0x4000500")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private TaskAwaiter<UniTask<T>> _003C_003Eu__1;

		[Token(Token = "0x4000501")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__2;

		[Token(Token = "0x60007B7")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007B8")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000145")]
	[CompilerGenerated]
	private struct _003CUnwrap_003Ed__65<T> : IAsyncStateMachine
	{
		[Token(Token = "0x4000502")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000503")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x4000504")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Task<UniTask<T>> task;

		[Token(Token = "0x4000505")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool continueOnCapturedContext;

		[Token(Token = "0x4000506")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ConfiguredTaskAwaitable<UniTask<T>>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000507")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<T>.Awaiter _003C_003Eu__2;

		[Token(Token = "0x60007B9")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007BA")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000146")]
	[CompilerGenerated]
	private struct _003CUnwrap_003Ed__66 : IAsyncStateMachine
	{
		[Token(Token = "0x4000508")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000509")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400050A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Task<UniTask> task;

		[Token(Token = "0x400050B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private TaskAwaiter<UniTask> _003C_003Eu__1;

		[Token(Token = "0x400050C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask.Awaiter _003C_003Eu__2;

		[Token(Token = "0x60007BB")]
		[Address(RVA = "0x46CFC70", Offset = "0x46CFC70", VA = "0x46CFC70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007BC")]
		[Address(RVA = "0x46D0290", Offset = "0x46D0290", VA = "0x46D0290", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000147")]
	[CompilerGenerated]
	private struct _003CUnwrap_003Ed__67 : IAsyncStateMachine
	{
		[Token(Token = "0x400050D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400050E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400050F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Task<UniTask> task;

		[Token(Token = "0x4000510")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool continueOnCapturedContext;

		[Token(Token = "0x4000511")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private ConfiguredTaskAwaitable<UniTask>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000512")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UniTask.Awaiter _003C_003Eu__2;

		[Token(Token = "0x60007BD")]
		[Address(RVA = "0x46D02B0", Offset = "0x46D02B0", VA = "0x46D02B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007BE")]
		[Address(RVA = "0x46D08F0", Offset = "0x46D08F0", VA = "0x46D08F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000148")]
	[CompilerGenerated]
	private struct _003CUnwrap_003Ed__68<T> : IAsyncStateMachine
	{
		[Token(Token = "0x4000513")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000514")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x4000515")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public UniTask<Task<T>> task;

		[Token(Token = "0x4000516")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<Task<T>>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x4000517")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private TaskAwaiter<T> _003C_003Eu__2;

		[Token(Token = "0x60007BF")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007C0")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000149")]
	[CompilerGenerated]
	private struct _003CUnwrap_003Ed__69<T> : IAsyncStateMachine
	{
		[Token(Token = "0x4000518")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000519")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x400051A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public UniTask<Task<T>> task;

		[Token(Token = "0x400051B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool continueOnCapturedContext;

		[Token(Token = "0x400051C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<Task<T>>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x400051D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ConfiguredTaskAwaitable<T>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x60007C1")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007C2")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200014A")]
	[CompilerGenerated]
	private struct _003CUnwrap_003Ed__70 : IAsyncStateMachine
	{
		[Token(Token = "0x400051E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400051F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000520")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public UniTask<Task> task;

		[Token(Token = "0x4000521")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UniTask<Task>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x4000522")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x60007C3")]
		[Address(RVA = "0x46D0900", Offset = "0x46D0900", VA = "0x46D0900", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007C4")]
		[Address(RVA = "0x46D0EE0", Offset = "0x46D0EE0", VA = "0x46D0EE0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200014B")]
	[CompilerGenerated]
	private struct _003CUnwrap_003Ed__71 : IAsyncStateMachine
	{
		[Token(Token = "0x4000523")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000524")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000525")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public UniTask<Task> task;

		[Token(Token = "0x4000526")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool continueOnCapturedContext;

		[Token(Token = "0x4000527")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UniTask<Task>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x4000528")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x60007C5")]
		[Address(RVA = "0x46D0EF0", Offset = "0x46D0EF0", VA = "0x46D0EF0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60007C6")]
		[Address(RVA = "0x46D14E0", Offset = "0x46D14E0", VA = "0x46D14E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x46C6FA0", Offset = "0x46C6FA0", VA = "0x46C6FA0")]
	public static UniTask.Awaiter GetAwaiter(this UniTask[] tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x46C7030", Offset = "0x46C7030", VA = "0x46C7030")]
	public static UniTask.Awaiter GetAwaiter(this IEnumerable<UniTask> tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x6000722")]
	public static UniTask<T[]>.Awaiter GetAwaiter<T>(this UniTask<T>[] tasks)
	{
		return default(UniTask<T[]>.Awaiter);
	}

	[Token(Token = "0x6000723")]
	public static UniTask<T[]>.Awaiter GetAwaiter<T>(this IEnumerable<UniTask<T>> tasks)
	{
		return default(UniTask<T[]>.Awaiter);
	}

	[Token(Token = "0x6000724")]
	public static UniTask<(T1, T2)>.Awaiter GetAwaiter<T1, T2>(this (UniTask<T1> task1, UniTask<T2> task2) tasks)
	{
		return default(UniTask<(T1, T2)>.Awaiter);
	}

	[Token(Token = "0x6000725")]
	public static UniTask<(T1, T2, T3)>.Awaiter GetAwaiter<T1, T2, T3>(this (UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3) tasks)
	{
		return default(UniTask<(T1, T2, T3)>.Awaiter);
	}

	[Token(Token = "0x6000726")]
	public static UniTask<(T1, T2, T3, T4)>.Awaiter GetAwaiter<T1, T2, T3, T4>(this (UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4) tasks)
	{
		return default(UniTask<(T1, T2, T3, T4)>.Awaiter);
	}

	[Token(Token = "0x6000727")]
	public static UniTask<(T1, T2, T3, T4, T5)>.Awaiter GetAwaiter<T1, T2, T3, T4, T5>(this (UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5) tasks)
	{
		return default(UniTask<(T1, T2, T3, T4, T5)>.Awaiter);
	}

	[Token(Token = "0x6000728")]
	public static UniTask<(T1, T2, T3, T4, T5, T6)>.Awaiter GetAwaiter<T1, T2, T3, T4, T5, T6>(this (UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6) tasks)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6)>.Awaiter);
	}

	[Token(Token = "0x6000729")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7)>.Awaiter GetAwaiter<T1, T2, T3, T4, T5, T6, T7>(this (UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7) tasks)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7)>.Awaiter);
	}

	[Token(Token = "0x600072A")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8)>.Awaiter GetAwaiter<T1, T2, T3, T4, T5, T6, T7, T8>(this (UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8) tasks)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8)>.Awaiter);
	}

	[Token(Token = "0x600072B")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9)>.Awaiter GetAwaiter<T1, T2, T3, T4, T5, T6, T7, T8, T9>(this (UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9) tasks)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9)>.Awaiter);
	}

	[Token(Token = "0x600072C")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>.Awaiter GetAwaiter<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(this (UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10) tasks)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)>.Awaiter);
	}

	[Token(Token = "0x600072D")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>.Awaiter GetAwaiter<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(this (UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11) tasks)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>.Awaiter);
	}

	[Token(Token = "0x600072E")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>.Awaiter GetAwaiter<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(this (UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12) tasks)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>.Awaiter);
	}

	[Token(Token = "0x600072F")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>.Awaiter GetAwaiter<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(this (UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13) tasks)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>.Awaiter);
	}

	[Token(Token = "0x6000730")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>.Awaiter GetAwaiter<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(this (UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14) tasks)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14)>.Awaiter);
	}

	[Token(Token = "0x6000731")]
	public static UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>.Awaiter GetAwaiter<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(this (UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3, UniTask<T4> task4, UniTask<T5> task5, UniTask<T6> task6, UniTask<T7> task7, UniTask<T8> task8, UniTask<T9> task9, UniTask<T10> task10, UniTask<T11> task11, UniTask<T12> task12, UniTask<T13> task13, UniTask<T14> task14, UniTask<T15> task15) tasks)
	{
		return default(UniTask<(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15)>.Awaiter);
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x46C70C0", Offset = "0x46C70C0", VA = "0x46C70C0")]
	public static UniTask.Awaiter GetAwaiter(this (UniTask task1, UniTask task2) tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x46C71F0", Offset = "0x46C71F0", VA = "0x46C71F0")]
	public static UniTask.Awaiter GetAwaiter(this (UniTask task1, UniTask task2, UniTask task3) tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x46C7360", Offset = "0x46C7360", VA = "0x46C7360")]
	public static UniTask.Awaiter GetAwaiter(this (UniTask task1, UniTask task2, UniTask task3, UniTask task4) tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x46C7500", Offset = "0x46C7500", VA = "0x46C7500")]
	public static UniTask.Awaiter GetAwaiter(this (UniTask task1, UniTask task2, UniTask task3, UniTask task4, UniTask task5) tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x46C76D0", Offset = "0x46C76D0", VA = "0x46C76D0")]
	public static UniTask.Awaiter GetAwaiter(this (UniTask task1, UniTask task2, UniTask task3, UniTask task4, UniTask task5, UniTask task6) tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x46C78E0", Offset = "0x46C78E0", VA = "0x46C78E0")]
	public static UniTask.Awaiter GetAwaiter(this (UniTask task1, UniTask task2, UniTask task3, UniTask task4, UniTask task5, UniTask task6, UniTask task7) tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x46C7B30", Offset = "0x46C7B30", VA = "0x46C7B30")]
	public static UniTask.Awaiter GetAwaiter(this (UniTask task1, UniTask task2, UniTask task3, UniTask task4, UniTask task5, UniTask task6, UniTask task7, UniTask task8) tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x46C7DC0", Offset = "0x46C7DC0", VA = "0x46C7DC0")]
	public static UniTask.Awaiter GetAwaiter(this (UniTask task1, UniTask task2, UniTask task3, UniTask task4, UniTask task5, UniTask task6, UniTask task7, UniTask task8, UniTask task9) tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x46C80A0", Offset = "0x46C80A0", VA = "0x46C80A0")]
	public static UniTask.Awaiter GetAwaiter(this (UniTask task1, UniTask task2, UniTask task3, UniTask task4, UniTask task5, UniTask task6, UniTask task7, UniTask task8, UniTask task9, UniTask task10) tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x46C83C0", Offset = "0x46C83C0", VA = "0x46C83C0")]
	public static UniTask.Awaiter GetAwaiter(this (UniTask task1, UniTask task2, UniTask task3, UniTask task4, UniTask task5, UniTask task6, UniTask task7, UniTask task8, UniTask task9, UniTask task10, UniTask task11) tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x46C8730", Offset = "0x46C8730", VA = "0x46C8730")]
	public static UniTask.Awaiter GetAwaiter(this (UniTask task1, UniTask task2, UniTask task3, UniTask task4, UniTask task5, UniTask task6, UniTask task7, UniTask task8, UniTask task9, UniTask task10, UniTask task11, UniTask task12) tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x46C8AF0", Offset = "0x46C8AF0", VA = "0x46C8AF0")]
	public static UniTask.Awaiter GetAwaiter(this (UniTask task1, UniTask task2, UniTask task3, UniTask task4, UniTask task5, UniTask task6, UniTask task7, UniTask task8, UniTask task9, UniTask task10, UniTask task11, UniTask task12, UniTask task13) tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x46C8EF0", Offset = "0x46C8EF0", VA = "0x46C8EF0")]
	public static UniTask.Awaiter GetAwaiter(this (UniTask task1, UniTask task2, UniTask task3, UniTask task4, UniTask task5, UniTask task6, UniTask task7, UniTask task8, UniTask task9, UniTask task10, UniTask task11, UniTask task12, UniTask task13, UniTask task14) tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x46C9340", Offset = "0x46C9340", VA = "0x46C9340")]
	public static UniTask.Awaiter GetAwaiter(this (UniTask task1, UniTask task2, UniTask task3, UniTask task4, UniTask task5, UniTask task6, UniTask task7, UniTask task8, UniTask task9, UniTask task10, UniTask task11, UniTask task12, UniTask task13, UniTask task14, UniTask task15) tasks)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x6000740")]
	public static UniTask<T> AsUniTask<T>(this Task<T> task, bool useCurrentSynchronizationContext = true)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x46C97E0", Offset = "0x46C97E0", VA = "0x46C97E0")]
	public static UniTask AsUniTask(this Task task, bool useCurrentSynchronizationContext = true)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000742")]
	public static Task<T> AsTask<T>(this UniTask<T> task)
	{
		return null;
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x46C99B0", Offset = "0x46C99B0", VA = "0x46C99B0")]
	public static Task AsTask(this UniTask task)
	{
		return null;
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x46CA060", Offset = "0x46CA060", VA = "0x46CA060")]
	public static AsyncLazy ToAsyncLazy(this UniTask task)
	{
		return null;
	}

	[Token(Token = "0x6000745")]
	public static AsyncLazy<T> ToAsyncLazy<T>(this UniTask<T> task)
	{
		return null;
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x46CA0B0", Offset = "0x46CA0B0", VA = "0x46CA0B0")]
	public static UniTask AttachExternalCancellation(this UniTask task, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000747")]
	public static UniTask<T> AttachExternalCancellation<T>(this UniTask<T> task, CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x6000748")]
	public static IEnumerator ToCoroutine<T>(this UniTask<T> task, [Optional] Action<T> resultHandler, [Optional] Action<Exception> exceptionHandler)
	{
		return null;
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x46B5FE0", Offset = "0x46B5FE0", VA = "0x46B5FE0")]
	public static IEnumerator ToCoroutine(this UniTask task, [Optional] Action<Exception> exceptionHandler)
	{
		return null;
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x46CA910", Offset = "0x46CA910", VA = "0x46CA910")]
	[AsyncStateMachine(typeof(_003CTimeout_003Ed__44))]
	public static UniTask Timeout(this UniTask task, TimeSpan timeout, [Optional][DefaultParameterValue(0)] DelayType delayType, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timeoutCheckTiming, [Optional] CancellationTokenSource taskCancellationTokenSource)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600074B")]
	[AsyncStateMachine(typeof(_003CTimeout_003Ed__45<>))]
	public static UniTask<T> Timeout<T>(this UniTask<T> task, TimeSpan timeout, [Optional][DefaultParameterValue(0)] DelayType delayType, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timeoutCheckTiming, [Optional] CancellationTokenSource taskCancellationTokenSource)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x46CAA10", Offset = "0x46CAA10", VA = "0x46CAA10")]
	[AsyncStateMachine(typeof(_003CTimeoutWithoutException_003Ed__46))]
	public static UniTask<bool> TimeoutWithoutException(this UniTask task, TimeSpan timeout, [Optional][DefaultParameterValue(0)] DelayType delayType, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timeoutCheckTiming, [Optional] CancellationTokenSource taskCancellationTokenSource)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x600074D")]
	[AsyncStateMachine(typeof(_003CTimeoutWithoutException_003Ed__47<>))]
	public static UniTask<(bool, T)> TimeoutWithoutException<T>(this UniTask<T> task, TimeSpan timeout, [Optional][DefaultParameterValue(0)] DelayType delayType, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timeoutCheckTiming, [Optional] CancellationTokenSource taskCancellationTokenSource)
	{
		return default(UniTask<(bool, T)>);
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x46CA2D0", Offset = "0x46CA2D0", VA = "0x46CA2D0")]
	public static void Forget(this UniTask task)
	{
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x46CAB40", Offset = "0x46CAB40", VA = "0x46CAB40")]
	public static void Forget(this UniTask task, Action<Exception> exceptionHandler, bool handleExceptionOnMainThread = true)
	{
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x46CAC50", Offset = "0x46CAC50", VA = "0x46CAC50")]
	[AsyncStateMachine(typeof(_003CForgetCoreWithCatch_003Ed__50))]
	private static UniTaskVoid ForgetCoreWithCatch(UniTask task, Action<Exception> exceptionHandler, bool handleExceptionOnMainThread)
	{
		return default(UniTaskVoid);
	}

	[Token(Token = "0x6000751")]
	public static void Forget<T>(this UniTask<T> task)
	{
	}

	[Token(Token = "0x6000752")]
	public static void Forget<T>(this UniTask<T> task, Action<Exception> exceptionHandler, bool handleExceptionOnMainThread = true)
	{
	}

	[Token(Token = "0x6000753")]
	[AsyncStateMachine(typeof(_003CForgetCoreWithCatch_003Ed__53<>))]
	private static UniTaskVoid ForgetCoreWithCatch<T>(UniTask<T> task, Action<Exception> exceptionHandler, bool handleExceptionOnMainThread)
	{
		return default(UniTaskVoid);
	}

	[Token(Token = "0x6000754")]
	[AsyncStateMachine(typeof(_003CContinueWith_003Ed__54<>))]
	public static UniTask ContinueWith<T>(this UniTask<T> task, Action<T> continuationFunction)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000755")]
	[AsyncStateMachine(typeof(_003CContinueWith_003Ed__55<>))]
	public static UniTask ContinueWith<T>(this UniTask<T> task, Func<T, UniTask> continuationFunction)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000756")]
	[AsyncStateMachine(typeof(_003CContinueWith_003Ed__56<, >))]
	public static UniTask<TR> ContinueWith<T, TR>(this UniTask<T> task, Func<T, TR> continuationFunction)
	{
		return default(UniTask<TR>);
	}

	[Token(Token = "0x6000757")]
	[AsyncStateMachine(typeof(_003CContinueWith_003Ed__57<, >))]
	public static UniTask<TR> ContinueWith<T, TR>(this UniTask<T> task, Func<T, UniTask<TR>> continuationFunction)
	{
		return default(UniTask<TR>);
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x46CAD40", Offset = "0x46CAD40", VA = "0x46CAD40")]
	[AsyncStateMachine(typeof(_003CContinueWith_003Ed__58))]
	public static UniTask ContinueWith(this UniTask task, Action continuationFunction)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x46CAE10", Offset = "0x46CAE10", VA = "0x46CAE10")]
	[AsyncStateMachine(typeof(_003CContinueWith_003Ed__59))]
	public static UniTask ContinueWith(this UniTask task, Func<UniTask> continuationFunction)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600075A")]
	[AsyncStateMachine(typeof(_003CContinueWith_003Ed__60<>))]
	public static UniTask<T> ContinueWith<T>(this UniTask task, Func<T> continuationFunction)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x600075B")]
	[AsyncStateMachine(typeof(_003CContinueWith_003Ed__61<>))]
	public static UniTask<T> ContinueWith<T>(this UniTask task, Func<UniTask<T>> continuationFunction)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x600075C")]
	[AsyncStateMachine(typeof(_003CUnwrap_003Ed__62<>))]
	public static UniTask<T> Unwrap<T>(this UniTask<UniTask<T>> task)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x46CAEE0", Offset = "0x46CAEE0", VA = "0x46CAEE0")]
	[AsyncStateMachine(typeof(_003CUnwrap_003Ed__63))]
	public static UniTask Unwrap(this UniTask<UniTask> task)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600075E")]
	[AsyncStateMachine(typeof(_003CUnwrap_003Ed__64<>))]
	public static UniTask<T> Unwrap<T>(this Task<UniTask<T>> task)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x600075F")]
	[AsyncStateMachine(typeof(_003CUnwrap_003Ed__65<>))]
	public static UniTask<T> Unwrap<T>(this Task<UniTask<T>> task, bool continueOnCapturedContext)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x46CAFA0", Offset = "0x46CAFA0", VA = "0x46CAFA0")]
	[AsyncStateMachine(typeof(_003CUnwrap_003Ed__66))]
	public static UniTask Unwrap(this Task<UniTask> task)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x46CB050", Offset = "0x46CB050", VA = "0x46CB050")]
	[AsyncStateMachine(typeof(_003CUnwrap_003Ed__67))]
	public static UniTask Unwrap(this Task<UniTask> task, bool continueOnCapturedContext)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000762")]
	[AsyncStateMachine(typeof(_003CUnwrap_003Ed__68<>))]
	public static UniTask<T> Unwrap<T>(this UniTask<Task<T>> task)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x6000763")]
	[AsyncStateMachine(typeof(_003CUnwrap_003Ed__69<>))]
	public static UniTask<T> Unwrap<T>(this UniTask<Task<T>> task, bool continueOnCapturedContext)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x46CB110", Offset = "0x46CB110", VA = "0x46CB110")]
	[AsyncStateMachine(typeof(_003CUnwrap_003Ed__70))]
	public static UniTask Unwrap(this UniTask<Task> task)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x46CB1D0", Offset = "0x46CB1D0", VA = "0x46CB1D0")]
	[AsyncStateMachine(typeof(_003CUnwrap_003Ed__71))]
	public static UniTask Unwrap(this UniTask<Task> task, bool continueOnCapturedContext)
	{
		return default(UniTask);
	}
}
