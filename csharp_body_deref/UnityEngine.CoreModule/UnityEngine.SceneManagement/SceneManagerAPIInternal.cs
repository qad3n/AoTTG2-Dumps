using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.SceneManagement;

[Token(Token = "0x20001F9")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/SceneManager/SceneManager.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/SceneManager/SceneManager.h")]
internal static class SceneManagerAPIInternal
{
	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x4AEC990", Offset = "0x4AEC990", VA = "0x4AEC990")]
	[UnityEngine.Bindings.NativeThrows]
	public static AsyncOperation LoadSceneAsyncNameIndexInternal(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x4AEC9E0", Offset = "0x4AEC9E0", VA = "0x4AEC9E0")]
	private static extern AsyncOperation LoadSceneAsyncNameIndexInternal_Injected(string sceneName, int sceneBuildIndex, [In] ref LoadSceneParameters parameters, bool mustCompleteNextFrame);
}
