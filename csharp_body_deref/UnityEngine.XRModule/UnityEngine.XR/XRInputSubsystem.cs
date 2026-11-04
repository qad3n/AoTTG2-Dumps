// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.XRInputSubsystem
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

[Token(Token = "0x2000017")]
[UnityEngine.Bindings.NativeType(Header = "Modules/XR/Subsystems/Input/XRInputSubsystem.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
public class XRInputSubsystem : IntegratedSubsystem<XRInputSubsystemDescriptor>
{
	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x20")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<XRInputSubsystem> trackingOriginUpdated;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<XRInputSubsystem> boundaryChanged;

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x3315440", Offset = "0x3313A40", VA = "0x183315440")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void InvokeTrackingOriginUpdatedEvent(IntPtr internalPtr)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3315390", Offset = "0x3313990", VA = "0x183315390")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void InvokeBoundaryChangedEvent(IntPtr internalPtr)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x33154F0", Offset = "0x3313AF0", VA = "0x1833154F0")]
	public XRInputSubsystem()
	{
	}
}
