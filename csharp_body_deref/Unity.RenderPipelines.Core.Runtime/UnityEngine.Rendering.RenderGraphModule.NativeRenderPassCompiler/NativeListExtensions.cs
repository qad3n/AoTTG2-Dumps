// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativeListExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002B3")]
internal static class NativeListExtensions
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133C")]
	internal static ReadOnlySpan<T> MakeReadOnlySpan<T>(this ref NativeList<T> list, int first, int numElements) where T : struct
	{
		return default(ReadOnlySpan<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133D")]
	internal static int LastIndex<T>(this ref NativeList<T> list) where T : struct
	{
		return default(int);
	}
}
