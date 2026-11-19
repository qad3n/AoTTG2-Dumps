// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AnimatorOverrideController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000016")]
[UnityEngine.Scripting.UsedByNativeCode]
[HelpURL("AnimatorOverrideController")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/Animation.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/AnimatorOverrideController.h")]
[DefaultMember("Item")]
public class AnimatorOverrideController : RuntimeAnimatorController
{
	[Token(Token = "0x2000017")]
	internal delegate void OnOverrideControllerDirtyCallback();

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x18")]
	internal OnOverrideControllerDirtyCallback OnOverrideControllerDirty;

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x68AC160", Offset = "0x68AB160", VA = "0x68AC160")]
	[UnityEngine.Bindings.NativeConditional("UNITY_EDITOR")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void OnInvalidateOverrideController(AnimatorOverrideController controller)
	{
	}
}
