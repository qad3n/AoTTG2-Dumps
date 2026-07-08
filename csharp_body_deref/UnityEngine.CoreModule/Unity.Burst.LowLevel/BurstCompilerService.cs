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
	[Address(RVA = "0x4A85F50", Offset = "0x4A85F50", VA = "0x4A85F50")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void* GetOrCreateSharedMemory(ref Hash128 key, uint size_of, uint alignment);
}
