// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlTypeAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4837B90", Offset = "0x4837B90", VA = "0x4837B90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700039B")]
	public string Namespace
	{
		[Token(Token = "0x6000E7C")]
		[Address(RVA = "0x4837BA0", Offset = "0x4837BA0", VA = "0x4837BA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700039C")]
	public string TypeName
	{
		[Token(Token = "0x6000E7D")]
		[Address(RVA = "0x4837BB0", Offset = "0x4837BB0", VA = "0x4837BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E7E")]
	[Address(RVA = "0x4837BE0", Offset = "0x4837BE0", VA = "0x4837BE0")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
