using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200000D")]
[UnityEngine.Bindings.StaticAccessor("TextRenderingPrivate", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/TextRendering/Public/FontImpl.h")]
[UnityEngine.Bindings.NativeHeader("Modules/TextRendering/Public/Font.h")]
[UnityEngine.NativeClass("TextRendering::Font")]
public sealed class Font : Object
{
	[Token(Token = "0x200000E")]
	public delegate void FontTextureRebuildCallback();

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private FontTextureRebuildCallback m_FontTextureRebuildCallback;

	[Token(Token = "0x17000009")]
	public Material material
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x4BC6990", Offset = "0x4BC6990", VA = "0x4BC6990")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000A")]
	public bool dynamic
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x4BC54C0", Offset = "0x4BC54C0", VA = "0x4BC54C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000B")]
	public int fontSize
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x4BC6A90", Offset = "0x4BC6A90", VA = "0x4BC6A90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000001")]
	public static event Action<Font> textureRebuilt
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x4BC67F0", Offset = "0x4BC67F0", VA = "0x4BC67F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x4BC68C0", Offset = "0x4BC68C0", VA = "0x4BC68C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4BC6B60", Offset = "0x4BC6B60", VA = "0x4BC6B60")]
	public Font()
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4BC6C20", Offset = "0x4BC6C20", VA = "0x4BC6C20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeTextureRebuilt_Internal(Font font)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4BC6C90", Offset = "0x4BC6C90", VA = "0x4BC6C90")]
	public bool HasCharacter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4BC6D30", Offset = "0x4BC6D30", VA = "0x4BC6D30")]
	private bool HasCharacter(int c)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4BC6BE0", Offset = "0x4BC6BE0", VA = "0x4BC6BE0")]
	private static extern void Internal_CreateFont([UnityEngine.Writable] Font self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4BC6A30", Offset = "0x4BC6A30", VA = "0x4BC6A30")]
	private static extern Material get_material_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4BC6A60", Offset = "0x4BC6A60", VA = "0x4BC6A60")]
	private static extern bool get_dynamic_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4BC6B30", Offset = "0x4BC6B30", VA = "0x4BC6B30")]
	private static extern int get_fontSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4BC6DD0", Offset = "0x4BC6DD0", VA = "0x4BC6DD0")]
	private static extern bool HasCharacter_Injected(IntPtr _unity_self, int c);
}
