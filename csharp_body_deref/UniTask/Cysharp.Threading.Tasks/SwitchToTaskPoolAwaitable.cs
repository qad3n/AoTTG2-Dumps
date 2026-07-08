using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000107")]
public struct SwitchToTaskPoolAwaitable
{
	[Token(Token = "0x2000108")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000407")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Action<object> switchToCallback;

		[Token(Token = "0x17000045")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000681")]
			[Address(RVA = "0x46C5000", Offset = "0x46C5000", VA = "0x46C5000")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000682")]
		[Address(RVA = "0x46C5010", Offset = "0x46C5010", VA = "0x46C5010")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000683")]
		[Address(RVA = "0x46C5020", Offset = "0x46C5020", VA = "0x46C5020", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000684")]
		[Address(RVA = "0x46C5220", Offset = "0x46C5220", VA = "0x46C5220", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000685")]
		[Address(RVA = "0x46C5420", Offset = "0x46C5420", VA = "0x46C5420")]
		private static void Callback(object state)
		{
		}
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x46C4FF0", Offset = "0x46C4FF0", VA = "0x46C4FF0")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
