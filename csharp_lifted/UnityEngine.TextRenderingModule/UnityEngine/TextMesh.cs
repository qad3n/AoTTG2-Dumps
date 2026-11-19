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

[Token(Token = "0x200000C")]
[UnityEngine.Bindings.NativeHeader("Modules/TextRendering/Public/TextMesh.h")]
[UnityEngine.NativeClass("TextRenderingPrivate::TextMesh")]
[RequireComponent(typeof(Transform), typeof(MeshRenderer))]
public sealed class TextMesh : Component
{
	[Token(Token = "0x17000008")]
	public string text
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x6A5A880", Offset = "0x6A59880", VA = "0x6A5A880")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public int fontSize
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x6A5AA70", Offset = "0x6A59A70", VA = "0x6A5AA70")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public TextAlignment alignment
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x6A5AB30", Offset = "0x6A59B30", VA = "0x6A5AB30")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public TextAnchor anchor
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x6A5ABF0", Offset = "0x6A59BF0", VA = "0x6A5ABF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public float characterSize
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x6A5ACB0", Offset = "0x6A59CB0", VA = "0x6A5ACB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Color color
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x6A5AD90", Offset = "0x6A59D90", VA = "0x6A5AD90")]
		set
		{
		}
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x6A5AE60", Offset = "0x6A59E60", VA = "0x6A5AE60")]
	public TextMesh()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x6A5AA30", Offset = "0x6A59A30", VA = "0x6A5AA30")]
	private static extern void set_text_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x6A5AAF0", Offset = "0x6A59AF0", VA = "0x6A5AAF0")]
	private static extern void set_fontSize_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x6A5ABB0", Offset = "0x6A59BB0", VA = "0x6A5ABB0")]
	private static extern void set_alignment_Injected(IntPtr _unity_self, TextAlignment value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x6A5AC70", Offset = "0x6A59C70", VA = "0x6A5AC70")]
	private static extern void set_anchor_Injected(IntPtr _unity_self, TextAnchor value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x6A5AD40", Offset = "0x6A59D40", VA = "0x6A5AD40")]
	private static extern void set_characterSize_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x6A5AE20", Offset = "0x6A59E20", VA = "0x6A5AE20")]
	private static extern void set_color_Injected(IntPtr _unity_self, [In] ref Color value);
}
