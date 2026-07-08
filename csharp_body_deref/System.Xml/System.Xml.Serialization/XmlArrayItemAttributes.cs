using System.Collections;
using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200011A")]
public class XmlArrayItemAttributes : CollectionBase
{
	[Token(Token = "0x17000354")]
	public XmlArrayItemAttribute this[int index]
	{
		[Token(Token = "0x6000D19")]
		[Address(RVA = "0x44D3C40", Offset = "0x44D3C40", VA = "0x44D3C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x44D3D30", Offset = "0x44D3D30", VA = "0x44D3D30")]
	public int Add(XmlArrayItemAttribute attribute)
	{
		return default(int);
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x44D3DE0", Offset = "0x44D3DE0", VA = "0x44D3DE0")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x44D3E90", Offset = "0x44D3E90", VA = "0x44D3E90")]
	public XmlArrayItemAttributes()
	{
	}
}
