using System.Collections;
using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200011C")]
public class XmlAttributeOverrides
{
	[Token(Token = "0x400063D")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable overrides;

	[Token(Token = "0x17000359")]
	public XmlAttributes this[Type type]
	{
		[Token(Token = "0x6000D25")]
		[Address(RVA = "0x44D4100", Offset = "0x44D4100", VA = "0x44D4100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700035A")]
	public XmlAttributes this[Type type, string member]
	{
		[Token(Token = "0x6000D26")]
		[Address(RVA = "0x44D4120", Offset = "0x44D4120", VA = "0x44D4120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x44D4090", Offset = "0x44D4090", VA = "0x44D4090")]
	public XmlAttributeOverrides()
	{
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x44D4200", Offset = "0x44D4200", VA = "0x44D4200")]
	private TypeMember GetKey(Type type, string member)
	{
		return null;
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x44D4260", Offset = "0x44D4260", VA = "0x44D4260")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
