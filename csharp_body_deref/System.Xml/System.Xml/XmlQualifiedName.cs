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
		[Address(RVA = "0x44C45F0", Offset = "0x44C45F0", VA = "0x44C45F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030A")]
	public string Name
	{
		[Token(Token = "0x6000C12")]
		[Address(RVA = "0x44C4600", Offset = "0x44C4600", VA = "0x44C4600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030B")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000C14")]
		[Address(RVA = "0x44C4910", Offset = "0x44C4910", VA = "0x44C4910")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x44C4430", Offset = "0x44C4430", VA = "0x44C4430")]
	public XmlQualifiedName()
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x44C4550", Offset = "0x44C4550", VA = "0x44C4550")]
	public XmlQualifiedName(string name)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x44C44C0", Offset = "0x44C44C0", VA = "0x44C44C0")]
	public XmlQualifiedName(string name, string ns)
	{
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x44C4610", Offset = "0x44C4610", VA = "0x44C4610", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x44C4940", Offset = "0x44C4940", VA = "0x44C4940", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x44C4990", Offset = "0x44C4990", VA = "0x44C4990", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x44C4B60", Offset = "0x44C4B60", VA = "0x44C4B60")]
	public static bool operator ==(XmlQualifiedName a, XmlQualifiedName b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x44C4AC0", Offset = "0x44C4AC0", VA = "0x44C4AC0")]
	public static bool operator !=(XmlQualifiedName a, XmlQualifiedName b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x44C4BC0", Offset = "0x44C4BC0", VA = "0x44C4BC0")]
	public static string ToString(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x44C4720", Offset = "0x44C4720", VA = "0x44C4720")]
	private static HashCodeOfStringDelegate GetHashCodeDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x44C4C20", Offset = "0x44C4C20", VA = "0x44C4C20")]
	private static bool IsRandomizedHashingDisabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x44C4CE0", Offset = "0x44C4CE0", VA = "0x44C4CE0")]
	private static int GetHashCodeOfString(string s, int length, long additionalEntropy)
	{
		return default(int);
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x44C4D00", Offset = "0x44C4D00", VA = "0x44C4D00")]
	internal void Init(string name, string ns)
	{
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x44C4D40", Offset = "0x44C4D40", VA = "0x44C4D40")]
	internal void SetNamespace(string ns)
	{
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x44C4D50", Offset = "0x44C4D50", VA = "0x44C4D50")]
	internal void Verify()
	{
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x44C4E20", Offset = "0x44C4E20", VA = "0x44C4E20")]
	internal void Atomize(XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x44C4E90", Offset = "0x44C4E90", VA = "0x44C4E90")]
	internal static XmlQualifiedName Parse(string s, IXmlNamespaceResolver nsmgr, out string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x44C50A0", Offset = "0x44C50A0", VA = "0x44C50A0")]
	internal XmlQualifiedName Clone()
	{
		return null;
	}
}
