// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlAnyElementAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4810980", Offset = "0x4810980", VA = "0x4810980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000343")]
	public string Namespace
	{
		[Token(Token = "0x6000D02")]
		[Address(RVA = "0x48109B0", Offset = "0x48109B0", VA = "0x48109B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000344")]
	public int Order
	{
		[Token(Token = "0x6000D03")]
		[Address(RVA = "0x48109C0", Offset = "0x48109C0", VA = "0x48109C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x4810970", Offset = "0x4810970", VA = "0x4810970")]
	public XmlAnyElementAttribute()
	{
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x48109D0", Offset = "0x48109D0", VA = "0x48109D0")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
