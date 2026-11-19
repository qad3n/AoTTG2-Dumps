// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.CancellationTokenRegistration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001E3")]
public readonly struct CancellationTokenRegistration : IEquatable<CancellationTokenRegistration>, IDisposable
{
	[Token(Token = "0x4000911")]
	[FieldOffset(Offset = "0x0")]
	private readonly System.Threading.CancellationCallbackInfo m_callbackInfo;

	[Token(Token = "0x4000912")]
	[FieldOffset(Offset = "0x8")]
	private readonly System.Threading.SparselyPopulatedArrayAddInfo<System.Threading.CancellationCallbackInfo> m_registrationInfo;

	[Token(Token = "0x60011E5")]
	[Address(RVA = "0x552EC40", Offset = "0x552DC40", VA = "0x552EC40")]
	internal CancellationTokenRegistration(System.Threading.CancellationCallbackInfo callbackInfo, System.Threading.SparselyPopulatedArrayAddInfo<System.Threading.CancellationCallbackInfo> registrationInfo)
	{
	}

	[Token(Token = "0x60011E6")]
	[Address(RVA = "0x552EC70", Offset = "0x552DC70", VA = "0x552EC70")]
	public bool Unregister()
	{
		return default(bool);
	}

	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x552ECE0", Offset = "0x552DCE0", VA = "0x552ECE0", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x552EED0", Offset = "0x552DED0", VA = "0x552EED0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E9")]
	[Address(RVA = "0x552EF70", Offset = "0x552DF70", VA = "0x552EF70", Slot = "4")]
	public bool Equals(CancellationTokenRegistration other)
	{
		return default(bool);
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x552EFE0", Offset = "0x552DFE0", VA = "0x552EFE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
