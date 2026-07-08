using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x200001D")]
public sealed class XNamespace
{
	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x0")]
	private static XHashtable<WeakReference> s_namespaces;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x8")]
	private static WeakReference s_refNone;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x10")]
	private static WeakReference s_refXml;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x18")]
	private static WeakReference s_refXmlns;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x10")]
	private string _namespaceName;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x18")]
	private int _hashCode;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x20")]
	private XHashtable<XName> _names;

	[Token(Token = "0x17000020")]
	public string NamespaceName
	{
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x4344F30", Offset = "0x4344F30", VA = "0x4344F30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000021")]
	public static XNamespace None
	{
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x4344D00", Offset = "0x4344D00", VA = "0x4344D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000022")]
	public static XNamespace Xml
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x4345050", Offset = "0x4345050", VA = "0x4345050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000023")]
	public static XNamespace Xmlns
	{
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x43450A0", Offset = "0x43450A0", VA = "0x43450A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4344E30", Offset = "0x4344E30", VA = "0x4344E30")]
	internal XNamespace(string namespaceName)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4340D80", Offset = "0x4340D80", VA = "0x4340D80")]
	public XName GetName(string localName)
	{
		return null;
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4344F40", Offset = "0x4344F40", VA = "0x4344F40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x43435C0", Offset = "0x43435C0", VA = "0x43435C0")]
	public static XNamespace Get(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x43450F0", Offset = "0x43450F0", VA = "0x43450F0")]
	[CLSCompliant(false)]
	public static implicit operator XNamespace(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4345100", Offset = "0x4345100", VA = "0x4345100", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4345110", Offset = "0x4345110", VA = "0x4345110", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x43423F0", Offset = "0x43423F0", VA = "0x43423F0")]
	public static bool operator ==(XNamespace left, XNamespace right)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4345120", Offset = "0x4345120", VA = "0x4345120")]
	public static bool operator !=(XNamespace left, XNamespace right)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4344C00", Offset = "0x4344C00", VA = "0x4344C00")]
	internal XName GetName(string localName, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4344750", Offset = "0x4344750", VA = "0x4344750")]
	internal static XNamespace Get(string namespaceName, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4345130", Offset = "0x4345130", VA = "0x4345130")]
	private static string ExtractLocalName(XName n)
	{
		return null;
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4345150", Offset = "0x4345150", VA = "0x4345150")]
	private static string ExtractNamespace(WeakReference r)
	{
		return null;
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4344F50", Offset = "0x4344F50", VA = "0x4344F50")]
	private static XNamespace EnsureNamespace(ref WeakReference refNmsp, string namespaceName)
	{
		return null;
	}
}
