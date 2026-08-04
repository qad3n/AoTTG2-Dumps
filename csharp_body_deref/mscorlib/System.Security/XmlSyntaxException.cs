// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.XmlSyntaxException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Security;

[Serializable]
[Token(Token = "0x200029F")]
public sealed class XmlSyntaxException : SystemException
{
	[Token(Token = "0x6001762")]
	[Address(RVA = "0x3B1C000", Offset = "0x3B1C000", VA = "0x3B1C000")]
	public XmlSyntaxException()
	{
	}

	[Token(Token = "0x6001763")]
	[Address(RVA = "0x3B1C010", Offset = "0x3B1C010", VA = "0x3B1C010")]
	public XmlSyntaxException(int lineNumber)
	{
	}

	[Token(Token = "0x6001764")]
	[Address(RVA = "0x3B1C020", Offset = "0x3B1C020", VA = "0x3B1C020")]
	public XmlSyntaxException(int lineNumber, string message)
	{
	}

	[Token(Token = "0x6001765")]
	[Address(RVA = "0x3B1C030", Offset = "0x3B1C030", VA = "0x3B1C030")]
	private XmlSyntaxException(SerializationInfo info, StreamingContext context)
	{
	}
}
