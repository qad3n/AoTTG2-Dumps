// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XPath.XPathException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Xml.XPath;

[Serializable]
[Token(Token = "0x20000F6")]
public class XPathException : SystemException
{
	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x90")]
	private string res;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0x98")]
	private string[] args;

	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0xA0")]
	private string message;

	[Token(Token = "0x17000310")]
	public override string Message
	{
		[Token(Token = "0x6000C48")]
		[Address(RVA = "0x6106850", Offset = "0x6105850", VA = "0x6106850", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x6105E50", Offset = "0x6104E50", VA = "0x6105E50")]
	protected XPathException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x6106210", Offset = "0x6105210", VA = "0x6106210", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x61062E0", Offset = "0x61052E0", VA = "0x61062E0")]
	public XPathException()
	{
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x6106300", Offset = "0x6105300", VA = "0x6106300")]
	public XPathException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x6106460", Offset = "0x6105460", VA = "0x6106460")]
	internal static XPathException Create(string res)
	{
		return null;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x6106560", Offset = "0x6105560", VA = "0x6106560")]
	internal static XPathException Create(string res, string arg)
	{
		return null;
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x6106650", Offset = "0x6105650", VA = "0x6106650")]
	internal static XPathException Create(string res, string arg, string arg2)
	{
		return null;
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x6106760", Offset = "0x6105760", VA = "0x6106760")]
	internal static XPathException Create(string res, string arg, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x61064F0", Offset = "0x61054F0", VA = "0x61064F0")]
	private XPathException(string res, string[] args)
	{
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x61063F0", Offset = "0x61053F0", VA = "0x61063F0")]
	private XPathException(string res, string[] args, Exception inner)
	{
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x61060F0", Offset = "0x61050F0", VA = "0x61060F0")]
	private static string CreateMessage(string res, string[] args)
	{
		return null;
	}
}
