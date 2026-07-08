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
		[Address(RVA = "0x4FE3290", Offset = "0x4FE3290", VA = "0x4FE3290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A0")]
	public bool IsError
	{
		[Token(Token = "0x6000939")]
		[Address(RVA = "0x4FE32A0", Offset = "0x4FE32A0", VA = "0x4FE32A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x4FE3200", Offset = "0x4FE3200", VA = "0x4FE3200")]
	public ObsoleteAttribute()
	{
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x4FE3230", Offset = "0x4FE3230", VA = "0x4FE3230")]
	public ObsoleteAttribute(string message)
	{
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x4FE3260", Offset = "0x4FE3260", VA = "0x4FE3260")]
	public ObsoleteAttribute(string message, bool error)
	{
	}
}
