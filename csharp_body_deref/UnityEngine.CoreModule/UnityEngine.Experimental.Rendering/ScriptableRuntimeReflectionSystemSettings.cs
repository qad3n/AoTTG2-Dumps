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
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/ScriptableRuntimeReflectionSystem.h")]
public static class ScriptableRuntimeReflectionSystemSettings
{
	[Token(Token = "0x4000D2C")]
	[FieldOffset(Offset = "0x0")]
	private static ScriptableRuntimeReflectionSystemWrapper s_Instance;

	[Token(Token = "0x170003D7")]
	private static IScriptableRuntimeReflectionSystem Internal_ScriptableRuntimeReflectionSystemSettings_system
	{
		[Token(Token = "0x60017F4")]
		[Address(RVA = "0x696D410", Offset = "0x696C410", VA = "0x696D410")]
		[UnityEngine.Scripting.RequiredByNativeCode]
		set
		{
		}
	}

	[Token(Token = "0x170003D8")]
	private static ScriptableRuntimeReflectionSystemWrapper Internal_ScriptableRuntimeReflectionSystemSettings_instance
	{
		[Token(Token = "0x60017F5")]
		[Address(RVA = "0x696D5B0", Offset = "0x696C5B0", VA = "0x696D5B0")]
		[UnityEngine.Scripting.RequiredByNativeCode]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017F6")]
	[Address(RVA = "0x696D620", Offset = "0x696C620", VA = "0x696D620")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	[UnityEngine.Bindings.StaticAccessor("ScriptableRuntimeReflectionSystem", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void ScriptingDirtyReflectionSystemInstance();
}
