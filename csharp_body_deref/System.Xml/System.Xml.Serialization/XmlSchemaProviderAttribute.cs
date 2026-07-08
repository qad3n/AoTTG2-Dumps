using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200012F")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Interface)]
public sealed class XmlSchemaProviderAttribute : Attribute
{
	[Token(Token = "0x4000677")]
	[FieldOffset(Offset = "0x10")]
	private string _methodName;

	[Token(Token = "0x4000678")]
	[FieldOffset(Offset = "0x18")]
	private bool _isAny;

	[Token(Token = "0x17000387")]
	public string MethodName
	{
		[Token(Token = "0x6000D96")]
		[Address(RVA = "0x44E0F80", Offset = "0x44E0F80", VA = "0x44E0F80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000388")]
	public bool IsAny
	{
		[Token(Token = "0x6000D97")]
		[Address(RVA = "0x44E0F90", Offset = "0x44E0F90", VA = "0x44E0F90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D98")]
		[Address(RVA = "0x44E0FA0", Offset = "0x44E0FA0", VA = "0x44E0FA0")]
		set
		{
		}
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x44E0F50", Offset = "0x44E0F50", VA = "0x44E0F50")]
	public XmlSchemaProviderAttribute(string methodName)
	{
	}
}
