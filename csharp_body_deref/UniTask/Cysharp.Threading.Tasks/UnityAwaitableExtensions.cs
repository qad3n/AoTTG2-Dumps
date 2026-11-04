// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.UnityAwaitableExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000180")]
public static class UnityAwaitableExtensions
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000181")]
	[CompilerGenerated]
	private struct _003CAsUniTask_003Ed__0 : IAsyncStateMachine
	{
		[Token(Token = "0x40005F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40005F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40005F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Awaitable awaitable;

		[Token(Token = "0x40005F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private Awaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x600093E")]
		[Address(RVA = "0x29450F0", Offset = "0x29436F0", VA = "0x1829450F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600093F")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000182")]
	[CompilerGenerated]
	private struct _003CAsUniTask_003Ed__1<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40005F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40005F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40005F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Awaitable<T> awaitable;

		[Token(Token = "0x40005FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Awaitable<T>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6000940")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000941")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x294D780", Offset = "0x294BD80", VA = "0x18294D780")]
	[AsyncStateMachine(typeof(_003CAsUniTask_003Ed__0))]
	public static UniTask AsUniTask(this Awaitable awaitable)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600093D")]
	[AsyncStateMachine(typeof(_003CAsUniTask_003Ed__1<>))]
	public static UniTask<T> AsUniTask<T>(this Awaitable<T> awaitable)
	{
		return default(UniTask<T>);
	}
}
