using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000267")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Method)]
internal class CLMethodAttribute : CLBaseAttribute
{
	[Token(Token = "0x17000182")]
	public string[] ReturnTypeArguments
	{
		[Token(Token = "0x6000DEA")]
		[Address(RVA = "0x3CB2F30", Offset = "0x3CB2F30", VA = "0x3CB2F30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DEB")]
		[Address(RVA = "0x3CB2F40", Offset = "0x3CB2F40", VA = "0x3CB2F40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x3CB2F50", Offset = "0x3CB2F50", VA = "0x3CB2F50")]
	public CLMethodAttribute()
	{
	}
}
