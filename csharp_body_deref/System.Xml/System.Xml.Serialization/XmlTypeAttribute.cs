using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000146")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface)]
public class XmlTypeAttribute : Attribute
{
	[Token(Token = "0x40006CC")]
	[FieldOffset(Offset = "0x10")]
	private bool includeInSchema;

	[Token(Token = "0x40006CD")]
	[FieldOffset(Offset = "0x18")]
	private string ns;

	[Token(Token = "0x40006CE")]
	[FieldOffset(Offset = "0x20")]
	private string typeName;

	[Token(Token = "0x1700039A")]
	public bool IncludeInSchema
	{
		[Token(Token = "0x6000E7B")]
		[Address(RVA = "0x44FA430", Offset = "0x44FA430", VA = "0x44FA430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700039B")]
	public string Namespace
	{
		[Token(Token = "0x6000E7C")]
		[Address(RVA = "0x44FA440", Offset = "0x44FA440", VA = "0x44FA440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700039C")]
	public string TypeName
	{
		[Token(Token = "0x6000E7D")]
		[Address(RVA = "0x44FA450", Offset = "0x44FA450", VA = "0x44FA450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E7E")]
	[Address(RVA = "0x44FA480", Offset = "0x44FA480", VA = "0x44FA480")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
