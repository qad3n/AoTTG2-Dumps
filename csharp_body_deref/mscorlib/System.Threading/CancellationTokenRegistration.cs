using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001E0")]
public readonly struct CancellationTokenRegistration : IEquatable<CancellationTokenRegistration>, IDisposable
{
	[Token(Token = "0x400095C")]
	[FieldOffset(Offset = "0x0")]
	private readonly System.Threading.CancellationCallbackInfo m_callbackInfo;

	[Token(Token = "0x400095D")]
	[FieldOffset(Offset = "0x8")]
	private readonly System.Threading.SparselyPopulatedArrayAddInfo<System.Threading.CancellationCallbackInfo> m_registrationInfo;

	[Token(Token = "0x60011B3")]
	[Address(RVA = "0x5045EE0", Offset = "0x5045EE0", VA = "0x5045EE0")]
	internal CancellationTokenRegistration(System.Threading.CancellationCallbackInfo callbackInfo, System.Threading.SparselyPopulatedArrayAddInfo<System.Threading.CancellationCallbackInfo> registrationInfo)
	{
	}

	[Token(Token = "0x60011B4")]
	[Address(RVA = "0x5045F10", Offset = "0x5045F10", VA = "0x5045F10")]
	public bool Unregister()
	{
		return default(bool);
	}

	[Token(Token = "0x60011B5")]
	[Address(RVA = "0x5045F80", Offset = "0x5045F80", VA = "0x5045F80", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60011B6")]
	[Address(RVA = "0x5046180", Offset = "0x5046180", VA = "0x5046180", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B7")]
	[Address(RVA = "0x5046220", Offset = "0x5046220", VA = "0x5046220", Slot = "4")]
	public bool Equals(CancellationTokenRegistration other)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x5046290", Offset = "0x5046290", VA = "0x5046290", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
