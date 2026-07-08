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
	[Address(RVA = "0x4DE2A90", Offset = "0x4DE2A90", VA = "0x4DE2A90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeDeviceLoaded(string loadedDeviceName)
	{
	}
}
