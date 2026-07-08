using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000009")]
[RequireComponent(typeof(Transform), typeof(MeshRenderer))]
[UnityEngine.NativeClass("TextRenderingPrivate::TextMesh")]
[UnityEngine.Bindings.NativeHeader("Modules/TextRendering/Public/TextMesh.h")]
public sealed class TextMesh : Component
{
	[Token(Token = "0x17000008")]
	public Color color
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x4BC65A0", Offset = "0x4BC65A0", VA = "0x4BC65A0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4BC6650", Offset = "0x4BC6650", VA = "0x4BC6650")]
	private static extern void set_color_Injected(IntPtr _unity_self, [In] ref Color value);
}
