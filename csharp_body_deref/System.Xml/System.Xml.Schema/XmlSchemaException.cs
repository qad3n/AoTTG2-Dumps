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
		[Address(RVA = "0x43E71D0", Offset = "0x43E71D0", VA = "0x43E71D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000616")]
	internal string[] Args
	{
		[Token(Token = "0x6001641")]
		[Address(RVA = "0x43E71E0", Offset = "0x43E71E0", VA = "0x43E71E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000617")]
	public string SourceUri
	{
		[Token(Token = "0x6001642")]
		[Address(RVA = "0x43E71F0", Offset = "0x43E71F0", VA = "0x43E71F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000618")]
	public int LineNumber
	{
		[Token(Token = "0x6001643")]
		[Address(RVA = "0x43E7200", Offset = "0x43E7200", VA = "0x43E7200")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000619")]
	public int LinePosition
	{
		[Token(Token = "0x6001644")]
		[Address(RVA = "0x43E7210", Offset = "0x43E7210", VA = "0x43E7210")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700061A")]
	public XmlSchemaObject SourceSchemaObject
	{
		[Token(Token = "0x6001645")]
		[Address(RVA = "0x43E7220", Offset = "0x43E7220", VA = "0x43E7220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700061B")]
	public override string Message
	{
		[Token(Token = "0x6001649")]
		[Address(RVA = "0x43E72B0", Offset = "0x43E72B0", VA = "0x43E72B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001630")]
	[Address(RVA = "0x43E66D0", Offset = "0x43E66D0", VA = "0x43E66D0")]
	protected XmlSchemaException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001631")]
	[Address(RVA = "0x43E6B70", Offset = "0x43E6B70", VA = "0x43E6B70", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001632")]
	[Address(RVA = "0x43E6CC0", Offset = "0x43E6CC0", VA = "0x43E6CC0")]
	public XmlSchemaException()
	{
	}

	[Token(Token = "0x6001633")]
	[Address(RVA = "0x43E6CD0", Offset = "0x43E6CD0", VA = "0x43E6CD0")]
	public XmlSchemaException(string message)
	{
	}

	[Token(Token = "0x6001634")]
	[Address(RVA = "0x43E6E40", Offset = "0x43E6E40", VA = "0x43E6E40")]
	public XmlSchemaException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6001635")]
	[Address(RVA = "0x43E6CE0", Offset = "0x43E6CE0", VA = "0x43E6CE0")]
	public XmlSchemaException(string message, Exception innerException, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6001636")]
	[Address(RVA = "0x43E6F20", Offset = "0x43E6F20", VA = "0x43E6F20")]
	internal XmlSchemaException(string res, string[] args)
	{
	}

	[Token(Token = "0x6001637")]
	[Address(RVA = "0x43DCDB0", Offset = "0x43DCDB0", VA = "0x43DCDB0")]
	internal XmlSchemaException(string res, string arg)
	{
	}

	[Token(Token = "0x6001638")]
	[Address(RVA = "0x43D52A0", Offset = "0x43D52A0", VA = "0x43D52A0")]
	internal XmlSchemaException(string res, string arg, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6001639")]
	[Address(RVA = "0x43E6FC0", Offset = "0x43E6FC0", VA = "0x43E6FC0")]
	internal XmlSchemaException(string res, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x600163A")]
	[Address(RVA = "0x43D50E0", Offset = "0x43D50E0", VA = "0x43D50E0")]
	internal XmlSchemaException(string res, string[] args, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x600163B")]
	[Address(RVA = "0x43E7070", Offset = "0x43E7070", VA = "0x43E7070")]
	internal XmlSchemaException(string res, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163C")]
	[Address(RVA = "0x43E7140", Offset = "0x43E7140", VA = "0x43E7140")]
	internal XmlSchemaException(string res, string arg, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163D")]
	[Address(RVA = "0x43E7080", Offset = "0x43E7080", VA = "0x43E7080")]
	internal XmlSchemaException(string res, string[] args, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163E")]
	[Address(RVA = "0x43E6E50", Offset = "0x43E6E50", VA = "0x43E6E50")]
	internal XmlSchemaException(string res, string[] args, Exception innerException, string sourceUri, int lineNumber, int linePosition, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163F")]
	[Address(RVA = "0x43E6AB0", Offset = "0x43E6AB0", VA = "0x43E6AB0")]
	internal static string CreateMessage(string res, string[] args)
	{
		return null;
	}

	[Token(Token = "0x6001646")]
	[Address(RVA = "0x43DC090", Offset = "0x43DC090", VA = "0x43DC090")]
	internal void SetSource(string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6001647")]
	[Address(RVA = "0x43E7230", Offset = "0x43E7230", VA = "0x43E7230")]
	internal void SetSchemaObject(XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6001648")]
	[Address(RVA = "0x43E7250", Offset = "0x43E7250", VA = "0x43E7250")]
	internal void SetSource(XmlSchemaObject source)
	{
	}
}
