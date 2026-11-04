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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000021")]
	public static XNamespace None
	{
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x25EC130", Offset = "0x25EA730", VA = "0x1825EC130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000022")]
	public static XNamespace Xml
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x25EC180", Offset = "0x25EA780", VA = "0x1825EC180")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000023")]
	public static XNamespace Xmlns
	{
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x25EC1E0", Offset = "0x25EA7E0", VA = "0x1825EC1E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x25EC030", Offset = "0x25EA630", VA = "0x1825EC030")]
	internal XNamespace(string namespaceName)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x25EBB60", Offset = "0x25EA160", VA = "0x1825EBB60")]
	public XName GetName(string localName)
	{
		return null;
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x25EBFC0", Offset = "0x25EA5C0", VA = "0x1825EBFC0")]
	public static XNamespace Get(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x25EC240", Offset = "0x25EA840", VA = "0x1825EC240")]
	[CLSCompliant(false)]
	public static implicit operator XNamespace(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x841F20", Offset = "0x840520", VA = "0x180841F20", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x841F20", Offset = "0x840520", VA = "0x180841F20")]
	public static bool operator ==(XNamespace left, XNamespace right)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x5286D0", Offset = "0x526CD0", VA = "0x1805286D0")]
	public static bool operator !=(XNamespace left, XNamespace right)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x25EB9C0", Offset = "0x25E9FC0", VA = "0x1825EB9C0")]
	internal XName GetName(string localName, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x25EBBE0", Offset = "0x25EA1E0", VA = "0x1825EBBE0")]
	internal static XNamespace Get(string namespaceName, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x111BC10", Offset = "0x111A210", VA = "0x18111BC10")]
	private static string ExtractLocalName(XName n)
	{
		return null;
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x25EB940", Offset = "0x25E9F40", VA = "0x1825EB940")]
	private static string ExtractNamespace(WeakReference r)
	{
		return null;
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x25EB840", Offset = "0x25E9E40", VA = "0x1825EB840")]
	private static XNamespace EnsureNamespace(ref WeakReference refNmsp, string namespaceName)
	{
		return null;
	}
}
