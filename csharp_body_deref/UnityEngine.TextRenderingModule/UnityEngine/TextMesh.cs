// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextMesh
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4EEDED0", Offset = "0x4EEDED0", VA = "0x4EEDED0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4EEDF80", Offset = "0x4EEDF80", VA = "0x4EEDF80")]
	private static extern void set_color_Injected(IntPtr _unity_self, [In] ref Color value);
}
