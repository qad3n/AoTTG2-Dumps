// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AccessibilityNodeManager
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6878FF0", Offset = "0x6877FF0", VA = "0x6878FF0")]
	internal static bool CreateNativeNodeWithData(AccessibilityNodeData nodeData)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x6879060", Offset = "0x6878060", VA = "0x6879060")]
	internal static extern void DestroyNativeNode(int nodeId);

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x6879090", Offset = "0x6878090", VA = "0x6879090")]
	internal static void SetFrame(int nodeId, Rect frame)
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x6879110", Offset = "0x6878110", VA = "0x6879110")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_InvokeFocusChanged(int nodeId, bool isNodeFocused)
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x68792C0", Offset = "0x68782C0", VA = "0x68792C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_InvokeNodeInvoked(int nodeId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x68793B0", Offset = "0x68783B0", VA = "0x68793B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_InvokeIncremented(int nodeId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x68794A0", Offset = "0x68784A0", VA = "0x68794A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_InvokeDecremented(int nodeId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x6879590", Offset = "0x6878590", VA = "0x6879590")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_InvokeScrolled(int nodeId, AccessibilityScrollDirection direction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x6879680", Offset = "0x6878680", VA = "0x6879680")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_InvokeDismissed(int nodeId)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x6879030", Offset = "0x6878030", VA = "0x6879030")]
	private static extern bool CreateNativeNodeWithData_Injected([In] ref AccessibilityNodeData nodeData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x68790D0", Offset = "0x68780D0", VA = "0x68790D0")]
	private static extern void SetFrame_Injected(int nodeId, [In] ref Rect frame);
}
