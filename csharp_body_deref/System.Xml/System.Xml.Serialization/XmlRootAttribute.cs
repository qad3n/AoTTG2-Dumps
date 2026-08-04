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
		[Address(RVA = "0x481E620", Offset = "0x481E620", VA = "0x481E620")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0x481E650", Offset = "0x481E650", VA = "0x481E650")]
		set
		{
		}
	}

	[Token(Token = "0x17000384")]
	public string ElementName
	{
		[Token(Token = "0x6000D8E")]
		[Address(RVA = "0x4819630", Offset = "0x4819630", VA = "0x4819630")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D8F")]
		[Address(RVA = "0x481E660", Offset = "0x481E660", VA = "0x481E660")]
		set
		{
		}
	}

	[Token(Token = "0x17000385")]
	public bool IsNullable
	{
		[Token(Token = "0x6000D90")]
		[Address(RVA = "0x481E670", Offset = "0x481E670", VA = "0x481E670")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D91")]
		[Address(RVA = "0x481E680", Offset = "0x481E680", VA = "0x481E680")]
		set
		{
		}
	}

	[Token(Token = "0x17000386")]
	public string Namespace
	{
		[Token(Token = "0x6000D92")]
		[Address(RVA = "0x481E690", Offset = "0x481E690", VA = "0x481E690")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D93")]
		[Address(RVA = "0x481E6A0", Offset = "0x481E6A0", VA = "0x481E6A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x481E5E0", Offset = "0x481E5E0", VA = "0x481E5E0")]
	public XmlRootAttribute()
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x481E5F0", Offset = "0x481E5F0", VA = "0x481E5F0")]
	public XmlRootAttribute(string elementName)
	{
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x4813B80", Offset = "0x4813B80", VA = "0x4813B80")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
