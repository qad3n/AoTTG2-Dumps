// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.SwitchToSynchronizationContextAwaitable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000107")]
public struct SwitchToSynchronizationContextAwaitable
{
	[Token(Token = "0x2000108")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000405")]
		[FieldOffset(Offset = "0x0")]
		private static readonly SendOrPostCallback switchToCallback;

		[Token(Token = "0x4000406")]
		[FieldOffset(Offset = "0x0")]
		private readonly SynchronizationContext synchronizationContext;

		[Token(Token = "0x4000407")]
		[FieldOffset(Offset = "0x8")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x17000046")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000688")]
			[Address(RVA = "0x62D97B0", Offset = "0x62D87B0", VA = "0x62D97B0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000687")]
		[Address(RVA = "0x62D9780", Offset = "0x62D8780", VA = "0x62D9780")]
		public Awaiter(SynchronizationContext synchronizationContext, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000689")]
		[Address(RVA = "0x62D97C0", Offset = "0x62D87C0", VA = "0x62D97C0")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600068A")]
		[Address(RVA = "0x62D9810", Offset = "0x62D8810", VA = "0x62D9810", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600068B")]
		[Address(RVA = "0x62D9890", Offset = "0x62D8890", VA = "0x62D9890", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600068C")]
		[Address(RVA = "0x62D9910", Offset = "0x62D8910", VA = "0x62D9910")]
		private static void Callback(object state)
		{
		}
	}

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x0")]
	private readonly SynchronizationContext synchronizationContext;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x8")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x62CDEE0", Offset = "0x62CCEE0", VA = "0x62CDEE0")]
	public SwitchToSynchronizationContextAwaitable(SynchronizationContext synchronizationContext, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x62D9730", Offset = "0x62D8730", VA = "0x62D9730")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
