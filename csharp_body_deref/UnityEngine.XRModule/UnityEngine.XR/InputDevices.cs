// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.InputDevices
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200000E")]
[UnityEngine.Bindings.StaticAccessor("XRInputDevices::Get()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Input/Public/XRInputDevices.h")]
[UnityEngine.Bindings.NativeConditional("ENABLE_VR")]
[UnityEngine.Scripting.UsedByNativeCode]
public class InputDevices
{
	[Token(Token = "0x4000040")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<InputDevice> deviceConnected;

	[Token(Token = "0x4000041")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<InputDevice> deviceDisconnected;

	[Token(Token = "0x4000042")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<InputDevice> deviceConfigChanged;

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x510C7E0", Offset = "0x510C7E0", VA = "0x510C7E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeConnectionEvent(ulong deviceId, ConnectionChangeType change)
	{
	}
}
