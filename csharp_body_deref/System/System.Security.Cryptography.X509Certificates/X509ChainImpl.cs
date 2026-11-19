// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainImpl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000106")]
internal abstract class X509ChainImpl : IDisposable
{
	[Token(Token = "0x1700014C")]
	public abstract bool IsValid
	{
		[Token(Token = "0x600062E")]
		get;
	}

	[Token(Token = "0x1700014D")]
	public abstract X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x6000630")]
		get;
	}

	[Token(Token = "0x1700014E")]
	public abstract X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x6000631")]
		get;
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x6217A40", Offset = "0x6216A40", VA = "0x6217A40")]
	protected void ThrowIfContextInvalid()
	{
	}

	[Token(Token = "0x6000632")]
	public abstract bool Build(X509Certificate2 certificate);

	[Token(Token = "0x6000633")]
	public abstract void AddStatus(X509ChainStatusFlags errorCode);

	[Token(Token = "0x6000634")]
	public abstract void Reset();

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x6215EA0", Offset = "0x6214EA0", VA = "0x6215EA0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x6217A80", Offset = "0x6216A80", VA = "0x6217A80", Slot = "11")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x6217A90", Offset = "0x6216A90", VA = "0x6217A90", Slot = "1")]
	~X509ChainImpl()
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x6217B30", Offset = "0x6216B30", VA = "0x6217B30")]
	protected X509ChainImpl()
	{
	}
}
