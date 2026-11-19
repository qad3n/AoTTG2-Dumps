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
		[Address(RVA = "0x611F6C0", Offset = "0x611E6C0", VA = "0x611F6C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0x611F6F0", Offset = "0x611E6F0", VA = "0x611F6F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000384")]
	public string ElementName
	{
		[Token(Token = "0x6000D8E")]
		[Address(RVA = "0x611B220", Offset = "0x611A220", VA = "0x611B220")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D8F")]
		[Address(RVA = "0x611F700", Offset = "0x611E700", VA = "0x611F700")]
		set
		{
		}
	}

	[Token(Token = "0x17000385")]
	public bool IsNullable
	{
		[Token(Token = "0x6000D90")]
		[Address(RVA = "0x611F710", Offset = "0x611E710", VA = "0x611F710")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D91")]
		[Address(RVA = "0x611F720", Offset = "0x611E720", VA = "0x611F720")]
		set
		{
		}
	}

	[Token(Token = "0x17000386")]
	public string Namespace
	{
		[Token(Token = "0x6000D92")]
		[Address(RVA = "0x611F730", Offset = "0x611E730", VA = "0x611F730")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D93")]
		[Address(RVA = "0x611F740", Offset = "0x611E740", VA = "0x611F740")]
		set
		{
		}
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x611F680", Offset = "0x611E680", VA = "0x611F680")]
	public XmlRootAttribute()
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x611F690", Offset = "0x611E690", VA = "0x611F690")]
	public XmlRootAttribute(string elementName)
	{
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x6115C80", Offset = "0x6114C80", VA = "0x6115C80")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
