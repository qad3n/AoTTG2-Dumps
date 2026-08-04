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
		[Address(RVA = "0x4724930", Offset = "0x4724930", VA = "0x4724930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000616")]
	internal string[] Args
	{
		[Token(Token = "0x6001641")]
		[Address(RVA = "0x4724940", Offset = "0x4724940", VA = "0x4724940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000617")]
	public string SourceUri
	{
		[Token(Token = "0x6001642")]
		[Address(RVA = "0x4724950", Offset = "0x4724950", VA = "0x4724950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000618")]
	public int LineNumber
	{
		[Token(Token = "0x6001643")]
		[Address(RVA = "0x4724960", Offset = "0x4724960", VA = "0x4724960")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000619")]
	public int LinePosition
	{
		[Token(Token = "0x6001644")]
		[Address(RVA = "0x4724970", Offset = "0x4724970", VA = "0x4724970")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700061A")]
	public XmlSchemaObject SourceSchemaObject
	{
		[Token(Token = "0x6001645")]
		[Address(RVA = "0x4724980", Offset = "0x4724980", VA = "0x4724980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700061B")]
	public override string Message
	{
		[Token(Token = "0x6001649")]
		[Address(RVA = "0x4724A10", Offset = "0x4724A10", VA = "0x4724A10", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001630")]
	[Address(RVA = "0x4723E30", Offset = "0x4723E30", VA = "0x4723E30")]
	protected XmlSchemaException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001631")]
	[Address(RVA = "0x47242D0", Offset = "0x47242D0", VA = "0x47242D0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001632")]
	[Address(RVA = "0x4724420", Offset = "0x4724420", VA = "0x4724420")]
	public XmlSchemaException()
	{
	}

	[Token(Token = "0x6001633")]
	[Address(RVA = "0x4724430", Offset = "0x4724430", VA = "0x4724430")]
	public XmlSchemaException(string message)
	{
	}

	[Token(Token = "0x6001634")]
	[Address(RVA = "0x47245A0", Offset = "0x47245A0", VA = "0x47245A0")]
	public XmlSchemaException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6001635")]
	[Address(RVA = "0x4724440", Offset = "0x4724440", VA = "0x4724440")]
	public XmlSchemaException(string message, Exception innerException, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6001636")]
	[Address(RVA = "0x4724680", Offset = "0x4724680", VA = "0x4724680")]
	internal XmlSchemaException(string res, string[] args)
	{
	}

	[Token(Token = "0x6001637")]
	[Address(RVA = "0x471A510", Offset = "0x471A510", VA = "0x471A510")]
	internal XmlSchemaException(string res, string arg)
	{
	}

	[Token(Token = "0x6001638")]
	[Address(RVA = "0x4712A00", Offset = "0x4712A00", VA = "0x4712A00")]
	internal XmlSchemaException(string res, string arg, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6001639")]
	[Address(RVA = "0x4724720", Offset = "0x4724720", VA = "0x4724720")]
	internal XmlSchemaException(string res, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x600163A")]
	[Address(RVA = "0x4712840", Offset = "0x4712840", VA = "0x4712840")]
	internal XmlSchemaException(string res, string[] args, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x600163B")]
	[Address(RVA = "0x47247D0", Offset = "0x47247D0", VA = "0x47247D0")]
	internal XmlSchemaException(string res, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163C")]
	[Address(RVA = "0x47248A0", Offset = "0x47248A0", VA = "0x47248A0")]
	internal XmlSchemaException(string res, string arg, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163D")]
	[Address(RVA = "0x47247E0", Offset = "0x47247E0", VA = "0x47247E0")]
	internal XmlSchemaException(string res, string[] args, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163E")]
	[Address(RVA = "0x47245B0", Offset = "0x47245B0", VA = "0x47245B0")]
	internal XmlSchemaException(string res, string[] args, Exception innerException, string sourceUri, int lineNumber, int linePosition, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x600163F")]
	[Address(RVA = "0x4724210", Offset = "0x4724210", VA = "0x4724210")]
	internal static string CreateMessage(string res, string[] args)
	{
		return null;
	}

	[Token(Token = "0x6001646")]
	[Address(RVA = "0x47197F0", Offset = "0x47197F0", VA = "0x47197F0")]
	internal void SetSource(string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6001647")]
	[Address(RVA = "0x4724990", Offset = "0x4724990", VA = "0x4724990")]
	internal void SetSchemaObject(XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6001648")]
	[Address(RVA = "0x47249B0", Offset = "0x47249B0", VA = "0x47249B0")]
	internal void SetSource(XmlSchemaObject source)
	{
	}
}
