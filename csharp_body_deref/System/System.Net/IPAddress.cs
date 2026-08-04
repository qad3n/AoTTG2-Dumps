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
[Token(Token = "0x200011C")]
public class IPAddress
{
	[Token(Token = "0x200011D")]
	private sealed class ReadOnlyIPAddress : IPAddress
	{
		[Token(Token = "0x60006D6")]
		[Address(RVA = "0x494AEA0", Offset = "0x494AEA0", VA = "0x494AEA0")]
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
		[Address(RVA = "0x49493A0", Offset = "0x49493A0", VA = "0x49493A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000164")]
	private bool IsIPv6
	{
		[Token(Token = "0x60006BA")]
		[Address(RVA = "0x49493B0", Offset = "0x49493B0", VA = "0x49493B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000165")]
	private uint PrivateAddress
	{
		[Token(Token = "0x60006BB")]
		[Address(RVA = "0x49493C0", Offset = "0x49493C0", VA = "0x49493C0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60006BC")]
		[Address(RVA = "0x49493D0", Offset = "0x49493D0", VA = "0x49493D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	private uint PrivateScopeId
	{
		[Token(Token = "0x60006BD")]
		[Address(RVA = "0x4949400", Offset = "0x4949400", VA = "0x4949400")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60006BE")]
		[Address(RVA = "0x4949410", Offset = "0x4949410", VA = "0x4949410")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	public AddressFamily AddressFamily
	{
		[Token(Token = "0x60006CC")]
		[Address(RVA = "0x494A1E0", Offset = "0x494A1E0", VA = "0x494A1E0")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x17000168")]
	public long ScopeId
	{
		[Token(Token = "0x60006CD")]
		[Address(RVA = "0x494A200", Offset = "0x494A200", VA = "0x494A200")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x4949440", Offset = "0x4949440", VA = "0x4949440")]
	public IPAddress(long newAddress)
	{
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x49494D0", Offset = "0x49494D0", VA = "0x49494D0")]
	public IPAddress(byte[] address, long scopeid)
	{
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x4949590", Offset = "0x4949590", VA = "0x4949590")]
	public IPAddress(ReadOnlySpan<byte> address, long scopeid)
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x4949780", Offset = "0x4949780", VA = "0x4949780")]
	internal unsafe IPAddress(ushort* numbers, int numbersLength, uint scopeid)
	{
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x4949840", Offset = "0x4949840", VA = "0x4949840")]
	private IPAddress(ushort[] numbers, uint scopeid)
	{
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x4949890", Offset = "0x4949890", VA = "0x4949890")]
	public IPAddress(byte[] address)
	{
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x4949900", Offset = "0x4949900", VA = "0x4949900")]
	public IPAddress(ReadOnlySpan<byte> address)
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x4949AC0", Offset = "0x4949AC0", VA = "0x4949AC0")]
	public static bool TryParse(string ipString, out IPAddress address)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x4949D50", Offset = "0x4949D50", VA = "0x4949D50")]
	public static IPAddress Parse(string ipString)
	{
		return null;
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x4949DE0", Offset = "0x4949DE0", VA = "0x4949DE0")]
	public bool TryWriteBytes(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x4949E60", Offset = "0x4949E60", VA = "0x4949E60")]
	private void WriteIPv6Bytes(Span<byte> destination)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x494A0D0", Offset = "0x494A0D0", VA = "0x494A0D0")]
	private void WriteIPv4Bytes(Span<byte> destination)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x494A110", Offset = "0x494A110", VA = "0x494A110")]
	public byte[] GetAddressBytes()
	{
		return null;
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x494A250", Offset = "0x494A250", VA = "0x494A250", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x494A330", Offset = "0x494A330", VA = "0x494A330")]
	public static bool IsLoopback(IPAddress address)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x494A400", Offset = "0x494A400", VA = "0x494A400")]
	internal bool Equals(object comparandObj, bool compareScopeId)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x494A5C0", Offset = "0x494A5C0", VA = "0x494A5C0", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x494A5D0", Offset = "0x494A5D0", VA = "0x494A5D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x494AA10", Offset = "0x494AA10", VA = "0x494AA10")]
	public IPAddress MapToIPv6()
	{
		return null;
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x4949540", Offset = "0x4949540", VA = "0x4949540")]
	private static byte[] ThrowAddressNullException()
	{
		return null;
	}
}
