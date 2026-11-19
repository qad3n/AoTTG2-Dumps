// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Serializable]
[Token(Token = "0x2000226")]
public class XmlSchemaException : SystemException
{
	[Token(Token = "0x4000B7E")]
	[FieldOffset(Offset = "0x90")]
	private string res;

	[Token(Token = "0x4000B7F")]
	[FieldOffset(Offset = "0x98")]
	private string[] args;

	[Token(Token = "0x4000B80")]
	[FieldOffset(Offset = "0xA0")]
	private string sourceUri;

	[Token(Token = "0x4000B81")]
	[FieldOffset(Offset = "0xA8")]
	private int lineNumber;

	[Token(Token = "0x4000B82")]
	[FieldOffset(Offset = "0xAC")]
	private int linePosition;

	[NonSerialized]
	[Token(Token = "0x4000B83")]
	[FieldOffset(Offset = "0xB0")]
	private XmlSchemaObject sourceSchemaObject;

	[Token(Token = "0x4000B84")]
	[FieldOffset(Offset = "0xB8")]
	private string message;

	[Token(Token = "0x17000615")]
	internal string GetRes
	{
		[Token(Token = "0x6001640")]
		[Address(RVA = "0x602CA70", Offset = "0x602BA70", VA = "0x602CA70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000616")]
	internal string[] Args
	{
		[Token(Token = "0x6001641")]
		[Address(RVA = "0x602CA80", Offset = "0x602BA80", VA = "0x602CA80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000617")]
	public string SourceUri
	{
		[Token(Token = "0x6001642")]
		[Address(RVA = "0x602CA90", Offset = "0x602BA90", VA = "0x602CA90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000618")]
	public int LineNumber
	{
		[Token(Token = "0x6001643")]
		[Address(RVA = "0x602CAA0", Offset = "0x602BAA0", VA = "0x602CAA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000619")]
	public int LinePosition
	{
		[Token(Token = "0x6001644")]
		[Address(RVA = "0x602CAB0", Offset = "0x602BAB0", VA = "0x602CAB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700061A")]
	public XmlSchemaObject SourceSchemaObject
	{
		[Token(Token = "0x6001645")]
		[Address(RVA = "0x602CAC0", Offset = "0x602BAC0", VA = "0x602CAC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700061B")]
	public override string Message
	{
		[Token(Token = "0x6001649")]
		[Address(RVA = "0x602CB50", Offset = "0x602BB50", VA = "0x602CB50", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001630")]
	[Address(RVA = "0x602BF50", Offset = "0x602AF50", VA = "0x602BF50")]
	protected XmlSchemaException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001631")]
	[Address(RVA = "0x602C3F0", Offset = "0x602B3F0", VA = "0x602C3F0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001632")]
	[Address(RVA = "0x602C540", Offset = "0x602B540", VA = "0x602C540")]
	public XmlSchemaException()
	{
	}

	[Token(Token = "0x6001633")]
	[Address(RVA = "0x602C550", Offset = "0x602B550", VA = "0x602C550")]
	public XmlSchemaException(string message)
	{
	}

	[Token(Token = "0x6001634")]
	[Address(RVA = "0x602C6C0", Offset = "0x602B6C0", VA = "0x602C6C0")]
	public XmlSchemaException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6001635")]
	[Address(RVA = "0x602C560", Offset = "0x602B560", VA = "0x602C560")]
	public XmlSchemaException(string message, Exception innerException, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6001636")]
	[Address(RVA = "0x602C7A0", Offset = "0x602B7A0", VA = "0x602C7A0")]
	internal XmlSchemaException(string res, string[] args)
	{
	}

	[Token(Token = "0x6001637")]
	[Address(RVA = "0x60227C0", Offset = "0x60217C0", VA = "0x60227C0")]
	internal XmlSchemaException(string res, string arg)
	{
	}

	[Token(Token = "0x6001638")]
	[Address(RVA = "0x601B020", Offset = "0x601A020", VA = "0x601B020")]
	internal XmlSchemaException(string res, string arg, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6001639")]
	[Address(RVA = "0x602C840", Offset = "0x602B840", VA = "0x602C840")]
	internal XmlSchemaException(string res, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x600163A")]
	[Address(RVA = "0x601AE60", Offset = "0x6019E60", VA = "0x601AE60")]
	internal XmlSchemaException(string res, string[] args, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x600163B")]
	[Address(RVA = "0x602C8F0", Offset = "0x602B8F0", VA = "0x602C8F0")]
	internal XmlSchemaException(string res, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163C")]
	[Address(RVA = "0x602C9E0", Offset = "0x602B9E0", VA = "0x602C9E0")]
	internal XmlSchemaException(string res, string arg, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163D")]
	[Address(RVA = "0x602C900", Offset = "0x602B900", VA = "0x602C900")]
	internal XmlSchemaException(string res, string[] args, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163E")]
	[Address(RVA = "0x602C6D0", Offset = "0x602B6D0", VA = "0x602C6D0")]
	internal XmlSchemaException(string res, string[] args, Exception innerException, string sourceUri, int lineNumber, int linePosition, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163F")]
	[Address(RVA = "0x602C330", Offset = "0x602B330", VA = "0x602C330")]
	internal static string CreateMessage(string res, string[] args)
	{
		return null;
	}

	[Token(Token = "0x6001646")]
	[Address(RVA = "0x6021B70", Offset = "0x6020B70", VA = "0x6021B70")]
	internal void SetSource(string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6001647")]
	[Address(RVA = "0x602CAD0", Offset = "0x602BAD0", VA = "0x602CAD0")]
	internal void SetSchemaObject(XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6001648")]
	[Address(RVA = "0x602CAF0", Offset = "0x602BAF0", VA = "0x602CAF0")]
	internal void SetSource(XmlSchemaObject source)
	{
	}
}
