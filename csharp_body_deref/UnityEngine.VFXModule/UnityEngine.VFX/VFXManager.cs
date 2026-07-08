using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.VFX;

[Token(Token = "0x2000007")]
[UnityEngine.Bindings.NativeHeader("Modules/VFX/Public/ScriptBindings/VFXManagerBindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/VFX/Public/VFXManager.h")]
[UnityEngine.Bindings.StaticAccessor("GetVFXManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Scripting.RequiredByNativeCode]
public static class VFXManager
{
	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x0")]
	private static readonly VFXCameraXRSettings kDefaultCameraXRSettings;
}
