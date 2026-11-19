// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Internal.InputUnsafeUtility
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Internal;

[Token(Token = "0x200000E")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputBindings.h")]
internal static class InputUnsafeUtility
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x69C0C10", Offset = "0x69BFC10", VA = "0x69C0C10")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetKeyString__Unmanaged(byte* name, int nameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x69C0C50", Offset = "0x69BFC50", VA = "0x69C0C50")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetKeyUpString__Unmanaged(byte* name, int nameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x69C0C90", Offset = "0x69BFC90", VA = "0x69C0C90")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetKeyDownString__Unmanaged(byte* name, int nameLen);

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x69BDFF0", Offset = "0x69BCFF0", VA = "0x69BDFF0")]
	[UnityEngine.Bindings.NativeThrows]
	internal static float GetAxis(string axisName)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x69C0D00", Offset = "0x69BFD00", VA = "0x69C0D00")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern float GetAxis__Unmanaged(byte* axisName, int axisNameLen);

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x69BE160", Offset = "0x69BD160", VA = "0x69BE160")]
	[UnityEngine.Bindings.NativeThrows]
	internal static float GetAxisRaw(string axisName)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x69C0D70", Offset = "0x69BFD70", VA = "0x69C0D70")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern float GetAxisRaw__Unmanaged(byte* axisName, int axisNameLen);

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x69BE2D0", Offset = "0x69BD2D0", VA = "0x69BE2D0")]
	[UnityEngine.Bindings.NativeThrows]
	internal static bool GetButton(string buttonName)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x69C0DE0", Offset = "0x69BFDE0", VA = "0x69C0DE0")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetButton__Unmanaged(byte* buttonName, int buttonNameLen);

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x69BE450", Offset = "0x69BD450", VA = "0x69BE450")]
	[UnityEngine.Bindings.NativeThrows]
	internal static bool GetButtonDown(string buttonName)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x69C0E50", Offset = "0x69BFE50", VA = "0x69C0E50")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern byte GetButtonDown__Unmanaged(byte* buttonName, int buttonNameLen);

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x69BE5D0", Offset = "0x69BD5D0", VA = "0x69BE5D0")]
	[UnityEngine.Bindings.NativeThrows]
	internal static bool GetButtonUp(string buttonName)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x69C0EC0", Offset = "0x69BFEC0", VA = "0x69C0EC0")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetButtonUp__Unmanaged(byte* buttonName, int buttonNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x69C0F00", Offset = "0x69BFF00", VA = "0x69C0F00")]
	internal unsafe static extern bool IsJoystickPreconfigured__Unmanaged(byte* joystickName, int joystickNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x69C0CD0", Offset = "0x69BFCD0", VA = "0x69C0CD0")]
	private static extern float GetAxis_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper axisName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x69C0D40", Offset = "0x69BFD40", VA = "0x69C0D40")]
	private static extern float GetAxisRaw_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper axisName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x69C0DB0", Offset = "0x69BFDB0", VA = "0x69C0DB0")]
	private static extern bool GetButton_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper buttonName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x69C0E20", Offset = "0x69BFE20", VA = "0x69C0E20")]
	private static extern bool GetButtonDown_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper buttonName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x69C0E90", Offset = "0x69BFE90", VA = "0x69C0E90")]
	private static extern bool GetButtonUp_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper buttonName);
}
