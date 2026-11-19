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
		[Address(RVA = "0x6112D10", Offset = "0x6111D10", VA = "0x6112D10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000343")]
	public string Namespace
	{
		[Token(Token = "0x6000D02")]
		[Address(RVA = "0x6112D40", Offset = "0x6111D40", VA = "0x6112D40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000344")]
	public int Order
	{
		[Token(Token = "0x6000D03")]
		[Address(RVA = "0x6112D50", Offset = "0x6111D50", VA = "0x6112D50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x6112D00", Offset = "0x6111D00", VA = "0x6112D00")]
	public XmlAnyElementAttribute()
	{
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x6112D60", Offset = "0x6111D60", VA = "0x6112D60")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
