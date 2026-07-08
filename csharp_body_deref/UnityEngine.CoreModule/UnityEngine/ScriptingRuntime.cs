using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000177")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/ScriptingRuntime.h")]
[UnityEngine.Bindings.VisibleToOtherModules]
internal class ScriptingRuntime
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x4AD6EE0", Offset = "0x4AD6EE0", VA = "0x4AD6EE0")]
	public static extern string[] GetAllUserAssemblies();
}
