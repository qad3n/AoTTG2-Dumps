using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x200034B")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/ScriptableRuntimeReflectionSystem.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public static class ScriptableRuntimeReflectionSystemSettings
{
	[Token(Token = "0x4000AA7")]
	[FieldOffset(Offset = "0x0")]
	private static ScriptableRuntimeReflectionSystemWrapper s_Instance;

	[Token(Token = "0x170002C8")]
	private static IScriptableRuntimeReflectionSystem Internal_ScriptableRuntimeReflectionSystemSettings_system
	{
		[Token(Token = "0x60011A2")]
		[Address(RVA = "0x4B13220", Offset = "0x4B13220", VA = "0x4B13220")]
		[UnityEngine.Scripting.RequiredByNativeCode]
		set
		{
		}
	}

	[Token(Token = "0x170002C9")]
	private static ScriptableRuntimeReflectionSystemWrapper Internal_ScriptableRuntimeReflectionSystemSettings_instance
	{
		[Token(Token = "0x60011A3")]
		[Address(RVA = "0x4B133C0", Offset = "0x4B133C0", VA = "0x4B133C0")]
		[UnityEngine.Scripting.RequiredByNativeCode]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x4B13430", Offset = "0x4B13430", VA = "0x4B13430")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	[UnityEngine.Bindings.StaticAccessor("ScriptableRuntimeReflectionSystem", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void ScriptingDirtyReflectionSystemInstance();
}
