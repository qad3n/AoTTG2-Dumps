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

[Token(Token = "0x2000110")]
public sealed class X509Store : IDisposable
{
	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0x10")]
	private string _name;

	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0x18")]
	private StoreLocation _location;

	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x20")]
	private X509Certificate2Collection list;

	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x28")]
	private OpenFlags _flags;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x30")]
	private Mono.Security.X509.X509Store store;

	[Token(Token = "0x17000168")]
	public X509Certificate2Collection Certificates
	{
		[Token(Token = "0x6000697")]
		[Address(RVA = "0x621E570", Offset = "0x621D570", VA = "0x621E570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000169")]
	private X509Stores Factory
	{
		[Token(Token = "0x6000698")]
		[Address(RVA = "0x621E5F0", Offset = "0x621D5F0", VA = "0x621E5F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016A")]
	internal Mono.Security.X509.X509Store Store
	{
		[Token(Token = "0x6000699")]
		[Address(RVA = "0x621E610", Offset = "0x621D610", VA = "0x621E610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x621E440", Offset = "0x621D440", VA = "0x621E440")]
	public X509Store(StoreName storeName, StoreLocation storeLocation)
	{
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x621E620", Offset = "0x621D620", VA = "0x621E620")]
	public void Close()
	{
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x621E650", Offset = "0x621D650", VA = "0x621E650", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x621E680", Offset = "0x621D680", VA = "0x621E680")]
	public void Open(OpenFlags flags)
	{
	}
}
