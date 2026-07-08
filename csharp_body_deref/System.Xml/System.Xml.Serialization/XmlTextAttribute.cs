using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000145")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue)]
public class XmlTextAttribute : Attribute
{
	[Token(Token = "0x40006CA")]
	[FieldOffset(Offset = "0x10")]
	private string dataType;

	[Token(Token = "0x40006CB")]
	[FieldOffset(Offset = "0x18")]
	private Type type;

	[Token(Token = "0x17000398")]
	public string DataType
	{
		[Token(Token = "0x6000E78")]
		[Address(RVA = "0x44FA370", Offset = "0x44FA370", VA = "0x44FA370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000399")]
	public Type Type
	{
		[Token(Token = "0x6000E79")]
		[Address(RVA = "0x44FA3A0", Offset = "0x44FA3A0", VA = "0x44FA3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x44FA360", Offset = "0x44FA360", VA = "0x44FA360")]
	public XmlTextAttribute()
	{
	}

	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x44FA3B0", Offset = "0x44FA3B0", VA = "0x44FA3B0")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
