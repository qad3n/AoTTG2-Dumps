using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000FD")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Streaming/TextureStreamingManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture.h")]
public class Texture : Object
{
	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int GenerateAllMips;

	[Token(Token = "0x1700011C")]
	public int mipmapCount
	{
		[Token(Token = "0x60005BA")]
		[Address(RVA = "0x4AAD3E0", Offset = "0x4AAD3E0", VA = "0x4AAD3E0")]
		[UnityEngine.Bindings.NativeName("GetMipmapCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700011D")]
	public virtual GraphicsFormat graphicsFormat
	{
		[Token(Token = "0x60005BB")]
		[Address(RVA = "0x4AAD4E0", Offset = "0x4AAD4E0", VA = "0x4AAD4E0", Slot = "4")]
		get
		{
			return default(GraphicsFormat);
		}
	}

	[Token(Token = "0x1700011E")]
	public virtual int width
	{
		[Token(Token = "0x60005BF")]
		[Address(RVA = "0x4AAD850", Offset = "0x4AAD850", VA = "0x4AAD850", Slot = "5")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005C0")]
		[Address(RVA = "0x4AAD860", Offset = "0x4AAD860", VA = "0x4AAD860", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x1700011F")]
	public virtual int height
	{
		[Token(Token = "0x60005C1")]
		[Address(RVA = "0x4AAD8A0", Offset = "0x4AAD8A0", VA = "0x4AAD8A0", Slot = "7")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005C2")]
		[Address(RVA = "0x4AAD8B0", Offset = "0x4AAD8B0", VA = "0x4AAD8B0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	public virtual TextureDimension dimension
	{
		[Token(Token = "0x60005C3")]
		[Address(RVA = "0x4AAD8F0", Offset = "0x4AAD8F0", VA = "0x4AAD8F0", Slot = "9")]
		get
		{
			return default(TextureDimension);
		}
		[Token(Token = "0x60005C4")]
		[Address(RVA = "0x4AAD900", Offset = "0x4AAD900", VA = "0x4AAD900", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	public virtual bool isReadable
	{
		[Token(Token = "0x60005C5")]
		[Address(RVA = "0x4AAD940", Offset = "0x4AAD940", VA = "0x4AAD940", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000122")]
	public TextureWrapMode wrapMode
	{
		[Token(Token = "0x60005C6")]
		[Address(RVA = "0x4AADA40", Offset = "0x4AADA40", VA = "0x4AADA40")]
		[UnityEngine.Bindings.NativeName("GetWrapModeU")]
		get
		{
			return default(TextureWrapMode);
		}
		[Token(Token = "0x60005C7")]
		[Address(RVA = "0x4AADB40", Offset = "0x4AADB40", VA = "0x4AADB40")]
		set
		{
		}
	}

	[Token(Token = "0x17000123")]
	public TextureWrapMode wrapModeU
	{
		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x4AADC60", Offset = "0x4AADC60", VA = "0x4AADC60")]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	public TextureWrapMode wrapModeV
	{
		[Token(Token = "0x60005C9")]
		[Address(RVA = "0x4AADD80", Offset = "0x4AADD80", VA = "0x4AADD80")]
		set
		{
		}
	}

	[Token(Token = "0x17000125")]
	public TextureWrapMode wrapModeW
	{
		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x4AADEA0", Offset = "0x4AADEA0", VA = "0x4AADEA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000126")]
	public FilterMode filterMode
	{
		[Token(Token = "0x60005CB")]
		[Address(RVA = "0x4AADFC0", Offset = "0x4AADFC0", VA = "0x4AADFC0")]
		get
		{
			return default(FilterMode);
		}
		[Token(Token = "0x60005CC")]
		[Address(RVA = "0x4AAE0C0", Offset = "0x4AAE0C0", VA = "0x4AAE0C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000127")]
	public int anisoLevel
	{
		[Token(Token = "0x60005CD")]
		[Address(RVA = "0x4AAE1E0", Offset = "0x4AAE1E0", VA = "0x4AAE1E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x4AAE2E0", Offset = "0x4AAE2E0", VA = "0x4AAE2E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	public float mipMapBias
	{
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x4AAE400", Offset = "0x4AAE400", VA = "0x4AAE400")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public Vector2 texelSize
	{
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x4AAE530", Offset = "0x4AAE530", VA = "0x4AAE530")]
		[UnityEngine.Bindings.NativeName("GetTexelSize")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x1700012A")]
	public uint updateCount
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x4AAE660", Offset = "0x4AAE660", VA = "0x4AAE660")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x1700012B")]
	internal ColorSpace activeTextureColorSpace
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x4AAE860", Offset = "0x4AAE860", VA = "0x4AAE860")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "Unity.UIElements" })]
		get
		{
			return default(ColorSpace);
		}
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x4AAD370", Offset = "0x4AAD370", VA = "0x4AAD370")]
	protected Texture()
	{
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x4AAD550", Offset = "0x4AAD550", VA = "0x4AAD550")]
	private int GetDataWidth()
	{
		return default(int);
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x4AAD650", Offset = "0x4AAD650", VA = "0x4AAD650")]
	private int GetDataHeight()
	{
		return default(int);
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x4AAD750", Offset = "0x4AAD750", VA = "0x4AAD750")]
	private TextureDimension GetDimension()
	{
		return default(TextureDimension);
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x4AAE760", Offset = "0x4AAE760", VA = "0x4AAE760")]
	[UnityEngine.Bindings.NativeMethod("GetActiveTextureColorSpace")]
	private int Internal_GetActiveTextureColorSpace()
	{
		return default(int);
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x4AAE880", Offset = "0x4AAE880", VA = "0x4AAE880")]
	internal TextureColorSpace GetTextureColorSpace(bool linear)
	{
		return default(TextureColorSpace);
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x4AAE890", Offset = "0x4AAE890", VA = "0x4AAE890")]
	internal TextureColorSpace GetTextureColorSpace(GraphicsFormat format)
	{
		return default(TextureColorSpace);
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x4AAE8E0", Offset = "0x4AAE8E0", VA = "0x4AAE8E0")]
	internal bool ValidateFormat(TextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x4AAEA80", Offset = "0x4AAEA80", VA = "0x4AAEA80")]
	internal bool ValidateFormat(GraphicsFormat format, FormatUsage usage)
	{
		return default(bool);
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x4AAEC00", Offset = "0x4AAEC00", VA = "0x4AAEC00")]
	internal UnityException CreateNonReadableException(Texture t)
	{
		return null;
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x4AAEC90", Offset = "0x4AAEC90", VA = "0x4AAEC90")]
	internal UnityException CreateNativeArrayLengthOverflowException()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x4AAD4B0", Offset = "0x4AAD4B0", VA = "0x4AAD4B0")]
	private static extern int get_mipmapCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x4AAD620", Offset = "0x4AAD620", VA = "0x4AAD620")]
	private static extern int GetDataWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x4AAD720", Offset = "0x4AAD720", VA = "0x4AAD720")]
	private static extern int GetDataHeight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x4AAD820", Offset = "0x4AAD820", VA = "0x4AAD820")]
	private static extern TextureDimension GetDimension_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x4AADA10", Offset = "0x4AADA10", VA = "0x4AADA10")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x4AADB10", Offset = "0x4AADB10", VA = "0x4AADB10")]
	private static extern TextureWrapMode get_wrapMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x4AADC20", Offset = "0x4AADC20", VA = "0x4AADC20")]
	private static extern void set_wrapMode_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x4AADD40", Offset = "0x4AADD40", VA = "0x4AADD40")]
	private static extern void set_wrapModeU_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x4AADE60", Offset = "0x4AADE60", VA = "0x4AADE60")]
	private static extern void set_wrapModeV_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x4AADF80", Offset = "0x4AADF80", VA = "0x4AADF80")]
	private static extern void set_wrapModeW_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x4AAE090", Offset = "0x4AAE090", VA = "0x4AAE090")]
	private static extern FilterMode get_filterMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x4AAE1A0", Offset = "0x4AAE1A0", VA = "0x4AAE1A0")]
	private static extern void set_filterMode_Injected(IntPtr _unity_self, FilterMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x4AAE2B0", Offset = "0x4AAE2B0", VA = "0x4AAE2B0")]
	private static extern int get_anisoLevel_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x4AAE3C0", Offset = "0x4AAE3C0", VA = "0x4AAE3C0")]
	private static extern void set_anisoLevel_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x4AAE4E0", Offset = "0x4AAE4E0", VA = "0x4AAE4E0")]
	private static extern void set_mipMapBias_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x4AAE620", Offset = "0x4AAE620", VA = "0x4AAE620")]
	private static extern void get_texelSize_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x4AAE730", Offset = "0x4AAE730", VA = "0x4AAE730")]
	private static extern uint get_updateCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x4AAE830", Offset = "0x4AAE830", VA = "0x4AAE830")]
	private static extern int Internal_GetActiveTextureColorSpace_Injected(IntPtr _unity_self);
}
