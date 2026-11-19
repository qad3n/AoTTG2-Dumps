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

[Token(Token = "0x200023A")]
internal readonly struct ForceAsyncAwaiter : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x4000A22")]
	[FieldOffset(Offset = "0x0")]
	private readonly Task _task;

	[Token(Token = "0x170001E2")]
	public bool IsCompleted
	{
		[Token(Token = "0x60013FF")]
		[Address(RVA = "0x5542470", Offset = "0x5541470", VA = "0x5542470")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x5542450", Offset = "0x5541450", VA = "0x5542450")]
	internal ForceAsyncAwaiter(Task task)
	{
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x5542460", Offset = "0x5541460", VA = "0x5542460")]
	public System.Threading.Tasks.ForceAsyncAwaiter GetAwaiter()
	{
		return default(System.Threading.Tasks.ForceAsyncAwaiter);
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x5542480", Offset = "0x5541480", VA = "0x5542480")]
	public void GetResult()
	{
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x55424B0", Offset = "0x55414B0", VA = "0x55424B0", Slot = "5")]
	public void OnCompleted(Action action)
	{
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x5542510", Offset = "0x5541510", VA = "0x5542510", Slot = "4")]
	public void UnsafeOnCompleted(Action action)
	{
	}
}
