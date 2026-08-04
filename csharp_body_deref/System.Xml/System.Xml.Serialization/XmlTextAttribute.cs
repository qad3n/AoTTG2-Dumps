// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlTextAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4837AD0", Offset = "0x4837AD0", VA = "0x4837AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000399")]
	public Type Type
	{
		[Token(Token = "0x6000E79")]
		[Address(RVA = "0x4837B00", Offset = "0x4837B00", VA = "0x4837B00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x4837AC0", Offset = "0x4837AC0", VA = "0x4837AC0")]
	public XmlTextAttribute()
	{
	}

	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x4837B10", Offset = "0x4837B10", VA = "0x4837B10")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
