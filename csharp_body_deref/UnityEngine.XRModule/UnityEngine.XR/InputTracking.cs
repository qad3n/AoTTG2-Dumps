// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.InputTracking
// Update status: unchanged since the previous dump
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

namespace UnityEngine.XR;

[Token(Token = "0x2000002")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Input/Public/XRInputTrackingFacade.h")]
[UnityEngine.Bindings.NativeConditional("ENABLE_VR")]
[UnityEngine.Bindings.StaticAccessor("XRInputTrackingFacade::Get()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public static class InputTracking
{
	[Token(Token = "0x2000003")]
	private enum TrackingStateEventType
	{
		[Token(Token = "0x4000006")]
		NodeAdded,
		[Token(Token = "0x4000007")]
		NodeRemoved,
		[Token(Token = "0x4000008")]
		TrackingAcquired,
		[Token(Token = "0x4000009")]
		TrackingLost
	}

	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<XRNodeState> trackingAcquired;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<XRNodeState> trackingLost;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<XRNodeState> nodeAdded;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<XRNodeState> nodeRemoved;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x510C0A0", Offset = "0x510C0A0", VA = "0x510C0A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeTrackingEvent(TrackingStateEventType eventType, XRNode nodeType, long uniqueID, bool tracked)
	{
	}
}
