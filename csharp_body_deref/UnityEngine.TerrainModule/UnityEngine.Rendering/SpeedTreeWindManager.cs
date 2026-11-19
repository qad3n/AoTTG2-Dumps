// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SpeedTreeWindManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000012")]
[UnityEngine.Bindings.StaticAccessor("GetSpeedTreeWindManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Modules/Terrain/Public/SpeedTreeWindManager.h")]
internal static class SpeedTreeWindManager
{
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x69F73D0", Offset = "0x69F63D0", VA = "0x69F73D0")]
	public static void UpdateWindAndWriteBufferWindParams(ReadOnlySpan<int> renderersID, SpeedTreeWindParamsBufferIterator windParams, bool history)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x69F7490", Offset = "0x69F6490", VA = "0x69F7490")]
	private static extern void UpdateWindAndWriteBufferWindParams_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper renderersID, [In] ref SpeedTreeWindParamsBufferIterator windParams, bool history);
}
