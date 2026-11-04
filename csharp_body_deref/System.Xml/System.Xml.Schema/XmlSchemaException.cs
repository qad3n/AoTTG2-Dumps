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
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000616")]
	internal string[] Args
	{
		[Token(Token = "0x6001641")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000617")]
	public string SourceUri
	{
		[Token(Token = "0x6001642")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000618")]
	public int LineNumber
	{
		[Token(Token = "0x6001643")]
		[Address(RVA = "0x266C1E0", Offset = "0x266A7E0", VA = "0x18266C1E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000619")]
	public int LinePosition
	{
		[Token(Token = "0x6001644")]
		[Address(RVA = "0x1AAAD70", Offset = "0x1AA9370", VA = "0x181AAAD70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700061A")]
	public XmlSchemaObject SourceSchemaObject
	{
		[Token(Token = "0x6001645")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700061B")]
	public override string Message
	{
		[Token(Token = "0x6001649")]
		[Address(RVA = "0x266C1F0", Offset = "0x266A7F0", VA = "0x18266C1F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001630")]
	[Address(RVA = "0x266B830", Offset = "0x2669E30", VA = "0x18266B830")]
	protected XmlSchemaException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001631")]
	[Address(RVA = "0x266B550", Offset = "0x2669B50", VA = "0x18266B550", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001632")]
	[Address(RVA = "0x266BD10", Offset = "0x266A310", VA = "0x18266BD10")]
	public XmlSchemaException()
	{
	}

	[Token(Token = "0x6001633")]
	[Address(RVA = "0x266BF20", Offset = "0x266A520", VA = "0x18266BF20")]
	public XmlSchemaException(string message)
	{
	}

	[Token(Token = "0x6001634")]
	[Address(RVA = "0x266BD40", Offset = "0x266A340", VA = "0x18266BD40")]
	public XmlSchemaException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6001635")]
	[Address(RVA = "0x266BF90", Offset = "0x266A590", VA = "0x18266BF90")]
	public XmlSchemaException(string message, Exception innerException, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6001636")]
	[Address(RVA = "0x266C070", Offset = "0x266A670", VA = "0x18266C070")]
	internal XmlSchemaException(string res, string[] args)
	{
	}

	[Token(Token = "0x6001637")]
	[Address(RVA = "0x266BD60", Offset = "0x266A360", VA = "0x18266BD60")]
	internal XmlSchemaException(string res, string arg)
	{
	}

	[Token(Token = "0x6001638")]
	[Address(RVA = "0x266BC50", Offset = "0x266A250", VA = "0x18266BC50")]
	internal XmlSchemaException(string res, string arg, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6001639")]
	[Address(RVA = "0x266B7A0", Offset = "0x2669DA0", VA = "0x18266B7A0")]
	internal XmlSchemaException(string res, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x600163A")]
	[Address(RVA = "0x266B760", Offset = "0x2669D60", VA = "0x18266B760")]
	internal XmlSchemaException(string res, string[] args, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x600163B")]
	[Address(RVA = "0x266B7E0", Offset = "0x2669DE0", VA = "0x18266B7E0")]
	internal XmlSchemaException(string res, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163C")]
	[Address(RVA = "0x266C120", Offset = "0x266A720", VA = "0x18266C120")]
	internal XmlSchemaException(string res, string arg, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163D")]
	[Address(RVA = "0x266BF40", Offset = "0x266A540", VA = "0x18266BF40")]
	internal XmlSchemaException(string res, string[] args, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163E")]
	[Address(RVA = "0x266BE60", Offset = "0x266A460", VA = "0x18266BE60")]
	internal XmlSchemaException(string res, string[] args, Exception innerException, string sourceUri, int lineNumber, int linePosition, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163F")]
	[Address(RVA = "0x266B500", Offset = "0x2669B00", VA = "0x18266B500")]
	internal static string CreateMessage(string res, string[] args)
	{
		return null;
	}

	[Token(Token = "0x6001646")]
	[Address(RVA = "0x266B6A0", Offset = "0x2669CA0", VA = "0x18266B6A0")]
	internal void SetSource(string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6001647")]
	[Address(RVA = "0x1537500", Offset = "0x1535B00", VA = "0x181537500")]
	internal void SetSchemaObject(XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6001648")]
	[Address(RVA = "0x266B6F0", Offset = "0x2669CF0", VA = "0x18266B6F0")]
	internal void SetSource(XmlSchemaObject source)
	{
	}
}
