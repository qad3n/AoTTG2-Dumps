// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SceneManagement.SceneManagerAPIInternal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.SceneManagement;

[Token(Token = "0x20001FC")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/SceneManager/SceneManager.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/SceneManager/SceneManager.h")]
internal static class SceneManagerAPIInternal
{
	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x4E142C0", Offset = "0x4E142C0", VA = "0x4E142C0")]
	[UnityEngine.Bindings.NativeThrows]
	public static AsyncOperation LoadSceneAsyncNameIndexInternal(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x4E14310", Offset = "0x4E14310", VA = "0x4E14310")]
	private static extern AsyncOperation LoadSceneAsyncNameIndexInternal_Injected(string sceneName, int sceneBuildIndex, [In] ref LoadSceneParameters parameters, bool mustCompleteNextFrame);
}
