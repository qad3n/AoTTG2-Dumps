// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.LowLevel.BurstCompilerService
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Bindings;

namespace Unity.Burst.LowLevel;

[Token(Token = "0x2000068")]
[UnityEngine.Bindings.NativeHeader("Runtime/Burst/BurstDelegateCache.h")]
[UnityEngine.Bindings.StaticAccessor("BurstCompilerService::Get()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
[UnityEngine.Bindings.NativeHeader("Runtime/Burst/Burst.h")]
internal static class BurstCompilerService
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4DAD770", Offset = "0x4DAD770", VA = "0x4DAD770")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void* GetOrCreateSharedMemory(ref Hash128 key, uint size_of, uint alignment);
}
