// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutDelegates
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using AOT;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000501")]
internal static class LayoutDelegates
{
	[Token(Token = "0x40010A8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker s_InvokeMeasureFunctionMarker;

	[Token(Token = "0x40010A9")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_InvokeBaselineFunctionMarker;

	[Token(Token = "0x40010AA")]
	[FieldOffset(Offset = "0x10")]
	private static readonly InvokeMeasureFunctionDelegate s_InvokeMeasureDelegate;

	[Token(Token = "0x40010AB")]
	[FieldOffset(Offset = "0x18")]
	private static readonly InvokeBaselineFunctionDelegate s_InvokeBaselineDelegate;

	[Token(Token = "0x40010AC")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly IntPtr s_InvokeMeasureFunction;

	[Token(Token = "0x40010AD")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly IntPtr s_InvokeBaselineFunction;

	[Token(Token = "0x6001F1D")]
	[Address(RVA = "0x4FBAB40", Offset = "0x4FBAB40", VA = "0x4FBAB40")]
	[MonoPInvokeCallback(typeof(InvokeMeasureFunctionDelegate))]
	private static void InvokeMeasureFunction(ref LayoutNode node, float width, LayoutMeasureMode widthMode, float height, LayoutMeasureMode heightMode, out LayoutSize result)
	{
	}

	[Token(Token = "0x6001F1E")]
	[Address(RVA = "0x4FBADA0", Offset = "0x4FBADA0", VA = "0x4FBADA0")]
	[MonoPInvokeCallback(typeof(InvokeBaselineFunctionDelegate))]
	private static float InvokeBaselineFunction(ref LayoutNode node, float width, float height)
	{
		return default(float);
	}
}
