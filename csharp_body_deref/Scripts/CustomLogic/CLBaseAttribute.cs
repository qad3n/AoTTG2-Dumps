using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000264")]
[Conditional("UNITY_EDITOR")]
internal abstract class CLBaseAttribute : Attribute
{
	[Token(Token = "0x1700017F")]
	public string Name
	{
		[Token(Token = "0x6000DE1")]
		[Address(RVA = "0x3CB2E20", Offset = "0x3CB2E20", VA = "0x3CB2E20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DE2")]
		[Address(RVA = "0x3CB2E30", Offset = "0x3CB2E30", VA = "0x3CB2E30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000180")]
	public bool Static
	{
		[Token(Token = "0x6000DE3")]
		[Address(RVA = "0x3CB2E40", Offset = "0x3CB2E40", VA = "0x3CB2E40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DE4")]
		[Address(RVA = "0x3CB2E50", Offset = "0x3CB2E50", VA = "0x3CB2E50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000181")]
	public bool Hybrid
	{
		[Token(Token = "0x6000DE5")]
		[Address(RVA = "0x3CB2E60", Offset = "0x3CB2E60", VA = "0x3CB2E60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DE6")]
		[Address(RVA = "0x3CB2E70", Offset = "0x3CB2E70", VA = "0x3CB2E70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x3CB2E80", Offset = "0x3CB2E80", VA = "0x3CB2E80")]
	protected CLBaseAttribute()
	{
	}
}
