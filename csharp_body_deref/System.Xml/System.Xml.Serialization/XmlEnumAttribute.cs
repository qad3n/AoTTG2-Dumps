// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlEnumAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000122")]
[AttributeUsage(AttributeTargets.Field)]
public class XmlEnumAttribute : Attribute
{
	[Token(Token = "0x4000655")]
	[FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x17000374")]
	public string Name
	{
		[Token(Token = "0x6000D53")]
		[Address(RVA = "0x4815840", Offset = "0x4815840", VA = "0x4815840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x4815810", Offset = "0x4815810", VA = "0x4815810")]
	public XmlEnumAttribute(string name)
	{
	}

	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x4813B10", Offset = "0x4813B10", VA = "0x4813B10")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
