// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlSchemaProviderAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000388")]
	public bool IsAny
	{
		[Token(Token = "0x6000D97")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D98")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public XmlSchemaProviderAttribute(string methodName)
	{
	}
}
