// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.ErrorContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3DD6A90", Offset = "0x3DD6A90", VA = "0x3DD6A90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007B5")]
		[Address(RVA = "0x3DD6AA0", Offset = "0x3DD6AA0", VA = "0x3DD6AA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F1")]
	public Exception Error
	{
		[Token(Token = "0x60007B6")]
		[Address(RVA = "0x3DD6AB0", Offset = "0x3DD6AB0", VA = "0x3DD6AB0")]
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
		[Address(RVA = "0x3DD6AC0", Offset = "0x3DD6AC0", VA = "0x3DD6AC0")]
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
		[Address(RVA = "0x3DD6AD0", Offset = "0x3DD6AD0", VA = "0x3DD6AD0")]
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
		[Address(RVA = "0x3DD6AE0", Offset = "0x3DD6AE0", VA = "0x3DD6AE0")]
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
		[Address(RVA = "0x3DD6AF0", Offset = "0x3DD6AF0", VA = "0x3DD6AF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007BB")]
		[Address(RVA = "0x3DD6B00", Offset = "0x3DD6B00", VA = "0x3DD6B00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x3DD6A20", Offset = "0x3DD6A20", VA = "0x3DD6A20")]
	internal ErrorContext(object? originalObject, object? member, string path, Exception error)
	{
	}
}
