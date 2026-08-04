// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.WebFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/WebRpc.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3ED9020", Offset = "0x3ED9020", VA = "0x3ED9020")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x3ED9030", Offset = "0x3ED9030", VA = "0x3ED9030")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public bool SendAuthCookie
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x3ED9050", Offset = "0x3ED9050", VA = "0x3ED9050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x3ED9060", Offset = "0x3ED9060", VA = "0x3ED9060")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public bool SendSync
	{
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x3ED9080", Offset = "0x3ED9080", VA = "0x3ED9080")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x3ED9090", Offset = "0x3ED9090", VA = "0x3ED9090")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public bool SendState
	{
		[Token(Token = "0x6000233")]
		[Address(RVA = "0x3ED90B0", Offset = "0x3ED90B0", VA = "0x3ED90B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000234")]
		[Address(RVA = "0x3ED90C0", Offset = "0x3ED90C0", VA = "0x3ED90C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x3ED90E0", Offset = "0x3ED90E0", VA = "0x3ED90E0")]
	public WebFlags(byte webhookFlags)
	{
	}
}
