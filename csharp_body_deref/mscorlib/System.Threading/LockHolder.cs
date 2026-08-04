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

[Token(Token = "0x20001EC")]
[System.Runtime.CompilerServices.ReflectionBlocked]
public struct LockHolder : IDisposable
{
	[Token(Token = "0x4000983")]
	[FieldOffset(Offset = "0x0")]
	private Lock _lock;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x3D2E0B0", Offset = "0x3D2E0B0", VA = "0x3D2E0B0")]
	public static LockHolder Hold(Lock l)
	{
		return default(LockHolder);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x3D2E110", Offset = "0x3D2E110", VA = "0x3D2E110", Slot = "4")]
	public void Dispose()
	{
	}
}
