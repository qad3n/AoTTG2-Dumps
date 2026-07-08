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
		[Address(RVA = "0x461ECE0", Offset = "0x461ECE0", VA = "0x461ECE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015F")]
	private X509Stores Factory
	{
		[Token(Token = "0x600066E")]
		[Address(RVA = "0x461ED60", Offset = "0x461ED60", VA = "0x461ED60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000160")]
	internal Mono.Security.X509.X509Store Store
	{
		[Token(Token = "0x600066F")]
		[Address(RVA = "0x461ED80", Offset = "0x461ED80", VA = "0x461ED80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x461EBB0", Offset = "0x461EBB0", VA = "0x461EBB0")]
	public X509Store(StoreName storeName, StoreLocation storeLocation)
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x461ED90", Offset = "0x461ED90", VA = "0x461ED90")]
	public void Close()
	{
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x461EDC0", Offset = "0x461EDC0", VA = "0x461EDC0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x461EDF0", Offset = "0x461EDF0", VA = "0x461EDF0")]
	public void Open(OpenFlags flags)
	{
	}
}
