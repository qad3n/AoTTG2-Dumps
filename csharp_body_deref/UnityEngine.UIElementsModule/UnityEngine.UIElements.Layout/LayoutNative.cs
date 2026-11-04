// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutNative
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x200061E")]
[UnityEngine.Bindings.NativeHeader("Modules/UIElements/Core/Layout/Native/LayoutNative.h")]
internal static class LayoutNative
{
	[Token(Token = "0x200061F")]
	internal enum LayoutLogEventType
	{
		[Token(Token = "0x40016E6")]
		None,
		[Token(Token = "0x40016E7")]
		Error,
		[Token(Token = "0x40016E8")]
		Measure,
		[Token(Token = "0x40016E9")]
		Layout,
		[Token(Token = "0x40016EA")]
		CacheUsage,
		[Token(Token = "0x40016EB")]
		BeginLayout,
		[Token(Token = "0x40016EC")]
		EndLayout
	}

	[Token(Token = "0x2000620")]
	internal class LayoutLogData
	{
		[Token(Token = "0x40016ED")]
		[FieldOffset(Offset = "0x10")]
		public LayoutNode node;

		[Token(Token = "0x40016EE")]
		[FieldOffset(Offset = "0x50")]
		public LayoutLogEventType eventType;

		[Token(Token = "0x40016EF")]
		[FieldOffset(Offset = "0x58")]
		public string message;

		[Token(Token = "0x6002CB8")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public LayoutLogData()
		{
		}
	}

	[Token(Token = "0x40016E4")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<LayoutLogData> onLayoutLog;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002CB6")]
	[Address(RVA = "0x31BE990", Offset = "0x31BCF90", VA = "0x1831BE990")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = false)]
	internal static extern void CalculateLayout(IntPtr node, float parentWidth, float parentHeight, int parentDirection, IntPtr state, IntPtr exceptionGCHandle);

	[Token(Token = "0x6002CB7")]
	[Address(RVA = "0x31BEA00", Offset = "0x31BD000", VA = "0x1831BEA00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void LayoutLog_Internal(IntPtr nodePtr, LayoutLogEventType type, string message)
	{
	}
}
