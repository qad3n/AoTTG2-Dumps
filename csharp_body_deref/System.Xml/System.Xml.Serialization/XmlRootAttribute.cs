// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlRootAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200012E")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface | AttributeTargets.ReturnValue)]
public class XmlRootAttribute : Attribute
{
	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x10")]
	private string dataType;

	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x18")]
	private string elementName;

	[Token(Token = "0x4000675")]
	[FieldOffset(Offset = "0x20")]
	private bool isNullable;

	[Token(Token = "0x4000676")]
	[FieldOffset(Offset = "0x28")]
	private string ns;

	[Token(Token = "0x17000383")]
	public string DataType
	{
		[Token(Token = "0x6000D8C")]
		[Address(RVA = "0x2759E80", Offset = "0x2758480", VA = "0x182759E80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000384")]
	public string ElementName
	{
		[Token(Token = "0x6000D8E")]
		[Address(RVA = "0x1A8E540", Offset = "0x1A8CB40", VA = "0x181A8E540")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D8F")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000385")]
	public bool IsNullable
	{
		[Token(Token = "0x6000D90")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D91")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000386")]
	public string Namespace
	{
		[Token(Token = "0x6000D92")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D93")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x27662C0", Offset = "0x27648C0", VA = "0x1827662C0")]
	public XmlRootAttribute()
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x27662D0", Offset = "0x27648D0", VA = "0x1827662D0")]
	public XmlRootAttribute(string elementName)
	{
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x2766200", Offset = "0x2764800", VA = "0x182766200")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
