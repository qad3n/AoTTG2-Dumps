// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SceneManagement.SceneManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Events;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine.SceneManagement;

[Token(Token = "0x200024F")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/SceneManager/SceneManager.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class SceneManager
{
	[Token(Token = "0x4000758")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static bool s_AllowLoadScene;

	[Token(Token = "0x4000759")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static UnityAction<Scene, LoadSceneMode> m_sceneLoaded;

	[Token(Token = "0x400075A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static UnityAction<Scene> m_sceneUnloaded;

	[Token(Token = "0x400075B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static UnityAction<Scene, Scene> activeSceneChanged;

	[Token(Token = "0x170002DB")]
	public static extern int sceneCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60011B1")]
		[Address(RVA = "0x2F56C90", Offset = "0x2F55290", VA = "0x182F56C90")]
		[UnityEngine.Bindings.StaticAccessor("GetSceneManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
		[UnityEngine.Bindings.NativeHeader("Runtime/SceneManager/SceneManager.h")]
		[UnityEngine.Bindings.NativeMethod("GetSceneCount")]
		get;
	}

	[Token(Token = "0x1400000A")]
	public static event UnityAction<Scene, LoadSceneMode> sceneLoaded
	{
		[Token(Token = "0x60011B7")]
		[Address(RVA = "0x2F56A70", Offset = "0x2F55070", VA = "0x182F56A70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60011B8")]
		[Address(RVA = "0x2F56CC0", Offset = "0x2F552C0", VA = "0x182F56CC0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000B")]
	public static event UnityAction<Scene> sceneUnloaded
	{
		[Token(Token = "0x60011B9")]
		[Address(RVA = "0x2F56B80", Offset = "0x2F55180", VA = "0x182F56B80")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60011BA")]
		[Address(RVA = "0x2F56DD0", Offset = "0x2F553D0", VA = "0x182F56DD0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x2F56090", Offset = "0x2F54690", VA = "0x182F56090")]
	[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static Scene GetActiveScene()
	{
		return default(Scene);
	}

	[Token(Token = "0x60011B3")]
	[Address(RVA = "0x2F56140", Offset = "0x2F54740", VA = "0x182F56140")]
	[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeThrows]
	public static Scene GetSceneAt(int index)
	{
		return default(Scene);
	}

	[Token(Token = "0x60011B4")]
	[Address(RVA = "0x2F56410", Offset = "0x2F54A10", VA = "0x182F56410")]
	private static AsyncOperation LoadSceneAsyncNameIndexInternal(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame)
	{
		return null;
	}

	[Token(Token = "0x60011B5")]
	[Address(RVA = "0x2F56960", Offset = "0x2F54F60", VA = "0x182F56960")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static void MoveGameObjectToScene([UnityEngine.Bindings.NotNull] GameObject go, Scene scene)
	{
	}

	[Token(Token = "0x60011B6")]
	[Address(RVA = "0x2F563A0", Offset = "0x2F549A0", VA = "0x182F563A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static AsyncOperation LoadFirstScene_Internal(bool async)
	{
		return null;
	}

	[Token(Token = "0x60011BB")]
	[Address(RVA = "0x2F56700", Offset = "0x2F54D00", VA = "0x182F56700")]
	[ExcludeFromDocs]
	public static void LoadScene(int sceneBuildIndex)
	{
	}

	[Token(Token = "0x60011BC")]
	[Address(RVA = "0x2F56820", Offset = "0x2F54E20", VA = "0x182F56820")]
	public static Scene LoadScene(int sceneBuildIndex, LoadSceneParameters parameters)
	{
		return default(Scene);
	}

	[Token(Token = "0x60011BD")]
	[Address(RVA = "0x2F564E0", Offset = "0x2F54AE0", VA = "0x182F564E0")]
	public static AsyncOperation LoadSceneAsync(int sceneBuildIndex, [DefaultValue("LoadSceneMode.Single")] LoadSceneMode mode)
	{
		return null;
	}

	[Token(Token = "0x60011BE")]
	[Address(RVA = "0x2F56620", Offset = "0x2F54C20", VA = "0x182F56620")]
	public static AsyncOperation LoadSceneAsync(int sceneBuildIndex, LoadSceneParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x60011BF")]
	[Address(RVA = "0x2F56580", Offset = "0x2F54B80", VA = "0x182F56580")]
	public static AsyncOperation LoadSceneAsync(string sceneName, [DefaultValue("LoadSceneMode.Single")] LoadSceneMode mode)
	{
		return null;
	}

	[Token(Token = "0x60011C0")]
	[Address(RVA = "0x2F56690", Offset = "0x2F54C90", VA = "0x182F56690")]
	public static AsyncOperation LoadSceneAsync(string sceneName, LoadSceneParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x2F56260", Offset = "0x2F54860", VA = "0x182F56260")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_SceneLoaded(Scene scene, LoadSceneMode mode)
	{
	}

	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x2F56300", Offset = "0x2F54900", VA = "0x182F56300")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_SceneUnloaded(Scene scene)
	{
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x2F561C0", Offset = "0x2F547C0", VA = "0x182F561C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_ActiveSceneChanged(Scene previousActiveScene, Scene newActiveScene)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x2F56050", Offset = "0x2F54650", VA = "0x182F56050")]
	private static extern void GetActiveScene_Injected(out Scene ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x2F56100", Offset = "0x2F54700", VA = "0x182F56100")]
	private static extern void GetSceneAt_Injected(int index, out Scene ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C7")]
	[Address(RVA = "0x2F56910", Offset = "0x2F54F10", VA = "0x182F56910")]
	private static extern void MoveGameObjectToScene_Injected(IntPtr go, [In] ref Scene scene);
}
