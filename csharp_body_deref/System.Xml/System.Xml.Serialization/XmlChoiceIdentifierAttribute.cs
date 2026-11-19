// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlChoiceIdentifierAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200011E")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, AllowMultiple = false)]
public class XmlChoiceIdentifierAttribute : Attribute
{
	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0x10")]
	private string memberName;

	[Token(Token = "0x1700036A")]
	public string MemberName
	{
		[Token(Token = "0x6000D3B")]
		[Address(RVA = "0x61161A0", Offset = "0x61151A0", VA = "0x61161A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x6115D30", Offset = "0x6114D30", VA = "0x6115D30")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
