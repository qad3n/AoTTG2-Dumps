using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Scripting;

[Token(Token = "0x200001D")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Interface, Inherited = false)]
[VisibleToOtherModules]
internal class RequiredByNativeCodeAttribute : Attribute
{
	[Token(Token = "0x17000018")]
	public string Name
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x4B76B80", Offset = "0x4B76B80", VA = "0x4B76B80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public bool Optional
	{
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x4B76B90", Offset = "0x4B76B90", VA = "0x4B76B90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public bool GenerateProxy
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x4B76BA0", Offset = "0x4B76BA0", VA = "0x4B76BA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4B76B20", Offset = "0x4B76B20", VA = "0x4B76B20")]
	public RequiredByNativeCodeAttribute()
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4B76B30", Offset = "0x4B76B30", VA = "0x4B76B30")]
	public RequiredByNativeCodeAttribute(string name)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4B76B60", Offset = "0x4B76B60", VA = "0x4B76B60")]
	public RequiredByNativeCodeAttribute(bool optional)
	{
	}
}
