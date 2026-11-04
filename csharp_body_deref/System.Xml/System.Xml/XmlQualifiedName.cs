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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030A")]
	public string Name
	{
		[Token(Token = "0x6000C12")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030B")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000C14")]
		[Address(RVA = "0x2758310", Offset = "0x2756910", VA = "0x182758310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x2758270", Offset = "0x2756870", VA = "0x182758270")]
	public XmlQualifiedName()
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x2758140", Offset = "0x2756740", VA = "0x182758140")]
	public XmlQualifiedName(string name)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x27581E0", Offset = "0x27567E0", VA = "0x1827581E0")]
	public XmlQualifiedName(string name, string ns)
	{
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x2757B60", Offset = "0x2756160", VA = "0x182757B60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x2757EB0", Offset = "0x27564B0", VA = "0x182757EB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x2757850", Offset = "0x2755E50", VA = "0x182757850", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x2758350", Offset = "0x2756950", VA = "0x182758350")]
	public static bool operator ==(XmlQualifiedName a, XmlQualifiedName b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x27583C0", Offset = "0x27569C0", VA = "0x1827583C0")]
	public static bool operator !=(XmlQualifiedName a, XmlQualifiedName b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x2757F10", Offset = "0x2756510", VA = "0x182757F10")]
	public static string ToString(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x2757970", Offset = "0x2755F70", VA = "0x182757970")]
	private static HashCodeOfStringDelegate GetHashCodeDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	private static bool IsRandomizedHashingDisabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0xE40100", Offset = "0xE3E700", VA = "0x180E40100")]
	private static int GetHashCodeOfString(string s, int length, long additionalEntropy)
	{
		return default(int);
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x2757C60", Offset = "0x2756260", VA = "0x182757C60")]
	internal void Init(string name, string ns)
	{
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
	internal void SetNamespace(string ns)
	{
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x2757F80", Offset = "0x2756580", VA = "0x182757F80")]
	internal void Verify()
	{
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x2757750", Offset = "0x2755D50", VA = "0x182757750")]
	internal void Atomize(XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x2757CA0", Offset = "0x27562A0", VA = "0x182757CA0")]
	internal static XmlQualifiedName Parse(string s, IXmlNamespaceResolver nsmgr, out string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x27577D0", Offset = "0x2755DD0", VA = "0x1827577D0")]
	internal XmlQualifiedName Clone()
	{
		return null;
	}
}
