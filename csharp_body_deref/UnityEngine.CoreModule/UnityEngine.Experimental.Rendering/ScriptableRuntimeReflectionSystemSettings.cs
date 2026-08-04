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

[Token(Token = "0x200034E")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/ScriptableRuntimeReflectionSystem.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public static class ScriptableRuntimeReflectionSystemSettings
{
	[Token(Token = "0x4000AA7")]
	[FieldOffset(Offset = "0x0")]
	private static ScriptableRuntimeReflectionSystemWrapper s_Instance;

	[Token(Token = "0x170002C9")]
	private static IScriptableRuntimeReflectionSystem Internal_ScriptableRuntimeReflectionSystemSettings_system
	{
		[Token(Token = "0x60011A4")]
		[Address(RVA = "0x4E3AB50", Offset = "0x4E3AB50", VA = "0x4E3AB50")]
		[UnityEngine.Scripting.RequiredByNativeCode]
		set
		{
		}
	}

	[Token(Token = "0x170002CA")]
	private static ScriptableRuntimeReflectionSystemWrapper Internal_ScriptableRuntimeReflectionSystemSettings_instance
	{
		[Token(Token = "0x60011A5")]
		[Address(RVA = "0x4E3ACF0", Offset = "0x4E3ACF0", VA = "0x4E3ACF0")]
		[UnityEngine.Scripting.RequiredByNativeCode]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x4E3AD60", Offset = "0x4E3AD60", VA = "0x4E3AD60")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	[UnityEngine.Bindings.StaticAccessor("ScriptableRuntimeReflectionSystem", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void ScriptingDirtyReflectionSystemInstance();
}
