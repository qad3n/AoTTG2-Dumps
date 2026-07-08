using System.Net.Sockets;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x200011C")]
public class IPAddress
{
	[Token(Token = "0x200011D")]
	private sealed class ReadOnlyIPAddress : IPAddress
	{
		[Token(Token = "0x60006D6")]
		[Address(RVA = "0x4625DA0", Offset = "0x4625DA0", VA = "0x4625DA0")]
		public ReadOnlyIPAddress(long newAddress)
		{
		}
	}

	[Token(Token = "0x4000576")]
	[FieldOffset(Offset = "0x0")]
	public static readonly IPAddress Any;

	[Token(Token = "0x4000577")]
	[FieldOffset(Offset = "0x8")]
	public static readonly IPAddress Loopback;

	[Token(Token = "0x4000578")]
	[FieldOffset(Offset = "0x10")]
	public static readonly IPAddress Broadcast;

	[Token(Token = "0x4000579")]
	[FieldOffset(Offset = "0x18")]
	public static readonly IPAddress None;

	[Token(Token = "0x400057A")]
	internal const long LoopbackMask = 255L;

	[Token(Token = "0x400057B")]
	[FieldOffset(Offset = "0x20")]
	public static readonly IPAddress IPv6Any;

	[Token(Token = "0x400057C")]
	[FieldOffset(Offset = "0x28")]
	public static readonly IPAddress IPv6Loopback;

	[Token(Token = "0x400057D")]
	[FieldOffset(Offset = "0x30")]
	public static readonly IPAddress IPv6None;

	[Token(Token = "0x400057E")]
	[FieldOffset(Offset = "0x10")]
	private uint _addressOrScopeId;

	[Token(Token = "0x400057F")]
	[FieldOffset(Offset = "0x18")]
	private readonly ushort[] _numbers;

	[Token(Token = "0x4000580")]
	[FieldOffset(Offset = "0x20")]
	private string _toString;

	[Token(Token = "0x4000581")]
	[FieldOffset(Offset = "0x28")]
	private int _hashCode;

	[Token(Token = "0x4000582")]
	internal const int NumberOfLabels = 8;

	[Token(Token = "0x17000163")]
	private bool IsIPv4
	{
		[Token(Token = "0x60006B9")]
		[Address(RVA = "0x46242A0", Offset = "0x46242A0", VA = "0x46242A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000164")]
	private bool IsIPv6
	{
		[Token(Token = "0x60006BA")]
		[Address(RVA = "0x46242B0", Offset = "0x46242B0", VA = "0x46242B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000165")]
	private uint PrivateAddress
	{
		[Token(Token = "0x60006BB")]
		[Address(RVA = "0x46242C0", Offset = "0x46242C0", VA = "0x46242C0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60006BC")]
		[Address(RVA = "0x46242D0", Offset = "0x46242D0", VA = "0x46242D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	private uint PrivateScopeId
	{
		[Token(Token = "0x60006BD")]
		[Address(RVA = "0x4624300", Offset = "0x4624300", VA = "0x4624300")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60006BE")]
		[Address(RVA = "0x4624310", Offset = "0x4624310", VA = "0x4624310")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	public AddressFamily AddressFamily
	{
		[Token(Token = "0x60006CC")]
		[Address(RVA = "0x46250E0", Offset = "0x46250E0", VA = "0x46250E0")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x17000168")]
	public long ScopeId
	{
		[Token(Token = "0x60006CD")]
		[Address(RVA = "0x4625100", Offset = "0x4625100", VA = "0x4625100")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x4624340", Offset = "0x4624340", VA = "0x4624340")]
	public IPAddress(long newAddress)
	{
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x46243D0", Offset = "0x46243D0", VA = "0x46243D0")]
	public IPAddress(byte[] address, long scopeid)
	{
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x4624490", Offset = "0x4624490", VA = "0x4624490")]
	public IPAddress(ReadOnlySpan<byte> address, long scopeid)
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x4624680", Offset = "0x4624680", VA = "0x4624680")]
	internal unsafe IPAddress(ushort* numbers, int numbersLength, uint scopeid)
	{
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x4624740", Offset = "0x4624740", VA = "0x4624740")]
	private IPAddress(ushort[] numbers, uint scopeid)
	{
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x4624790", Offset = "0x4624790", VA = "0x4624790")]
	public IPAddress(byte[] address)
	{
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x4624800", Offset = "0x4624800", VA = "0x4624800")]
	public IPAddress(ReadOnlySpan<byte> address)
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x46249C0", Offset = "0x46249C0", VA = "0x46249C0")]
	public static bool TryParse(string ipString, out IPAddress address)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x4624C50", Offset = "0x4624C50", VA = "0x4624C50")]
	public static IPAddress Parse(string ipString)
	{
		return null;
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x4624CE0", Offset = "0x4624CE0", VA = "0x4624CE0")]
	public bool TryWriteBytes(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x4624D60", Offset = "0x4624D60", VA = "0x4624D60")]
	private void WriteIPv6Bytes(Span<byte> destination)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x4624FD0", Offset = "0x4624FD0", VA = "0x4624FD0")]
	private void WriteIPv4Bytes(Span<byte> destination)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x4625010", Offset = "0x4625010", VA = "0x4625010")]
	public byte[] GetAddressBytes()
	{
		return null;
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x4625150", Offset = "0x4625150", VA = "0x4625150", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x4625230", Offset = "0x4625230", VA = "0x4625230")]
	public static bool IsLoopback(IPAddress address)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x4625300", Offset = "0x4625300", VA = "0x4625300")]
	internal bool Equals(object comparandObj, bool compareScopeId)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x46254C0", Offset = "0x46254C0", VA = "0x46254C0", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x46254D0", Offset = "0x46254D0", VA = "0x46254D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x4625910", Offset = "0x4625910", VA = "0x4625910")]
	public IPAddress MapToIPv6()
	{
		return null;
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x4624440", Offset = "0x4624440", VA = "0x4624440")]
	private static byte[] ThrowAddressNullException()
	{
		return null;
	}
}
