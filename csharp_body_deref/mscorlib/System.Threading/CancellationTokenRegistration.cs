// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.CancellationTokenRegistration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3D2BA00", Offset = "0x3D2BA00", VA = "0x3D2BA00")]
	internal CancellationTokenRegistration(System.Threading.CancellationCallbackInfo callbackInfo, System.Threading.SparselyPopulatedArrayAddInfo<System.Threading.CancellationCallbackInfo> registrationInfo)
	{
	}

	[Token(Token = "0x60011B4")]
	[Address(RVA = "0x3D2BA30", Offset = "0x3D2BA30", VA = "0x3D2BA30")]
	public bool Unregister()
	{
		return default(bool);
	}

	[Token(Token = "0x60011B5")]
	[Address(RVA = "0x3D2BAA0", Offset = "0x3D2BAA0", VA = "0x3D2BAA0", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60011B6")]
	[Address(RVA = "0x3D2BCA0", Offset = "0x3D2BCA0", VA = "0x3D2BCA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B7")]
	[Address(RVA = "0x3D2BD40", Offset = "0x3D2BD40", VA = "0x3D2BD40", Slot = "4")]
	public bool Equals(CancellationTokenRegistration other)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x3D2BDB0", Offset = "0x3D2BDB0", VA = "0x3D2BDB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
