// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.LockHolder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000217")]
[System.Runtime.CompilerServices.ReflectionBlocked]
public struct LockHolder : IDisposable
{
	[Token(Token = "0x40009D6")]
	[FieldOffset(Offset = "0x0")]
	private Lock _lock;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600124B")]
	[Address(RVA = "0x1BA1400", Offset = "0x1B9FA00", VA = "0x181BA1400")]
	public static LockHolder Hold(Lock l)
	{
		return default(LockHolder);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600124C")]
	[Address(RVA = "0x1BA13D0", Offset = "0x1B9F9D0", VA = "0x181BA13D0", Slot = "4")]
	public void Dispose()
	{
	}
}
