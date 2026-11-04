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
		[Address(RVA = "0x25EDB20", Offset = "0x25EC120", VA = "0x1825EDB20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000304")]
	public int LinePosition
	{
		[Token(Token = "0x6000BF9")]
		[Address(RVA = "0x25EDB30", Offset = "0x25EC130", VA = "0x1825EDB30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000305")]
	public override string Message
	{
		[Token(Token = "0x6000BFA")]
		[Address(RVA = "0x2756720", Offset = "0x2754D20", VA = "0x182756720", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000306")]
	internal string ResString
	{
		[Token(Token = "0x6000BFB")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x2755A50", Offset = "0x2754050", VA = "0x182755A50")]
	protected XmlException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x27557F0", Offset = "0x2753DF0", VA = "0x1827557F0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x2755F00", Offset = "0x2754500", VA = "0x182755F00")]
	public XmlException()
	{
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x2755ED0", Offset = "0x27544D0", VA = "0x182755ED0")]
	public XmlException(string message)
	{
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x2755A20", Offset = "0x2754020", VA = "0x182755A20")]
	public XmlException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x2755940", Offset = "0x2753F40", VA = "0x182755940")]
	public XmlException(string message, Exception innerException, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x2756180", Offset = "0x2754780", VA = "0x182756180")]
	internal XmlException(string message, Exception innerException, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x27563A0", Offset = "0x27549A0", VA = "0x1827563A0")]
	internal XmlException(string res, string[] args)
	{
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x27565D0", Offset = "0x2754BD0", VA = "0x1827565D0")]
	internal XmlException(string res, string arg)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x2756530", Offset = "0x2754B30", VA = "0x182756530")]
	internal XmlException(string res, string arg, string sourceUri)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x2756040", Offset = "0x2754640", VA = "0x182756040")]
	internal XmlException(string res, string arg, IXmlLineInfo lineInfo)
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x2756490", Offset = "0x2754A90", VA = "0x182756490")]
	internal XmlException(string res, string[] args, IXmlLineInfo lineInfo)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x2756670", Offset = "0x2754C70", VA = "0x182756670")]
	internal XmlException(string res, string[] args, IXmlLineInfo lineInfo, string sourceUri)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x2755970", Offset = "0x2753F70", VA = "0x182755970")]
	internal XmlException(string res, string arg, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x2755F60", Offset = "0x2754560", VA = "0x182755F60")]
	internal XmlException(string res, string arg, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x2756010", Offset = "0x2754610", VA = "0x182756010")]
	internal XmlException(string res, string[] args, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x2756140", Offset = "0x2754740", VA = "0x182756140")]
	internal XmlException(string res, string[] args, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x2755F30", Offset = "0x2754530", VA = "0x182755F30")]
	internal XmlException(string res, string[] args, Exception innerException, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x27563D0", Offset = "0x27549D0", VA = "0x1827563D0")]
	internal XmlException(string res, string[] args, Exception innerException, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x27556E0", Offset = "0x2753CE0", VA = "0x1827556E0")]
	private static string FormatUserMessage(string message, int lineNumber, int linePosition)
	{
		return null;
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x2755520", Offset = "0x2753B20", VA = "0x182755520")]
	private static string CreateMessage(string res, string[] args, int lineNumber, int linePosition)
	{
		return null;
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x27551D0", Offset = "0x27537D0", VA = "0x1827551D0")]
	internal static string[] BuildCharExceptionArgs(string data, int invCharIndex)
	{
		return null;
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x27554D0", Offset = "0x2753AD0", VA = "0x1827554D0")]
	internal static string[] BuildCharExceptionArgs(char[] data, int length, int invCharIndex)
	{
		return null;
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x2755240", Offset = "0x2753840", VA = "0x182755240")]
	internal static string[] BuildCharExceptionArgs(char invChar, char nextChar)
	{
		return null;
	}
}
