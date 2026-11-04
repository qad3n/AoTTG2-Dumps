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

[Token(Token = "0x200000D")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputBindings.h")]
internal static class InputUnsafeUtility
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2FC4200", Offset = "0x2FC2800", VA = "0x182FC4200")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetKeyString__Unmanaged(byte* name, int nameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2FC4240", Offset = "0x2FC2840", VA = "0x182FC4240")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetKeyUpString__Unmanaged(byte* name, int nameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2FC41C0", Offset = "0x2FC27C0", VA = "0x182FC41C0")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetKeyDownString__Unmanaged(byte* name, int nameLen);

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2FC39F0", Offset = "0x2FC1FF0", VA = "0x182FC39F0")]
	[UnityEngine.Bindings.NativeThrows]
	internal static float GetAxis(string axisName)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x2FC39B0", Offset = "0x2FC1FB0", VA = "0x182FC39B0")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern float GetAxis__Unmanaged(byte* axisName, int axisNameLen);

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x2FC37D0", Offset = "0x2FC1DD0", VA = "0x182FC37D0")]
	[UnityEngine.Bindings.NativeThrows]
	internal static float GetAxisRaw(string axisName)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x2FC3790", Offset = "0x2FC1D90", VA = "0x182FC3790")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern float GetAxisRaw__Unmanaged(byte* axisName, int axisNameLen);

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x2FC4030", Offset = "0x2FC2630", VA = "0x182FC4030")]
	[UnityEngine.Bindings.NativeThrows]
	internal static bool GetButton(string buttonName)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x2FC3FF0", Offset = "0x2FC25F0", VA = "0x182FC3FF0")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetButton__Unmanaged(byte* buttonName, int buttonNameLen);

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x2FC3C10", Offset = "0x2FC2210", VA = "0x182FC3C10")]
	[UnityEngine.Bindings.NativeThrows]
	internal static bool GetButtonDown(string buttonName)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x2FC3BD0", Offset = "0x2FC21D0", VA = "0x182FC3BD0")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern byte GetButtonDown__Unmanaged(byte* buttonName, int buttonNameLen);

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x2FC3E20", Offset = "0x2FC2420", VA = "0x182FC3E20")]
	[UnityEngine.Bindings.NativeThrows]
	internal static bool GetButtonUp(string buttonName)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x2FC3DE0", Offset = "0x2FC23E0", VA = "0x182FC3DE0")]
	[UnityEngine.Bindings.NativeThrows]
	internal unsafe static extern bool GetButtonUp__Unmanaged(byte* buttonName, int buttonNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x2FC3970", Offset = "0x2FC1F70", VA = "0x182FC3970")]
	private static extern float GetAxis_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper axisName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x2FC3750", Offset = "0x2FC1D50", VA = "0x182FC3750")]
	private static extern float GetAxisRaw_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper axisName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x2FC3FB0", Offset = "0x2FC25B0", VA = "0x182FC3FB0")]
	private static extern bool GetButton_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper buttonName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x2FC3B90", Offset = "0x2FC2190", VA = "0x182FC3B90")]
	private static extern bool GetButtonDown_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper buttonName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x2FC3DA0", Offset = "0x2FC23A0", VA = "0x182FC3DA0")]
	private static extern bool GetButtonUp_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper buttonName);
}
