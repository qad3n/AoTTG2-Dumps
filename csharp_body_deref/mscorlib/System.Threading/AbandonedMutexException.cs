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
[Token(Token = "0x20001F1")]
public class AbandonedMutexException : SystemException
{
	[Token(Token = "0x4000989")]
	[FieldOffset(Offset = "0x90")]
	private int _mutexIndex;

	[Token(Token = "0x400098A")]
	[FieldOffset(Offset = "0x98")]
	private Mutex _mutex;

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x1B93D10", Offset = "0x1B92310", VA = "0x181B93D10")]
	public AbandonedMutexException()
	{
	}

	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x1B93D60", Offset = "0x1B92360", VA = "0x181B93D60")]
	public AbandonedMutexException(int location, WaitHandle handle)
	{
	}

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x1B93E20", Offset = "0x1B92420", VA = "0x181B93E20")]
	protected AbandonedMutexException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x1B93C80", Offset = "0x1B92280", VA = "0x181B93C80")]
	private void SetupException(int location, WaitHandle handle)
	{
	}
}
