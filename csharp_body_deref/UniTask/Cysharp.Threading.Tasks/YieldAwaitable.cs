using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x20000FE")]
public readonly struct YieldAwaitable
{
	[Token(Token = "0x20000FF")]
	public readonly struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x40003F7")]
		[FieldOffset(Offset = "0x0")]
		private readonly PlayerLoopTiming timing;

		[Token(Token = "0x17000041")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000665")]
			[Address(RVA = "0x46C26C0", Offset = "0x46C26C0", VA = "0x46C26C0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000664")]
		[Address(RVA = "0x46C4770", Offset = "0x46C4770", VA = "0x46C4770")]
		public Awaiter(PlayerLoopTiming timing)
		{
		}

		[Token(Token = "0x6000666")]
		[Address(RVA = "0x46C26D0", Offset = "0x46C26D0", VA = "0x46C26D0")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000667")]
		[Address(RVA = "0x46C4780", Offset = "0x46C4780", VA = "0x46C4780", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000668")]
		[Address(RVA = "0x46C47D0", Offset = "0x46C47D0", VA = "0x46C47D0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0x0")]
	private readonly PlayerLoopTiming timing;

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x46C4660", Offset = "0x46C4660", VA = "0x46C4660")]
	public YieldAwaitable(PlayerLoopTiming timing)
	{
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x46C26B0", Offset = "0x46C26B0", VA = "0x46C26B0")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x46C4670", Offset = "0x46C4670", VA = "0x46C4670")]
	public UniTask ToUniTask()
	{
		return default(UniTask);
	}
}
