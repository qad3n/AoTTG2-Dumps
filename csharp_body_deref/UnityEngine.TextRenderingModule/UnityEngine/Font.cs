// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Font
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000010")]
[UnityEngine.Bindings.StaticAccessor("TextRenderingPrivate", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/TextRendering/Public/FontImpl.h")]
[UnityEngine.NativeClass("TextRendering::Font")]
[UnityEngine.Bindings.NativeHeader("Modules/TextRendering/Public/Font.h")]
public sealed class Font : Object
{
	[Token(Token = "0x2000011")]
	public delegate void FontTextureRebuildCallback();

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<Font> m_textureRebuilt;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private FontTextureRebuildCallback m_FontTextureRebuildCallback;

	[Token(Token = "0x1700000E")]
	public Material material
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x6A5B190", Offset = "0x6A5A190", VA = "0x6A5B190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	public bool dynamic
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x6A59110", Offset = "0x6A58110", VA = "0x6A59110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	public int fontSize
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x6A5B290", Offset = "0x6A5A290", VA = "0x6A5B290")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000001")]
	public static event Action<Font> textureRebuilt
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x6A5AFF0", Offset = "0x6A59FF0", VA = "0x6A5AFF0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x6A5B0C0", Offset = "0x6A5A0C0", VA = "0x6A5B0C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x6A5B340", Offset = "0x6A5A340", VA = "0x6A5B340")]
	public Font()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x6A5B500", Offset = "0x6A5A500", VA = "0x6A5B500")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeTextureRebuilt_Internal(Font font)
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x6A5B570", Offset = "0x6A5A570", VA = "0x6A5B570")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.TextRenderingModule", "UnityEngine.TextCoreTextEngineModule" })]
	internal static Font GetDefault()
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x6A5B600", Offset = "0x6A5A600", VA = "0x6A5B600")]
	public bool HasCharacter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x6A5B680", Offset = "0x6A5A680", VA = "0x6A5B680")]
	private bool HasCharacter(int c)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x6A5B740", Offset = "0x6A5A740", VA = "0x6A5B740")]
	public static extern string[] GetPathsToOSFonts();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x6A5B770", Offset = "0x6A5A770", VA = "0x6A5B770")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static extern string[] GetOSFallbacks();

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x6A5B390", Offset = "0x6A5A390", VA = "0x6A5B390")]
	private static void Internal_CreateFont([UnityEngine.Writable] Font self, string name)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x6A5B230", Offset = "0x6A5A230", VA = "0x6A5B230")]
	private static extern IntPtr get_material_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x6A5B260", Offset = "0x6A5A260", VA = "0x6A5B260")]
	private static extern bool get_dynamic_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x6A5B310", Offset = "0x6A5A310", VA = "0x6A5B310")]
	private static extern int get_fontSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x6A5B5D0", Offset = "0x6A5A5D0", VA = "0x6A5B5D0")]
	private static extern IntPtr GetDefault_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x6A5B700", Offset = "0x6A5A700", VA = "0x6A5B700")]
	private static extern bool HasCharacter_Injected(IntPtr _unity_self, int c);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x6A5B7A0", Offset = "0x6A5A7A0", VA = "0x6A5B7A0")]
	private static extern void Internal_CreateFont_Injected([UnityEngine.Writable] Font self, ref UnityEngine.Bindings.ManagedSpanWrapper name);
}
