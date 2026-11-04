// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AccessibilityNodeManager
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Accessibility;

[Token(Token = "0x200000C")]
[UnityEngine.Bindings.NativeHeader("Modules/Accessibility/Native/AccessibilityNodeManager.h")]
internal static class AccessibilityNodeManager
{
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2E7E570", Offset = "0x2E7CB70", VA = "0x182E7E570")]
	internal static bool CreateNativeNodeWithData(AccessibilityNodeData nodeData)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2E7E5B0", Offset = "0x2E7CBB0", VA = "0x182E7E5B0")]
	internal static extern void DestroyNativeNode(int nodeId);

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x2E7E990", Offset = "0x2E7CF90", VA = "0x182E7E990")]
	internal static void SetFrame(int nodeId, Rect frame)
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2E7E6C0", Offset = "0x2E7CCC0", VA = "0x182E7E6C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_InvokeFocusChanged(int nodeId, bool isNodeFocused)
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x2E7E870", Offset = "0x2E7CE70", VA = "0x182E7E870")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_InvokeNodeInvoked(int nodeId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2E7E810", Offset = "0x2E7CE10", VA = "0x182E7E810")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_InvokeIncremented(int nodeId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2E7E5F0", Offset = "0x2E7CBF0", VA = "0x182E7E5F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_InvokeDecremented(int nodeId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2E7E8E0", Offset = "0x2E7CEE0", VA = "0x182E7E8E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_InvokeScrolled(int nodeId, AccessibilityScrollDirection direction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2E7E650", Offset = "0x2E7CC50", VA = "0x182E7E650")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_InvokeDismissed(int nodeId)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2E7E530", Offset = "0x2E7CB30", VA = "0x182E7E530")]
	private static extern bool CreateNativeNodeWithData_Injected([In] ref AccessibilityNodeData nodeData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x2E7E950", Offset = "0x2E7CF50", VA = "0x182E7E950")]
	private static extern void SetFrame_Injected(int nodeId, [In] ref Rect frame);
}
