// ==================== AoTTG2 cross-reference ====================
// Type: System.ObsoleteAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000F9")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event | AttributeTargets.Interface | AttributeTargets.Delegate, Inherited = false)]
public sealed class ObsoleteAttribute : Attribute
{
	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x10")]
	private string _message;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0x18")]
	private bool _error;

	[Token(Token = "0x1700009F")]
	public string Message
	{
		[Token(Token = "0x6000938")]
		[Address(RVA = "0x3CC8DB0", Offset = "0x3CC8DB0", VA = "0x3CC8DB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A0")]
	public bool IsError
	{
		[Token(Token = "0x6000939")]
		[Address(RVA = "0x3CC8DC0", Offset = "0x3CC8DC0", VA = "0x3CC8DC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x3CC8D20", Offset = "0x3CC8D20", VA = "0x3CC8D20")]
	public ObsoleteAttribute()
	{
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x3CC8D50", Offset = "0x3CC8D50", VA = "0x3CC8D50")]
	public ObsoleteAttribute(string message)
	{
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x3CC8D80", Offset = "0x3CC8D80", VA = "0x3CC8D80")]
	public ObsoleteAttribute(string message, bool error)
	{
	}
}
