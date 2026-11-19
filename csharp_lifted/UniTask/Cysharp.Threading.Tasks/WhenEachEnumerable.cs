// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.WhenEachEnumerable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200010D")]
internal sealed class WhenEachEnumerable<T> : IUniTaskAsyncEnumerable<WhenEachResult<T>>
{
	[Token(Token = "0x200010E")]
	private sealed class Enumerator : IUniTaskAsyncEnumerator<WhenEachResult<T>>, IUniTaskAsyncDisposable
	{
		[StructLayout((LayoutKind)3)]
		[Token(Token = "0x200010F")]
		[CompilerGenerated]
		private struct _003CDisposeAsync_003Ed__12 : IAsyncStateMachine
		{
			[Token(Token = "0x400041C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int _003C_003E1__state;

			[Token(Token = "0x400041D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			[Token(Token = "0x400041E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public Enumerator _003C_003E4__this;

			[Token(Token = "0x400041F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private UniTask.Awaiter _003C_003Eu__1;

			[Token(Token = "0x60006A9")]
			private void MoveNext()
			{
			}

			[Token(Token = "0x60006AA")]
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}
		}

		[StructLayout((LayoutKind)3)]
		[Token(Token = "0x2000110")]
		[CompilerGenerated]
		private struct _003CRunWhenEachTask_003Ed__11 : IAsyncStateMachine
		{
			[Token(Token = "0x4000420")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int _003C_003E1__state;

			[Token(Token = "0x4000421")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			[Token(Token = "0x4000422")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public UniTask<T> task;

			[Token(Token = "0x4000423")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public Enumerator self;

			[Token(Token = "0x4000424")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int length;

			[Token(Token = "0x4000425")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private UniTask<T>.Awaiter _003C_003Eu__1;

			[Token(Token = "0x60006AB")]
			private void MoveNext()
			{
			}

			[Token(Token = "0x60006AC")]
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}
		}

		[Token(Token = "0x4000416")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly IEnumerable<UniTask<T>> source;

		[Token(Token = "0x4000417")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000418")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Channel<WhenEachResult<T>> channel;

		[Token(Token = "0x4000419")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IUniTaskAsyncEnumerator<WhenEachResult<T>> channelEnumerator;

		[Token(Token = "0x400041A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completeCount;

		[Token(Token = "0x400041B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WhenEachState state;

		[Token(Token = "0x1700004C")]
		public WhenEachResult<T> Current
		{
			[Token(Token = "0x60006A4")]
			get
			{
				return default(WhenEachResult<T>);
			}
		}

		[Token(Token = "0x60006A3")]
		public Enumerator(IEnumerable<UniTask<T>> source, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60006A5")]
		public UniTask<bool> MoveNextAsync()
		{
			return default(UniTask<bool>);
		}

		[Token(Token = "0x60006A6")]
		private static void ConsumeAll(Enumerator self, UniTask<T>[] array, int length)
		{
		}

		[Token(Token = "0x60006A7")]
		[AsyncStateMachine(typeof(WhenEachEnumerable<>.Enumerator._003CRunWhenEachTask_003Ed__11))]
		private static UniTaskVoid RunWhenEachTask(Enumerator self, UniTask<T> task, int length)
		{
			return default(UniTaskVoid);
		}

		[Token(Token = "0x60006A8")]
		[AsyncStateMachine(typeof(WhenEachEnumerable<>.Enumerator._003CDisposeAsync_003Ed__12))]
		public UniTask DisposeAsync()
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x4000415")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IEnumerable<UniTask<T>> source;

	[Token(Token = "0x60006A1")]
	public WhenEachEnumerable(IEnumerable<UniTask<T>> source)
	{
	}

	[Token(Token = "0x60006A2")]
	public IUniTaskAsyncEnumerator<WhenEachResult<T>> GetAsyncEnumerator([Optional] CancellationToken cancellationToken)
	{
		return null;
	}
}
