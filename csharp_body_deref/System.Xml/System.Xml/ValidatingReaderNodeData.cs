using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000040")]
internal class ValidatingReaderNodeData
{
	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x10")]
	private string localName;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x18")]
	private string namespaceUri;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x20")]
	private string prefix;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x28")]
	private string nameWPrefix;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x30")]
	private string rawValue;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x38")]
	private string originalStringValue;

	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x40")]
	private int depth;

	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x48")]
	private AttributePSVIInfo attributePSVIInfo;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x50")]
	private XmlNodeType nodeType;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x54")]
	private int lineNo;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x58")]
	private int linePos;

	[Token(Token = "0x17000049")]
	public string LocalName
	{
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x44581B0", Offset = "0x44581B0", VA = "0x44581B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x44581C0", Offset = "0x44581C0", VA = "0x44581C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public string Namespace
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x44581D0", Offset = "0x44581D0", VA = "0x44581D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x44581E0", Offset = "0x44581E0", VA = "0x44581E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public string Prefix
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x44581F0", Offset = "0x44581F0", VA = "0x44581F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x4458200", Offset = "0x4458200", VA = "0x4458200")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public int Depth
	{
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x44582A0", Offset = "0x44582A0", VA = "0x44582A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x44582B0", Offset = "0x44582B0", VA = "0x44582B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public string RawValue
	{
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x44582C0", Offset = "0x44582C0", VA = "0x44582C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x44582D0", Offset = "0x44582D0", VA = "0x44582D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public string OriginalStringValue
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x44582E0", Offset = "0x44582E0", VA = "0x44582E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004F")]
	public XmlNodeType NodeType
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x44582F0", Offset = "0x44582F0", VA = "0x44582F0")]
		get
		{
			return default(XmlNodeType);
		}
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x4458300", Offset = "0x4458300", VA = "0x4458300")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public AttributePSVIInfo AttInfo
	{
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x4458310", Offset = "0x4458310", VA = "0x4458310")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x4458320", Offset = "0x4458320", VA = "0x4458320")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public int LineNumber
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x4458330", Offset = "0x4458330", VA = "0x4458330")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000052")]
	public int LinePosition
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x4458340", Offset = "0x4458340", VA = "0x4458340")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x44580B0", Offset = "0x44580B0", VA = "0x44580B0")]
	public ValidatingReaderNodeData()
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4458190", Offset = "0x4458190", VA = "0x4458190")]
	public ValidatingReaderNodeData(XmlNodeType nodeType)
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x4458210", Offset = "0x4458210", VA = "0x4458210")]
	public string GetAtomizedNameWPrefix(XmlNameTable nameTable)
	{
		return null;
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x44580D0", Offset = "0x44580D0", VA = "0x44580D0")]
	internal void Clear(XmlNodeType nodeType)
	{
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x4458350", Offset = "0x4458350", VA = "0x4458350")]
	internal void SetLineInfo(int lineNo, int linePos)
	{
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x4458360", Offset = "0x4458360", VA = "0x4458360")]
	internal void SetLineInfo(IXmlLineInfo lineInfo)
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x4458480", Offset = "0x4458480", VA = "0x4458480")]
	internal void SetItemData(string localName, string prefix, string ns, int depth)
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x4458500", Offset = "0x4458500", VA = "0x4458500")]
	internal void SetItemData(string value)
	{
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x4458540", Offset = "0x4458540", VA = "0x4458540")]
	internal void SetItemData(string value, string originalStringValue)
	{
	}
}
