// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Sprite
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200008A")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/SpriteFrame.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/Common/ScriptBindings/SpritesMarshalling.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/Common/SpriteDataAccess.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/SpriteUtility.h")]
public sealed class Sprite : Object
{
	[Token(Token = "0x1700002B")]
	public Bounds bounds
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x68B9690", Offset = "0x68B8690", VA = "0x68B9690")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x1700002C")]
	public Rect rect
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x68B9780", Offset = "0x68B8780", VA = "0x68B9780")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700002D")]
	public Vector4 border
	{
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x68B9860", Offset = "0x68B8860", VA = "0x68B9860")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x1700002E")]
	public Texture2D texture
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x68B9940", Offset = "0x68B8940", VA = "0x68B9940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002F")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x68B9BB0", Offset = "0x68B8BB0", VA = "0x68B9BB0")]
		[UnityEngine.Bindings.NativeMethod("GetPixelsToUnits")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000030")]
	public Texture2D associatedAlphaSplitTexture
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x68B9C60", Offset = "0x68B8C60", VA = "0x68B9C60")]
		[UnityEngine.Bindings.NativeMethod("GetAlphaTexture")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000031")]
	public Vector2 pivot
	{
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x68B9D30", Offset = "0x68B8D30", VA = "0x68B9D30")]
		[UnityEngine.Bindings.NativeMethod("GetPivotInPixels")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000032")]
	public bool packed
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x68B9E00", Offset = "0x68B8E00", VA = "0x68B9E00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000033")]
	public SpritePackingRotation packingRotation
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x68B9E90", Offset = "0x68B8E90", VA = "0x68B9E90")]
		get
		{
			return default(SpritePackingRotation);
		}
	}

	[Token(Token = "0x17000034")]
	public Vector2[] vertices
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x68B9F10", Offset = "0x68B8F10", VA = "0x68B9F10")]
		[UnityEngine.Bindings.FreeFunction("SpriteAccessLegacy::GetSpriteVertices", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000035")]
	public ushort[] triangles
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x68B9FC0", Offset = "0x68B8FC0", VA = "0x68B9FC0")]
		[UnityEngine.Bindings.FreeFunction("SpriteAccessLegacy::GetSpriteIndices", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000036")]
	public Vector2[] uv
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x68BA070", Offset = "0x68B9070", VA = "0x68BA070")]
		[UnityEngine.Bindings.FreeFunction("SpriteAccessLegacy::GetSpriteUVs", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x68B9080", Offset = "0x68B8080", VA = "0x68B9080")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private Sprite()
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x68B90F0", Offset = "0x68B80F0", VA = "0x68B90F0")]
	internal int GetPackingRotation()
	{
		return default(int);
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x68B91A0", Offset = "0x68B81A0", VA = "0x68B91A0")]
	internal int GetPacked()
	{
		return default(int);
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x68B9250", Offset = "0x68B8250", VA = "0x68B9250")]
	internal Vector4 GetInnerUVs()
	{
		return default(Vector4);
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x68B9330", Offset = "0x68B8330", VA = "0x68B9330")]
	internal Vector4 GetOuterUVs()
	{
		return default(Vector4);
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x68B9410", Offset = "0x68B8410", VA = "0x68B9410")]
	internal Vector4 GetPadding()
	{
		return default(Vector4);
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x68B94F0", Offset = "0x68B84F0", VA = "0x68B94F0")]
	[UnityEngine.Bindings.FreeFunction("SpritesBindings::CreateSprite", ThrowsException = true)]
	internal static Sprite CreateSprite(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape, [UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] SecondarySpriteTexture[] secondaryTexture)
	{
		return null;
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x68B9A10", Offset = "0x68B8A10", VA = "0x68B9A10")]
	public int GetSecondaryTextureCount()
	{
		return default(int);
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x68B9AC0", Offset = "0x68B8AC0", VA = "0x68B9AC0")]
	[UnityEngine.Bindings.FreeFunction("SpritesBindings::GetSecondaryTextures", ThrowsException = true, HasExplicitThis = true)]
	public int GetSecondaryTextures([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)][UnityEngine.Bindings.NotNull] SecondarySpriteTexture[] secondaryTexture)
	{
		return default(int);
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x68BA120", Offset = "0x68B9120", VA = "0x68BA120")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape)
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x68BA130", Offset = "0x68B9130", VA = "0x68BA130")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape, SecondarySpriteTexture[] secondaryTextures)
	{
		return null;
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x68BA610", Offset = "0x68B9610", VA = "0x68BA610")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x68BA620", Offset = "0x68B9620", VA = "0x68BA620")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType)
	{
		return null;
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x68BA6B0", Offset = "0x68B96B0", VA = "0x68BA6B0")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x68BA740", Offset = "0x68B9740", VA = "0x68BA740")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit)
	{
		return null;
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x68BA7D0", Offset = "0x68B97D0", VA = "0x68BA7D0")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x68B9170", Offset = "0x68B8170", VA = "0x68B9170")]
	private static extern int GetPackingRotation_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x68B9220", Offset = "0x68B8220", VA = "0x68B9220")]
	private static extern int GetPacked_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x68B92F0", Offset = "0x68B82F0", VA = "0x68B92F0")]
	private static extern void GetInnerUVs_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x68B93D0", Offset = "0x68B83D0", VA = "0x68B93D0")]
	private static extern void GetOuterUVs_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x68B94B0", Offset = "0x68B84B0", VA = "0x68B94B0")]
	private static extern void GetPadding_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x68B9620", Offset = "0x68B8620", VA = "0x68B9620")]
	private static extern IntPtr CreateSprite_Injected(IntPtr texture, [In] ref Rect rect, [In] ref Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, [In] ref Vector4 border, bool generateFallbackPhysicsShape, SecondarySpriteTexture[] secondaryTexture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x68B9740", Offset = "0x68B8740", VA = "0x68B9740")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x68B9820", Offset = "0x68B8820", VA = "0x68B9820")]
	private static extern void get_rect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x68B9900", Offset = "0x68B8900", VA = "0x68B9900")]
	private static extern void get_border_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x68B99E0", Offset = "0x68B89E0", VA = "0x68B99E0")]
	private static extern IntPtr get_texture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x68B9A90", Offset = "0x68B8A90", VA = "0x68B9A90")]
	private static extern int GetSecondaryTextureCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x68B9B70", Offset = "0x68B8B70", VA = "0x68B9B70")]
	private static extern int GetSecondaryTextures_Injected(IntPtr _unity_self, SecondarySpriteTexture[] secondaryTexture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x68B9C30", Offset = "0x68B8C30", VA = "0x68B9C30")]
	private static extern float get_pixelsPerUnit_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x68B9D00", Offset = "0x68B8D00", VA = "0x68B9D00")]
	private static extern IntPtr get_associatedAlphaSplitTexture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x68B9DC0", Offset = "0x68B8DC0", VA = "0x68B9DC0")]
	private static extern void get_pivot_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x68B9F90", Offset = "0x68B8F90", VA = "0x68B9F90")]
	private static extern Vector2[] get_vertices_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x68BA040", Offset = "0x68B9040", VA = "0x68BA040")]
	private static extern ushort[] get_triangles_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x68BA0F0", Offset = "0x68B90F0", VA = "0x68BA0F0")]
	private static extern Vector2[] get_uv_Injected(IntPtr _unity_self);
}
