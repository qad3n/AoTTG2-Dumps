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
		[Address(RVA = "0x55CF210", Offset = "0x55CE210", VA = "0x55CF210")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007B5")]
		[Address(RVA = "0x55CF220", Offset = "0x55CE220", VA = "0x55CF220")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F1")]
	public Exception Error
	{
		[Token(Token = "0x60007B6")]
		[Address(RVA = "0x55CF230", Offset = "0x55CE230", VA = "0x55CF230")]
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
		[Address(RVA = "0x55CF240", Offset = "0x55CE240", VA = "0x55CF240")]
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
		[Address(RVA = "0x55CF250", Offset = "0x55CE250", VA = "0x55CF250")]
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
		[Address(RVA = "0x55CF260", Offset = "0x55CE260", VA = "0x55CF260")]
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
		[Address(RVA = "0x55CF270", Offset = "0x55CE270", VA = "0x55CF270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007BB")]
		[Address(RVA = "0x55CF280", Offset = "0x55CE280", VA = "0x55CF280")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x55CF1A0", Offset = "0x55CE1A0", VA = "0x55CF1A0")]
	internal ErrorContext(object? originalObject, object? member, string path, Exception error)
	{
	}
}
