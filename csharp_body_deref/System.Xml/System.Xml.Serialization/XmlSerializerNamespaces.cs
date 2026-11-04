// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlSerializerNamespaces
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000101")]
public class XmlSerializerNamespaces
{
	[Token(Token = "0x40005F1")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable namespaces;

	[Token(Token = "0x17000330")]
	public int Count
	{
		[Token(Token = "0x6000CB2")]
		[Address(RVA = "0x2758E90", Offset = "0x2757490", VA = "0x182758E90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000331")]
	internal ArrayList NamespaceList
	{
		[Token(Token = "0x6000CB3")]
		[Address(RVA = "0x2758F20", Offset = "0x2757520", VA = "0x182758F20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000332")]
	internal Hashtable Namespaces
	{
		[Token(Token = "0x6000CB4")]
		[Address(RVA = "0x2759300", Offset = "0x2757900", VA = "0x182759300")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CB5")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public XmlSerializerNamespaces()
	{
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x2758C80", Offset = "0x2757280", VA = "0x182758C80")]
	public void Add(string prefix, string ns)
	{
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x2758BD0", Offset = "0x27571D0", VA = "0x182758BD0")]
	internal void AddInternal(string prefix, string ns)
	{
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x2758DA0", Offset = "0x27573A0", VA = "0x182758DA0")]
	public XmlQualifiedName[] ToArray()
	{
		return null;
	}
}
