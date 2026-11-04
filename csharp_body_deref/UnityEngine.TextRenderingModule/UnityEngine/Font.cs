// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Font
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x305D0D0", Offset = "0x305B6D0", VA = "0x18305D0D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	public bool dynamic
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x305CF50", Offset = "0x305B550", VA = "0x18305CF50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	public int fontSize
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x305D010", Offset = "0x305B610", VA = "0x18305D010")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000001")]
	public static event Action<Font> textureRebuilt
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x305CE40", Offset = "0x305B440", VA = "0x18305CE40")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x305D170", Offset = "0x305B770", VA = "0x18305D170")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x305CDE0", Offset = "0x305B3E0", VA = "0x18305CDE0")]
	public Font()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x305CD60", Offset = "0x305B360", VA = "0x18305CD60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeTextureRebuilt_Internal(Font font)
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x305C960", Offset = "0x305AF60", VA = "0x18305C960")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.TextRenderingModule", "UnityEngine.TextCoreTextEngineModule" })]
	internal static Font GetDefault()
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x305CA60", Offset = "0x305B060", VA = "0x18305CA60")]
	public bool HasCharacter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x305CAF0", Offset = "0x305B0F0", VA = "0x18305CAF0")]
	private bool HasCharacter(int c)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x305C9F0", Offset = "0x305AFF0", VA = "0x18305C9F0")]
	public static extern string[] GetPathsToOSFonts();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x305C9C0", Offset = "0x305AFC0", VA = "0x18305C9C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static extern string[] GetOSFallbacks();

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x305CBD0", Offset = "0x305B1D0", VA = "0x18305CBD0")]
	private static void Internal_CreateFont([UnityEngine.Writable] Font self, string name)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x305D090", Offset = "0x305B690", VA = "0x18305D090")]
	private static extern IntPtr get_material_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x305CF10", Offset = "0x305B510", VA = "0x18305CF10")]
	private static extern bool get_dynamic_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x305CFD0", Offset = "0x305B5D0", VA = "0x18305CFD0")]
	private static extern int get_fontSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x305C930", Offset = "0x305AF30", VA = "0x18305C930")]
	private static extern IntPtr GetDefault_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x305CA20", Offset = "0x305B020", VA = "0x18305CA20")]
	private static extern bool HasCharacter_Injected(IntPtr _unity_self, int c);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x305CB80", Offset = "0x305B180", VA = "0x18305CB80")]
	private static extern void Internal_CreateFont_Injected([UnityEngine.Writable] Font self, ref UnityEngine.Bindings.ManagedSpanWrapper name);
}
