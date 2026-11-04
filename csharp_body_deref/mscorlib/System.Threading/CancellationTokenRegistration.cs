// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.CancellationTokenRegistration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200020B")]
public readonly struct CancellationTokenRegistration : IEquatable<CancellationTokenRegistration>, IDisposable
{
	[Token(Token = "0x40009B3")]
	[FieldOffset(Offset = "0x0")]
	private readonly System.Threading.CancellationCallbackInfo m_callbackInfo;

	[Token(Token = "0x40009B4")]
	[FieldOffset(Offset = "0x8")]
	private readonly System.Threading.SparselyPopulatedArrayAddInfo<System.Threading.CancellationCallbackInfo> m_registrationInfo;

	[Token(Token = "0x600120E")]
	[Address(RVA = "0x1028C20", Offset = "0x1027220", VA = "0x181028C20")]
	internal CancellationTokenRegistration(System.Threading.CancellationCallbackInfo callbackInfo, System.Threading.SparselyPopulatedArrayAddInfo<System.Threading.CancellationCallbackInfo> registrationInfo)
	{
	}

	[Token(Token = "0x600120F")]
	[Address(RVA = "0x1B94BE0", Offset = "0x1B931E0", VA = "0x181B94BE0")]
	public bool Unregister()
	{
		return default(bool);
	}

	[Token(Token = "0x6001210")]
	[Address(RVA = "0x1B94840", Offset = "0x1B92E40", VA = "0x181B94840", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001211")]
	[Address(RVA = "0x1B94A50", Offset = "0x1B93050", VA = "0x181B94A50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001212")]
	[Address(RVA = "0x1B949E0", Offset = "0x1B92FE0", VA = "0x181B949E0", Slot = "4")]
	public bool Equals(CancellationTokenRegistration other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001213")]
	[Address(RVA = "0x1B94B40", Offset = "0x1B93140", VA = "0x181B94B40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
