using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000051")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public sealed class WarnBeforeEditingAttribute : Attribute
{
	[Token(Token = "0x17000073")]
	public string warningTitle
	{
		[Token(Token = "0x6000212")]
		[Address(RVA = "0x497F530", Offset = "0x497F530", VA = "0x497F530")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000074")]
	public string warningMessage
	{
		[Token(Token = "0x6000213")]
		[Address(RVA = "0x497F540", Offset = "0x497F540", VA = "0x497F540")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	public object[] emptyValues
	{
		[Token(Token = "0x6000214")]
		[Address(RVA = "0x497F550", Offset = "0x497F550", VA = "0x497F550")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x497F490", Offset = "0x497F490", VA = "0x497F490")]
	public WarnBeforeEditingAttribute(string warningTitle, string warningMessage)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x497F4D0", Offset = "0x497F4D0", VA = "0x497F4D0")]
	public WarnBeforeEditingAttribute(string warningTitle, string warningMessage, params object[] emptyValues)
	{
	}
}
