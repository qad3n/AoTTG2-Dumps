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
		[Address(RVA = "0x2759E80", Offset = "0x2758480", VA = "0x182759E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000348")]
	public XmlSchemaForm Form
	{
		[Token(Token = "0x6000D0B")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(XmlSchemaForm);
		}
	}

	[Token(Token = "0x17000349")]
	public bool IsNullable
	{
		[Token(Token = "0x6000D0C")]
		[Address(RVA = "0xE5A3F0", Offset = "0xE589F0", VA = "0x180E5A3F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700034A")]
	public string Namespace
	{
		[Token(Token = "0x6000D0D")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034B")]
	public int Order
	{
		[Token(Token = "0x6000D0E")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x275A320", Offset = "0x2758920", VA = "0x18275A320")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
