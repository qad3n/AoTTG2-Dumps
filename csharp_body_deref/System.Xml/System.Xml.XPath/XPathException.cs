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
		[Address(RVA = "0x44C6AC0", Offset = "0x44C6AC0", VA = "0x44C6AC0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x44C60B0", Offset = "0x44C60B0", VA = "0x44C60B0")]
	protected XPathException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x44C6480", Offset = "0x44C6480", VA = "0x44C6480", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x44C6550", Offset = "0x44C6550", VA = "0x44C6550")]
	public XPathException()
	{
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x44C6570", Offset = "0x44C6570", VA = "0x44C6570")]
	public XPathException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x44C66D0", Offset = "0x44C66D0", VA = "0x44C66D0")]
	internal static XPathException Create(string res)
	{
		return null;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x44C67D0", Offset = "0x44C67D0", VA = "0x44C67D0")]
	internal static XPathException Create(string res, string arg)
	{
		return null;
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x44C68C0", Offset = "0x44C68C0", VA = "0x44C68C0")]
	internal static XPathException Create(string res, string arg, string arg2)
	{
		return null;
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x44C69D0", Offset = "0x44C69D0", VA = "0x44C69D0")]
	internal static XPathException Create(string res, string arg, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x44C6760", Offset = "0x44C6760", VA = "0x44C6760")]
	private XPathException(string res, string[] args)
	{
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x44C6660", Offset = "0x44C6660", VA = "0x44C6660")]
	private XPathException(string res, string[] args, Exception inner)
	{
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x44C6350", Offset = "0x44C6350", VA = "0x44C6350")]
	private static string CreateMessage(string res, string[] args)
	{
		return null;
	}
}
