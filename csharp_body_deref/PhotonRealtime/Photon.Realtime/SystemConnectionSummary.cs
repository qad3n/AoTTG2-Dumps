// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.SystemConnectionSummary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/ConnectionHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000006")]
public class SystemConnectionSummary
{
	[Token(Token = "0x2000007")]
	private class SCSBitPos
	{
		[Token(Token = "0x400002F")]
		public const int Version = 28;

		[Token(Token = "0x4000030")]
		public const int UsedProtocol = 25;

		[Token(Token = "0x4000031")]
		public const int EmptyBit = 24;

		[Token(Token = "0x4000032")]
		public const int AppQuits = 23;

		[Token(Token = "0x4000033")]
		public const int AppPause = 22;

		[Token(Token = "0x4000034")]
		public const int AppPauseRecent = 21;

		[Token(Token = "0x4000035")]
		public const int AppOutOfFocus = 20;

		[Token(Token = "0x4000036")]
		public const int AppOutOfFocusRecent = 19;

		[Token(Token = "0x4000037")]
		public const int NetworkReachable = 18;

		[Token(Token = "0x4000038")]
		public const int ErrorCodeFits = 17;

		[Token(Token = "0x4000039")]
		public const int ErrorCodeWinSock = 16;

		[Token(Token = "0x6000027")]
		[Address(RVA = "0x3EBB000", Offset = "0x3EBB000", VA = "0x3EBB000")]
		public SCSBitPos()
		{
		}
	}

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x10")]
	public readonly byte Version;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x11")]
	public byte UsedProtocol;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x12")]
	public bool AppQuits;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x13")]
	public bool AppPause;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x14")]
	public bool AppPauseRecent;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x15")]
	public bool AppOutOfFocus;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x16")]
	public bool AppOutOfFocusRecent;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x17")]
	public bool NetworkReachable;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x18")]
	public bool ErrorCodeFits;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x19")]
	public bool ErrorCodeWinSock;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x1C")]
	public int SocketErrorCode;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] ProtocolIdToName;

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3EBA880", Offset = "0x3EBA880", VA = "0x3EBA880")]
	public SystemConnectionSummary(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3EBA970", Offset = "0x3EBA970", VA = "0x3EBA970")]
	public SystemConnectionSummary(int summary)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3EBAA50", Offset = "0x3EBAA50", VA = "0x3EBAA50")]
	public int ToInt()
	{
		return default(int);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x3EBAB70", Offset = "0x3EBAB70", VA = "0x3EBAB70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x3EBAA40", Offset = "0x3EBAA40", VA = "0x3EBAA40")]
	public static bool GetBit(ref int value, int bitpos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x3EBAA30", Offset = "0x3EBAA30", VA = "0x3EBAA30")]
	public static byte GetBits(ref int value, int bitpos, byte mask)
	{
		return default(byte);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x3EBAB50", Offset = "0x3EBAB50", VA = "0x3EBAB50")]
	public static void SetBit(ref int value, bool bitval, int bitpos)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x3EBAB40", Offset = "0x3EBAB40", VA = "0x3EBAB40")]
	public static void SetBits(ref int value, byte bitvals, int bitpos)
	{
	}
}
