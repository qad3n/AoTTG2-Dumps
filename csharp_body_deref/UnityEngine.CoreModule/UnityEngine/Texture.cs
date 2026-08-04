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

[Token(Token = "0x2000100")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Streaming/TextureStreamingManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture.h")]
public class Texture : Object
{
	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int GenerateAllMips;

	[Token(Token = "0x1700011D")]
	public int mipmapCount
	{
		[Token(Token = "0x60005BC")]
		[Address(RVA = "0x4DD4D10", Offset = "0x4DD4D10", VA = "0x4DD4D10")]
		[UnityEngine.Bindings.NativeName("GetMipmapCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700011E")]
	public virtual GraphicsFormat graphicsFormat
	{
		[Token(Token = "0x60005BD")]
		[Address(RVA = "0x4DD4E10", Offset = "0x4DD4E10", VA = "0x4DD4E10", Slot = "4")]
		get
		{
			return default(GraphicsFormat);
		}
	}

	[Token(Token = "0x1700011F")]
	public virtual int width
	{
		[Token(Token = "0x60005C1")]
		[Address(RVA = "0x4DD5180", Offset = "0x4DD5180", VA = "0x4DD5180", Slot = "5")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005C2")]
		[Address(RVA = "0x4DD5190", Offset = "0x4DD5190", VA = "0x4DD5190", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	public virtual int height
	{
		[Token(Token = "0x60005C3")]
		[Address(RVA = "0x4DD51D0", Offset = "0x4DD51D0", VA = "0x4DD51D0", Slot = "7")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005C4")]
		[Address(RVA = "0x4DD51E0", Offset = "0x4DD51E0", VA = "0x4DD51E0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	public virtual TextureDimension dimension
	{
		[Token(Token = "0x60005C5")]
		[Address(RVA = "0x4DD5220", Offset = "0x4DD5220", VA = "0x4DD5220", Slot = "9")]
		get
		{
			return default(TextureDimension);
		}
		[Token(Token = "0x60005C6")]
		[Address(RVA = "0x4DD5230", Offset = "0x4DD5230", VA = "0x4DD5230", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000122")]
	public virtual bool isReadable
	{
		[Token(Token = "0x60005C7")]
		[Address(RVA = "0x4DD5270", Offset = "0x4DD5270", VA = "0x4DD5270", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000123")]
	public TextureWrapMode wrapMode
	{
		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x4DD5370", Offset = "0x4DD5370", VA = "0x4DD5370")]
		[UnityEngine.Bindings.NativeName("GetWrapModeU")]
		get
		{
			return default(TextureWrapMode);
		}
		[Token(Token = "0x60005C9")]
		[Address(RVA = "0x4DD5470", Offset = "0x4DD5470", VA = "0x4DD5470")]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	public TextureWrapMode wrapModeU
	{
		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x4DD5590", Offset = "0x4DD5590", VA = "0x4DD5590")]
		set
		{
		}
	}

	[Token(Token = "0x17000125")]
	public TextureWrapMode wrapModeV
	{
		[Token(Token = "0x60005CB")]
		[Address(RVA = "0x4DD56B0", Offset = "0x4DD56B0", VA = "0x4DD56B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000126")]
	public TextureWrapMode wrapModeW
	{
		[Token(Token = "0x60005CC")]
		[Address(RVA = "0x4DD57D0", Offset = "0x4DD57D0", VA = "0x4DD57D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000127")]
	public FilterMode filterMode
	{
		[Token(Token = "0x60005CD")]
		[Address(RVA = "0x4DD58F0", Offset = "0x4DD58F0", VA = "0x4DD58F0")]
		get
		{
			return default(FilterMode);
		}
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x4DD59F0", Offset = "0x4DD59F0", VA = "0x4DD59F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000128")]
	public int anisoLevel
	{
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x4DD5B10", Offset = "0x4DD5B10", VA = "0x4DD5B10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x4DD5C10", Offset = "0x4DD5C10", VA = "0x4DD5C10")]
		set
		{
		}
	}

	[Token(Token = "0x17000129")]
	public float mipMapBias
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x4DD5D30", Offset = "0x4DD5D30", VA = "0x4DD5D30")]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	public Vector2 texelSize
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x4DD5E60", Offset = "0x4DD5E60", VA = "0x4DD5E60")]
		[UnityEngine.Bindings.NativeName("GetTexelSize")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x1700012B")]
	public uint updateCount
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x4DD5F90", Offset = "0x4DD5F90", VA = "0x4DD5F90")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x1700012C")]
	internal ColorSpace activeTextureColorSpace
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x4DD6190", Offset = "0x4DD6190", VA = "0x4DD6190")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "Unity.UIElements" })]
		get
		{
			return default(ColorSpace);
		}
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x4DD4CA0", Offset = "0x4DD4CA0", VA = "0x4DD4CA0")]
	protected Texture()
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x4DD4E80", Offset = "0x4DD4E80", VA = "0x4DD4E80")]
	private int GetDataWidth()
	{
		return default(int);
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x4DD4F80", Offset = "0x4DD4F80", VA = "0x4DD4F80")]
	private int GetDataHeight()
	{
		return default(int);
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x4DD5080", Offset = "0x4DD5080", VA = "0x4DD5080")]
	private TextureDimension GetDimension()
	{
		return default(TextureDimension);
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x4DD6090", Offset = "0x4DD6090", VA = "0x4DD6090")]
	[UnityEngine.Bindings.NativeMethod("GetActiveTextureColorSpace")]
	private int Internal_GetActiveTextureColorSpace()
	{
		return default(int);
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x4DD61B0", Offset = "0x4DD61B0", VA = "0x4DD61B0")]
	internal TextureColorSpace GetTextureColorSpace(bool linear)
	{
		return default(TextureColorSpace);
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x4DD61C0", Offset = "0x4DD61C0", VA = "0x4DD61C0")]
	internal TextureColorSpace GetTextureColorSpace(GraphicsFormat format)
	{
		return default(TextureColorSpace);
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x4DD6210", Offset = "0x4DD6210", VA = "0x4DD6210")]
	internal bool ValidateFormat(TextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x4DD63B0", Offset = "0x4DD63B0", VA = "0x4DD63B0")]
	internal bool ValidateFormat(GraphicsFormat format, FormatUsage usage)
	{
		return default(bool);
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x4DD6530", Offset = "0x4DD6530", VA = "0x4DD6530")]
	internal UnityException CreateNonReadableException(Texture t)
	{
		return null;
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x4DD65C0", Offset = "0x4DD65C0", VA = "0x4DD65C0")]
	internal UnityException CreateNativeArrayLengthOverflowException()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x4DD4DE0", Offset = "0x4DD4DE0", VA = "0x4DD4DE0")]
	private static extern int get_mipmapCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x4DD4F50", Offset = "0x4DD4F50", VA = "0x4DD4F50")]
	private static extern int GetDataWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x4DD5050", Offset = "0x4DD5050", VA = "0x4DD5050")]
	private static extern int GetDataHeight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x4DD5150", Offset = "0x4DD5150", VA = "0x4DD5150")]
	private static extern TextureDimension GetDimension_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x4DD5340", Offset = "0x4DD5340", VA = "0x4DD5340")]
	private static extern bool get_isReadable_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x4DD5440", Offset = "0x4DD5440", VA = "0x4DD5440")]
	private static extern TextureWrapMode get_wrapMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x4DD5550", Offset = "0x4DD5550", VA = "0x4DD5550")]
	private static extern void set_wrapMode_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x4DD5670", Offset = "0x4DD5670", VA = "0x4DD5670")]
	private static extern void set_wrapModeU_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x4DD5790", Offset = "0x4DD5790", VA = "0x4DD5790")]
	private static extern void set_wrapModeV_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x4DD58B0", Offset = "0x4DD58B0", VA = "0x4DD58B0")]
	private static extern void set_wrapModeW_Injected(IntPtr _unity_self, TextureWrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x4DD59C0", Offset = "0x4DD59C0", VA = "0x4DD59C0")]
	private static extern FilterMode get_filterMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x4DD5AD0", Offset = "0x4DD5AD0", VA = "0x4DD5AD0")]
	private static extern void set_filterMode_Injected(IntPtr _unity_self, FilterMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x4DD5BE0", Offset = "0x4DD5BE0", VA = "0x4DD5BE0")]
	private static extern int get_anisoLevel_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x4DD5CF0", Offset = "0x4DD5CF0", VA = "0x4DD5CF0")]
	private static extern void set_anisoLevel_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x4DD5E10", Offset = "0x4DD5E10", VA = "0x4DD5E10")]
	private static extern void set_mipMapBias_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x4DD5F50", Offset = "0x4DD5F50", VA = "0x4DD5F50")]
	private static extern void get_texelSize_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x4DD6060", Offset = "0x4DD6060", VA = "0x4DD6060")]
	private static extern uint get_updateCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x4DD6160", Offset = "0x4DD6160", VA = "0x4DD6160")]
	private static extern int Internal_GetActiveTextureColorSpace_Injected(IntPtr _unity_self);
}
