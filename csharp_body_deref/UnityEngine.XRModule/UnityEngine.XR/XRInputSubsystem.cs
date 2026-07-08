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
	[Address(RVA = "0x4DE51C0", Offset = "0x4DE51C0", VA = "0x4DE51C0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void InvokeTrackingOriginUpdatedEvent(IntPtr internalPtr)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4DE5260", Offset = "0x4DE5260", VA = "0x4DE5260")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private static void InvokeBoundaryChangedEvent(IntPtr internalPtr)
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4DE5300", Offset = "0x4DE5300", VA = "0x4DE5300")]
	public XRInputSubsystem()
	{
	}
}
