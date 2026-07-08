using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x2000009")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Method | AttributeTargets.Property)]
[VisibleToOtherModules]
internal class NativeConditionalAttribute : Attribute
{
	[Token(Token = "0x17000003")]
	public string Condition
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4B76260", Offset = "0x4B76260", VA = "0x4B76260")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public string StubReturnStatement
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4B76270", Offset = "0x4B76270", VA = "0x4B76270")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public bool Enabled
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4B76280", Offset = "0x4B76280", VA = "0x4B76280")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4B76290", Offset = "0x4B76290", VA = "0x4B76290")]
	public NativeConditionalAttribute(string condition)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4B762C0", Offset = "0x4B762C0", VA = "0x4B762C0")]
	public NativeConditionalAttribute(string condition, string stubReturnStatement)
	{
	}
}
