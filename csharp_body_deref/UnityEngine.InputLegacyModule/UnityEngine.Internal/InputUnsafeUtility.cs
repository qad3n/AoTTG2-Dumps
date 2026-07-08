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
	[Address(RVA = "0x4B49A20", Offset = "0x4B49A20", VA = "0x4B49A20")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetKeyString__Unmanaged(byte* name, int nameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4B49A60", Offset = "0x4B49A60", VA = "0x4B49A60")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetKeyUpString__Unmanaged(byte* name, int nameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4B49AA0", Offset = "0x4B49AA0", VA = "0x4B49AA0")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetKeyDownString__Unmanaged(byte* name, int nameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4B477D0", Offset = "0x4B477D0", VA = "0x4B477D0")]
	[UnityEngine.Bindings.NativeThrows]
	internal static extern float GetAxis(string axisName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4B49AE0", Offset = "0x4B49AE0", VA = "0x4B49AE0")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern float GetAxis__Unmanaged(byte* axisName, int axisNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4B47830", Offset = "0x4B47830", VA = "0x4B47830")]
	[UnityEngine.Bindings.NativeThrows]
	internal static extern float GetAxisRaw(string axisName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4B49B20", Offset = "0x4B49B20", VA = "0x4B49B20")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern float GetAxisRaw__Unmanaged(byte* axisName, int axisNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4B47890", Offset = "0x4B47890", VA = "0x4B47890")]
	[UnityEngine.Bindings.NativeThrows]
	internal static extern bool GetButton(string buttonName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4B49B60", Offset = "0x4B49B60", VA = "0x4B49B60")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetButton__Unmanaged(byte* buttonName, int buttonNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4B478F0", Offset = "0x4B478F0", VA = "0x4B478F0")]
	[UnityEngine.Bindings.NativeThrows]
	internal static extern bool GetButtonDown(string buttonName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4B49BA0", Offset = "0x4B49BA0", VA = "0x4B49BA0")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern byte GetButtonDown__Unmanaged(byte* buttonName, int buttonNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4B47950", Offset = "0x4B47950", VA = "0x4B47950")]
	[UnityEngine.Bindings.NativeThrows]
	internal static extern bool GetButtonUp(string buttonName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4B49BE0", Offset = "0x4B49BE0", VA = "0x4B49BE0")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetButtonUp__Unmanaged(byte* buttonName, int buttonNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4B49C20", Offset = "0x4B49C20", VA = "0x4B49C20")]
	internal unsafe static extern bool IsJoystickPreconfigured__Unmanaged(byte* joystickName, int joystickNameLen);
}
