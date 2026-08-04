// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.XNamespace
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4695800", Offset = "0x4695800", VA = "0x4695800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000021")]
	public static XNamespace None
	{
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x46955D0", Offset = "0x46955D0", VA = "0x46955D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000022")]
	public static XNamespace Xml
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x4695920", Offset = "0x4695920", VA = "0x4695920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000023")]
	public static XNamespace Xmlns
	{
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x4695970", Offset = "0x4695970", VA = "0x4695970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4695700", Offset = "0x4695700", VA = "0x4695700")]
	internal XNamespace(string namespaceName)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4691650", Offset = "0x4691650", VA = "0x4691650")]
	public XName GetName(string localName)
	{
		return null;
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4695810", Offset = "0x4695810", VA = "0x4695810", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4693E90", Offset = "0x4693E90", VA = "0x4693E90")]
	public static XNamespace Get(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x46959C0", Offset = "0x46959C0", VA = "0x46959C0")]
	[CLSCompliant(false)]
	public static implicit operator XNamespace(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x46959D0", Offset = "0x46959D0", VA = "0x46959D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x46959E0", Offset = "0x46959E0", VA = "0x46959E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4692CC0", Offset = "0x4692CC0", VA = "0x4692CC0")]
	public static bool operator ==(XNamespace left, XNamespace right)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x46959F0", Offset = "0x46959F0", VA = "0x46959F0")]
	public static bool operator !=(XNamespace left, XNamespace right)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x46954D0", Offset = "0x46954D0", VA = "0x46954D0")]
	internal XName GetName(string localName, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4695020", Offset = "0x4695020", VA = "0x4695020")]
	internal static XNamespace Get(string namespaceName, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4695A00", Offset = "0x4695A00", VA = "0x4695A00")]
	private static string ExtractLocalName(XName n)
	{
		return null;
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4695A20", Offset = "0x4695A20", VA = "0x4695A20")]
	private static string ExtractNamespace(WeakReference r)
	{
		return null;
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4695820", Offset = "0x4695820", VA = "0x4695820")]
	private static XNamespace EnsureNamespace(ref WeakReference refNmsp, string namespaceName)
	{
		return null;
	}
}
