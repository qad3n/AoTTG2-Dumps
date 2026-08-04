// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.IOException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000541")]
public class IOException : SystemException
{
	[Token(Token = "0x6002803")]
	[Address(RVA = "0x3BEAA40", Offset = "0x3BEAA40", VA = "0x3BEAA40")]
	public IOException()
	{
	}

	[Token(Token = "0x6002804")]
	[Address(RVA = "0x3BE9DF0", Offset = "0x3BE9DF0", VA = "0x3BE9DF0")]
	public IOException(string message)
	{
	}

	[Token(Token = "0x6002805")]
	[Address(RVA = "0x3BEAA80", Offset = "0x3BEAA80", VA = "0x3BEAA80")]
	public IOException(string message, int hresult)
	{
	}

	[Token(Token = "0x6002806")]
	[Address(RVA = "0x3BEAAA0", Offset = "0x3BEAAA0", VA = "0x3BEAAA0")]
	public IOException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6002807")]
	[Address(RVA = "0x3BE9E40", Offset = "0x3BE9E40", VA = "0x3BE9E40")]
	protected IOException(SerializationInfo info, StreamingContext context)
	{
	}
}
