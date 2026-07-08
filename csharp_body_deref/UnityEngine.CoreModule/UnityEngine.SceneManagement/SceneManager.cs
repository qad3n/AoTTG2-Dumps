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

[Token(Token = "0x20001FB")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/SceneManager/SceneManager.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class SceneManager
{
	[Token(Token = "0x40006AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static bool s_AllowLoadScene;

	[Token(Token = "0x40006B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static UnityAction<Scene, Scene> activeSceneChanged;

	[Token(Token = "0x17000256")]
	public static extern int sceneCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000DAF")]
		[Address(RVA = "0x4AECC60", Offset = "0x4AECC60", VA = "0x4AECC60")]
		[UnityEngine.Bindings.NativeHeader("Runtime/SceneManager/SceneManager.h")]
		[UnityEngine.Bindings.StaticAccessor("GetSceneManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
		[UnityEngine.Bindings.NativeMethod("GetSceneCount")]
		get;
	}

	[Token(Token = "0x14000008")]
	public static event UnityAction<Scene, LoadSceneMode> sceneLoaded
	{
		[Token(Token = "0x6000DB5")]
		[Address(RVA = "0x4AED0F0", Offset = "0x4AED0F0", VA = "0x4AED0F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000DB6")]
		[Address(RVA = "0x4AED1F0", Offset = "0x4AED1F0", VA = "0x4AED1F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000009")]
	public static event UnityAction<Scene> sceneUnloaded
	{
		[Token(Token = "0x6000DB7")]
		[Address(RVA = "0x4AED2F0", Offset = "0x4AED2F0", VA = "0x4AED2F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000DB8")]
		[Address(RVA = "0x4AED3F0", Offset = "0x4AED3F0", VA = "0x4AED3F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x4AECC90", Offset = "0x4AECC90", VA = "0x4AECC90")]
	[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static Scene GetActiveScene()
	{
		return default(Scene);
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x4AECD40", Offset = "0x4AECD40", VA = "0x4AECD40")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static Scene GetSceneAt(int index)
	{
		return default(Scene);
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x4AECE10", Offset = "0x4AECE10", VA = "0x4AECE10")]
	private static AsyncOperation LoadSceneAsyncNameIndexInternal(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame)
	{
		return null;
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x4AECF10", Offset = "0x4AECF10", VA = "0x4AECF10")]
	[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeThrows]
	public static void MoveGameObjectToScene([UnityEngine.Bindings.NotNull("ArgumentNullException")] GameObject go, Scene scene)
	{
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x4AED070", Offset = "0x4AED070", VA = "0x4AED070")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static AsyncOperation LoadFirstScene_Internal(bool async)
	{
		return null;
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x4AED4F0", Offset = "0x4AED4F0", VA = "0x4AED4F0")]
	[ExcludeFromDocs]
	public static void LoadScene(int sceneBuildIndex)
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x4AED560", Offset = "0x4AED560", VA = "0x4AED560")]
	public static Scene LoadScene(int sceneBuildIndex, LoadSceneParameters parameters)
	{
		return default(Scene);
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x4AED680", Offset = "0x4AED680", VA = "0x4AED680")]
	public static AsyncOperation LoadSceneAsync(int sceneBuildIndex, [DefaultValue("LoadSceneMode.Single")] LoadSceneMode mode)
	{
		return null;
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x4AED730", Offset = "0x4AED730", VA = "0x4AED730")]
	public static AsyncOperation LoadSceneAsync(int sceneBuildIndex, LoadSceneParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x4AED780", Offset = "0x4AED780", VA = "0x4AED780")]
	public static AsyncOperation LoadSceneAsync(string sceneName, [DefaultValue("LoadSceneMode.Single")] LoadSceneMode mode)
	{
		return null;
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x4AED830", Offset = "0x4AED830", VA = "0x4AED830")]
	public static AsyncOperation LoadSceneAsync(string sceneName, LoadSceneParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x4AED890", Offset = "0x4AED890", VA = "0x4AED890")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_SceneLoaded(Scene scene, LoadSceneMode mode)
	{
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x4AED950", Offset = "0x4AED950", VA = "0x4AED950")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_SceneUnloaded(Scene scene)
	{
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x4AEDA00", Offset = "0x4AEDA00", VA = "0x4AEDA00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_ActiveSceneChanged(Scene previousActiveScene, Scene newActiveScene)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x4AECD10", Offset = "0x4AECD10", VA = "0x4AECD10")]
	private static extern void GetActiveScene_Injected(out Scene ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x4AECDD0", Offset = "0x4AECDD0", VA = "0x4AECDD0")]
	private static extern void GetSceneAt_Injected(int index, out Scene ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x4AED030", Offset = "0x4AED030", VA = "0x4AED030")]
	private static extern void MoveGameObjectToScene_Injected(IntPtr go, [In] ref Scene scene);
}
