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

[Token(Token = "0x2000133")]
[AttributeUsage(AttributeTargets.Property)]
public class AttributeProviderAttribute : Attribute
{
	[Token(Token = "0x17000195")]
	public string TypeName
	{
		[Token(Token = "0x6000789")]
		[Address(RVA = "0x62262E0", Offset = "0x62252E0", VA = "0x62262E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000196")]
	public string PropertyName
	{
		[Token(Token = "0x600078A")]
		[Address(RVA = "0x62262F0", Offset = "0x62252F0", VA = "0x62262F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x62260F0", Offset = "0x62250F0", VA = "0x62260F0")]
	public AttributeProviderAttribute(string typeName)
	{
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x6226170", Offset = "0x6225170", VA = "0x6226170")]
	public AttributeProviderAttribute(string typeName, string propertyName)
	{
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x6226220", Offset = "0x6225220", VA = "0x6226220")]
	public AttributeProviderAttribute(Type type)
	{
	}
}
