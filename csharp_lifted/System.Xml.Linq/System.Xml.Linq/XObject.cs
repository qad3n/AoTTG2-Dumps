// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.XObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5FA3470", Offset = "0x5FA2470", VA = "0x5FA3470")]
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
		[Address(RVA = "0x5FA7D40", Offset = "0x5FA6D40", VA = "0x5FA7D40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000027")]
	private int System_002EXml_002EIXmlLineInfo_002ELineNumber
	{
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x5FA7F00", Offset = "0x5FA6F00", VA = "0x5FA7F00", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000028")]
	private int System_002EXml_002EIXmlLineInfo_002ELinePosition
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x5FA7F40", Offset = "0x5FA6F40", VA = "0x5FA7F40", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000029")]
	internal bool HasBaseUri
	{
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x5FA3430", Offset = "0x5FA2430", VA = "0x5FA3430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x5F9D870", Offset = "0x5F9C870", VA = "0x5F9D870")]
	internal XObject()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x5FA5AB0", Offset = "0x5FA4AB0", VA = "0x5FA5AB0")]
	public void AddAnnotation(object annotation)
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x5FA7DA0", Offset = "0x5FA6DA0", VA = "0x5FA7DA0")]
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
	[Address(RVA = "0x5FA7EC0", Offset = "0x5FA6EC0", VA = "0x5FA7EC0", Slot = "4")]
	private bool System_002EXml_002EIXmlLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x5F9E200", Offset = "0x5F9D200", VA = "0x5F9E200")]
	internal bool NotifyChanged(object sender, XObjectChangeEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x5F9E160", Offset = "0x5F9D160", VA = "0x5F9E160")]
	internal bool NotifyChanging(object sender, XObjectChangeEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x5FA32E0", Offset = "0x5FA22E0", VA = "0x5FA32E0")]
	internal void SetBaseUri(string baseUri)
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x5FA3350", Offset = "0x5FA2350", VA = "0x5FA3350")]
	internal void SetLineInfo(int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x5F9F800", Offset = "0x5F9E800", VA = "0x5F9F800")]
	internal bool SkipNotify()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x5FA78A0", Offset = "0x5FA68A0", VA = "0x5FA78A0")]
	internal SaveOptions GetSaveOptionsFromAnnotations()
	{
		return default(SaveOptions);
	}
}
