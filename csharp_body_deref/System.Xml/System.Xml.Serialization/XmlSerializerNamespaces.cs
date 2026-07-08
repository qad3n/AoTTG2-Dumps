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
		[Address(RVA = "0x44CBAD0", Offset = "0x44CBAD0", VA = "0x44CBAD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000331")]
	internal ArrayList NamespaceList
	{
		[Token(Token = "0x6000CB3")]
		[Address(RVA = "0x44CB500", Offset = "0x44CB500", VA = "0x44CB500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000332")]
	internal Hashtable Namespaces
	{
		[Token(Token = "0x6000CB4")]
		[Address(RVA = "0x44CB380", Offset = "0x44CB380", VA = "0x44CB380")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CB5")]
		[Address(RVA = "0x44CBB60", Offset = "0x44CBB60", VA = "0x44CBB60")]
		set
		{
		}
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x44CB160", Offset = "0x44CB160", VA = "0x44CB160")]
	public XmlSerializerNamespaces()
	{
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x44CB170", Offset = "0x44CB170", VA = "0x44CB170")]
	public void Add(string prefix, string ns)
	{
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x44CB2E0", Offset = "0x44CB2E0", VA = "0x44CB2E0")]
	internal void AddInternal(string prefix, string ns)
	{
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x44CB400", Offset = "0x44CB400", VA = "0x44CB400")]
	public XmlQualifiedName[] ToArray()
	{
		return null;
	}
}
