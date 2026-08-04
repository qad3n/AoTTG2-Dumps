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
		[Address(RVA = "0x4804220", Offset = "0x4804220", VA = "0x4804220", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x4803810", Offset = "0x4803810", VA = "0x4803810")]
	protected XPathException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x4803BE0", Offset = "0x4803BE0", VA = "0x4803BE0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x4803CB0", Offset = "0x4803CB0", VA = "0x4803CB0")]
	public XPathException()
	{
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x4803CD0", Offset = "0x4803CD0", VA = "0x4803CD0")]
	public XPathException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x4803E30", Offset = "0x4803E30", VA = "0x4803E30")]
	internal static XPathException Create(string res)
	{
		return null;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x4803F30", Offset = "0x4803F30", VA = "0x4803F30")]
	internal static XPathException Create(string res, string arg)
	{
		return null;
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x4804020", Offset = "0x4804020", VA = "0x4804020")]
	internal static XPathException Create(string res, string arg, string arg2)
	{
		return null;
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x4804130", Offset = "0x4804130", VA = "0x4804130")]
	internal static XPathException Create(string res, string arg, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x4803EC0", Offset = "0x4803EC0", VA = "0x4803EC0")]
	private XPathException(string res, string[] args)
	{
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x4803DC0", Offset = "0x4803DC0", VA = "0x4803DC0")]
	private XPathException(string res, string[] args, Exception inner)
	{
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x4803AB0", Offset = "0x4803AB0", VA = "0x4803AB0")]
	private static string CreateMessage(string res, string[] args)
	{
		return null;
	}
}
