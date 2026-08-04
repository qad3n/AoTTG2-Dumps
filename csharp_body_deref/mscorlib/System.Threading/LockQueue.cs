// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.LockQueue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000216")]
internal class LockQueue
{
	[Token(Token = "0x4000A05")]
	[FieldOffset(Offset = "0x10")]
	private ReaderWriterLock rwlock;

	[Token(Token = "0x4000A06")]
	[FieldOffset(Offset = "0x18")]
	private int lockCount;

	[Token(Token = "0x170001D1")]
	public bool IsEmpty
	{
		[Token(Token = "0x6001339")]
		[Address(RVA = "0x3D3BA80", Offset = "0x3D3BA80", VA = "0x3D3BA80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001337")]
	[Address(RVA = "0x3D3B890", Offset = "0x3D3B890", VA = "0x3D3B890")]
	public LockQueue(ReaderWriterLock rwlock)
	{
	}

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x3D3B8C0", Offset = "0x3D3B8C0", VA = "0x3D3B8C0")]
	public bool Wait(int timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x3D3BB40", Offset = "0x3D3BB40", VA = "0x3D3BB40")]
	public void Pulse()
	{
	}
}
