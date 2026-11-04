// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.AttributeProviderAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000172")]
[AttributeUsage(AttributeTargets.Property)]
public class AttributeProviderAttribute : Attribute
{
	[Token(Token = "0x170001C4")]
	public string TypeName
	{
		[Token(Token = "0x6000949")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C5")]
	public string PropertyName
	{
		[Token(Token = "0x600094A")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x2892790", Offset = "0x2890D90", VA = "0x182892790")]
	public AttributeProviderAttribute(string typeName)
	{
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x28925E0", Offset = "0x2890BE0", VA = "0x1828925E0")]
	public AttributeProviderAttribute(string typeName, string propertyName)
	{
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x28926D0", Offset = "0x2890CD0", VA = "0x1828926D0")]
	public AttributeProviderAttribute(Type type)
	{
	}
}
