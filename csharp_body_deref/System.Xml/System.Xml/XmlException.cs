// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x61032C0", Offset = "0x61022C0", VA = "0x61032C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000304")]
	public int LinePosition
	{
		[Token(Token = "0x6000BF9")]
		[Address(RVA = "0x61032D0", Offset = "0x61022D0", VA = "0x61032D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000305")]
	public override string Message
	{
		[Token(Token = "0x6000BFA")]
		[Address(RVA = "0x61032E0", Offset = "0x61022E0", VA = "0x61032E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000306")]
	internal string ResString
	{
		[Token(Token = "0x6000BFB")]
		[Address(RVA = "0x6103300", Offset = "0x6102300", VA = "0x6103300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x61021A0", Offset = "0x61011A0", VA = "0x61021A0")]
	protected XmlException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x6102820", Offset = "0x6101820", VA = "0x6102820", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x6102970", Offset = "0x6101970", VA = "0x6102970")]
	public XmlException()
	{
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x6102990", Offset = "0x6101990", VA = "0x6102990")]
	public XmlException(string message)
	{
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x61029C0", Offset = "0x61019C0", VA = "0x61029C0")]
	public XmlException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x61029B0", Offset = "0x61019B0", VA = "0x61029B0")]
	public XmlException(string message, Exception innerException, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x61029D0", Offset = "0x61019D0", VA = "0x61029D0")]
	internal XmlException(string message, Exception innerException, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x60F5A10", Offset = "0x60F4A10", VA = "0x60F5A10")]
	internal XmlException(string res, string[] args)
	{
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x60F57E0", Offset = "0x60F47E0", VA = "0x60F57E0")]
	internal XmlException(string res, string arg)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x6102C80", Offset = "0x6101C80", VA = "0x6102C80")]
	internal XmlException(string res, string arg, string sourceUri)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x6102D80", Offset = "0x6101D80", VA = "0x6102D80")]
	internal XmlException(string res, string arg, IXmlLineInfo lineInfo)
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x6102FF0", Offset = "0x6101FF0", VA = "0x6102FF0")]
	internal XmlException(string res, string[] args, IXmlLineInfo lineInfo)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x6102E10", Offset = "0x6101E10", VA = "0x6102E10")]
	internal XmlException(string res, string[] args, IXmlLineInfo lineInfo, string sourceUri)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x60FDEA0", Offset = "0x60FCEA0", VA = "0x60FDEA0")]
	internal XmlException(string res, string arg, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x6103000", Offset = "0x6102000", VA = "0x6103000")]
	internal XmlException(string res, string arg, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x60FE130", Offset = "0x60FD130", VA = "0x60FE130")]
	internal XmlException(string res, string[] args, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x6103110", Offset = "0x6102110", VA = "0x6103110")]
	internal XmlException(string res, string[] args, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x61031C0", Offset = "0x61021C0", VA = "0x61031C0")]
	internal XmlException(string res, string[] args, Exception innerException, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x6102BD0", Offset = "0x6101BD0", VA = "0x6102BD0")]
	internal XmlException(string res, string[] args, Exception innerException, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x6102B00", Offset = "0x6101B00", VA = "0x6102B00")]
	private static string FormatUserMessage(string message, int lineNumber, int linePosition)
	{
		return null;
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x61025F0", Offset = "0x61015F0", VA = "0x61025F0")]
	private static string CreateMessage(string res, string[] args, int lineNumber, int linePosition)
	{
		return null;
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x60F59C0", Offset = "0x60F49C0", VA = "0x60F59C0")]
	internal static string[] BuildCharExceptionArgs(string data, int invCharIndex)
	{
		return null;
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x6103270", Offset = "0x6102270", VA = "0x6103270")]
	internal static string[] BuildCharExceptionArgs(char[] data, int length, int invCharIndex)
	{
		return null;
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x60F5E60", Offset = "0x60F4E60", VA = "0x60F5E60")]
	internal static string[] BuildCharExceptionArgs(char invChar, char nextChar)
	{
		return null;
	}
}
