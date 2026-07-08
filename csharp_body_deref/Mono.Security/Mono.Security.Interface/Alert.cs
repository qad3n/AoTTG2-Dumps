using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x2000028")]
public class Alert
{
	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x10")]
	private AlertLevel level;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x11")]
	private AlertDescription description;

	[Token(Token = "0x1700005B")]
	public AlertLevel Level
	{
		[Token(Token = "0x600011B")]
		[Address(RVA = "0x3A4F2E0", Offset = "0x3A4F2E0", VA = "0x3A4F2E0")]
		get
		{
			return default(AlertLevel);
		}
	}

	[Token(Token = "0x1700005C")]
	public AlertDescription Description
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x3A4F2F0", Offset = "0x3A4F2F0", VA = "0x3A4F2F0")]
		get
		{
			return default(AlertDescription);
		}
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x3A4F300", Offset = "0x3A4F300", VA = "0x3A4F300")]
	public Alert(AlertDescription description)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x3A4F350", Offset = "0x3A4F350", VA = "0x3A4F350")]
	private void inferAlertLevel()
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x3A4F380", Offset = "0x3A4F380", VA = "0x3A4F380", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
