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
[Token(Token = "0x20001C6")]
public class AbandonedMutexException : SystemException
{
	[Token(Token = "0x4000928")]
	[FieldOffset(Offset = "0x8C")]
	private int _mutexIndex;

	[Token(Token = "0x4000929")]
	[FieldOffset(Offset = "0x90")]
	private Mutex _mutex;

	[Token(Token = "0x6001154")]
	[Address(RVA = "0x3D27EE0", Offset = "0x3D27EE0", VA = "0x3D27EE0")]
	public AbandonedMutexException()
	{
	}

	[Token(Token = "0x6001155")]
	[Address(RVA = "0x3D27F30", Offset = "0x3D27F30", VA = "0x3D27F30")]
	public AbandonedMutexException(int location, WaitHandle handle)
	{
	}

	[Token(Token = "0x6001156")]
	[Address(RVA = "0x3D28070", Offset = "0x3D28070", VA = "0x3D28070")]
	protected AbandonedMutexException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001157")]
	[Address(RVA = "0x3D27FF0", Offset = "0x3D27FF0", VA = "0x3D27FF0")]
	private void SetupException(int location, WaitHandle handle)
	{
	}
}
