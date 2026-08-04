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
		[Address(RVA = "0x3DD6B10", Offset = "0x3DD6B10", VA = "0x3DD6B10")]
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
		[Address(RVA = "0x3DD6B20", Offset = "0x3DD6B20", VA = "0x3DD6B20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x3DD6B30", Offset = "0x3DD6B30", VA = "0x3DD6B30")]
	public ErrorEventArgs(object? currentObject, ErrorContext errorContext)
	{
	}
}
