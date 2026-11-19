// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.CancellationTokenAwaitable
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

[Token(Token = "0x2000017")]
public struct CancellationTokenAwaitable
{
	[Token(Token = "0x2000018")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000050")]
		[FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x17000014")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000099")]
			[Address(RVA = "0x62C3040", Offset = "0x62C2040", VA = "0x62C3040")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000098")]
		[Address(RVA = "0x62C3030", Offset = "0x62C2030", VA = "0x62C3030")]
		public Awaiter(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x600009A")]
		[Address(RVA = "0x62C30C0", Offset = "0x62C20C0", VA = "0x62C30C0")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600009B")]
		[Address(RVA = "0x62C30D0", Offset = "0x62C20D0", VA = "0x62C30D0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600009C")]
		[Address(RVA = "0x62C3130", Offset = "0x62C2130", VA = "0x62C3130", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x0")]
	private CancellationToken cancellationToken;

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x62C3000", Offset = "0x62C2000", VA = "0x62C3000")]
	public CancellationTokenAwaitable(CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x62C3010", Offset = "0x62C2010", VA = "0x62C3010")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
