using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200004C")]
public class WebFlags
{
	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x0")]
	public static readonly WebFlags Default;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x10")]
	public byte WebhookFlags;

	[Token(Token = "0x4000238")]
	public const byte HttpForwardConst = 1;

	[Token(Token = "0x4000239")]
	public const byte SendAuthCookieConst = 2;

	[Token(Token = "0x400023A")]
	public const byte SendSyncConst = 4;

	[Token(Token = "0x400023B")]
	public const byte SendStateConst = 8;

	[Token(Token = "0x17000074")]
	public bool HttpForward
	{
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x3BE36D0", Offset = "0x3BE36D0", VA = "0x3BE36D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x3BE36E0", Offset = "0x3BE36E0", VA = "0x3BE36E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public bool SendAuthCookie
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x3BE3700", Offset = "0x3BE3700", VA = "0x3BE3700")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x3BE3710", Offset = "0x3BE3710", VA = "0x3BE3710")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public bool SendSync
	{
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x3BE3730", Offset = "0x3BE3730", VA = "0x3BE3730")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x3BE3740", Offset = "0x3BE3740", VA = "0x3BE3740")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public bool SendState
	{
		[Token(Token = "0x6000233")]
		[Address(RVA = "0x3BE3760", Offset = "0x3BE3760", VA = "0x3BE3760")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000234")]
		[Address(RVA = "0x3BE3770", Offset = "0x3BE3770", VA = "0x3BE3770")]
		set
		{
		}
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x3BE3790", Offset = "0x3BE3790", VA = "0x3BE3790")]
	public WebFlags(byte webhookFlags)
	{
	}
}
