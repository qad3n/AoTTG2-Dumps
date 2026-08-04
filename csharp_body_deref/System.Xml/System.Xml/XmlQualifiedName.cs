// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlQualifiedName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Serializable]
[Token(Token = "0x20000ED")]
public class XmlQualifiedName
{
	[Token(Token = "0x20000EE")]
	private delegate int HashCodeOfStringDelegate(string s, int sLen, long additionalEntropy);

	[Token(Token = "0x40005B5")]
	[FieldOffset(Offset = "0x0")]
	private static HashCodeOfStringDelegate hashCodeDelegate;

	[Token(Token = "0x40005B6")]
	[FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x40005B7")]
	[FieldOffset(Offset = "0x18")]
	private string ns;

	[NonSerialized]
	[Token(Token = "0x40005B8")]
	[FieldOffset(Offset = "0x20")]
	private int hash;

	[Token(Token = "0x40005B9")]
	[FieldOffset(Offset = "0x8")]
	public static readonly XmlQualifiedName Empty;

	[Token(Token = "0x17000309")]
	public string Namespace
	{
		[Token(Token = "0x6000C11")]
		[Address(RVA = "0x4801D50", Offset = "0x4801D50", VA = "0x4801D50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030A")]
	public string Name
	{
		[Token(Token = "0x6000C12")]
		[Address(RVA = "0x4801D60", Offset = "0x4801D60", VA = "0x4801D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030B")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000C14")]
		[Address(RVA = "0x4802070", Offset = "0x4802070", VA = "0x4802070")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x4801B90", Offset = "0x4801B90", VA = "0x4801B90")]
	public XmlQualifiedName()
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x4801CB0", Offset = "0x4801CB0", VA = "0x4801CB0")]
	public XmlQualifiedName(string name)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x4801C20", Offset = "0x4801C20", VA = "0x4801C20")]
	public XmlQualifiedName(string name, string ns)
	{
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x4801D70", Offset = "0x4801D70", VA = "0x4801D70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x48020A0", Offset = "0x48020A0", VA = "0x48020A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x48020F0", Offset = "0x48020F0", VA = "0x48020F0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x48022C0", Offset = "0x48022C0", VA = "0x48022C0")]
	public static bool operator ==(XmlQualifiedName a, XmlQualifiedName b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x4802220", Offset = "0x4802220", VA = "0x4802220")]
	public static bool operator !=(XmlQualifiedName a, XmlQualifiedName b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x4802320", Offset = "0x4802320", VA = "0x4802320")]
	public static string ToString(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x4801E80", Offset = "0x4801E80", VA = "0x4801E80")]
	private static HashCodeOfStringDelegate GetHashCodeDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x4802380", Offset = "0x4802380", VA = "0x4802380")]
	private static bool IsRandomizedHashingDisabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x4802440", Offset = "0x4802440", VA = "0x4802440")]
	private static int GetHashCodeOfString(string s, int length, long additionalEntropy)
	{
		return default(int);
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x4802460", Offset = "0x4802460", VA = "0x4802460")]
	internal void Init(string name, string ns)
	{
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x48024A0", Offset = "0x48024A0", VA = "0x48024A0")]
	internal void SetNamespace(string ns)
	{
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x48024B0", Offset = "0x48024B0", VA = "0x48024B0")]
	internal void Verify()
	{
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x4802580", Offset = "0x4802580", VA = "0x4802580")]
	internal void Atomize(XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x48025F0", Offset = "0x48025F0", VA = "0x48025F0")]
	internal static XmlQualifiedName Parse(string s, IXmlNamespaceResolver nsmgr, out string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x4802800", Offset = "0x4802800", VA = "0x4802800")]
	internal XmlQualifiedName Clone()
	{
		return null;
	}
}
