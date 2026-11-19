// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.ErrorEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x55CF290", Offset = "0x55CE290", VA = "0x55CF290")]
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
		[Address(RVA = "0x55CF2A0", Offset = "0x55CE2A0", VA = "0x55CF2A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x55CF2B0", Offset = "0x55CE2B0", VA = "0x55CF2B0")]
	public ErrorEventArgs(object? currentObject, ErrorContext errorContext)
	{
	}
}
