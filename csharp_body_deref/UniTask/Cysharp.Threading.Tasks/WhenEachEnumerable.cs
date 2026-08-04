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

[Token(Token = "0x2000114")]
internal sealed class WhenEachEnumerable<T> : IUniTaskAsyncEnumerable<WhenEachResult<T>>
{
	[Token(Token = "0x2000115")]
	private sealed class Enumerator : IUniTaskAsyncEnumerator<WhenEachResult<T>>, IUniTaskAsyncDisposable
	{
		[StructLayout((LayoutKind)3)]
		[Token(Token = "0x2000116")]
		[CompilerGenerated]
		private struct _003CDisposeAsync_003Ed__12 : IAsyncStateMachine
		{
			[Token(Token = "0x400042B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int _003C_003E1__state;

			[Token(Token = "0x400042C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			[Token(Token = "0x400042D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public Enumerator _003C_003E4__this;

			[Token(Token = "0x400042E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private UniTask.Awaiter _003C_003Eu__1;

			[Token(Token = "0x60006C9")]
			private void MoveNext()
			{
			}

			[Token(Token = "0x60006CA")]
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}
		}

		[StructLayout((LayoutKind)3)]
		[Token(Token = "0x2000117")]
		[CompilerGenerated]
		private struct _003CRunWhenEachTask_003Ed__11 : IAsyncStateMachine
		{
			[Token(Token = "0x400042F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int _003C_003E1__state;

			[Token(Token = "0x4000430")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			[Token(Token = "0x4000431")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public UniTask<T> task;

			[Token(Token = "0x4000432")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public Enumerator self;

			[Token(Token = "0x4000433")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int length;

			[Token(Token = "0x4000434")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private UniTask<T>.Awaiter _003C_003Eu__1;

			[Token(Token = "0x60006CB")]
			private void MoveNext()
			{
			}

			[Token(Token = "0x60006CC")]
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}
		}

		[Token(Token = "0x4000425")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly IEnumerable<UniTask<T>> source;

		[Token(Token = "0x4000426")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000427")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Channel<WhenEachResult<T>> channel;

		[Token(Token = "0x4000428")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IUniTaskAsyncEnumerator<WhenEachResult<T>> channelEnumerator;

		[Token(Token = "0x4000429")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int completeCount;

		[Token(Token = "0x400042A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private WhenEachState state;

		[Token(Token = "0x1700004E")]
		public WhenEachResult<T> Current
		{
			[Token(Token = "0x60006C4")]
			get
			{
				return default(WhenEachResult<T>);
			}
		}

		[Token(Token = "0x60006C3")]
		public Enumerator(IEnumerable<UniTask<T>> source, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60006C5")]
		public UniTask<bool> MoveNextAsync()
		{
			return default(UniTask<bool>);
		}

		[Token(Token = "0x60006C6")]
		private static void ConsumeAll(Enumerator self, UniTask<T>[] array, int length)
		{
		}

		[Token(Token = "0x60006C7")]
		[AsyncStateMachine(typeof(WhenEachEnumerable<>.Enumerator._003CRunWhenEachTask_003Ed__11))]
		private static UniTaskVoid RunWhenEachTask(Enumerator self, UniTask<T> task, int length)
		{
			return default(UniTaskVoid);
		}

		[Token(Token = "0x60006C8")]
		[AsyncStateMachine(typeof(WhenEachEnumerable<>.Enumerator._003CDisposeAsync_003Ed__12))]
		public UniTask DisposeAsync()
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x4000424")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IEnumerable<UniTask<T>> source;

	[Token(Token = "0x60006C1")]
	public WhenEachEnumerable(IEnumerable<UniTask<T>> source)
	{
	}

	[Token(Token = "0x60006C2")]
	public IUniTaskAsyncEnumerator<WhenEachResult<T>> GetAsyncEnumerator([Optional] CancellationToken cancellationToken)
	{
		return null;
	}
}
