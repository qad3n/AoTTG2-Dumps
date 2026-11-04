// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainImpl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000145")]
internal abstract class X509ChainImpl : IDisposable
{
	[Token(Token = "0x1700017B")]
	public abstract bool IsValid
	{
		[Token(Token = "0x60007ED")]
		get;
	}

	[Token(Token = "0x1700017C")]
	public abstract X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x60007EF")]
		get;
	}

	[Token(Token = "0x1700017D")]
	public abstract X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x60007F0")]
		get;
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x288D2F0", Offset = "0x288B8F0", VA = "0x18288D2F0")]
	protected void ThrowIfContextInvalid()
	{
	}

	[Token(Token = "0x60007F1")]
	public abstract bool Build(X509Certificate2 certificate);

	[Token(Token = "0x60007F2")]
	public abstract void AddStatus(X509ChainStatusFlags errorCode);

	[Token(Token = "0x60007F3")]
	public abstract void Reset();

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x288D290", Offset = "0x288B890", VA = "0x18288D290", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x1974960", Offset = "0x1972F60", VA = "0x181974960", Slot = "1")]
	~X509ChainImpl()
	{
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected X509ChainImpl()
	{
	}
}
