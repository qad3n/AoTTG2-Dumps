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
		[Address(RVA = "0x2759E80", Offset = "0x2758480", VA = "0x182759E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000399")]
	public Type Type
	{
		[Token(Token = "0x6000E79")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public XmlTextAttribute()
	{
	}

	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x278CBC0", Offset = "0x278B1C0", VA = "0x18278CBC0")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
