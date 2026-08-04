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
		[Address(RVA = "0x4691A90", Offset = "0x4691A90", VA = "0x4691A90")]
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
		[Address(RVA = "0x4696050", Offset = "0x4696050", VA = "0x4696050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000027")]
	private int System_002EXml_002EIXmlLineInfo_002ELineNumber
	{
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x4696210", Offset = "0x4696210", VA = "0x4696210", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000028")]
	private int System_002EXml_002EIXmlLineInfo_002ELinePosition
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x4696250", Offset = "0x4696250", VA = "0x4696250", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000029")]
	internal bool HasBaseUri
	{
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x4691A50", Offset = "0x4691A50", VA = "0x4691A50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x468B6E0", Offset = "0x468B6E0", VA = "0x468B6E0")]
	internal XObject()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4693EF0", Offset = "0x4693EF0", VA = "0x4693EF0")]
	public void AddAnnotation(object annotation)
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x46960B0", Offset = "0x46960B0", VA = "0x46960B0")]
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
	[Address(RVA = "0x46961D0", Offset = "0x46961D0", VA = "0x46961D0", Slot = "4")]
	private bool System_002EXml_002EIXmlLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x468C140", Offset = "0x468C140", VA = "0x468C140")]
	internal bool NotifyChanged(object sender, XObjectChangeEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x468C0A0", Offset = "0x468C0A0", VA = "0x468C0A0")]
	internal bool NotifyChanging(object sender, XObjectChangeEventArgs e)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x4691900", Offset = "0x4691900", VA = "0x4691900")]
	internal void SetBaseUri(string baseUri)
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x4691970", Offset = "0x4691970", VA = "0x4691970")]
	internal void SetLineInfo(int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x468D9E0", Offset = "0x468D9E0", VA = "0x468D9E0")]
	internal bool SkipNotify()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4695B00", Offset = "0x4695B00", VA = "0x4695B00")]
	internal SaveOptions GetSaveOptionsFromAnnotations()
	{
		return default(SaveOptions);
	}
}
