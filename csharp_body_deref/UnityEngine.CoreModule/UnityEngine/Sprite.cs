// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Sprite
// Update status: CHANGED in this game update
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
[UnityEngine.Bindings.NativeHeader("Runtime/2D/Common/ScriptBindings/SpritesMarshalling.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/Common/SpriteDataAccess.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/SpriteUtility.h")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/SpriteFrame.h")]
[ExcludeFromPreset]
public sealed class Sprite : Object
{
	[Token(Token = "0x1700002B")]
	public Bounds bounds
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x2ED55F0", Offset = "0x2ED3BF0", VA = "0x182ED55F0")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x1700002C")]
	public Rect rect
	{
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x2ED5900", Offset = "0x2ED3F00", VA = "0x182ED5900")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700002D")]
	public Vector4 border
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x2ED5510", Offset = "0x2ED3B10", VA = "0x182ED5510")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x1700002E")]
	public Texture2D texture
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x2ED59D0", Offset = "0x2ED3FD0", VA = "0x182ED59D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002F")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x2ED5830", Offset = "0x2ED3E30", VA = "0x182ED5830")]
		[UnityEngine.Bindings.NativeMethod("GetPixelsToUnits")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000030")]
	public Texture2D associatedAlphaSplitTexture
	{
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x2ED5420", Offset = "0x2ED3A20", VA = "0x182ED5420")]
		[UnityEngine.Bindings.NativeMethod("GetAlphaTexture")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000031")]
	public Vector2 pivot
	{
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x2ED5760", Offset = "0x2ED3D60", VA = "0x182ED5760")]
		[UnityEngine.Bindings.NativeMethod("GetPivotInPixels")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000032")]
	public bool packed
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x2ED5690", Offset = "0x2ED3C90", VA = "0x182ED5690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000033")]
	public SpritePackingRotation packingRotation
	{
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x2ED5070", Offset = "0x2ED3670", VA = "0x182ED5070")]
		get
		{
			return default(SpritePackingRotation);
		}
	}

	[Token(Token = "0x17000034")]
	public Vector2[] vertices
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x2ED5C30", Offset = "0x2ED4230", VA = "0x182ED5C30")]
		[UnityEngine.Bindings.FreeFunction("SpriteAccessLegacy::GetSpriteVertices", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000035")]
	public ushort[] triangles
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x2ED5AB0", Offset = "0x2ED40B0", VA = "0x182ED5AB0")]
		[UnityEngine.Bindings.FreeFunction("SpriteAccessLegacy::GetSpriteIndices", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000036")]
	public Vector2[] uv
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x2ED5B70", Offset = "0x2ED4170", VA = "0x182ED5B70")]
		[UnityEngine.Bindings.FreeFunction("SpriteAccessLegacy::GetSpriteUVs", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x2ED5390", Offset = "0x2ED3990", VA = "0x182ED5390")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private Sprite()
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x2ED5070", Offset = "0x2ED3670", VA = "0x182ED5070")]
	internal int GetPackingRotation()
	{
		return default(int);
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x2ED4FB0", Offset = "0x2ED35B0", VA = "0x182ED4FB0")]
	internal int GetPacked()
	{
		return default(int);
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x2ED4E00", Offset = "0x2ED3400", VA = "0x182ED4E00")]
	internal Vector4 GetInnerUVs()
	{
		return default(Vector4);
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x2ED4EE0", Offset = "0x2ED34E0", VA = "0x182ED4EE0")]
	internal Vector4 GetOuterUVs()
	{
		return default(Vector4);
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x2ED5140", Offset = "0x2ED3740", VA = "0x182ED5140")]
	internal Vector4 GetPadding()
	{
		return default(Vector4);
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x2ED4310", Offset = "0x2ED2910", VA = "0x182ED4310")]
	[UnityEngine.Bindings.FreeFunction("SpritesBindings::CreateSprite", ThrowsException = true)]
	internal static Sprite CreateSprite(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape, [UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] SecondarySpriteTexture[] secondaryTexture)
	{
		return null;
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x2ED5210", Offset = "0x2ED3810", VA = "0x182ED5210")]
	public int GetSecondaryTextureCount()
	{
		return default(int);
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x2ED52E0", Offset = "0x2ED38E0", VA = "0x182ED52E0")]
	[UnityEngine.Bindings.FreeFunction("SpritesBindings::GetSecondaryTextures", ThrowsException = true, HasExplicitThis = true)]
	public int GetSecondaryTextures([UnityEngine.Bindings.NotNull][UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] SecondarySpriteTexture[] secondaryTexture)
	{
		return default(int);
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x2ED46A0", Offset = "0x2ED2CA0", VA = "0x182ED46A0")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x2ED4710", Offset = "0x2ED2D10", VA = "0x182ED4710")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape, SecondarySpriteTexture[] secondaryTextures)
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x2ED4400", Offset = "0x2ED2A00", VA = "0x182ED4400")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border)
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x2ED4460", Offset = "0x2ED2A60", VA = "0x182ED4460")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType)
	{
		return null;
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x2ED4CE0", Offset = "0x2ED32E0", VA = "0x182ED4CE0")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x2ED45E0", Offset = "0x2ED2BE0", VA = "0x182ED45E0")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit)
	{
		return null;
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x2ED4530", Offset = "0x2ED2B30", VA = "0x182ED4530")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x2ED5030", Offset = "0x2ED3630", VA = "0x182ED5030")]
	private static extern int GetPackingRotation_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x2ED4F70", Offset = "0x2ED3570", VA = "0x182ED4F70")]
	private static extern int GetPacked_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x2ED4DB0", Offset = "0x2ED33B0", VA = "0x182ED4DB0")]
	private static extern void GetInnerUVs_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x2ED4E90", Offset = "0x2ED3490", VA = "0x182ED4E90")]
	private static extern void GetOuterUVs_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x2ED50F0", Offset = "0x2ED36F0", VA = "0x182ED50F0")]
	private static extern void GetPadding_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x2ED4290", Offset = "0x2ED2890", VA = "0x182ED4290")]
	private static extern IntPtr CreateSprite_Injected(IntPtr texture, [In] ref Rect rect, [In] ref Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, [In] ref Vector4 border, bool generateFallbackPhysicsShape, SecondarySpriteTexture[] secondaryTexture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x2ED55A0", Offset = "0x2ED3BA0", VA = "0x182ED55A0")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x2ED58B0", Offset = "0x2ED3EB0", VA = "0x182ED58B0")]
	private static extern void get_rect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x2ED54C0", Offset = "0x2ED3AC0", VA = "0x182ED54C0")]
	private static extern void get_border_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x2ED5990", Offset = "0x2ED3F90", VA = "0x182ED5990")]
	private static extern IntPtr get_texture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x2ED51D0", Offset = "0x2ED37D0", VA = "0x182ED51D0")]
	private static extern int GetSecondaryTextureCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x2ED5290", Offset = "0x2ED3890", VA = "0x182ED5290")]
	private static extern int GetSecondaryTextures_Injected(IntPtr _unity_self, SecondarySpriteTexture[] secondaryTexture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x2ED57F0", Offset = "0x2ED3DF0", VA = "0x182ED57F0")]
	private static extern float get_pixelsPerUnit_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x2ED53E0", Offset = "0x2ED39E0", VA = "0x182ED53E0")]
	private static extern IntPtr get_associatedAlphaSplitTexture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x2ED5710", Offset = "0x2ED3D10", VA = "0x182ED5710")]
	private static extern void get_pivot_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x2ED5BF0", Offset = "0x2ED41F0", VA = "0x182ED5BF0")]
	private static extern Vector2[] get_vertices_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x2ED5A70", Offset = "0x2ED4070", VA = "0x182ED5A70")]
	private static extern ushort[] get_triangles_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x2ED5B30", Offset = "0x2ED4130", VA = "0x182ED5B30")]
	private static extern Vector2[] get_uv_Injected(IntPtr _unity_self);
}
