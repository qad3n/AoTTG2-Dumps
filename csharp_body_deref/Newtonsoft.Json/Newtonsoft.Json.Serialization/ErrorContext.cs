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
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007B5")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F1")]
	public Exception Error
	{
		[Token(Token = "0x60007B6")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
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
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
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
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
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
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
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
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007BB")]
		[Address(RVA = "0xF1D640", Offset = "0xF1BC40", VA = "0x180F1D640")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x1C3DAC0", Offset = "0x1C3C0C0", VA = "0x181C3DAC0")]
	internal ErrorContext(object? originalObject, object? member, string path, Exception error)
	{
	}
}
