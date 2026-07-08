using System;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000109")]
public struct SwitchToSynchronizationContextAwaitable
{
	[Token(Token = "0x200010A")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400040A")]
		[FieldOffset(Offset = "0x0")]
		private static readonly SendOrPostCallback switchToCallback;

		[Token(Token = "0x400040B")]
		[FieldOffset(Offset = "0x0")]
		private readonly SynchronizationContext synchronizationContext;

		[Token(Token = "0x400040C")]
		[FieldOffset(Offset = "0x8")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x17000046")]
		public bool IsCompleted
		{
			[Token(Token = "0x600068A")]
			[Address(RVA = "0x46C5580", Offset = "0x46C5580", VA = "0x46C5580")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000689")]
		[Address(RVA = "0x46C5550", Offset = "0x46C5550", VA = "0x46C5550")]
		public Awaiter(SynchronizationContext synchronizationContext, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x600068B")]
		[Address(RVA = "0x46C5590", Offset = "0x46C5590", VA = "0x46C5590")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600068C")]
		[Address(RVA = "0x46C55F0", Offset = "0x46C55F0", VA = "0x46C55F0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600068D")]
		[Address(RVA = "0x46C5670", Offset = "0x46C5670", VA = "0x46C5670", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600068E")]
		[Address(RVA = "0x46C56F0", Offset = "0x46C56F0", VA = "0x46C56F0")]
		private static void Callback(object state)
		{
		}
	}

	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0x0")]
	private readonly SynchronizationContext synchronizationContext;

	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x8")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x46B9610", Offset = "0x46B9610", VA = "0x46B9610")]
	public SwitchToSynchronizationContextAwaitable(SynchronizationContext synchronizationContext, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x46C5500", Offset = "0x46C5500", VA = "0x46C5500")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
