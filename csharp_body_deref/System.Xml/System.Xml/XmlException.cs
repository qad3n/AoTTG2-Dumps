using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Xml;

[Serializable]
[Token(Token = "0x20000E6")]
public class XmlException : SystemException
{
	[Token(Token = "0x4000587")]
	[FieldOffset(Offset = "0x90")]
	private string res;

	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x98")]
	private string[] args;

	[Token(Token = "0x4000589")]
	[FieldOffset(Offset = "0xA0")]
	private int lineNumber;

	[Token(Token = "0x400058A")]
	[FieldOffset(Offset = "0xA4")]
	private int linePosition;

	[Token(Token = "0x400058B")]
	[FieldOffset(Offset = "0xA8")]
	[OptionalField]
	private string sourceUri;

	[Token(Token = "0x400058C")]
	[FieldOffset(Offset = "0xB0")]
	private string message;

	[Token(Token = "0x17000303")]
	public int LineNumber
	{
		[Token(Token = "0x6000BF8")]
		[Address(RVA = "0x44C3410", Offset = "0x44C3410", VA = "0x44C3410")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000304")]
	public int LinePosition
	{
		[Token(Token = "0x6000BF9")]
		[Address(RVA = "0x44C3420", Offset = "0x44C3420", VA = "0x44C3420")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000305")]
	public override string Message
	{
		[Token(Token = "0x6000BFA")]
		[Address(RVA = "0x44C3430", Offset = "0x44C3430", VA = "0x44C3430", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000306")]
	internal string ResString
	{
		[Token(Token = "0x6000BFB")]
		[Address(RVA = "0x44C3450", Offset = "0x44C3450", VA = "0x44C3450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x44C2230", Offset = "0x44C2230", VA = "0x44C2230")]
	protected XmlException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x44C2930", Offset = "0x44C2930", VA = "0x44C2930", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x44C2A80", Offset = "0x44C2A80", VA = "0x44C2A80")]
	public XmlException()
	{
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x44C2AA0", Offset = "0x44C2AA0", VA = "0x44C2AA0")]
	public XmlException(string message)
	{
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x44C2AD0", Offset = "0x44C2AD0", VA = "0x44C2AD0")]
	public XmlException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x44C2AC0", Offset = "0x44C2AC0", VA = "0x44C2AC0")]
	public XmlException(string message, Exception innerException, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x44C2AE0", Offset = "0x44C2AE0", VA = "0x44C2AE0")]
	internal XmlException(string message, Exception innerException, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x44B5830", Offset = "0x44B5830", VA = "0x44B5830")]
	internal XmlException(string res, string[] args)
	{
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x44B5600", Offset = "0x44B5600", VA = "0x44B5600")]
	internal XmlException(string res, string arg)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x44C2DA0", Offset = "0x44C2DA0", VA = "0x44C2DA0")]
	internal XmlException(string res, string arg, string sourceUri)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x44C2EA0", Offset = "0x44C2EA0", VA = "0x44C2EA0")]
	internal XmlException(string res, string arg, IXmlLineInfo lineInfo)
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x44C3140", Offset = "0x44C3140", VA = "0x44C3140")]
	internal XmlException(string res, string[] args, IXmlLineInfo lineInfo)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x44C2F30", Offset = "0x44C2F30", VA = "0x44C2F30")]
	internal XmlException(string res, string[] args, IXmlLineInfo lineInfo, string sourceUri)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x44BDDF0", Offset = "0x44BDDF0", VA = "0x44BDDF0")]
	internal XmlException(string res, string arg, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x44C3150", Offset = "0x44C3150", VA = "0x44C3150")]
	internal XmlException(string res, string arg, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x44BE080", Offset = "0x44BE080", VA = "0x44BE080")]
	internal XmlException(string res, string[] args, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x44C3260", Offset = "0x44C3260", VA = "0x44C3260")]
	internal XmlException(string res, string[] args, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x44C3310", Offset = "0x44C3310", VA = "0x44C3310")]
	internal XmlException(string res, string[] args, Exception innerException, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x44C2CF0", Offset = "0x44C2CF0", VA = "0x44C2CF0")]
	internal XmlException(string res, string[] args, Exception innerException, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x44C2C20", Offset = "0x44C2C20", VA = "0x44C2C20")]
	private static string FormatUserMessage(string message, int lineNumber, int linePosition)
	{
		return null;
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x44C2680", Offset = "0x44C2680", VA = "0x44C2680")]
	private static string CreateMessage(string res, string[] args, int lineNumber, int linePosition)
	{
		return null;
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x44B57E0", Offset = "0x44B57E0", VA = "0x44B57E0")]
	internal static string[] BuildCharExceptionArgs(string data, int invCharIndex)
	{
		return null;
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x44C33C0", Offset = "0x44C33C0", VA = "0x44C33C0")]
	internal static string[] BuildCharExceptionArgs(char[] data, int length, int invCharIndex)
	{
		return null;
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x44B5C80", Offset = "0x44B5C80", VA = "0x44B5C80")]
	internal static string[] BuildCharExceptionArgs(char invChar, char nextChar)
	{
		return null;
	}
}
