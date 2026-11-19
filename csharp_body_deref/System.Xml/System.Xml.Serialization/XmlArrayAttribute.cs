// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlArrayAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000118")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, AllowMultiple = false)]
public class XmlArrayAttribute : Attribute
{
	[Token(Token = "0x400062B")]
	[FieldOffset(Offset = "0x10")]
	private string elementName;

	[Token(Token = "0x400062C")]
	[FieldOffset(Offset = "0x18")]
	private XmlSchemaForm form;

	[Token(Token = "0x400062D")]
	[FieldOffset(Offset = "0x1C")]
	private bool isNullable;

	[Token(Token = "0x400062E")]
	[FieldOffset(Offset = "0x20")]
	private string ns;

	[Token(Token = "0x400062F")]
	[FieldOffset(Offset = "0x28")]
	private int order;

	[Token(Token = "0x17000347")]
	public string ElementName
	{
		[Token(Token = "0x6000D0A")]
		[Address(RVA = "0x6113320", Offset = "0x6112320", VA = "0x6113320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000348")]
	public XmlSchemaForm Form
	{
		[Token(Token = "0x6000D0B")]
		[Address(RVA = "0x6113350", Offset = "0x6112350", VA = "0x6113350")]
		get
		{
			return default(XmlSchemaForm);
		}
	}

	[Token(Token = "0x17000349")]
	public bool IsNullable
	{
		[Token(Token = "0x6000D0C")]
		[Address(RVA = "0x6113360", Offset = "0x6112360", VA = "0x6113360")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700034A")]
	public string Namespace
	{
		[Token(Token = "0x6000D0D")]
		[Address(RVA = "0x6113370", Offset = "0x6112370", VA = "0x6113370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034B")]
	public int Order
	{
		[Token(Token = "0x6000D0E")]
		[Address(RVA = "0x6113380", Offset = "0x6112380", VA = "0x6113380")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x6113390", Offset = "0x6112390", VA = "0x6113390")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
