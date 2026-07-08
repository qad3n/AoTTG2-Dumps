using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000268")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Parameter)]
internal class CLParamAttribute : Attribute
{
	[Token(Token = "0x17000183")]
	public string Type
	{
		[Token(Token = "0x6000DED")]
		[Address(RVA = "0x3CB2FA0", Offset = "0x3CB2FA0", VA = "0x3CB2FA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DEE")]
		[Address(RVA = "0x3CB2FB0", Offset = "0x3CB2FB0", VA = "0x3CB2FB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000184")]
	public Type[] Enum
	{
		[Token(Token = "0x6000DEF")]
		[Address(RVA = "0x3CB2FC0", Offset = "0x3CB2FC0", VA = "0x3CB2FC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DF0")]
		[Address(RVA = "0x3CB2FD0", Offset = "0x3CB2FD0", VA = "0x3CB2FD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x3CB2FE0", Offset = "0x3CB2FE0", VA = "0x3CB2FE0")]
	public CLParamAttribute()
	{
	}
}
