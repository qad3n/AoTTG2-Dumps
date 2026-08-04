// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Internal.InputUnsafeUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Internal;

[Token(Token = "0x200000D")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputBindings.h")]
internal static class InputUnsafeUtility
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4E71350", Offset = "0x4E71350", VA = "0x4E71350")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetKeyString__Unmanaged(byte* name, int nameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4E71390", Offset = "0x4E71390", VA = "0x4E71390")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetKeyUpString__Unmanaged(byte* name, int nameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4E713D0", Offset = "0x4E713D0", VA = "0x4E713D0")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetKeyDownString__Unmanaged(byte* name, int nameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4E6F100", Offset = "0x4E6F100", VA = "0x4E6F100")]
	[UnityEngine.Bindings.NativeThrows]
	internal static extern float GetAxis(string axisName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4E71410", Offset = "0x4E71410", VA = "0x4E71410")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern float GetAxis__Unmanaged(byte* axisName, int axisNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4E6F160", Offset = "0x4E6F160", VA = "0x4E6F160")]
	[UnityEngine.Bindings.NativeThrows]
	internal static extern float GetAxisRaw(string axisName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4E71450", Offset = "0x4E71450", VA = "0x4E71450")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern float GetAxisRaw__Unmanaged(byte* axisName, int axisNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4E6F1C0", Offset = "0x4E6F1C0", VA = "0x4E6F1C0")]
	[UnityEngine.Bindings.NativeThrows]
	internal static extern bool GetButton(string buttonName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4E71490", Offset = "0x4E71490", VA = "0x4E71490")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetButton__Unmanaged(byte* buttonName, int buttonNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4E6F220", Offset = "0x4E6F220", VA = "0x4E6F220")]
	[UnityEngine.Bindings.NativeThrows]
	internal static extern bool GetButtonDown(string buttonName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4E714D0", Offset = "0x4E714D0", VA = "0x4E714D0")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern byte GetButtonDown__Unmanaged(byte* buttonName, int buttonNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4E6F280", Offset = "0x4E6F280", VA = "0x4E6F280")]
	[UnityEngine.Bindings.NativeThrows]
	internal static extern bool GetButtonUp(string buttonName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4E71510", Offset = "0x4E71510", VA = "0x4E71510")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetButtonUp__Unmanaged(byte* buttonName, int buttonNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4E71550", Offset = "0x4E71550", VA = "0x4E71550")]
	internal unsafe static extern bool IsJoystickPreconfigured__Unmanaged(byte* joystickName, int joystickNameLen);
}
