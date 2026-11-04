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
		[Address(RVA = "0x27482F0", Offset = "0x27468F0", VA = "0x1827482F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x2747FE0", Offset = "0x27465E0", VA = "0x182747FE0")]
	protected XPathException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x2747CB0", Offset = "0x27462B0", VA = "0x182747CB0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x2747EF0", Offset = "0x27464F0", VA = "0x182747EF0")]
	public XPathException()
	{
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x2747E10", Offset = "0x2746410", VA = "0x182747E10")]
	public XPathException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x27479B0", Offset = "0x2745FB0", VA = "0x1827479B0")]
	internal static XPathException Create(string res)
	{
		return null;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x2747A50", Offset = "0x2746050", VA = "0x182747A50")]
	internal static XPathException Create(string res, string arg)
	{
		return null;
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x2747B00", Offset = "0x2746100", VA = "0x182747B00")]
	internal static XPathException Create(string res, string arg, string arg2)
	{
		return null;
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x2747BC0", Offset = "0x27461C0", VA = "0x182747BC0")]
	internal static XPathException Create(string res, string arg, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x2747D90", Offset = "0x2746390", VA = "0x182747D90")]
	private XPathException(string res, string[] args)
	{
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x2748280", Offset = "0x2746880", VA = "0x182748280")]
	private XPathException(string res, string[] args, Exception inner)
	{
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x2747900", Offset = "0x2745F00", VA = "0x182747900")]
	private static string CreateMessage(string res, string[] args)
	{
		return null;
	}
}
