// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.Spinner
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6359DE0", Offset = "0x6358DE0", VA = "0x6359DE0")]
	internal void Acquire()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x6359E20", Offset = "0x6358E20", VA = "0x6359E20")]
	internal bool TryAcquire()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x6359E60", Offset = "0x6358E60", VA = "0x6359E60")]
	internal bool TryAcquire(bool spin)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x6359EF0", Offset = "0x6358EF0", VA = "0x6359EF0")]
	internal void Release()
	{
	}
}
