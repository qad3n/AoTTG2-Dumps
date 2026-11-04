// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutDelegates
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using AOT;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20005F8")]
internal static class LayoutDelegates
{
	[Token(Token = "0x400163F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker s_InvokeMeasureFunctionMarker;

	[Token(Token = "0x4001640")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_InvokeBaselineFunctionMarker;

	[Token(Token = "0x4001641")]
	[FieldOffset(Offset = "0x10")]
	private static readonly InvokeMeasureFunctionDelegate s_InvokeMeasureDelegate;

	[Token(Token = "0x4001642")]
	[FieldOffset(Offset = "0x18")]
	private static readonly InvokeBaselineFunctionDelegate s_InvokeBaselineDelegate;

	[Token(Token = "0x4001643")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly IntPtr s_InvokeMeasureFunction;

	[Token(Token = "0x4001644")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly IntPtr s_InvokeBaselineFunction;

	[Token(Token = "0x6002C64")]
	[Address(RVA = "0x31BE460", Offset = "0x31BCA60", VA = "0x1831BE460")]
	[MonoPInvokeCallback(typeof(InvokeMeasureFunctionDelegate))]
	private static void InvokeMeasureFunction(ref LayoutNode node, float width, LayoutMeasureMode widthMode, float height, LayoutMeasureMode heightMode, ref IntPtr exception, out LayoutSize result)
	{
	}

	[Token(Token = "0x6002C65")]
	[Address(RVA = "0x31BE280", Offset = "0x31BC880", VA = "0x1831BE280")]
	[MonoPInvokeCallback(typeof(InvokeBaselineFunctionDelegate))]
	private static float InvokeBaselineFunction(ref LayoutNode node, float width, float height)
	{
		return default(float);
	}
}
