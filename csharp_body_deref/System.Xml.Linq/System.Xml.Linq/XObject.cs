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
		[Address(RVA = "0x25ED190", Offset = "0x25EB790", VA = "0x1825ED190")]
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
		[Address(RVA = "0x25ED250", Offset = "0x25EB850", VA = "0x1825ED250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000027")]
	private int System_002EXml_002EIXmlLineInfo_002ELineNumber
	{
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x25ED0F0", Offset = "0x25EB6F0", VA = "0x1825ED0F0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000028")]
	private int System_002EXml_002EIXmlLineInfo_002ELinePosition
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x25ED140", Offset = "0x25EB740", VA = "0x1825ED140", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000029")]
	internal bool HasBaseUri
	{
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x25ED210", Offset = "0x25EB810", VA = "0x1825ED210")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal XObject()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x25EC860", Offset = "0x25EAE60", VA = "0x1825EC860")]
	public void AddAnnotation(object annotation)
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x25ECB30", Offset = "0x25EB130", VA = "0x1825ECB30")]
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
	[Address(RVA = "0x25ED0B0", Offset = "0x25EB6B0", VA = "0x1825ED0B0", Slot = "4")]
	private bool System_002EXml_002EIXmlLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x25ECE30", Offset = "0x25EB430", VA = "0x1825ECE30")]
	internal bool NotifyChanged(object sender, XObjectChangeEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x25ECEC0", Offset = "0x25EB4C0", VA = "0x1825ECEC0")]
	internal bool NotifyChanging(object sender, XObjectChangeEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x25ECF50", Offset = "0x25EB550", VA = "0x1825ECF50")]
	internal void SetBaseUri(string baseUri)
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x25ECFD0", Offset = "0x25EB5D0", VA = "0x1825ECFD0")]
	internal void SetLineInfo(int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x25ED040", Offset = "0x25EB640", VA = "0x1825ED040")]
	internal bool SkipNotify()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x25ECC60", Offset = "0x25EB260", VA = "0x1825ECC60")]
	internal SaveOptions GetSaveOptionsFromAnnotations()
	{
		return default(SaveOptions);
	}
}
