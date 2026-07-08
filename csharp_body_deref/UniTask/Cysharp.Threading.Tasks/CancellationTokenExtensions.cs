using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000017")]
public static class CancellationTokenExtensions
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000018")]
	[CompilerGenerated]
	private struct _003CToCancellationTokenCore_003Ed__6 : IAsyncStateMachine
	{
		[Token(Token = "0x400004F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000050")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000051")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public UniTask task;

		[Token(Token = "0x4000052")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationTokenSource cts;

		[Token(Token = "0x4000053")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6000096")]
		[Address(RVA = "0x46ADE30", Offset = "0x46ADE30", VA = "0x46ADE30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000097")]
		[Address(RVA = "0x46AE2C0", Offset = "0x46AE2C0", VA = "0x46AE2C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x400004D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Action<object> cancellationTokenCallback;

	[Token(Token = "0x400004E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Action<object> disposeCallback;

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x46AD0A0", Offset = "0x46AD0A0", VA = "0x46AD0A0")]
	public static CancellationToken ToCancellationToken(this UniTask task)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x46AD2E0", Offset = "0x46AD2E0", VA = "0x46AD2E0")]
	public static CancellationToken ToCancellationToken(this UniTask task, CancellationToken linkToken)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x600008B")]
	public static CancellationToken ToCancellationToken<T>(this UniTask<T> task)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x600008C")]
	public static CancellationToken ToCancellationToken<T>(this UniTask<T> task, CancellationToken linkToken)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x46AD210", Offset = "0x46AD210", VA = "0x46AD210")]
	[AsyncStateMachine(typeof(_003CToCancellationTokenCore_003Ed__6))]
	private static UniTaskVoid ToCancellationTokenCore(UniTask task, CancellationTokenSource cts)
	{
		return default(UniTaskVoid);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x46AD520", Offset = "0x46AD520", VA = "0x46AD520")]
	public static (UniTask, CancellationTokenRegistration) ToUniTask(this CancellationToken cancellationToken)
	{
		return default((UniTask, CancellationTokenRegistration));
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x46AD9A0", Offset = "0x46AD9A0", VA = "0x46AD9A0")]
	private static void Callback(object state)
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x46ADA10", Offset = "0x46ADA10", VA = "0x46ADA10")]
	public static CancellationTokenAwaitable WaitUntilCanceled(this CancellationToken cancellationToken)
	{
		return default(CancellationTokenAwaitable);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x46ADA30", Offset = "0x46ADA30", VA = "0x46ADA30")]
	public static CancellationTokenRegistration RegisterWithoutCaptureExecutionContext(this CancellationToken cancellationToken, Action callback)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x46AD7F0", Offset = "0x46AD7F0", VA = "0x46AD7F0")]
	public static CancellationTokenRegistration RegisterWithoutCaptureExecutionContext(this CancellationToken cancellationToken, Action<object> callback, object state)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x46ADBE0", Offset = "0x46ADBE0", VA = "0x46ADBE0")]
	public static CancellationTokenRegistration AddTo(this IDisposable disposable, CancellationToken cancellationToken)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x46ADC70", Offset = "0x46ADC70", VA = "0x46ADC70")]
	private static void DisposeCallback(object state)
	{
	}
}
