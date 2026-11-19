// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.ReturnToMainThread
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

[Token(Token = "0x2000101")]
public struct ReturnToMainThread
{
	[Token(Token = "0x2000102")]
	public readonly struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x40003FF")]
		[FieldOffset(Offset = "0x0")]
		private readonly PlayerLoopTiming timing;

		[Token(Token = "0x4000400")]
		[FieldOffset(Offset = "0x8")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x17000043")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000673")]
			[Address(RVA = "0x62D8ED0", Offset = "0x62D7ED0", VA = "0x62D8ED0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000671")]
		[Address(RVA = "0x62D8EA0", Offset = "0x62D7EA0", VA = "0x62D8EA0")]
		public Awaiter(PlayerLoopTiming timing, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000672")]
		[Address(RVA = "0x62D8EC0", Offset = "0x62D7EC0", VA = "0x62D8EC0")]
		public Awaiter GetAwaiter()
		{
			return default(Awaiter);
		}

		[Token(Token = "0x6000674")]
		[Address(RVA = "0x62D8F90", Offset = "0x62D7F90", VA = "0x62D8F90")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000675")]
		[Address(RVA = "0x62D8FE0", Offset = "0x62D7FE0", VA = "0x62D8FE0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000676")]
		[Address(RVA = "0x62D9030", Offset = "0x62D8030", VA = "0x62D9030", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x0")]
	private readonly PlayerLoopTiming playerLoopTiming;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x8")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x62CDD90", Offset = "0x62CCD90", VA = "0x62CDD90")]
	public ReturnToMainThread(PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x62D8E60", Offset = "0x62D7E60", VA = "0x62D8E60")]
	public Awaiter DisposeAsync()
	{
		return default(Awaiter);
	}
}
