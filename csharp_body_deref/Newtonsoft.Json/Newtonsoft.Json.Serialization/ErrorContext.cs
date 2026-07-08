using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200010A")]
public class ErrorContext
{
	[Token(Token = "0x170000F0")]
	internal bool Traced
	{
		[Token(Token = "0x60007B4")]
		[Address(RVA = "0x3AE1140", Offset = "0x3AE1140", VA = "0x3AE1140")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007B5")]
		[Address(RVA = "0x3AE1150", Offset = "0x3AE1150", VA = "0x3AE1150")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F1")]
	public Exception Error
	{
		[Token(Token = "0x60007B6")]
		[Address(RVA = "0x3AE1160", Offset = "0x3AE1160", VA = "0x3AE1160")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F2")]
	public object? OriginalObject
	{
		[Token(Token = "0x60007B7")]
		[Address(RVA = "0x3AE1170", Offset = "0x3AE1170", VA = "0x3AE1170")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F3")]
	public object? Member
	{
		[Token(Token = "0x60007B8")]
		[Address(RVA = "0x3AE1180", Offset = "0x3AE1180", VA = "0x3AE1180")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F4")]
	public string Path
	{
		[Token(Token = "0x60007B9")]
		[Address(RVA = "0x3AE1190", Offset = "0x3AE1190", VA = "0x3AE1190")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F5")]
	public bool Handled
	{
		[Token(Token = "0x60007BA")]
		[Address(RVA = "0x3AE11A0", Offset = "0x3AE11A0", VA = "0x3AE11A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007BB")]
		[Address(RVA = "0x3AE11B0", Offset = "0x3AE11B0", VA = "0x3AE11B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x3AE10D0", Offset = "0x3AE10D0", VA = "0x3AE10D0")]
	internal ErrorContext(object? originalObject, object? member, string path, Exception error)
	{
	}
}
