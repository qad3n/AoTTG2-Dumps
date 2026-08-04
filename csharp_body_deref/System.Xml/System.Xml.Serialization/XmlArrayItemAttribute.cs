// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlArrayItemAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000119")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, AllowMultiple = true)]
public class XmlArrayItemAttribute : Attribute
{
	[Token(Token = "0x4000630")]
	[FieldOffset(Offset = "0x10")]
	private string dataType;

	[Token(Token = "0x4000631")]
	[FieldOffset(Offset = "0x18")]
	private string elementName;

	[Token(Token = "0x4000632")]
	[FieldOffset(Offset = "0x20")]
	private XmlSchemaForm form;

	[Token(Token = "0x4000633")]
	[FieldOffset(Offset = "0x28")]
	private string ns;

	[Token(Token = "0x4000634")]
	[FieldOffset(Offset = "0x30")]
	private bool isNullable;

	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x31")]
	private bool isNullableSpecified;

	[Token(Token = "0x4000636")]
	[FieldOffset(Offset = "0x34")]
	private int nestingLevel;

	[Token(Token = "0x4000637")]
	[FieldOffset(Offset = "0x38")]
	private Type type;

	[Token(Token = "0x1700034C")]
	public string DataType
	{
		[Token(Token = "0x6000D10")]
		[Address(RVA = "0x4811180", Offset = "0x4811180", VA = "0x4811180")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034D")]
	public string ElementName
	{
		[Token(Token = "0x6000D11")]
		[Address(RVA = "0x48111B0", Offset = "0x48111B0", VA = "0x48111B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034E")]
	public XmlSchemaForm Form
	{
		[Token(Token = "0x6000D12")]
		[Address(RVA = "0x48111E0", Offset = "0x48111E0", VA = "0x48111E0")]
		get
		{
			return default(XmlSchemaForm);
		}
	}

	[Token(Token = "0x1700034F")]
	public string Namespace
	{
		[Token(Token = "0x6000D13")]
		[Address(RVA = "0x48111F0", Offset = "0x48111F0", VA = "0x48111F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000350")]
	public bool IsNullable
	{
		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x4811200", Offset = "0x4811200", VA = "0x4811200")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000351")]
	internal bool IsNullableSpecified
	{
		[Token(Token = "0x6000D15")]
		[Address(RVA = "0x4811210", Offset = "0x4811210", VA = "0x4811210")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000352")]
	public Type Type
	{
		[Token(Token = "0x6000D16")]
		[Address(RVA = "0x4811220", Offset = "0x4811220", VA = "0x4811220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000353")]
	public int NestingLevel
	{
		[Token(Token = "0x6000D17")]
		[Address(RVA = "0x4811230", Offset = "0x4811230", VA = "0x4811230")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x4811240", Offset = "0x4811240", VA = "0x4811240")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
