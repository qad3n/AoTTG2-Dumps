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
		[Address(RVA = "0x6104500", Offset = "0x6103500", VA = "0x6104500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030A")]
	public string Name
	{
		[Token(Token = "0x6000C12")]
		[Address(RVA = "0x6104510", Offset = "0x6103510", VA = "0x6104510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030B")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000C14")]
		[Address(RVA = "0x6104820", Offset = "0x6103820", VA = "0x6104820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x6104330", Offset = "0x6103330", VA = "0x6104330")]
	public XmlQualifiedName()
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x6104460", Offset = "0x6103460", VA = "0x6104460")]
	public XmlQualifiedName(string name)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x61043D0", Offset = "0x61033D0", VA = "0x61043D0")]
	public XmlQualifiedName(string name, string ns)
	{
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x6104520", Offset = "0x6103520", VA = "0x6104520", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x6104850", Offset = "0x6103850", VA = "0x6104850", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x61048A0", Offset = "0x61038A0", VA = "0x61048A0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x6104A70", Offset = "0x6103A70", VA = "0x6104A70")]
	public static bool operator ==(XmlQualifiedName a, XmlQualifiedName b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x61049D0", Offset = "0x61039D0", VA = "0x61049D0")]
	public static bool operator !=(XmlQualifiedName a, XmlQualifiedName b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x6104AD0", Offset = "0x6103AD0", VA = "0x6104AD0")]
	public static string ToString(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x6104620", Offset = "0x6103620", VA = "0x6104620")]
	private static HashCodeOfStringDelegate GetHashCodeDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x6104B30", Offset = "0x6103B30", VA = "0x6104B30")]
	private static bool IsRandomizedHashingDisabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x6104BF0", Offset = "0x6103BF0", VA = "0x6104BF0")]
	private static int GetHashCodeOfString(string s, int length, long additionalEntropy)
	{
		return default(int);
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x6104C10", Offset = "0x6103C10", VA = "0x6104C10")]
	internal void Init(string name, string ns)
	{
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x6104C50", Offset = "0x6103C50", VA = "0x6104C50")]
	internal void SetNamespace(string ns)
	{
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x6104C60", Offset = "0x6103C60", VA = "0x6104C60")]
	internal void Verify()
	{
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x6104D30", Offset = "0x6103D30", VA = "0x6104D30")]
	internal void Atomize(XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x6104DA0", Offset = "0x6103DA0", VA = "0x6104DA0")]
	internal static XmlQualifiedName Parse(string s, IXmlNamespaceResolver nsmgr, out string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x6104FB0", Offset = "0x6103FB0", VA = "0x6104FB0")]
	internal XmlQualifiedName Clone()
	{
		return null;
	}
}
