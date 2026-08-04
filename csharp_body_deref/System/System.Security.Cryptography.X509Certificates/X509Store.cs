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

[Token(Token = "0x200010F")]
public sealed class X509Store : IDisposable
{
	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x10")]
	private string _name;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x18")]
	private StoreLocation _location;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0x20")]
	private X509Certificate2Collection list;

	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0x28")]
	private OpenFlags _flags;

	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0x30")]
	private Mono.Security.X509.X509Store store;

	[Token(Token = "0x1700015E")]
	public X509Certificate2Collection Certificates
	{
		[Token(Token = "0x600066D")]
		[Address(RVA = "0x4943DE0", Offset = "0x4943DE0", VA = "0x4943DE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015F")]
	private X509Stores Factory
	{
		[Token(Token = "0x600066E")]
		[Address(RVA = "0x4943E60", Offset = "0x4943E60", VA = "0x4943E60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000160")]
	internal Mono.Security.X509.X509Store Store
	{
		[Token(Token = "0x600066F")]
		[Address(RVA = "0x4943E80", Offset = "0x4943E80", VA = "0x4943E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x4943CB0", Offset = "0x4943CB0", VA = "0x4943CB0")]
	public X509Store(StoreName storeName, StoreLocation storeLocation)
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x4943E90", Offset = "0x4943E90", VA = "0x4943E90")]
	public void Close()
	{
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x4943EC0", Offset = "0x4943EC0", VA = "0x4943EC0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x4943EF0", Offset = "0x4943EF0", VA = "0x4943EF0")]
	public void Open(OpenFlags flags)
	{
	}
}
