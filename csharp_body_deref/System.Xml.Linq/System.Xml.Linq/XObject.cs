using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x200001F")]
public abstract class XObject : IXmlLineInfo
{
	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x10")]
	internal XContainer parent;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x18")]
	internal object annotations;

	[Token(Token = "0x17000024")]
	public string BaseUri
	{
		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x43411C0", Offset = "0x43411C0", VA = "0x43411C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public abstract XmlNodeType NodeType
	{
		[Token(Token = "0x60000C7")]
		get;
	}

	[Token(Token = "0x17000026")]
	public XElement Parent
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x4345780", Offset = "0x4345780", VA = "0x4345780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000027")]
	private int System_002EXml_002EIXmlLineInfo_002ELineNumber
	{
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x4345940", Offset = "0x4345940", VA = "0x4345940", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000028")]
	private int System_002EXml_002EIXmlLineInfo_002ELinePosition
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x4345980", Offset = "0x4345980", VA = "0x4345980", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000029")]
	internal bool HasBaseUri
	{
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x4341180", Offset = "0x4341180", VA = "0x4341180")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x433AE10", Offset = "0x433AE10", VA = "0x433AE10")]
	internal XObject()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4343620", Offset = "0x4343620", VA = "0x4343620")]
	public void AddAnnotation(object annotation)
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x43457E0", Offset = "0x43457E0", VA = "0x43457E0")]
	private object AnnotationForSealedType(Type type)
	{
		return null;
	}

	[Token(Token = "0x60000CB")]
	public T Annotation<T>() where T : class
	{
		return null;
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x4345900", Offset = "0x4345900", VA = "0x4345900", Slot = "4")]
	private bool System_002EXml_002EIXmlLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x433B870", Offset = "0x433B870", VA = "0x433B870")]
	internal bool NotifyChanged(object sender, XObjectChangeEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x433B7D0", Offset = "0x433B7D0", VA = "0x433B7D0")]
	internal bool NotifyChanging(object sender, XObjectChangeEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x4341030", Offset = "0x4341030", VA = "0x4341030")]
	internal void SetBaseUri(string baseUri)
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x43410A0", Offset = "0x43410A0", VA = "0x43410A0")]
	internal void SetLineInfo(int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x433D110", Offset = "0x433D110", VA = "0x433D110")]
	internal bool SkipNotify()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4345230", Offset = "0x4345230", VA = "0x4345230")]
	internal SaveOptions GetSaveOptionsFromAnnotations()
	{
		return default(SaveOptions);
	}
}
