// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadStateException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x20001D6")]
public class ThreadStateException : SystemException
{
	[Token(Token = "0x6001175")]
	[Address(RVA = "0x3D28650", Offset = "0x3D28650", VA = "0x3D28650")]
	public ThreadStateException()
	{
	}

	[Token(Token = "0x6001176")]
	[Address(RVA = "0x3D28690", Offset = "0x3D28690", VA = "0x3D28690")]
	public ThreadStateException(string message)
	{
	}

	[Token(Token = "0x6001177")]
	[Address(RVA = "0x3D286B0", Offset = "0x3D286B0", VA = "0x3D286B0")]
	protected ThreadStateException(SerializationInfo info, StreamingContext context)
	{
	}
}
