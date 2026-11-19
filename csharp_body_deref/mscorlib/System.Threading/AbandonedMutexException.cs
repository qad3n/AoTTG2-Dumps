// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.AbandonedMutexException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x20001C9")]
public class AbandonedMutexException : SystemException
{
	[Token(Token = "0x40008E7")]
	[FieldOffset(Offset = "0x8C")]
	private int _mutexIndex;

	[Token(Token = "0x40008E8")]
	[FieldOffset(Offset = "0x90")]
	private Mutex _mutex;

	[Token(Token = "0x6001184")]
	[Address(RVA = "0x552B2A0", Offset = "0x552A2A0", VA = "0x552B2A0")]
	public AbandonedMutexException()
	{
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x552B2F0", Offset = "0x552A2F0", VA = "0x552B2F0")]
	public AbandonedMutexException(int location, WaitHandle handle)
	{
	}

	[Token(Token = "0x6001186")]
	[Address(RVA = "0x552B430", Offset = "0x552A430", VA = "0x552B430")]
	protected AbandonedMutexException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x552B3B0", Offset = "0x552A3B0", VA = "0x552B3B0")]
	private void SetupException(int location, WaitHandle handle)
	{
	}
}
