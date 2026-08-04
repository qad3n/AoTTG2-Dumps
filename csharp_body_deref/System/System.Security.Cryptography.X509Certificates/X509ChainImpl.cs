// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainImpl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000105")]
internal abstract class X509ChainImpl : IDisposable
{
	[Token(Token = "0x17000142")]
	public abstract bool IsValid
	{
		[Token(Token = "0x6000604")]
		get;
	}

	[Token(Token = "0x17000143")]
	public abstract X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x6000606")]
		get;
	}

	[Token(Token = "0x17000144")]
	public abstract X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x6000607")]
		get;
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x493CCC0", Offset = "0x493CCC0", VA = "0x493CCC0")]
	protected void ThrowIfContextInvalid()
	{
	}

	[Token(Token = "0x6000608")]
	public abstract bool Build(X509Certificate2 certificate);

	[Token(Token = "0x6000609")]
	public abstract void AddStatus(X509ChainStatusFlags errorCode);

	[Token(Token = "0x600060A")]
	public abstract void Reset();

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x493B000", Offset = "0x493B000", VA = "0x493B000", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x493CD00", Offset = "0x493CD00", VA = "0x493CD00", Slot = "11")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x493CD10", Offset = "0x493CD10", VA = "0x493CD10", Slot = "1")]
	~X509ChainImpl()
	{
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x493CDA0", Offset = "0x493CDA0", VA = "0x493CDA0")]
	protected X509ChainImpl()
	{
	}
}
