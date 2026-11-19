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
[Token(Token = "0x2000643")]
public class IOException : SystemException
{
	[Token(Token = "0x6003097")]
	[Address(RVA = "0x5465410", Offset = "0x5464410", VA = "0x5465410")]
	public IOException()
	{
	}

	[Token(Token = "0x6003098")]
	[Address(RVA = "0x5463AF0", Offset = "0x5462AF0", VA = "0x5463AF0")]
	public IOException(string message)
	{
	}

	[Token(Token = "0x6003099")]
	[Address(RVA = "0x5465450", Offset = "0x5464450", VA = "0x5465450")]
	public IOException(string message, int hresult)
	{
	}

	[Token(Token = "0x600309A")]
	[Address(RVA = "0x5465470", Offset = "0x5464470", VA = "0x5465470")]
	public IOException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x600309B")]
	[Address(RVA = "0x5464760", Offset = "0x5463760", VA = "0x5464760")]
	protected IOException(SerializationInfo info, StreamingContext context)
	{
	}
}
