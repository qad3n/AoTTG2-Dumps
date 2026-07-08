using System;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000105")]
public struct SwitchToThreadPoolAwaitable
{
	[Token(Token = "0x2000106")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000406")]
		[FieldOffset(Offset = "0x0")]
		private static readonly WaitCallback switchToCallback;

		[Token(Token = "0x17000044")]
		public bool IsCompleted
		{
			[Token(Token = "0x600067A")]
			[Address(RVA = "0x46C2690", Offset = "0x46C2690", VA = "0x46C2690")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600067B")]
		[Address(RVA = "0x46C26A0", Offset = "0x46C26A0", VA = "0x46C26A0")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600067C")]
		[Address(RVA = "0x46C4E50", Offset = "0x46C4E50", VA = "0x46C4E50", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600067D")]
		[Address(RVA = "0x46C4EB0", Offset = "0x46C4EB0", VA = "0x46C4EB0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600067E")]
		[Address(RVA = "0x46C4F10", Offset = "0x46C4F10", VA = "0x46C4F10")]
		private static void Callback(object state)
		{
		}
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x46C2680", Offset = "0x46C2680", VA = "0x46C2680")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
