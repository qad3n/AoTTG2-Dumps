using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000040")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public sealed class InspectableIfAttribute : Attribute, IInspectableAttribute
{
	[Token(Token = "0x17000062")]
	public int order
	{
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x497EE70", Offset = "0x497EE70", VA = "0x497EE70", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x497EE80", Offset = "0x497EE80", VA = "0x497EE80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public string conditionMember
	{
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x497EE90", Offset = "0x497EE90", VA = "0x497EE90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x497EE40", Offset = "0x497EE40", VA = "0x497EE40")]
	public InspectableIfAttribute(string conditionMember)
	{
	}
}
