using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000122")]
[AttributeUsage(AttributeTargets.Field)]
public class XmlEnumAttribute : Attribute
{
	[Token(Token = "0x4000655")]
	[FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x17000374")]
	public string Name
	{
		[Token(Token = "0x6000D53")]
		[Address(RVA = "0x44D80E0", Offset = "0x44D80E0", VA = "0x44D80E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x44D80B0", Offset = "0x44D80B0", VA = "0x44D80B0")]
	public XmlEnumAttribute(string name)
	{
	}

	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x44D63B0", Offset = "0x44D63B0", VA = "0x44D63B0")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
