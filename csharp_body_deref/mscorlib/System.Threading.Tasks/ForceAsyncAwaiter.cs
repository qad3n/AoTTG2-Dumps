using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000231")]
internal readonly struct ForceAsyncAwaiter : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x4000A67")]
	[FieldOffset(Offset = "0x0")]
	private readonly Task _task;

	[Token(Token = "0x170001DF")]
	public bool IsCompleted
	{
		[Token(Token = "0x60013B7")]
		[Address(RVA = "0x505A1D0", Offset = "0x505A1D0", VA = "0x505A1D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60013B5")]
	[Address(RVA = "0x505A1B0", Offset = "0x505A1B0", VA = "0x505A1B0")]
	internal ForceAsyncAwaiter(Task task)
	{
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x505A1C0", Offset = "0x505A1C0", VA = "0x505A1C0")]
	public System.Threading.Tasks.ForceAsyncAwaiter GetAwaiter()
	{
		return default(System.Threading.Tasks.ForceAsyncAwaiter);
	}

	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x505A1E0", Offset = "0x505A1E0", VA = "0x505A1E0")]
	public void GetResult()
	{
	}

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x505A230", Offset = "0x505A230", VA = "0x505A230", Slot = "5")]
	public void OnCompleted(Action action)
	{
	}

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x505A290", Offset = "0x505A290", VA = "0x505A290", Slot = "4")]
	public void UnsafeOnCompleted(Action action)
	{
	}
}
