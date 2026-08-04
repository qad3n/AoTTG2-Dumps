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
		[Address(RVA = "0x4EEE2C0", Offset = "0x4EEE2C0", VA = "0x4EEE2C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000A")]
	public bool dynamic
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x4EECDF0", Offset = "0x4EECDF0", VA = "0x4EECDF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000B")]
	public int fontSize
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x4EEE3C0", Offset = "0x4EEE3C0", VA = "0x4EEE3C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000001")]
	public static event Action<Font> textureRebuilt
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x4EEE120", Offset = "0x4EEE120", VA = "0x4EEE120")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x4EEE1F0", Offset = "0x4EEE1F0", VA = "0x4EEE1F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4EEE490", Offset = "0x4EEE490", VA = "0x4EEE490")]
	public Font()
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4EEE550", Offset = "0x4EEE550", VA = "0x4EEE550")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeTextureRebuilt_Internal(Font font)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4EEE5C0", Offset = "0x4EEE5C0", VA = "0x4EEE5C0")]
	public bool HasCharacter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4EEE660", Offset = "0x4EEE660", VA = "0x4EEE660")]
	private bool HasCharacter(int c)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4EEE510", Offset = "0x4EEE510", VA = "0x4EEE510")]
	private static extern void Internal_CreateFont([UnityEngine.Writable] Font self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4EEE360", Offset = "0x4EEE360", VA = "0x4EEE360")]
	private static extern Material get_material_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4EEE390", Offset = "0x4EEE390", VA = "0x4EEE390")]
	private static extern bool get_dynamic_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4EEE460", Offset = "0x4EEE460", VA = "0x4EEE460")]
	private static extern int get_fontSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4EEE700", Offset = "0x4EEE700", VA = "0x4EEE700")]
	private static extern bool HasCharacter_Injected(IntPtr _unity_self, int c);
}
