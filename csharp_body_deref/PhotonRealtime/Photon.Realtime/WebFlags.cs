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
		[Address(RVA = "0x1BB4570", Offset = "0x1BB2B70", VA = "0x181BB4570")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x1D2E9C0", Offset = "0x1D2CFC0", VA = "0x181D2E9C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public bool SendAuthCookie
	{
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x1D2E990", Offset = "0x1D2CF90", VA = "0x181D2E990")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x1D2E9F0", Offset = "0x1D2CFF0", VA = "0x181D2E9F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public bool SendSync
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x1D2E9B0", Offset = "0x1D2CFB0", VA = "0x181D2E9B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x1D2EA50", Offset = "0x1D2D050", VA = "0x181D2EA50")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public bool SendState
	{
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x1D2E9A0", Offset = "0x1D2CFA0", VA = "0x181D2E9A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x1D2EA20", Offset = "0x1D2D020", VA = "0x181D2EA20")]
		set
		{
		}
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x1CAE600", Offset = "0x1CACC00", VA = "0x181CAE600")]
	public WebFlags(byte webhookFlags)
	{
	}
}
