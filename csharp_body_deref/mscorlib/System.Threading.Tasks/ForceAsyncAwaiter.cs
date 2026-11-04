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

[Token(Token = "0x2000262")]
internal readonly struct ForceAsyncAwaiter : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x4000AC4")]
	[FieldOffset(Offset = "0x0")]
	private readonly Task _task;

	[Token(Token = "0x170001E3")]
	public bool IsCompleted
	{
		[Token(Token = "0x6001428")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001426")]
	[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
	internal ForceAsyncAwaiter(Task task)
	{
	}

	[Token(Token = "0x6001427")]
	[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
	public System.Threading.Tasks.ForceAsyncAwaiter GetAwaiter()
	{
		return default(System.Threading.Tasks.ForceAsyncAwaiter);
	}

	[Token(Token = "0x6001429")]
	[Address(RVA = "0x1BAF580", Offset = "0x1BADB80", VA = "0x181BAF580")]
	public void GetResult()
	{
	}

	[Token(Token = "0x600142A")]
	[Address(RVA = "0x1BAF5D0", Offset = "0x1BADBD0", VA = "0x181BAF5D0", Slot = "5")]
	public void OnCompleted(Action action)
	{
	}

	[Token(Token = "0x600142B")]
	[Address(RVA = "0x1BAF630", Offset = "0x1BADC30", VA = "0x181BAF630", Slot = "4")]
	public void UnsafeOnCompleted(Action action)
	{
	}
}
