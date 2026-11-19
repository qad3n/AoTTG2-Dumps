// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Texture
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
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000125")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Streaming/TextureStreamingManager.h")]
public class Texture : Object
{
	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int GenerateAllMips;

	[Token(Token = "0x17000177")]
	public int mipmapCount
	{
		[Token(Token = "0x6000843")]
		[Address(RVA = "0x68EC7A0", Offset = "0x68EB7A0", VA = "0x68EC7A0")]
		[UnityEngine.Bindings.NativeName("GetMipmapCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000178")]
	public virtual GraphicsFormat graphicsFormat
	{
		[Token(Token = "0x6000844")]
		[Address(RVA = "0x68EC880", Offset = "0x68EB880", VA = "0x68EC880", Slot = "4")]
		get
		{
			return default(GraphicsFormat);
		}
	}

	[Token(Token = "0x17000179")]
	public virtual int width
	{
		[Token(Token = "0x6000848")]
		[Address(RVA = "0x68ECB90", Offset = "0x68EBB90", VA = "0x68ECB90", Slot = "5")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000849")]
		[Address(RVA = "0x68ECBA0", Offset = "0x68EBBA0", VA = "0x68ECBA0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x1700017A")]
	public virtual int height
	{
		[Token(Token = "0x600084A")]
		[Address(RVA = "0x68ECBE0", Offset = "0x68EBBE0", VA = "0x68ECBE0", Slot = "7")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600084B")]
		[Address(RVA = "0x68ECBF0", Offset = "0x68EBBF0", VA = "0x68ECBF0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700017B")]
	public virtual TextureDimension dimension
	{
		[Token(Token = "0x600084C")]
		[Address(RVA = "0x68ECC30", Offset = "0x68EBC30", VA = "0x68ECC30", Slot = "9")]
		get
		{
			return default(TextureDimension);
		}
		[Token(Token = "0x600084D")]
		[Address(RVA = "0x68ECC40", Offset = "0x68EBC40", VA = "0x68ECC40", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700017C")]
	public virtual bool isReadable
	{
		[Token(Token = "0x600084E")]
		[Address(RVA = "0x68ECC80", Offset = "0x68EBC80", VA = "0x68ECC80", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017D")]
	public TextureWrapMode wrapMode
	{
		[Token(Token = "0x600084F")]
		[Address(RVA = "0x68ECD60", Offset = "0x68EBD60", VA = "0x68ECD60")]
		[UnityEngine.Bindings.NativeName("GetWrapModeU")]
		get
		{
			return default(TextureWrapMode);
		}
		[Token(Token = "0x6000850")]
		[Address(RVA = "0x68ECE40", Offset = "0x68EBE40", VA = "0x68ECE40")]
		set
		{
		}
	}

	[Token(Token = "0x1700017E")]
	public TextureWrapMode wrapModeU
	{
		[Token(Token = "0x6000851")]
		[Address(RVA = "0x68ECF40", Offset = "0x68EBF40", VA = "0x68ECF40")]
		set
		{
		}
	}

	[Token(Token = "0x1700017F")]
	public TextureWrapMode wrapModeV
	{
		[Token(Token = "0x6000852")]
		[Address(RVA = "0x68ED040", Offset = "0x68EC040", VA = "0x68ED040")]
		set
		{
		}
	}

	[Token(Token = "0x17000180")]
	public TextureWrapMode wrapModeW
	{
		[Token(Token = "0x6000853")]
		[Address(RVA = "0x68ED140", Offset = "0x68EC140", VA = "0x68ED140")]
		set
		{
		}
	}

	[Token(Token = "0x17000181")]
	public FilterMode filterMode
	{
		[Token(Token = "0x6000854")]
		[Address(RVA = "0x68ED240", Offset = "0x68EC240", VA = "0x68ED240")]
		get
		{
			return default(FilterMode);
		}
		[Token(Token = "0x6000855")]
		[Address(RVA = "0x68ED320", Offset = "0x68EC320", VA = "0x68ED320")]
		set
		{
		}
	}

	[Token(Token = "0x17000182")]
	public int anisoLevel
	{
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x68ED420", Offset = "0x68EC420", VA = "0x68ED420")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000857")]
		[Address(RVA = "0x68ED500", Offset = "0x68EC500", VA = "0x68ED500")]
		set
		{
		}
	}

	[Token(Token = "0x17000183")]
	public float mipMapBias
	{
		[Token(Token = "0x6000858")]
		[Address(RVA = "0x68ED600", Offset = "0x68EC600", VA = "0x68ED600")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000859")]
		[Address(RVA = "0x68ED6E0", Offset = "0x68EC6E0", VA = "0x68ED6E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000184")]
	public Vector2 texelSize
	{
		[Token(Token = "0x600085A")]
		[Address(RVA = "0x68ED7F0", Offset = "0x68EC7F0", VA = "0x68ED7F0")]
		[UnityEngine.Bindings.NativeName("GetTexelSize")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000185")]
	public uint updateCount
	{
		[Token(Token = "0x600085B")]
		[Address(RVA = "0x68ED900", Offset = "0x68EC900", VA = "0x68ED900")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000186")]
	internal ColorSpace activeTextureColorSpace
	{
		[Token(Token = "0x600085E")]
		[Address(RVA = "0x68EDBA0", Offset = "0x68ECBA0", VA = "0x68EDBA0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "Unity.UIElements" })]
		get
		{
			return default(ColorSpace);
		}
	}

	[Token(Token = "0x17000187")]
	public static extern bool streamingTextureDiscardUnusedMips
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000861")]
		[Address(RVA = "0x68EDC70", Offset = "0x68ECC70", VA = "0x68EDC70")]
		[UnityEngine.Bindings.FreeFunction(Name = "GetTextureStreamingManager().GetDiscardUnusedMips")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000862")]
		[Address(RVA = "0x68EDCA0", Offset = "0x68ECCA0", VA = "0x68EDCA0")]
		[UnityEngine.Bindings.FreeFunction(Name = "GetTextureStreamingManager().SetDiscardUnusedMips")]
		set;
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x68EC730", Offset = "0x68EB730", VA = "0x68EC730")]
	protected Texture()
	{
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x68EC8F0", Offset = "0x68EB8F0", VA = "0x68EC8F0")]
	[UnityEngine.Bindings.ThreadSafe]
	private int GetDataWidth()
	{
		return default(int);
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x68EC9D0", Offset = "0x68EB9D0", VA = "0x68EC9D0")]
	[UnityEngine.Bindings.ThreadSafe]
	private int GetDataHeight()
	{
		return default(int);
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x68ECAB0", Offset = "0x68EBAB0", VA = "0x68ECAB0")]
	[UnityEngine.Bindings.ThreadSafe]
	private TextureDimension GetDimension()
	{
		return default(TextureDimension);
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x68ED9E0", Offset = "0x68EC9E0", VA = "0x68ED9E0")]
	public void IncrementUpdateCount()
	{
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x68EDAC0", Offset = "0x68ECAC0", VA = "0x68EDAC0")]
	[UnityEngine.Bindings.NativeMethod("GetActiveTextureColorSpace")]
	private int Internal_GetActiveTextureColorSpace()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600085F")]
	[Address(RVA = "0x68EDBC0", Offset = "0x68ECBC0", VA = "0x68EDBC0")]
	[UnityEngine.Bindings.FreeFunction("GetTextureStreamingManager().SetStreamingTextureMaterialDebugPropertiesWithSlot")]
	private static extern void SetStreamingTextureMaterialDebugPropertiesWithSlot(int materialTextureSlot);

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x68EDBF0", Offset = "0x68ECBF0", VA = "0x68EDBF0")]
	public static void SetStreamingTextureMaterialDebugProperties(int materialTextureSlot)
	{
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x68EDCD0", Offset = "0x68ECCD0", VA = "0x68EDCD0")]
	internal ulong GetPixelDataSize(int mipLevel, int element = 0)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x68EDDE0", Offset = "0x68ECDE0", VA = "0x68EDDE0")]
	internal ulong GetPixelDataOffset(int mipLevel, int element = 0)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x68EDEF0", Offset = "0x68ECEF0", VA = "0x68EDEF0")]
	internal TextureColorSpace GetTextureColorSpace(bool linear)
	{
		return default(TextureColorSpace);
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x68EDF00", Offset = "0x68ECF00", VA = "0x68EDF00")]
	internal TextureColorSpace GetTextureColorSpace(GraphicsFormat format)
	{
		return default(TextureColorSpace);
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x68EDF50", Offset = "0x68ECF50", VA = "0x68EDF50")]
	internal bool ValidateFormat(TextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x68EE0F0", Offset = "0x68ED0F0", VA = "0x68EE0F0")]
	internal bool ValidateFormat(GraphicsFormat format, GraphicsFormatUsage usage)
	{
		return default(bool);
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x68EE200", Offset = "0x68ED200", VA = "0x68EE200")]
	internal UnityException CreateNonReadableException(Texture t)
	{
		return null;
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x68EE290", Offset = "0x68ED290", VA = "0x68EE290")]
	internal UnityException CreateNativeArrayLengthOverflowException()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086C")]
	[Address(RVA = "0x68EC850", Offset = "0x68EB850", VA = "0x68EC850")]
	private static extern int get_mipmapCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086D")]
	[Address(RVA = "0x68EC9A0", Offset = "0x68EB9A0", VA = "0x68EC9A0")]
	private static extern int GetDataWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086E")]
	[Address(RVA = "0x68ECA80", Offset = "0x68EBA80", VA = "0x68ECA80")]
	private static extern int GetDataHeight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086F")]
	[Address(RVA = "0x68ECB60", Offset = "0x68EBB60", VA = "0x68ECB60")]
	private static extern TextureDimension GetDimension_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000870")]
	[Address(RVA = "0x68ECD30", Offset = "0x68EBD30", VA = "0x68ECD30")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000871")]
	[Address(RVA = "0x68ECE10", Offset = "0x68EBE10", VA = "0x68ECE10")]
	private static extern TextureWrapMode get_wrapMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000872")]
	[Address(RVA = "0x68ECF00", Offset = "0x68EBF00", VA = "0x68ECF00")]
	private static extern void set_wrapMode_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000873")]
	[Address(RVA = "0x68ED000", Offset = "0x68EC000", VA = "0x68ED000")]
	private static extern void set_wrapModeU_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000874")]
	[Address(RVA = "0x68ED100", Offset = "0x68EC100", VA = "0x68ED100")]
	private static extern void set_wrapModeV_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000875")]
	[Address(RVA = "0x68ED200", Offset = "0x68EC200", VA = "0x68ED200")]
	private static extern void set_wrapModeW_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000876")]
	[Address(RVA = "0x68ED2F0", Offset = "0x68EC2F0", VA = "0x68ED2F0")]
	private static extern FilterMode get_filterMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000877")]
	[Address(RVA = "0x68ED3E0", Offset = "0x68EC3E0", VA = "0x68ED3E0")]
	private static extern void set_filterMode_Injected(IntPtr _unity_self, FilterMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000878")]
	[Address(RVA = "0x68ED4D0", Offset = "0x68EC4D0", VA = "0x68ED4D0")]
	private static extern int get_anisoLevel_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000879")]
	[Address(RVA = "0x68ED5C0", Offset = "0x68EC5C0", VA = "0x68ED5C0")]
	private static extern void set_anisoLevel_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087A")]
	[Address(RVA = "0x68ED6B0", Offset = "0x68EC6B0", VA = "0x68ED6B0")]
	private static extern float get_mipMapBias_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087B")]
	[Address(RVA = "0x68ED7A0", Offset = "0x68EC7A0", VA = "0x68ED7A0")]
	private static extern void set_mipMapBias_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087C")]
	[Address(RVA = "0x68ED8C0", Offset = "0x68EC8C0", VA = "0x68ED8C0")]
	private static extern void get_texelSize_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087D")]
	[Address(RVA = "0x68ED9B0", Offset = "0x68EC9B0", VA = "0x68ED9B0")]
	private static extern uint get_updateCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087E")]
	[Address(RVA = "0x68EDA90", Offset = "0x68ECA90", VA = "0x68EDA90")]
	private static extern void IncrementUpdateCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087F")]
	[Address(RVA = "0x68EDB70", Offset = "0x68ECB70", VA = "0x68EDB70")]
	private static extern int Internal_GetActiveTextureColorSpace_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000880")]
	[Address(RVA = "0x68EDDA0", Offset = "0x68ECDA0", VA = "0x68EDDA0")]
	private static extern ulong GetPixelDataSize_Injected(IntPtr _unity_self, int mipLevel, int element);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000881")]
	[Address(RVA = "0x68EDEB0", Offset = "0x68ECEB0", VA = "0x68EDEB0")]
	private static extern ulong GetPixelDataOffset_Injected(IntPtr _unity_self, int mipLevel, int element);
}
