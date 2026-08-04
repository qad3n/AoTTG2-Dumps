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
		[Address(RVA = "0x4800B70", Offset = "0x4800B70", VA = "0x4800B70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000304")]
	public int LinePosition
	{
		[Token(Token = "0x6000BF9")]
		[Address(RVA = "0x4800B80", Offset = "0x4800B80", VA = "0x4800B80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000305")]
	public override string Message
	{
		[Token(Token = "0x6000BFA")]
		[Address(RVA = "0x4800B90", Offset = "0x4800B90", VA = "0x4800B90", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000306")]
	internal string ResString
	{
		[Token(Token = "0x6000BFB")]
		[Address(RVA = "0x4800BB0", Offset = "0x4800BB0", VA = "0x4800BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x47FF990", Offset = "0x47FF990", VA = "0x47FF990")]
	protected XmlException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x4800090", Offset = "0x4800090", VA = "0x4800090", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x48001E0", Offset = "0x48001E0", VA = "0x48001E0")]
	public XmlException()
	{
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x4800200", Offset = "0x4800200", VA = "0x4800200")]
	public XmlException(string message)
	{
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x4800230", Offset = "0x4800230", VA = "0x4800230")]
	public XmlException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x4800220", Offset = "0x4800220", VA = "0x4800220")]
	public XmlException(string message, Exception innerException, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x4800240", Offset = "0x4800240", VA = "0x4800240")]
	internal XmlException(string message, Exception innerException, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x47F2F90", Offset = "0x47F2F90", VA = "0x47F2F90")]
	internal XmlException(string res, string[] args)
	{
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x47F2D60", Offset = "0x47F2D60", VA = "0x47F2D60")]
	internal XmlException(string res, string arg)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x4800500", Offset = "0x4800500", VA = "0x4800500")]
	internal XmlException(string res, string arg, string sourceUri)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x4800600", Offset = "0x4800600", VA = "0x4800600")]
	internal XmlException(string res, string arg, IXmlLineInfo lineInfo)
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x48008A0", Offset = "0x48008A0", VA = "0x48008A0")]
	internal XmlException(string res, string[] args, IXmlLineInfo lineInfo)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x4800690", Offset = "0x4800690", VA = "0x4800690")]
	internal XmlException(string res, string[] args, IXmlLineInfo lineInfo, string sourceUri)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x47FB550", Offset = "0x47FB550", VA = "0x47FB550")]
	internal XmlException(string res, string arg, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x48008B0", Offset = "0x48008B0", VA = "0x48008B0")]
	internal XmlException(string res, string arg, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x47FB7E0", Offset = "0x47FB7E0", VA = "0x47FB7E0")]
	internal XmlException(string res, string[] args, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x48009C0", Offset = "0x48009C0", VA = "0x48009C0")]
	internal XmlException(string res, string[] args, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x4800A70", Offset = "0x4800A70", VA = "0x4800A70")]
	internal XmlException(string res, string[] args, Exception innerException, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x4800450", Offset = "0x4800450", VA = "0x4800450")]
	internal XmlException(string res, string[] args, Exception innerException, int lineNumber, int linePosition, string sourceUri)
	{
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x4800380", Offset = "0x4800380", VA = "0x4800380")]
	private static string FormatUserMessage(string message, int lineNumber, int linePosition)
	{
		return null;
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x47FFDE0", Offset = "0x47FFDE0", VA = "0x47FFDE0")]
	private static string CreateMessage(string res, string[] args, int lineNumber, int linePosition)
	{
		return null;
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x47F2F40", Offset = "0x47F2F40", VA = "0x47F2F40")]
	internal static string[] BuildCharExceptionArgs(string data, int invCharIndex)
	{
		return null;
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x4800B20", Offset = "0x4800B20", VA = "0x4800B20")]
	internal static string[] BuildCharExceptionArgs(char[] data, int length, int invCharIndex)
	{
		return null;
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x47F33E0", Offset = "0x47F33E0", VA = "0x47F33E0")]
	internal static string[] BuildCharExceptionArgs(char invChar, char nextChar)
	{
		return null;
	}
}
