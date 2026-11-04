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
			[Address(RVA = "0x2909500", Offset = "0x2907B00", VA = "0x182909500")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000098")]
		[Address(RVA = "0x2909410", Offset = "0x2907A10", VA = "0x182909410")]
		public Awaiter(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x600009A")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600009B")]
		[Address(RVA = "0x2908BB0", Offset = "0x29071B0", VA = "0x182908BB0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600009C")]
		[Address(RVA = "0x2908BB0", Offset = "0x29071B0", VA = "0x182908BB0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x0")]
	private CancellationToken cancellationToken;

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x2909410", Offset = "0x2907A10", VA = "0x182909410")]
	public CancellationTokenAwaitable(CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x2909750", Offset = "0x2907D50", VA = "0x182909750")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
