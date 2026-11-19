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
[Token(Token = "0x2000265")]
public class IPAddress
{
	[Token(Token = "0x2000266")]
	private sealed class ReadOnlyIPAddress : IPAddress
	{
		[Token(Token = "0x60010D7")]
		[Address(RVA = "0x6293FF0", Offset = "0x6292FF0", VA = "0x6293FF0")]
		public ReadOnlyIPAddress(long newAddress)
		{
		}
	}

	[Token(Token = "0x40008BD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly IPAddress Any;

	[Token(Token = "0x40008BE")]
	[FieldOffset(Offset = "0x8")]
	public static readonly IPAddress Loopback;

	[Token(Token = "0x40008BF")]
	[FieldOffset(Offset = "0x10")]
	public static readonly IPAddress Broadcast;

	[Token(Token = "0x40008C0")]
	[FieldOffset(Offset = "0x18")]
	public static readonly IPAddress None;

	[Token(Token = "0x40008C1")]
	internal const long LoopbackMask = 255L;

	[Token(Token = "0x40008C2")]
	[FieldOffset(Offset = "0x20")]
	public static readonly IPAddress IPv6Any;

	[Token(Token = "0x40008C3")]
	[FieldOffset(Offset = "0x28")]
	public static readonly IPAddress IPv6Loopback;

	[Token(Token = "0x40008C4")]
	[FieldOffset(Offset = "0x30")]
	public static readonly IPAddress IPv6None;

	[Token(Token = "0x40008C5")]
	[FieldOffset(Offset = "0x10")]
	private uint _addressOrScopeId;

	[Token(Token = "0x40008C6")]
	[FieldOffset(Offset = "0x18")]
	private readonly ushort[] _numbers;

	[Token(Token = "0x40008C7")]
	[FieldOffset(Offset = "0x20")]
	private string _toString;

	[Token(Token = "0x40008C8")]
	[FieldOffset(Offset = "0x28")]
	private int _hashCode;

	[Token(Token = "0x40008C9")]
	internal const int NumberOfLabels = 8;

	[Token(Token = "0x17000389")]
	private bool IsIPv4
	{
		[Token(Token = "0x60010BA")]
		[Address(RVA = "0x6292490", Offset = "0x6291490", VA = "0x6292490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038A")]
	private bool IsIPv6
	{
		[Token(Token = "0x60010BB")]
		[Address(RVA = "0x62924A0", Offset = "0x62914A0", VA = "0x62924A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038B")]
	private uint PrivateAddress
	{
		[Token(Token = "0x60010BC")]
		[Address(RVA = "0x62924B0", Offset = "0x62914B0", VA = "0x62924B0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60010BD")]
		[Address(RVA = "0x62924C0", Offset = "0x62914C0", VA = "0x62924C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700038C")]
	private uint PrivateScopeId
	{
		[Token(Token = "0x60010BE")]
		[Address(RVA = "0x62924F0", Offset = "0x62914F0", VA = "0x62924F0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60010BF")]
		[Address(RVA = "0x6292500", Offset = "0x6291500", VA = "0x6292500")]
		set
		{
		}
	}

	[Token(Token = "0x1700038D")]
	public AddressFamily AddressFamily
	{
		[Token(Token = "0x60010CD")]
		[Address(RVA = "0x6293370", Offset = "0x6292370", VA = "0x6293370")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x1700038E")]
	public long ScopeId
	{
		[Token(Token = "0x60010CE")]
		[Address(RVA = "0x6293390", Offset = "0x6292390", VA = "0x6293390")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x6292530", Offset = "0x6291530", VA = "0x6292530")]
	public IPAddress(long newAddress)
	{
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x62925C0", Offset = "0x62915C0", VA = "0x62925C0")]
	public IPAddress(byte[] address, long scopeid)
	{
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x62926D0", Offset = "0x62916D0", VA = "0x62926D0")]
	public IPAddress(ReadOnlySpan<byte> address, long scopeid)
	{
	}

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x62928B0", Offset = "0x62918B0", VA = "0x62928B0")]
	internal unsafe IPAddress(ushort* numbers, int numbersLength, uint scopeid)
	{
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x62929E0", Offset = "0x62919E0", VA = "0x62929E0")]
	private IPAddress(ushort[] numbers, uint scopeid)
	{
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x6292A30", Offset = "0x6291A30", VA = "0x6292A30")]
	public IPAddress(byte[] address)
	{
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x6292AE0", Offset = "0x6291AE0", VA = "0x6292AE0")]
	public IPAddress(ReadOnlySpan<byte> address)
	{
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x6292C80", Offset = "0x6291C80", VA = "0x6292C80")]
	public static bool TryParse(string ipString, out IPAddress address)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x6292EE0", Offset = "0x6291EE0", VA = "0x6292EE0")]
	public static IPAddress Parse(string ipString)
	{
		return null;
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x6292F70", Offset = "0x6291F70", VA = "0x6292F70")]
	public bool TryWriteBytes(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x6292FF0", Offset = "0x6291FF0", VA = "0x6292FF0")]
	private void WriteIPv6Bytes(Span<byte> destination)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x6293260", Offset = "0x6292260", VA = "0x6293260")]
	private void WriteIPv4Bytes(Span<byte> destination)
	{
	}

	[Token(Token = "0x60010CC")]
	[Address(RVA = "0x62932A0", Offset = "0x62922A0", VA = "0x62932A0")]
	public byte[] GetAddressBytes()
	{
		return null;
	}

	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x62933E0", Offset = "0x62923E0", VA = "0x62933E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60010D0")]
	[Address(RVA = "0x62934C0", Offset = "0x62924C0", VA = "0x62934C0")]
	public static bool IsLoopback(IPAddress address)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D1")]
	[Address(RVA = "0x62935E0", Offset = "0x62925E0", VA = "0x62935E0")]
	internal bool Equals(object comparandObj, bool compareScopeId)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D2")]
	[Address(RVA = "0x6293780", Offset = "0x6292780", VA = "0x6293780", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D3")]
	[Address(RVA = "0x6293790", Offset = "0x6292790", VA = "0x6293790", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010D4")]
	[Address(RVA = "0x6293BD0", Offset = "0x6292BD0", VA = "0x6293BD0")]
	public IPAddress MapToIPv6()
	{
		return null;
	}

	[Token(Token = "0x60010D5")]
	[Address(RVA = "0x6292680", Offset = "0x6291680", VA = "0x6292680")]
	private static byte[] ThrowAddressNullException()
	{
		return null;
	}
}
