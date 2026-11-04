// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Texture
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000124")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Streaming/TextureStreamingManager.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public class Texture : Object
{
	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int GenerateAllMips;

	[Token(Token = "0x17000172")]
	public int mipmapCount
	{
		[Token(Token = "0x6000835")]
		[Address(RVA = "0x2EFEA50", Offset = "0x2EFD050", VA = "0x182EFEA50")]
		[UnityEngine.Bindings.NativeName("GetMipmapCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000173")]
	public virtual GraphicsFormat graphicsFormat
	{
		[Token(Token = "0x6000836")]
		[Address(RVA = "0x2EFE800", Offset = "0x2EFCE00", VA = "0x182EFE800", Slot = "4")]
		get
		{
			return default(GraphicsFormat);
		}
	}

	[Token(Token = "0x17000174")]
	public virtual int width
	{
		[Token(Token = "0x600083A")]
		[Address(RVA = "0x2EFDBD0", Offset = "0x2EFC1D0", VA = "0x182EFDBD0", Slot = "5")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600083B")]
		[Address(RVA = "0x2EFF180", Offset = "0x2EFD780", VA = "0x182EFF180", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000175")]
	public virtual int height
	{
		[Token(Token = "0x600083C")]
		[Address(RVA = "0x2EFDAF0", Offset = "0x2EFC0F0", VA = "0x182EFDAF0", Slot = "7")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600083D")]
		[Address(RVA = "0x2EFF000", Offset = "0x2EFD600", VA = "0x182EFF000", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000176")]
	public virtual TextureDimension dimension
	{
		[Token(Token = "0x600083E")]
		[Address(RVA = "0x2EFDCB0", Offset = "0x2EFC2B0", VA = "0x182EFDCB0", Slot = "9")]
		get
		{
			return default(TextureDimension);
		}
		[Token(Token = "0x600083F")]
		[Address(RVA = "0x2EFEED0", Offset = "0x2EFD4D0", VA = "0x182EFEED0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000177")]
	public virtual bool isReadable
	{
		[Token(Token = "0x6000840")]
		[Address(RVA = "0x2EFE890", Offset = "0x2EFCE90", VA = "0x182EFE890", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000178")]
	public TextureWrapMode wrapMode
	{
		[Token(Token = "0x6000841")]
		[Address(RVA = "0x2EFED40", Offset = "0x2EFD340", VA = "0x182EFED40")]
		[UnityEngine.Bindings.NativeName("GetWrapModeU")]
		get
		{
			return default(TextureWrapMode);
		}
		[Token(Token = "0x6000842")]
		[Address(RVA = "0x2EFF4D0", Offset = "0x2EFDAD0", VA = "0x182EFF4D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000179")]
	public TextureWrapMode wrapModeU
	{
		[Token(Token = "0x6000843")]
		[Address(RVA = "0x2EFF200", Offset = "0x2EFD800", VA = "0x182EFF200")]
		set
		{
		}
	}

	[Token(Token = "0x1700017A")]
	public TextureWrapMode wrapModeV
	{
		[Token(Token = "0x6000844")]
		[Address(RVA = "0x2EFF2F0", Offset = "0x2EFD8F0", VA = "0x182EFF2F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700017B")]
	public TextureWrapMode wrapModeW
	{
		[Token(Token = "0x6000845")]
		[Address(RVA = "0x2EFF3E0", Offset = "0x2EFD9E0", VA = "0x182EFF3E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700017C")]
	public FilterMode filterMode
	{
		[Token(Token = "0x6000846")]
		[Address(RVA = "0x2EFE760", Offset = "0x2EFCD60", VA = "0x182EFE760")]
		get
		{
			return default(FilterMode);
		}
		[Token(Token = "0x6000847")]
		[Address(RVA = "0x2EFEF50", Offset = "0x2EFD550", VA = "0x182EFEF50")]
		set
		{
		}
	}

	[Token(Token = "0x1700017D")]
	public int anisoLevel
	{
		[Token(Token = "0x6000848")]
		[Address(RVA = "0x2EFE680", Offset = "0x2EFCC80", VA = "0x182EFE680")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000849")]
		[Address(RVA = "0x2EFEE20", Offset = "0x2EFD420", VA = "0x182EFEE20")]
		set
		{
		}
	}

	[Token(Token = "0x1700017E")]
	public float mipMapBias
	{
		[Token(Token = "0x600084A")]
		[Address(RVA = "0x2EFE970", Offset = "0x2EFCF70", VA = "0x182EFE970")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600084B")]
		[Address(RVA = "0x2EFF090", Offset = "0x2EFD690", VA = "0x182EFF090")]
		set
		{
		}
	}

	[Token(Token = "0x1700017F")]
	public Vector2 texelSize
	{
		[Token(Token = "0x600084C")]
		[Address(RVA = "0x2EFEB70", Offset = "0x2EFD170", VA = "0x182EFEB70")]
		[UnityEngine.Bindings.NativeName("GetTexelSize")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000180")]
	public uint updateCount
	{
		[Token(Token = "0x600084D")]
		[Address(RVA = "0x2EFEC60", Offset = "0x2EFD260", VA = "0x182EFEC60")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000181")]
	internal ColorSpace activeTextureColorSpace
	{
		[Token(Token = "0x6000850")]
		[Address(RVA = "0x2EFE590", Offset = "0x2EFCB90", VA = "0x182EFE590")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "Unity.UIElements" })]
		get
		{
			return default(ColorSpace);
		}
	}

	[Token(Token = "0x17000182")]
	public static extern bool streamingTextureDiscardUnusedMips
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000853")]
		[Address(RVA = "0x2EFEAF0", Offset = "0x2EFD0F0", VA = "0x182EFEAF0")]
		[UnityEngine.Bindings.FreeFunction(Name = "GetTextureStreamingManager().GetDiscardUnusedMips")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000854")]
		[Address(RVA = "0x2EFF140", Offset = "0x2EFD740", VA = "0x182EFF140")]
		[UnityEngine.Bindings.FreeFunction(Name = "GetTextureStreamingManager().SetDiscardUnusedMips")]
		set;
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x2EFE540", Offset = "0x2EFCB40", VA = "0x182EFE540")]
	protected Texture()
	{
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x2EFDBD0", Offset = "0x2EFC1D0", VA = "0x182EFDBD0")]
	[UnityEngine.Bindings.ThreadSafe]
	private int GetDataWidth()
	{
		return default(int);
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x2EFDAF0", Offset = "0x2EFC0F0", VA = "0x182EFDAF0")]
	[UnityEngine.Bindings.ThreadSafe]
	private int GetDataHeight()
	{
		return default(int);
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x2EFDCB0", Offset = "0x2EFC2B0", VA = "0x182EFDCB0")]
	[UnityEngine.Bindings.ThreadSafe]
	private TextureDimension GetDimension()
	{
		return default(TextureDimension);
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x2EFE010", Offset = "0x2EFC610", VA = "0x182EFE010")]
	public void IncrementUpdateCount()
	{
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x2EFE0F0", Offset = "0x2EFC6F0", VA = "0x182EFE0F0")]
	[UnityEngine.Bindings.NativeMethod("GetActiveTextureColorSpace")]
	private int Internal_GetActiveTextureColorSpace()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000851")]
	[Address(RVA = "0x2EFE190", Offset = "0x2EFC790", VA = "0x182EFE190")]
	[UnityEngine.Bindings.FreeFunction("GetTextureStreamingManager().SetStreamingTextureMaterialDebugPropertiesWithSlot")]
	private static extern void SetStreamingTextureMaterialDebugPropertiesWithSlot(int materialTextureSlot);

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x2EFE1D0", Offset = "0x2EFC7D0", VA = "0x182EFE1D0")]
	public static void SetStreamingTextureMaterialDebugProperties(int materialTextureSlot)
	{
	}

	[Token(Token = "0x6000855")]
	[Address(RVA = "0x2EFDEB0", Offset = "0x2EFC4B0", VA = "0x182EFDEB0")]
	internal ulong GetPixelDataSize(int mipLevel, int element = 0)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000856")]
	[Address(RVA = "0x2EFDDA0", Offset = "0x2EFC3A0", VA = "0x182EFDDA0")]
	internal ulong GetPixelDataOffset(int mipLevel, int element = 0)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x2EFDFC0", Offset = "0x2EFC5C0", VA = "0x182EFDFC0")]
	internal TextureColorSpace GetTextureColorSpace(bool linear)
	{
		return default(TextureColorSpace);
	}

	[Token(Token = "0x6000858")]
	[Address(RVA = "0x2EFDF70", Offset = "0x2EFC570", VA = "0x182EFDF70")]
	internal TextureColorSpace GetTextureColorSpace(GraphicsFormat format)
	{
		return default(TextureColorSpace);
	}

	[Token(Token = "0x6000859")]
	[Address(RVA = "0x2EFE240", Offset = "0x2EFC840", VA = "0x182EFE240")]
	internal bool ValidateFormat(TextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x2EFE3E0", Offset = "0x2EFC9E0", VA = "0x182EFE3E0")]
	internal bool ValidateFormat(GraphicsFormat format, GraphicsFormatUsage usage)
	{
		return default(bool);
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x2EFDA20", Offset = "0x2EFC020", VA = "0x182EFDA20")]
	internal UnityException CreateNonReadableException(Texture t)
	{
		return null;
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x2EFD9C0", Offset = "0x2EFBFC0", VA = "0x182EFD9C0")]
	internal UnityException CreateNativeArrayLengthOverflowException()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600085E")]
	[Address(RVA = "0x2EFEA10", Offset = "0x2EFD010", VA = "0x182EFEA10")]
	private static extern int get_mipmapCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600085F")]
	[Address(RVA = "0x2EFDB90", Offset = "0x2EFC190", VA = "0x182EFDB90")]
	private static extern int GetDataWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000860")]
	[Address(RVA = "0x2EFDAB0", Offset = "0x2EFC0B0", VA = "0x182EFDAB0")]
	private static extern int GetDataHeight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000861")]
	[Address(RVA = "0x2EFDC70", Offset = "0x2EFC270", VA = "0x182EFDC70")]
	private static extern TextureDimension GetDimension_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000862")]
	[Address(RVA = "0x2EFE850", Offset = "0x2EFCE50", VA = "0x182EFE850")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000863")]
	[Address(RVA = "0x2EFED00", Offset = "0x2EFD300", VA = "0x182EFED00")]
	private static extern TextureWrapMode get_wrapMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000864")]
	[Address(RVA = "0x2EFF490", Offset = "0x2EFDA90", VA = "0x182EFF490")]
	private static extern void set_wrapMode_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000865")]
	[Address(RVA = "0x2EFF1C0", Offset = "0x2EFD7C0", VA = "0x182EFF1C0")]
	private static extern void set_wrapModeU_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000866")]
	[Address(RVA = "0x2EFF2B0", Offset = "0x2EFD8B0", VA = "0x182EFF2B0")]
	private static extern void set_wrapModeV_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000867")]
	[Address(RVA = "0x2EFF3A0", Offset = "0x2EFD9A0", VA = "0x182EFF3A0")]
	private static extern void set_wrapModeW_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000868")]
	[Address(RVA = "0x2EFE720", Offset = "0x2EFCD20", VA = "0x182EFE720")]
	private static extern FilterMode get_filterMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000869")]
	[Address(RVA = "0x2EFEF10", Offset = "0x2EFD510", VA = "0x182EFEF10")]
	private static extern void set_filterMode_Injected(IntPtr _unity_self, FilterMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086A")]
	[Address(RVA = "0x2EFE640", Offset = "0x2EFCC40", VA = "0x182EFE640")]
	private static extern int get_anisoLevel_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086B")]
	[Address(RVA = "0x2EFEDE0", Offset = "0x2EFD3E0", VA = "0x182EFEDE0")]
	private static extern void set_anisoLevel_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086C")]
	[Address(RVA = "0x2EFE930", Offset = "0x2EFCF30", VA = "0x182EFE930")]
	private static extern float get_mipMapBias_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086D")]
	[Address(RVA = "0x2EFF040", Offset = "0x2EFD640", VA = "0x182EFF040")]
	private static extern void set_mipMapBias_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086E")]
	[Address(RVA = "0x2EFEB20", Offset = "0x2EFD120", VA = "0x182EFEB20")]
	private static extern void get_texelSize_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086F")]
	[Address(RVA = "0x2EFEC20", Offset = "0x2EFD220", VA = "0x182EFEC20")]
	private static extern uint get_updateCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000870")]
	[Address(RVA = "0x2EFDFD0", Offset = "0x2EFC5D0", VA = "0x182EFDFD0")]
	private static extern void IncrementUpdateCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000871")]
	[Address(RVA = "0x2EFE0B0", Offset = "0x2EFC6B0", VA = "0x182EFE0B0")]
	private static extern int Internal_GetActiveTextureColorSpace_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000872")]
	[Address(RVA = "0x2EFDE60", Offset = "0x2EFC460", VA = "0x182EFDE60")]
	private static extern ulong GetPixelDataSize_Injected(IntPtr _unity_self, int mipLevel, int element);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000873")]
	[Address(RVA = "0x2EFDD50", Offset = "0x2EFC350", VA = "0x182EFDD50")]
	private static extern ulong GetPixelDataOffset_Injected(IntPtr _unity_self, int mipLevel, int element);
}
