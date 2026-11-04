// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.Spinner
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000017")]
[GenerateTestsForBurstCompatibility]
internal struct Spinner
{
	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x0")]
	private int m_Lock;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x29B1900", Offset = "0x29AFF00", VA = "0x1829B1900")]
	internal void Acquire()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x29B1970", Offset = "0x29AFF70", VA = "0x1829B1970")]
	internal bool TryAcquire()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x29B19C0", Offset = "0x29AFFC0", VA = "0x1829B19C0")]
	internal bool TryAcquire(bool spin)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x29B1950", Offset = "0x29AFF50", VA = "0x1829B1950")]
	internal void Release()
	{
	}
}
