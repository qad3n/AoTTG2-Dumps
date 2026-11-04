// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x20003F5")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/ScriptableRuntimeReflectionSystem.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public static class ScriptableRuntimeReflectionSystemSettings
{
	[Token(Token = "0x4000D2E")]
	[FieldOffset(Offset = "0x0")]
	private static ScriptableRuntimeReflectionSystemWrapper s_Instance;

	[Token(Token = "0x170003D2")]
	private static IScriptableRuntimeReflectionSystem Internal_ScriptableRuntimeReflectionSystemSettings_system
	{
		[Token(Token = "0x60017E0")]
		[Address(RVA = "0x2F79950", Offset = "0x2F77F50", VA = "0x182F79950")]
		[UnityEngine.Scripting.RequiredByNativeCode]
		set
		{
		}
	}

	[Token(Token = "0x170003D3")]
	private static ScriptableRuntimeReflectionSystemWrapper Internal_ScriptableRuntimeReflectionSystemSettings_instance
	{
		[Token(Token = "0x60017E1")]
		[Address(RVA = "0x2F79900", Offset = "0x2F77F00", VA = "0x182F79900")]
		[UnityEngine.Scripting.RequiredByNativeCode]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017E2")]
	[Address(RVA = "0x2F79850", Offset = "0x2F77E50", VA = "0x182F79850")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	[UnityEngine.Bindings.StaticAccessor("ScriptableRuntimeReflectionSystem", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void ScriptingDirtyReflectionSystemInstance();
}
