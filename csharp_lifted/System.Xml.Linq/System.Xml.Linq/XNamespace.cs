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
		[Address(RVA = "0x5FA75C0", Offset = "0x5FA65C0", VA = "0x5FA75C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000021")]
	public static XNamespace None
	{
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x5FA7390", Offset = "0x5FA6390", VA = "0x5FA7390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000022")]
	public static XNamespace Xml
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x5FA76C0", Offset = "0x5FA66C0", VA = "0x5FA76C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000023")]
	public static XNamespace Xmlns
	{
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x5FA7710", Offset = "0x5FA6710", VA = "0x5FA7710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x5FA74C0", Offset = "0x5FA64C0", VA = "0x5FA74C0")]
	internal XNamespace(string namespaceName)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x5FA3030", Offset = "0x5FA2030", VA = "0x5FA3030")]
	public XName GetName(string localName)
	{
		return null;
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x5FA75D0", Offset = "0x5FA65D0", VA = "0x5FA75D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x5FA5A50", Offset = "0x5FA4A50", VA = "0x5FA5A50")]
	public static XNamespace Get(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x5FA7760", Offset = "0x5FA6760", VA = "0x5FA7760")]
	[CLSCompliant(false)]
	public static implicit operator XNamespace(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x5FA7770", Offset = "0x5FA6770", VA = "0x5FA7770", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x5FA7780", Offset = "0x5FA6780", VA = "0x5FA7780", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x5FA4740", Offset = "0x5FA3740", VA = "0x5FA4740")]
	public static bool operator ==(XNamespace left, XNamespace right)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x5FA7790", Offset = "0x5FA6790", VA = "0x5FA7790")]
	public static bool operator !=(XNamespace left, XNamespace right)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x5FA7290", Offset = "0x5FA6290", VA = "0x5FA7290")]
	internal XName GetName(string localName, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x5FA6EB0", Offset = "0x5FA5EB0", VA = "0x5FA6EB0")]
	internal static XNamespace Get(string namespaceName, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x5FA77A0", Offset = "0x5FA67A0", VA = "0x5FA77A0")]
	private static string ExtractLocalName(XName n)
	{
		return null;
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x5FA77C0", Offset = "0x5FA67C0", VA = "0x5FA77C0")]
	private static string ExtractNamespace(WeakReference r)
	{
		return null;
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x5FA75E0", Offset = "0x5FA65E0", VA = "0x5FA75E0")]
	private static XNamespace EnsureNamespace(ref WeakReference refNmsp, string namespaceName)
	{
		return null;
	}
}
