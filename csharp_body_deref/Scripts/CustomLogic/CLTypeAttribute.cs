using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200026A")]
[AttributeUsage(AttributeTargets.Class, Inherited = false)]
[Conditional("UNITY_EDITOR")]
internal class CLTypeAttribute : CLBaseAttribute
{
	[Token(Token = "0x17000188")]
	public bool Abstract
	{
		[Token(Token = "0x6000DF9")]
		[Address(RVA = "0x3CB30A0", Offset = "0x3CB30A0", VA = "0x3CB30A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DFA")]
		[Address(RVA = "0x3CB30B0", Offset = "0x3CB30B0", VA = "0x3CB30B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000189")]
	public bool InheritBaseMembers
	{
		[Token(Token = "0x6000DFB")]
		[Address(RVA = "0x3CB30C0", Offset = "0x3CB30C0", VA = "0x3CB30C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DFC")]
		[Address(RVA = "0x3CB30D0", Offset = "0x3CB30D0", VA = "0x3CB30D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018A")]
	public string[] TypeParameters
	{
		[Token(Token = "0x6000DFD")]
		[Address(RVA = "0x3CB30E0", Offset = "0x3CB30E0", VA = "0x3CB30E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DFE")]
		[Address(RVA = "0x3CB30F0", Offset = "0x3CB30F0", VA = "0x3CB30F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018B")]
	public bool IsComponent
	{
		[Token(Token = "0x6000DFF")]
		[Address(RVA = "0x3CB3100", Offset = "0x3CB3100", VA = "0x3CB3100")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E00")]
		[Address(RVA = "0x3CB3110", Offset = "0x3CB3110", VA = "0x3CB3110")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x3CB3120", Offset = "0x3CB3120", VA = "0x3CB3120")]
	public CLTypeAttribute()
	{
	}
}
