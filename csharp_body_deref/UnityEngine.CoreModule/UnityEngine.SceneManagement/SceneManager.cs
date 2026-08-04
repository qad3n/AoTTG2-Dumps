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

[Token(Token = "0x20001FE")]
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

	[Token(Token = "0x17000257")]
	public static extern int sceneCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000DB1")]
		[Address(RVA = "0x4E14590", Offset = "0x4E14590", VA = "0x4E14590")]
		[UnityEngine.Bindings.NativeHeader("Runtime/SceneManager/SceneManager.h")]
		[UnityEngine.Bindings.StaticAccessor("GetSceneManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
		[UnityEngine.Bindings.NativeMethod("GetSceneCount")]
		get;
	}

	[Token(Token = "0x14000008")]
	public static event UnityAction<Scene, LoadSceneMode> sceneLoaded
	{
		[Token(Token = "0x6000DB7")]
		[Address(RVA = "0x4E14A20", Offset = "0x4E14A20", VA = "0x4E14A20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000DB8")]
		[Address(RVA = "0x4E14B20", Offset = "0x4E14B20", VA = "0x4E14B20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000009")]
	public static event UnityAction<Scene> sceneUnloaded
	{
		[Token(Token = "0x6000DB9")]
		[Address(RVA = "0x4E14C20", Offset = "0x4E14C20", VA = "0x4E14C20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000DBA")]
		[Address(RVA = "0x4E14D20", Offset = "0x4E14D20", VA = "0x4E14D20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x4E145C0", Offset = "0x4E145C0", VA = "0x4E145C0")]
	[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static Scene GetActiveScene()
	{
		return default(Scene);
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x4E14670", Offset = "0x4E14670", VA = "0x4E14670")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	public static Scene GetSceneAt(int index)
	{
		return default(Scene);
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x4E14740", Offset = "0x4E14740", VA = "0x4E14740")]
	private static AsyncOperation LoadSceneAsyncNameIndexInternal(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame)
	{
		return null;
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x4E14840", Offset = "0x4E14840", VA = "0x4E14840")]
	[UnityEngine.Bindings.StaticAccessor("SceneManagerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeThrows]
	public static void MoveGameObjectToScene([UnityEngine.Bindings.NotNull("ArgumentNullException")] GameObject go, Scene scene)
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x4E149A0", Offset = "0x4E149A0", VA = "0x4E149A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static AsyncOperation LoadFirstScene_Internal(bool async)
	{
		return null;
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x4E14E20", Offset = "0x4E14E20", VA = "0x4E14E20")]
	[ExcludeFromDocs]
	public static void LoadScene(int sceneBuildIndex)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x4E14E90", Offset = "0x4E14E90", VA = "0x4E14E90")]
	public static Scene LoadScene(int sceneBuildIndex, LoadSceneParameters parameters)
	{
		return default(Scene);
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x4E14FB0", Offset = "0x4E14FB0", VA = "0x4E14FB0")]
	public static AsyncOperation LoadSceneAsync(int sceneBuildIndex, [DefaultValue("LoadSceneMode.Single")] LoadSceneMode mode)
	{
		return null;
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x4E15060", Offset = "0x4E15060", VA = "0x4E15060")]
	public static AsyncOperation LoadSceneAsync(int sceneBuildIndex, LoadSceneParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x4E150B0", Offset = "0x4E150B0", VA = "0x4E150B0")]
	public static AsyncOperation LoadSceneAsync(string sceneName, [DefaultValue("LoadSceneMode.Single")] LoadSceneMode mode)
	{
		return null;
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x4E15160", Offset = "0x4E15160", VA = "0x4E15160")]
	public static AsyncOperation LoadSceneAsync(string sceneName, LoadSceneParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x4E151C0", Offset = "0x4E151C0", VA = "0x4E151C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_SceneLoaded(Scene scene, LoadSceneMode mode)
	{
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x4E15280", Offset = "0x4E15280", VA = "0x4E15280")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_SceneUnloaded(Scene scene)
	{
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x4E15330", Offset = "0x4E15330", VA = "0x4E15330")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_ActiveSceneChanged(Scene previousActiveScene, Scene newActiveScene)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x4E14640", Offset = "0x4E14640", VA = "0x4E14640")]
	private static extern void GetActiveScene_Injected(out Scene ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x4E14700", Offset = "0x4E14700", VA = "0x4E14700")]
	private static extern void GetSceneAt_Injected(int index, out Scene ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x4E14960", Offset = "0x4E14960", VA = "0x4E14960")]
	private static extern void MoveGameObjectToScene_Injected(IntPtr go, [In] ref Scene scene);
}
