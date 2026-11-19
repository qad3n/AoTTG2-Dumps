// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.WebFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/WebRpc.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200004A")]
public class WebFlags
{
	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x0")]
	public static readonly WebFlags Default;

	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x10")]
	public byte WebhookFlags;

	[Token(Token = "0x4000233")]
	public const byte HttpForwardConst = 1;

	[Token(Token = "0x4000234")]
	public const byte SendAuthCookieConst = 2;

	[Token(Token = "0x4000235")]
	public const byte SendSyncConst = 4;

	[Token(Token = "0x4000236")]
	public const byte SendStateConst = 8;

	[Token(Token = "0x17000074")]
	public bool HttpForward
	{
		[Token(Token = "0x600022B")]
		[Address(RVA = "0x56C52F0", Offset = "0x56C42F0", VA = "0x56C52F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x56C5300", Offset = "0x56C4300", VA = "0x56C5300")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public bool SendAuthCookie
	{
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x56C5310", Offset = "0x56C4310", VA = "0x56C5310")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x56C5320", Offset = "0x56C4320", VA = "0x56C5320")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public bool SendSync
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x56C5340", Offset = "0x56C4340", VA = "0x56C5340")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x56C5350", Offset = "0x56C4350", VA = "0x56C5350")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public bool SendState
	{
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x56C5370", Offset = "0x56C4370", VA = "0x56C5370")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x56C5380", Offset = "0x56C4380", VA = "0x56C5380")]
		set
		{
		}
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x56C53A0", Offset = "0x56C43A0", VA = "0x56C53A0")]
	public WebFlags(byte webhookFlags)
	{
	}
}
