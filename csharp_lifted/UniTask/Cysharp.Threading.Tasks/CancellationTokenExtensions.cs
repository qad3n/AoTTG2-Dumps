// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.CancellationTokenExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000015")]
public static class CancellationTokenExtensions
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000016")]
	[CompilerGenerated]
	private struct _003CToCancellationTokenCore_003Ed__6 : IAsyncStateMachine
	{
		[Token(Token = "0x400004A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400004B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400004C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public UniTask task;

		[Token(Token = "0x400004D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationTokenSource cts;

		[Token(Token = "0x400004E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6000094")]
		[Address(RVA = "0x62C2BE0", Offset = "0x62C1BE0", VA = "0x62C2BE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000095")]
		[Address(RVA = "0x62C2FF0", Offset = "0x62C1FF0", VA = "0x62C2FF0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000048")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Action<object> cancellationTokenCallback;

	[Token(Token = "0x4000049")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Action<object> disposeCallback;

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x62C1EA0", Offset = "0x62C0EA0", VA = "0x62C1EA0")]
	public static CancellationToken ToCancellationToken(this UniTask task)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x62C20B0", Offset = "0x62C10B0", VA = "0x62C20B0")]
	public static CancellationToken ToCancellationToken(this UniTask task, CancellationToken linkToken)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x6000089")]
	public static CancellationToken ToCancellationToken<T>(this UniTask<T> task)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x600008A")]
	public static CancellationToken ToCancellationToken<T>(this UniTask<T> task, CancellationToken linkToken)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x62C1FF0", Offset = "0x62C0FF0", VA = "0x62C1FF0")]
	[AsyncStateMachine(typeof(_003CToCancellationTokenCore_003Ed__6))]
	private static UniTaskVoid ToCancellationTokenCore(UniTask task, CancellationTokenSource cts)
	{
		return default(UniTaskVoid);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x62C22E0", Offset = "0x62C12E0", VA = "0x62C22E0")]
	public static (UniTask, CancellationTokenRegistration) ToUniTask(this CancellationToken cancellationToken)
	{
		return default((UniTask, CancellationTokenRegistration));
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x62C2760", Offset = "0x62C1760", VA = "0x62C2760")]
	private static void Callback(object state)
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x62C27D0", Offset = "0x62C17D0", VA = "0x62C27D0")]
	public static CancellationTokenAwaitable WaitUntilCanceled(this CancellationToken cancellationToken)
	{
		return default(CancellationTokenAwaitable);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x62C27F0", Offset = "0x62C17F0", VA = "0x62C27F0")]
	public static CancellationTokenRegistration RegisterWithoutCaptureExecutionContext(this CancellationToken cancellationToken, Action callback)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x62C25B0", Offset = "0x62C15B0", VA = "0x62C25B0")]
	public static CancellationTokenRegistration RegisterWithoutCaptureExecutionContext(this CancellationToken cancellationToken, Action<object> callback, object state)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x62C2990", Offset = "0x62C1990", VA = "0x62C2990")]
	public static CancellationTokenRegistration AddTo(this IDisposable disposable, CancellationToken cancellationToken)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x62C2A20", Offset = "0x62C1A20", VA = "0x62C2A20")]
	private static void DisposeCallback(object state)
	{
	}
}
