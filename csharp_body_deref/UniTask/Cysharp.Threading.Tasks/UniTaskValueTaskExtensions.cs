using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000075")]
public static class UniTaskValueTaskExtensions
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000076")]
	[CompilerGenerated]
	private struct _003CAsUniTask_003Ed__2<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40000FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40000FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ValueTask<T> task;

		[Token(Token = "0x40000FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ValueTaskAwaiter<T> _003C_003Eu__1;

		[Token(Token = "0x60001A0")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60001A1")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000077")]
	[CompilerGenerated]
	private struct _003CAsUniTask_003Ed__3 : IAsyncStateMachine
	{
		[Token(Token = "0x4000100")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000101")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000102")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public ValueTask task;

		[Token(Token = "0x4000103")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private ValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x46B59A0", Offset = "0x46B59A0", VA = "0x46B59A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x46B5F40", Offset = "0x46B5F40", VA = "0x46B5F40", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x46B57F0", Offset = "0x46B57F0", VA = "0x46B57F0")]
	public static ValueTask AsValueTask(this in UniTask task)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x600019D")]
	public static ValueTask<T> AsValueTask<T>(this in UniTask<T> task)
	{
		return default(ValueTask<T>);
	}

	[Token(Token = "0x600019E")]
	[AsyncStateMachine(typeof(_003CAsUniTask_003Ed__2<>))]
	public static UniTask<T> AsUniTask<T>(this ValueTask<T> task)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x46B58F0", Offset = "0x46B58F0", VA = "0x46B58F0")]
	[AsyncStateMachine(typeof(_003CAsUniTask_003Ed__3))]
	public static UniTask AsUniTask(this ValueTask task)
	{
		return default(UniTask);
	}
}
