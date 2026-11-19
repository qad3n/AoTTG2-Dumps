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
[Token(Token = "0x20002A7")]
public sealed class XmlSyntaxException : SystemException
{
	[Token(Token = "0x60017A7")]
	[Address(RVA = "0x5326020", Offset = "0x5325020", VA = "0x5326020")]
	public XmlSyntaxException()
	{
	}

	[Token(Token = "0x60017A8")]
	[Address(RVA = "0x5326030", Offset = "0x5325030", VA = "0x5326030")]
	public XmlSyntaxException(int lineNumber)
	{
	}

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x5326040", Offset = "0x5325040", VA = "0x5326040")]
	public XmlSyntaxException(int lineNumber, string message)
	{
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x5326050", Offset = "0x5325050", VA = "0x5326050")]
	private XmlSyntaxException(SerializationInfo info, StreamingContext context)
	{
	}
}
