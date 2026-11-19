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
	[Token(Token = "0x4000756")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static bool s_AllowLoadScene;

	[Token(Token = "0x4000757")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static UnityAction<Scene, LoadSceneMode> m_sceneLoaded;

	[Token(Token = "0x4000758")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static UnityAction<Scene> m_sceneUnloaded;

	[Token(Token = "0x4000759")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static UnityAction<Scene, Scene> activeSceneChanged;

	[Token(Token = "0x170002E0")]
	public static extern int sceneCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60011C5")]
		[Address(RVA = "0x6936C90", Offset = "0x6935C90", VA = "0x6936C90")]
		[UnityEngine.Bindings.NativeMethod("GetSceneCount")]
		[UnityEngine.Bindings.NativeHeader("Runtime/SceneManager/SceneManager.h")]
		[UnityEngine.Bindings.StaticAccessor("GetSceneManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
		get;
	}

	[Token(Token = "0x1400000A")]
	public static event UnityAction<Scene, LoadSceneMode> sceneLoaded
	{
		[Token(Token = "0x60011CB")]
		[Address(RVA = "0x69370D0", Offset = "0x69360D0", VA = "0x69370D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60011CC")]
		[Address(RVA = "0x69371C0", Offset = "0x69361C0", VA = "0x69371C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000B")]
	public static event UnityAction<Scene> sceneUnloaded
	{
		[Token(Token = "0x60011CD")]
		[Address(RVA = "0x69372B0", Offset = "0x69362B0", VA = "0x69372B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60011CE")]
		[Address(RVA = "0x69373A0", Offset = "0x69363A0", VA = "0x69373A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x6936CC0", Offset = "0x6935CC0", VA = "0x6936CC0")]
	[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static Scene GetActiveScene()
	{
		return default(Scene);
	}

	[Token(Token = "0x60011C7")]
	[Address(RVA = "0x6936D70", Offset = "0x6935D70", VA = "0x6936D70")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static Scene GetSceneAt(int index)
	{
		return default(Scene);
	}

	[Token(Token = "0x60011C8")]
	[Address(RVA = "0x6936E40", Offset = "0x6935E40", VA = "0x6936E40")]
	private static AsyncOperation LoadSceneAsyncNameIndexInternal(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame)
	{
		return null;
	}

	[Token(Token = "0x60011C9")]
	[Address(RVA = "0x6936F40", Offset = "0x6935F40", VA = "0x6936F40")]
	[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeThrows]
	public static void MoveGameObjectToScene([UnityEngine.Bindings.NotNull] GameObject go, Scene scene)
	{
	}

	[Token(Token = "0x60011CA")]
	[Address(RVA = "0x6937050", Offset = "0x6936050", VA = "0x6937050")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static AsyncOperation LoadFirstScene_Internal(bool async)
	{
		return null;
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x6937490", Offset = "0x6936490", VA = "0x6937490")]
	[ExcludeFromDocs]
	public static void LoadScene(int sceneBuildIndex)
	{
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x6937500", Offset = "0x6936500", VA = "0x6937500")]
	public static Scene LoadScene(int sceneBuildIndex, LoadSceneParameters parameters)
	{
		return default(Scene);
	}

	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x6937620", Offset = "0x6936620", VA = "0x6937620")]
	public static AsyncOperation LoadSceneAsync(int sceneBuildIndex, [DefaultValue("LoadSceneMode.Single")] LoadSceneMode mode)
	{
		return null;
	}

	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x69376D0", Offset = "0x69366D0", VA = "0x69376D0")]
	public static AsyncOperation LoadSceneAsync(int sceneBuildIndex, LoadSceneParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x6937720", Offset = "0x6936720", VA = "0x6937720")]
	public static AsyncOperation LoadSceneAsync(string sceneName, [DefaultValue("LoadSceneMode.Single")] LoadSceneMode mode)
	{
		return null;
	}

	[Token(Token = "0x60011D4")]
	[Address(RVA = "0x69377D0", Offset = "0x69367D0", VA = "0x69377D0")]
	public static AsyncOperation LoadSceneAsync(string sceneName, LoadSceneParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x6937830", Offset = "0x6936830", VA = "0x6937830")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_SceneLoaded(Scene scene, LoadSceneMode mode)
	{
	}

	[Token(Token = "0x60011D6")]
	[Address(RVA = "0x69378F0", Offset = "0x69368F0", VA = "0x69378F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_SceneUnloaded(Scene scene)
	{
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x69379B0", Offset = "0x69369B0", VA = "0x69379B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_ActiveSceneChanged(Scene previousActiveScene, Scene newActiveScene)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x6936D40", Offset = "0x6935D40", VA = "0x6936D40")]
	private static extern void GetActiveScene_Injected(out Scene ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011DA")]
	[Address(RVA = "0x6936E00", Offset = "0x6935E00", VA = "0x6936E00")]
	private static extern void GetSceneAt_Injected(int index, out Scene ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x6937010", Offset = "0x6936010", VA = "0x6937010")]
	private static extern void MoveGameObjectToScene_Injected(IntPtr go, [In] ref Scene scene);
}
