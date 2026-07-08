using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200011E")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, AllowMultiple = false)]
public class XmlChoiceIdentifierAttribute : Attribute
{
	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0x10")]
	private string memberName;

	[Token(Token = "0x1700036A")]
	public string MemberName
	{
		[Token(Token = "0x6000D3B")]
		[Address(RVA = "0x44D69B0", Offset = "0x44D69B0", VA = "0x44D69B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x44D64D0", Offset = "0x44D64D0", VA = "0x44D64D0")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
