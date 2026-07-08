using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200010B")]
public class ErrorEventArgs : EventArgs
{
	[Token(Token = "0x170000F6")]
	public object? CurrentObject
	{
		[Token(Token = "0x60007BC")]
		[Address(RVA = "0x3AE11C0", Offset = "0x3AE11C0", VA = "0x3AE11C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F7")]
	public ErrorContext ErrorContext
	{
		[Token(Token = "0x60007BD")]
		[Address(RVA = "0x3AE11D0", Offset = "0x3AE11D0", VA = "0x3AE11D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x3AE11E0", Offset = "0x3AE11E0", VA = "0x3AE11E0")]
	public ErrorEventArgs(object? currentObject, ErrorContext errorContext)
	{
	}
}
