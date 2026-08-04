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

[Token(Token = "0x2000016")]
[UnityEngine.Bindings.NativeType(Header = "Modules/XR/Subsystems/Input/XRInputSubsystem.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
public class XRInputSubsystem : IntegratedSubsystem<XRInputSubsystemDescriptor>
{
	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<XRInputSubsystem> trackingOriginUpdated;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<XRInputSubsystem> boundaryChanged;

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x510D250", Offset = "0x510D250", VA = "0x510D250")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void InvokeTrackingOriginUpdatedEvent(IntPtr internalPtr)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x510D2F0", Offset = "0x510D2F0", VA = "0x510D2F0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void InvokeBoundaryChangedEvent(IntPtr internalPtr)
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x510D390", Offset = "0x510D390", VA = "0x510D390")]
	public XRInputSubsystem()
	{
	}
}
