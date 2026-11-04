// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.XRDevice
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

[Token(Token = "0x2000003")]
[Obsolete("UnityEngine.VRModule is deprecated and will be removed in a future version. Please use the APIs in the UnityEngine.XRModule instead")]
[UnityEngine.Bindings.NativeConditional("ENABLE_VR")]
public static class XRDevice
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<string> deviceLoaded;

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x3312B30", Offset = "0x3311130", VA = "0x183312B30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeDeviceLoaded(string loadedDeviceName)
	{
	}
}
