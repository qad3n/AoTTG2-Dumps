using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000116")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, AllowMultiple = true)]
public class XmlAnyElementAttribute : Attribute
{
	[Token(Token = "0x4000628")]
	[FieldOffset(Offset = "0x10")]
	private string elementName;

	[Token(Token = "0x4000629")]
	[FieldOffset(Offset = "0x18")]
	private string ns;

	[Token(Token = "0x400062A")]
	[FieldOffset(Offset = "0x20")]
	private int order;

	[Token(Token = "0x17000342")]
	public string Name
	{
		[Token(Token = "0x6000D01")]
		[Address(RVA = "0x44D3220", Offset = "0x44D3220", VA = "0x44D3220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000343")]
	public string Namespace
	{
		[Token(Token = "0x6000D02")]
		[Address(RVA = "0x44D3250", Offset = "0x44D3250", VA = "0x44D3250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000344")]
	public int Order
	{
		[Token(Token = "0x6000D03")]
		[Address(RVA = "0x44D3260", Offset = "0x44D3260", VA = "0x44D3260")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x44D3210", Offset = "0x44D3210", VA = "0x44D3210")]
	public XmlAnyElementAttribute()
	{
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x44D3270", Offset = "0x44D3270", VA = "0x44D3270")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
