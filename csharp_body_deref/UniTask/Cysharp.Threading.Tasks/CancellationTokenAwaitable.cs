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

[Token(Token = "0x2000019")]
public struct CancellationTokenAwaitable
{
	[Token(Token = "0x200001A")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000055")]
		[FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x17000014")]
		public bool IsCompleted
		{
			[Token(Token = "0x600009B")]
			[Address(RVA = "0x49D3410", Offset = "0x49D3410", VA = "0x49D3410")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600009A")]
		[Address(RVA = "0x49D3400", Offset = "0x49D3400", VA = "0x49D3400")]
		public Awaiter(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x600009C")]
		[Address(RVA = "0x49D3490", Offset = "0x49D3490", VA = "0x49D3490")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600009D")]
		[Address(RVA = "0x49D34A0", Offset = "0x49D34A0", VA = "0x49D34A0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600009E")]
		[Address(RVA = "0x49D3500", Offset = "0x49D3500", VA = "0x49D3500", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x0")]
	private CancellationToken cancellationToken;

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x49D33D0", Offset = "0x49D33D0", VA = "0x49D33D0")]
	public CancellationTokenAwaitable(CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x49D33E0", Offset = "0x49D33E0", VA = "0x49D33E0")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
