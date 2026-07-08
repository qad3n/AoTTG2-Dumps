using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200022C")]
[UnityEngine.Bindings.NativeHeader("ModuleOverrides/com.unity.ui/Core/Native/Renderer/UIPainter2D.bindings.h")]
internal static class UIPainter2D
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E28")]
	[Address(RVA = "0x4D25940", Offset = "0x4D25940", VA = "0x4D25940")]
	public static extern void Destroy(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E29")]
	[Address(RVA = "0x4D25970", Offset = "0x4D25970", VA = "0x4D25970")]
	public static extern void Reset(IntPtr handle);
}
