// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AccessibilityNodeDataTests
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Accessibility;

[Token(Token = "0x200000B")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.AccessibilityModule" })]
[UnityEngine.Bindings.NativeHeader("Modules/Accessibility/Native/AccessibilityNodeDataTests.h")]
internal class AccessibilityNodeDataTests
{
	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x0")]
	internal static AccessibilityNodeData nodeDataFromNative;

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x6878DE0", Offset = "0x6877DE0", VA = "0x6878DE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_GetNodeDataFromManaged(ref AccessibilityNodeData nodeData)
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x6878F80", Offset = "0x6877F80", VA = "0x6878F80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_GetNodeDataToManaged(in AccessibilityNodeData nodeData)
	{
	}
}
