// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.ChannelReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200001D")]
public abstract class ChannelReader<T>
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200001E")]
	[CompilerGenerated]
	private struct _003CReadAsyncCore_003Ed__5 : IAsyncStateMachine
	{
		[Token(Token = "0x4000054")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000055")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x4000056")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ChannelReader<T> _003C_003E4__this;

		[Token(Token = "0x4000057")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000058")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<bool>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60000B3")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60000B4")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x17000017")]
	public abstract UniTask Completion
	{
		[Token(Token = "0x60000AE")]
		get;
	}

	[Token(Token = "0x60000AC")]
	public abstract bool TryRead(out T item);

	[Token(Token = "0x60000AD")]
	public abstract UniTask<bool> WaitToReadAsync([Optional] CancellationToken cancellationToken);

	[Token(Token = "0x60000AF")]
	public virtual UniTask<T> ReadAsync([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60000B0")]
	[AsyncStateMachine(typeof(ChannelReader<>._003CReadAsyncCore_003Ed__5))]
	private UniTask<T> ReadAsyncCore([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60000B1")]
	public abstract IUniTaskAsyncEnumerable<T> ReadAllAsync([Optional] CancellationToken cancellationToken);

	[Token(Token = "0x60000B2")]
	protected ChannelReader()
	{
	}
}
