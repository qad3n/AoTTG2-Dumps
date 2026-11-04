// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Store
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Mono.Security.X509;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200014F")]
public sealed class X509Store : IDisposable
{
	[Token(Token = "0x40005E3")]
	[FieldOffset(Offset = "0x10")]
	private string _name;

	[Token(Token = "0x40005E4")]
	[FieldOffset(Offset = "0x18")]
	private StoreLocation _location;

	[Token(Token = "0x40005E5")]
	[FieldOffset(Offset = "0x20")]
	private X509Certificate2Collection list;

	[Token(Token = "0x40005E6")]
	[FieldOffset(Offset = "0x28")]
	private OpenFlags _flags;

	[Token(Token = "0x40005E7")]
	[FieldOffset(Offset = "0x30")]
	private Mono.Security.X509.X509Store store;

	[Token(Token = "0x17000197")]
	public X509Certificate2Collection Certificates
	{
		[Token(Token = "0x6000857")]
		[Address(RVA = "0x2891030", Offset = "0x288F630", VA = "0x182891030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000198")]
	private X509Stores Factory
	{
		[Token(Token = "0x6000858")]
		[Address(RVA = "0x28910C0", Offset = "0x288F6C0", VA = "0x1828910C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000199")]
	internal Mono.Security.X509.X509Store Store
	{
		[Token(Token = "0x6000859")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000856")]
	[Address(RVA = "0x2890ED0", Offset = "0x288F4D0", VA = "0x182890ED0")]
	public X509Store(StoreName storeName, StoreLocation storeLocation)
	{
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x2890AF0", Offset = "0x288F0F0", VA = "0x182890AF0")]
	public void Close()
	{
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x2890AF0", Offset = "0x288F0F0", VA = "0x182890AF0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x2890B30", Offset = "0x288F130", VA = "0x182890B30")]
	public void Open(OpenFlags flags)
	{
	}
}
