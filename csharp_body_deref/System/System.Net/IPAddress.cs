// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.IPAddress
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Net.Sockets;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x20002A4")]
public class IPAddress
{
	[Token(Token = "0x20002A5")]
	private sealed class ReadOnlyIPAddress : IPAddress
	{
		[Token(Token = "0x6001295")]
		[Address(RVA = "0x2904DF0", Offset = "0x29033F0", VA = "0x182904DF0")]
		public ReadOnlyIPAddress(long newAddress)
		{
		}
	}

	[Token(Token = "0x400098C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly IPAddress Any;

	[Token(Token = "0x400098D")]
	[FieldOffset(Offset = "0x8")]
	public static readonly IPAddress Loopback;

	[Token(Token = "0x400098E")]
	[FieldOffset(Offset = "0x10")]
	public static readonly IPAddress Broadcast;

	[Token(Token = "0x400098F")]
	[FieldOffset(Offset = "0x18")]
	public static readonly IPAddress None;

	[Token(Token = "0x4000990")]
	internal const long LoopbackMask = 255L;

	[Token(Token = "0x4000991")]
	[FieldOffset(Offset = "0x20")]
	public static readonly IPAddress IPv6Any;

	[Token(Token = "0x4000992")]
	[FieldOffset(Offset = "0x28")]
	public static readonly IPAddress IPv6Loopback;

	[Token(Token = "0x4000993")]
	[FieldOffset(Offset = "0x30")]
	public static readonly IPAddress IPv6None;

	[Token(Token = "0x4000994")]
	[FieldOffset(Offset = "0x10")]
	private uint _addressOrScopeId;

	[Token(Token = "0x4000995")]
	[FieldOffset(Offset = "0x18")]
	private readonly ushort[] _numbers;

	[Token(Token = "0x4000996")]
	[FieldOffset(Offset = "0x20")]
	private string _toString;

	[Token(Token = "0x4000997")]
	[FieldOffset(Offset = "0x28")]
	private int _hashCode;

	[Token(Token = "0x4000998")]
	internal const int NumberOfLabels = 8;

	[Token(Token = "0x170003B8")]
	private bool IsIPv4
	{
		[Token(Token = "0x6001278")]
		[Address(RVA = "0x152F2E0", Offset = "0x152D8E0", VA = "0x18152F2E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003B9")]
	private bool IsIPv6
	{
		[Token(Token = "0x6001279")]
		[Address(RVA = "0x1979E60", Offset = "0x1978460", VA = "0x181979E60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003BA")]
	private uint PrivateAddress
	{
		[Token(Token = "0x600127A")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600127B")]
		[Address(RVA = "0x2902760", Offset = "0x2900D60", VA = "0x182902760")]
		set
		{
		}
	}

	[Token(Token = "0x170003BB")]
	private uint PrivateScopeId
	{
		[Token(Token = "0x600127C")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600127D")]
		[Address(RVA = "0x2902760", Offset = "0x2900D60", VA = "0x182902760")]
		set
		{
		}
	}

	[Token(Token = "0x170003BC")]
	public AddressFamily AddressFamily
	{
		[Token(Token = "0x600128B")]
		[Address(RVA = "0x29026E0", Offset = "0x2900CE0", VA = "0x1829026E0")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x170003BD")]
	public long ScopeId
	{
		[Token(Token = "0x600128C")]
		[Address(RVA = "0x2902700", Offset = "0x2900D00", VA = "0x182902700")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x600127E")]
	[Address(RVA = "0x2902280", Offset = "0x2900880", VA = "0x182902280")]
	public IPAddress(long newAddress)
	{
	}

	[Token(Token = "0x600127F")]
	[Address(RVA = "0x2902110", Offset = "0x2900710", VA = "0x182902110")]
	public IPAddress(byte[] address, long scopeid)
	{
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x2902510", Offset = "0x2900B10", VA = "0x182902510")]
	public IPAddress(ReadOnlySpan<byte> address, long scopeid)
	{
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x29021B0", Offset = "0x29007B0", VA = "0x1829021B0")]
	internal unsafe IPAddress(ushort* numbers, int numbersLength, uint scopeid)
	{
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x29020B0", Offset = "0x29006B0", VA = "0x1829020B0")]
	private IPAddress(ushort[] numbers, uint scopeid)
	{
	}

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x2902020", Offset = "0x2900620", VA = "0x182902020")]
	public IPAddress(byte[] address)
	{
	}

	[Token(Token = "0x6001284")]
	[Address(RVA = "0x2902320", Offset = "0x2900920", VA = "0x182902320")]
	public IPAddress(ReadOnlySpan<byte> address)
	{
	}

	[Token(Token = "0x6001285")]
	[Address(RVA = "0x29019A0", Offset = "0x28FFFA0", VA = "0x1829019A0")]
	public static bool TryParse(string ipString, out IPAddress address)
	{
		return default(bool);
	}

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x2901830", Offset = "0x28FFE30", VA = "0x182901830")]
	public static IPAddress Parse(string ipString)
	{
		return null;
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x2901A50", Offset = "0x2900050", VA = "0x182901A50")]
	public bool TryWriteBytes(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Token(Token = "0x6001288")]
	[Address(RVA = "0x28EB470", Offset = "0x28E9A70", VA = "0x1828EB470")]
	private void WriteIPv6Bytes(Span<byte> destination)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Token(Token = "0x6001289")]
	[Address(RVA = "0x2901B50", Offset = "0x2900150", VA = "0x182901B50")]
	private void WriteIPv4Bytes(Span<byte> destination)
	{
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x2900EB0", Offset = "0x28FF4B0", VA = "0x182900EB0")]
	public byte[] GetAddressBytes()
	{
		return null;
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x2901940", Offset = "0x28FFF40", VA = "0x182901940", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x2901650", Offset = "0x28FFC50", VA = "0x182901650")]
	public static bool IsLoopback(IPAddress address)
	{
		return default(bool);
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x2900D70", Offset = "0x28FF370", VA = "0x182900D70")]
	internal bool Equals(object comparandObj, bool compareScopeId)
	{
		return default(bool);
	}

	[Token(Token = "0x6001290")]
	[Address(RVA = "0x2900C80", Offset = "0x28FF280", VA = "0x182900C80", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x6001291")]
	[Address(RVA = "0x2901220", Offset = "0x28FF820", VA = "0x182901220", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x2901720", Offset = "0x28FFD20", VA = "0x182901720")]
	public IPAddress MapToIPv6()
	{
		return null;
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x29018F0", Offset = "0x28FFEF0", VA = "0x1829018F0")]
	private static byte[] ThrowAddressNullException()
	{
		return null;
	}
}
