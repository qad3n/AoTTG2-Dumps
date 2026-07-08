using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200017D")]
public static class UnityAwaitableExtensions
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200017E")]
	[CompilerGenerated]
	private struct _003CAsUniTask_003Ed__0 : IAsyncStateMachine
	{
		[Token(Token = "0x40005E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40005E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40005E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Awaitable awaitable;

		[Token(Token = "0x40005E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private Awaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x600091A")]
		[Address(RVA = "0x46DE590", Offset = "0x46DE590", VA = "0x46DE590", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600091B")]
		[Address(RVA = "0x46DE880", Offset = "0x46DE880", VA = "0x46DE880", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200017F")]
	[CompilerGenerated]
	private struct _003CAsUniTask_003Ed__1<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40005E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40005E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40005E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Awaitable<T> awaitable;

		[Token(Token = "0x40005E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Awaitable<T>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x600091C")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600091D")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x46DE4F0", Offset = "0x46DE4F0", VA = "0x46DE4F0")]
	[AsyncStateMachine(typeof(_003CAsUniTask_003Ed__0))]
	public static UniTask AsUniTask(this Awaitable awaitable)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000919")]
	[AsyncStateMachine(typeof(_003CAsUniTask_003Ed__1<>))]
	public static UniTask<T> AsUniTask<T>(this Awaitable<T> awaitable)
	{
		return default(UniTask<T>);
	}
}
