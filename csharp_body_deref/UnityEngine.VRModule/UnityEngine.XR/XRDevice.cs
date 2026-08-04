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

[Token(Token = "0x2000004")]
[UnityEngine.Bindings.NativeConditional("ENABLE_VR")]
public static class XRDevice
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<string> deviceLoaded;

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x510C050", Offset = "0x510C050", VA = "0x510C050")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeDeviceLoaded(string loadedDeviceName)
	{
	}
}
