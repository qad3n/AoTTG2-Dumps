using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000267")]
[AttributeUsage(AttributeTargets.Property)]
public class AttributeProviderAttribute : Attribute
{
	[Token(Token = "0x17000355")]
	public string TypeName
	{
		[Token(Token = "0x6000F01")]
		[Address(RVA = "0x4560D40", Offset = "0x4560D40", VA = "0x4560D40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000356")]
	public string PropertyName
	{
		[Token(Token = "0x6000F02")]
		[Address(RVA = "0x4560D50", Offset = "0x4560D50", VA = "0x4560D50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EFE")]
	[Address(RVA = "0x4560B50", Offset = "0x4560B50", VA = "0x4560B50")]
	public AttributeProviderAttribute(string typeName)
	{
	}

	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x4560BD0", Offset = "0x4560BD0", VA = "0x4560BD0")]
	public AttributeProviderAttribute(string typeName, string propertyName)
	{
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x4560C80", Offset = "0x4560C80", VA = "0x4560C80")]
	public AttributeProviderAttribute(Type type)
	{
	}
}
