// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.SystemConnectionSummary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/ConnectionHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000004")]
public class SystemConnectionSummary
{
	[Token(Token = "0x2000005")]
	private class SCSBitPos
	{
		[Token(Token = "0x400002A")]
		public const int Version = 28;

		[Token(Token = "0x400002B")]
		public const int UsedProtocol = 25;

		[Token(Token = "0x400002C")]
		public const int EmptyBit = 24;

		[Token(Token = "0x400002D")]
		public const int AppQuits = 23;

		[Token(Token = "0x400002E")]
		public const int AppPause = 22;

		[Token(Token = "0x400002F")]
		public const int AppPauseRecent = 21;

		[Token(Token = "0x4000030")]
		public const int AppOutOfFocus = 20;

		[Token(Token = "0x4000031")]
		public const int AppOutOfFocusRecent = 19;

		[Token(Token = "0x4000032")]
		public const int NetworkReachable = 18;

		[Token(Token = "0x4000033")]
		public const int ErrorCodeFits = 17;

		[Token(Token = "0x4000034")]
		public const int ErrorCodeWinSock = 16;

		[Token(Token = "0x6000025")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public SCSBitPos()
		{
		}
	}

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x10")]
	public readonly byte Version;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x11")]
	public byte UsedProtocol;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x12")]
	public bool AppQuits;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x13")]
	public bool AppPause;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x14")]
	public bool AppPauseRecent;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x15")]
	public bool AppOutOfFocus;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x16")]
	public bool AppOutOfFocusRecent;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x17")]
	public bool NetworkReachable;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x18")]
	public bool ErrorCodeFits;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x19")]
	public bool ErrorCodeWinSock;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x1C")]
	public int SocketErrorCode;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] ProtocolIdToName;

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x1D26950", Offset = "0x1D24F50", VA = "0x181D26950")]
	public SystemConnectionSummary(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x1D26A90", Offset = "0x1D25090", VA = "0x181D26A90")]
	public SystemConnectionSummary(int summary)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x1D26410", Offset = "0x1D24A10", VA = "0x181D26410")]
	public int ToInt()
	{
		return default(int);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x1D26500", Offset = "0x1D24B00", VA = "0x181D26500", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x1D263B0", Offset = "0x1D249B0", VA = "0x181D263B0")]
	public static bool GetBit(ref int value, int bitpos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x1D263C0", Offset = "0x1D249C0", VA = "0x181D263C0")]
	public static byte GetBits(ref int value, int bitpos, byte mask)
	{
		return default(byte);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x1D263D0", Offset = "0x1D249D0", VA = "0x181D263D0")]
	public static void SetBit(ref int value, bool bitval, int bitpos)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x1D263F0", Offset = "0x1D249F0", VA = "0x181D263F0")]
	public static void SetBits(ref int value, byte bitvals, int bitpos)
	{
	}
}
