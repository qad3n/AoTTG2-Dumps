using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000269")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field)]
internal class CLPropertyAttribute : CLBaseAttribute
{
	[Token(Token = "0x17000185")]
	public bool ReadOnly
	{
		[Token(Token = "0x6000DF2")]
		[Address(RVA = "0x3CB2FF0", Offset = "0x3CB2FF0", VA = "0x3CB2FF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DF3")]
		[Address(RVA = "0x3CB3000", Offset = "0x3CB3000", VA = "0x3CB3000")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000186")]
	public string[] TypeArguments
	{
		[Token(Token = "0x6000DF4")]
		[Address(RVA = "0x3CB3010", Offset = "0x3CB3010", VA = "0x3CB3010")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DF5")]
		[Address(RVA = "0x3CB3020", Offset = "0x3CB3020", VA = "0x3CB3020")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000187")]
	public Type[] Enum
	{
		[Token(Token = "0x6000DF6")]
		[Address(RVA = "0x3CB3030", Offset = "0x3CB3030", VA = "0x3CB3030")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DF7")]
		[Address(RVA = "0x3CB3040", Offset = "0x3CB3040", VA = "0x3CB3040")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x3CB3050", Offset = "0x3CB3050", VA = "0x3CB3050")]
	public CLPropertyAttribute(bool readOnly = false)
	{
	}
}
