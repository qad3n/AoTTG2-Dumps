// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SceneManagement.SceneManagerAPIInternal
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

namespace UnityEngine.SceneManagement;

[Token(Token = "0x200024D")]
[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/SceneManager/SceneManager.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/SceneManager/SceneManager.h")]
internal static class SceneManagerAPIInternal
{
	[Token(Token = "0x60011BD")]
	[Address(RVA = "0x6936800", Offset = "0x6935800", VA = "0x6936800")]
	[UnityEngine.Bindings.NativeThrows]
	public static AsyncOperation LoadSceneAsyncNameIndexInternal(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011BE")]
	[Address(RVA = "0x6936A50", Offset = "0x6935A50", VA = "0x6936A50")]
	private static extern IntPtr LoadSceneAsyncNameIndexInternal_Injected(ref ManagedSpanWrapper sceneName, int sceneBuildIndex, [In] ref LoadSceneParameters parameters, bool mustCompleteNextFrame);
}
