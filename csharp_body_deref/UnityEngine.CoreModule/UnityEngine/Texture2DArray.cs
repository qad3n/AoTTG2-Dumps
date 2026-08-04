// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Texture2DArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000104")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture2DArray.h")]
public sealed class Texture2DArray : Texture
{
	[Token(Token = "0x17000134")]
	public static extern int allSlices
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000666")]
		[Address(RVA = "0x4DDBAF0", Offset = "0x4DDBAF0", VA = "0x4DDBAF0")]
		[UnityEngine.Bindings.NativeName("GetAllTextureLayersIdentifier")]
		get;
	}

	[Token(Token = "0x17000135")]
	public override bool isReadable
	{
		[Token(Token = "0x6000667")]
		[Address(RVA = "0x4DDBB20", Offset = "0x4DDBB20", VA = "0x4DDBB20", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000668")]
	[Address(RVA = "0x4DDBBF0", Offset = "0x4DDBBF0", VA = "0x4DDBBF0")]
	[UnityEngine.Bindings.FreeFunction("Texture2DArrayScripting::Create")]
	private static extern bool Internal_CreateImpl([UnityEngine.Writable] Texture2DArray mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags);

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x4DDBC50", Offset = "0x4DDBC50", VA = "0x4DDBC50")]
	private static void Internal_Create([UnityEngine.Writable] Texture2DArray mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x4DDBD20", Offset = "0x4DDBD20", VA = "0x4DDBD20")]
	internal bool ValidateFormat(TextureFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x4DDBE10", Offset = "0x4DDBE10", VA = "0x4DDBE10")]
	internal bool ValidateFormat(GraphicsFormat format, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x4DDBF40", Offset = "0x4DDBF40", VA = "0x4DDBF40")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x4DDC080", Offset = "0x4DDC080", VA = "0x4DDC080")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x4DDBFE0", Offset = "0x4DDBFE0", VA = "0x4DDBFE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Texture2DArray(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x4DDC270", Offset = "0x4DDC270", VA = "0x4DDC270")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x4DDC380", Offset = "0x4DDC380", VA = "0x4DDC380")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, int mipCount, bool linear, bool createUninitialized)
	{
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x4DDC530", Offset = "0x4DDC530", VA = "0x4DDC530")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, int mipCount, bool linear)
	{
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x4DDC550", Offset = "0x4DDC550", VA = "0x4DDC550")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear, [DefaultValue("false")] bool createUninitialized)
	{
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x4DDC600", Offset = "0x4DDC600", VA = "0x4DDC600")]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, [DefaultValue("false")] bool linear)
	{
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x4DDC6A0", Offset = "0x4DDC6A0", VA = "0x4DDC6A0")]
	[ExcludeFromDocs]
	public Texture2DArray(int width, int height, int depth, TextureFormat textureFormat, bool mipChain)
	{
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x4DDC220", Offset = "0x4DDC220", VA = "0x4DDC220")]
	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000676")]
	[Address(RVA = "0x4DDBBC0", Offset = "0x4DDBBC0", VA = "0x4DDBBC0")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);
}
