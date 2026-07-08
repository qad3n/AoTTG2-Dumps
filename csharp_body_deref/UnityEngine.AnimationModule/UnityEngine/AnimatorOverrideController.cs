using System.Reflection;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000015")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/Animation.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/AnimatorOverrideController.h")]
[DefaultMember("Item")]
public class AnimatorOverrideController : RuntimeAnimatorController
{
	[Token(Token = "0x2000016")]
	internal delegate void OnOverrideControllerDirtyCallback();

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x18")]
	internal OnOverrideControllerDirtyCallback OnOverrideControllerDirty;

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4A7E7B0", Offset = "0x4A7E7B0", VA = "0x4A7E7B0")]
	[UnityEngine.Bindings.NativeConditional("UNITY_EDITOR")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void OnInvalidateOverrideController(AnimatorOverrideController controller)
	{
	}
}
