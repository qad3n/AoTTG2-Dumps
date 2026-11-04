// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextMesh
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x305F9D0", Offset = "0x305DFD0", VA = "0x18305F9D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public int fontSize
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x305F8F0", Offset = "0x305DEF0", VA = "0x18305F8F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public TextAlignment alignment
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x305F590", Offset = "0x305DB90", VA = "0x18305F590")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public TextAnchor anchor
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x305F660", Offset = "0x305DC60", VA = "0x18305F660")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public float characterSize
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x305F740", Offset = "0x305DD40", VA = "0x18305F740")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Color color
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x305F820", Offset = "0x305DE20", VA = "0x18305F820")]
		set
		{
		}
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public TextMesh()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x305F980", Offset = "0x305DF80", VA = "0x18305F980")]
	private static extern void set_text_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x305F8B0", Offset = "0x305DEB0", VA = "0x18305F8B0")]
	private static extern void set_fontSize_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x305F550", Offset = "0x305DB50", VA = "0x18305F550")]
	private static extern void set_alignment_Injected(IntPtr _unity_self, TextAlignment value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x305F620", Offset = "0x305DC20", VA = "0x18305F620")]
	private static extern void set_anchor_Injected(IntPtr _unity_self, TextAnchor value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x305F6F0", Offset = "0x305DCF0", VA = "0x18305F6F0")]
	private static extern void set_characterSize_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x305F7D0", Offset = "0x305DDD0", VA = "0x18305F7D0")]
	private static extern void set_color_Injected(IntPtr _unity_self, [In] ref Color value);
}
