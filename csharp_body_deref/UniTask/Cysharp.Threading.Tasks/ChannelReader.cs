using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200001F")]
public abstract class ChannelReader<T>
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000020")]
	[CompilerGenerated]
	private struct _003CReadAsyncCore_003Ed__5 : IAsyncStateMachine
	{
		[Token(Token = "0x4000059")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400005A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x400005B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ChannelReader<T> _003C_003E4__this;

		[Token(Token = "0x400005C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400005D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UniTask<bool>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60000B5")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60000B6")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x17000017")]
	public abstract UniTask Completion
	{
		[Token(Token = "0x60000B0")]
		get;
	}

	[Token(Token = "0x60000AE")]
	public abstract bool TryRead(out T item);

	[Token(Token = "0x60000AF")]
	public abstract UniTask<bool> WaitToReadAsync([Optional] CancellationToken cancellationToken);

	[Token(Token = "0x60000B1")]
	public virtual UniTask<T> ReadAsync([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60000B2")]
	[AsyncStateMachine(typeof(ChannelReader<>._003CReadAsyncCore_003Ed__5))]
	private UniTask<T> ReadAsyncCore([Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x60000B3")]
	public abstract IUniTaskAsyncEnumerable<T> ReadAllAsync([Optional] CancellationToken cancellationToken);

	[Token(Token = "0x60000B4")]
	protected ChannelReader()
	{
	}
}
