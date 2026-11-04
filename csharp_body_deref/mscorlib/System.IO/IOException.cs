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
[Token(Token = "0x200066A")]
public class IOException : SystemException
{
	[Token(Token = "0x60030D2")]
	[Address(RVA = "0x1AD5540", Offset = "0x1AD3B40", VA = "0x181AD5540")]
	public IOException()
	{
	}

	[Token(Token = "0x60030D3")]
	[Address(RVA = "0x1AD5520", Offset = "0x1AD3B20", VA = "0x181AD5520")]
	public IOException(string message)
	{
	}

	[Token(Token = "0x60030D4")]
	[Address(RVA = "0x1A2A500", Offset = "0x1A28B00", VA = "0x181A2A500")]
	public IOException(string message, int hresult)
	{
	}

	[Token(Token = "0x60030D5")]
	[Address(RVA = "0x1AD5590", Offset = "0x1AD3B90", VA = "0x181AD5590")]
	public IOException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60030D6")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected IOException(SerializationInfo info, StreamingContext context)
	{
	}
}
