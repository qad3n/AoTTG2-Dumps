using System;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200010B")]
public struct ReturnToSynchronizationContext
{
	[Token(Token = "0x200010C")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000410")]
		[FieldOffset(Offset = "0x0")]
		private static readonly SendOrPostCallback switchToCallback;

		[Token(Token = "0x4000411")]
		[FieldOffset(Offset = "0x0")]
		private readonly SynchronizationContext synchronizationContext;

		[Token(Token = "0x4000412")]
		[FieldOffset(Offset = "0x8")]
		private readonly bool dontPostWhenSameContext;

		[Token(Token = "0x4000413")]
		[FieldOffset(Offset = "0x10")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x17000047")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000694")]
			[Address(RVA = "0x46C5870", Offset = "0x46C5870", VA = "0x46C5870")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000692")]
		[Address(RVA = "0x46C5820", Offset = "0x46C5820", VA = "0x46C5820")]
		public Awaiter(SynchronizationContext synchronizationContext, bool dontPostWhenSameContext, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000693")]
		[Address(RVA = "0x46C5850", Offset = "0x46C5850", VA = "0x46C5850")]
		public Awaiter GetAwaiter()
		{
			return default(Awaiter);
		}

		[Token(Token = "0x6000695")]
		[Address(RVA = "0x46C5890", Offset = "0x46C5890", VA = "0x46C5890")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000696")]
		[Address(RVA = "0x46C58F0", Offset = "0x46C58F0", VA = "0x46C58F0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000697")]
		[Address(RVA = "0x46C5970", Offset = "0x46C5970", VA = "0x46C5970", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000698")]
		[Address(RVA = "0x46C59F0", Offset = "0x46C59F0", VA = "0x46C59F0")]
		private static void Callback(object state)
		{
		}
	}

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x0")]
	private readonly SynchronizationContext syncContext;

	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x8")]
	private readonly bool dontPostWhenSameContext;

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x10")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x46B9680", Offset = "0x46B9680", VA = "0x46B9680")]
	public ReturnToSynchronizationContext(SynchronizationContext syncContext, bool dontPostWhenSameContext, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x46C57D0", Offset = "0x46C57D0", VA = "0x46C57D0")]
	public Awaiter DisposeAsync()
	{
		return default(Awaiter);
	}
}
