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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000687")]
		[Address(RVA = "0xE927B0", Offset = "0xE90DB0", VA = "0x180E927B0")]
		public Awaiter(SynchronizationContext synchronizationContext, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000689")]
		[Address(RVA = "0x2908670", Offset = "0x2906C70", VA = "0x182908670")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600068A")]
		[Address(RVA = "0x2908B20", Offset = "0x2907120", VA = "0x182908B20", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600068B")]
		[Address(RVA = "0x2909120", Offset = "0x2907720", VA = "0x182909120", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600068C")]
		[Address(RVA = "0x29083E0", Offset = "0x29069E0", VA = "0x1829083E0")]
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
	[Address(RVA = "0xE927B0", Offset = "0xE90DB0", VA = "0x180E927B0")]
	public SwitchToSynchronizationContextAwaitable(SynchronizationContext synchronizationContext, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x2911DC0", Offset = "0x29103C0", VA = "0x182911DC0")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
