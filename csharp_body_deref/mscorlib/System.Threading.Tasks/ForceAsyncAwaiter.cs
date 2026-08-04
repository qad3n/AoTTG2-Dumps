// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.ForceAsyncAwaiter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3D3FCF0", Offset = "0x3D3FCF0", VA = "0x3D3FCF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60013B5")]
	[Address(RVA = "0x3D3FCD0", Offset = "0x3D3FCD0", VA = "0x3D3FCD0")]
	internal ForceAsyncAwaiter(Task task)
	{
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x3D3FCE0", Offset = "0x3D3FCE0", VA = "0x3D3FCE0")]
	public System.Threading.Tasks.ForceAsyncAwaiter GetAwaiter()
	{
		return default(System.Threading.Tasks.ForceAsyncAwaiter);
	}

	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x3D3FD00", Offset = "0x3D3FD00", VA = "0x3D3FD00")]
	public void GetResult()
	{
	}

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x3D3FD50", Offset = "0x3D3FD50", VA = "0x3D3FD50", Slot = "5")]
	public void OnCompleted(Action action)
	{
	}

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x3D3FDB0", Offset = "0x3D3FDB0", VA = "0x3D3FDB0", Slot = "4")]
	public void UnsafeOnCompleted(Action action)
	{
	}
}
