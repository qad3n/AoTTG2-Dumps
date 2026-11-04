// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.UniTaskValueTaskExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000073")]
public static class UniTaskValueTaskExtensions
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000074")]
	[CompilerGenerated]
	private struct _003CAsUniTask_003Ed__2<T> : IAsyncStateMachine
	{
		[Token(Token = "0x40000F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40000F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ValueTask<T> task;

		[Token(Token = "0x40000FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ValueTaskAwaiter<T> _003C_003Eu__1;

		[Token(Token = "0x600019E")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600019F")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000075")]
	[CompilerGenerated]
	private struct _003CAsUniTask_003Ed__3 : IAsyncStateMachine
	{
		[Token(Token = "0x40000FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40000FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public ValueTask task;

		[Token(Token = "0x40000FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private ValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x29132C0", Offset = "0x29118C0", VA = "0x1829132C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x8E6930", Offset = "0x8E4F30", VA = "0x1808E6930", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x291EAA0", Offset = "0x291D0A0", VA = "0x18291EAA0")]
	public static ValueTask AsValueTask(this in UniTask task)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x600019B")]
	public static ValueTask<T> AsValueTask<T>(this in UniTask<T> task)
	{
		return default(ValueTask<T>);
	}

	[Token(Token = "0x600019C")]
	[AsyncStateMachine(typeof(_003CAsUniTask_003Ed__2<>))]
	public static UniTask<T> AsUniTask<T>(this ValueTask<T> task)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x291E9D0", Offset = "0x291CFD0", VA = "0x18291E9D0")]
	[AsyncStateMachine(typeof(_003CAsUniTask_003Ed__3))]
	public static UniTask AsUniTask(this ValueTask task)
	{
		return default(UniTask);
	}
}
