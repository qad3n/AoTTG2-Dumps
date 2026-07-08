using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001AC")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/SpriteUtility.h")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/SpriteFrame.h")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/Common/SpriteDataAccess.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/Common/ScriptBindings/SpritesMarshalling.h")]
public sealed class Sprite : Object
{
	[Token(Token = "0x1700022D")]
	public Bounds bounds
	{
		[Token(Token = "0x6000C78")]
		[Address(RVA = "0x4AE4C80", Offset = "0x4AE4C80", VA = "0x4AE4C80")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x1700022E")]
	public Rect rect
	{
		[Token(Token = "0x6000C79")]
		[Address(RVA = "0x4AE4D80", Offset = "0x4AE4D80", VA = "0x4AE4D80")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700022F")]
	public Vector4 border
	{
		[Token(Token = "0x6000C7A")]
		[Address(RVA = "0x4AE4E60", Offset = "0x4AE4E60", VA = "0x4AE4E60")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x17000230")]
	public Texture2D texture
	{
		[Token(Token = "0x6000C7B")]
		[Address(RVA = "0x4AE4F40", Offset = "0x4AE4F40", VA = "0x4AE4F40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000231")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x6000C7C")]
		[Address(RVA = "0x4AE5000", Offset = "0x4AE5000", VA = "0x4AE5000")]
		[UnityEngine.Bindings.NativeMethod("GetPixelsToUnits")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000232")]
	public Texture2D associatedAlphaSplitTexture
	{
		[Token(Token = "0x6000C7D")]
		[Address(RVA = "0x4AE50C0", Offset = "0x4AE50C0", VA = "0x4AE50C0")]
		[UnityEngine.Bindings.NativeMethod("GetAlphaTexture")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000233")]
	public Vector2 pivot
	{
		[Token(Token = "0x6000C7E")]
		[Address(RVA = "0x4AE5180", Offset = "0x4AE5180", VA = "0x4AE5180")]
		[UnityEngine.Bindings.NativeMethod("GetPivotInPixels")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000234")]
	public bool packed
	{
		[Token(Token = "0x6000C7F")]
		[Address(RVA = "0x4AE5260", Offset = "0x4AE5260", VA = "0x4AE5260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000235")]
	public SpritePackingRotation packingRotation
	{
		[Token(Token = "0x6000C80")]
		[Address(RVA = "0x4AE52F0", Offset = "0x4AE52F0", VA = "0x4AE52F0")]
		get
		{
			return default(SpritePackingRotation);
		}
	}

	[Token(Token = "0x17000236")]
	public Vector2[] vertices
	{
		[Token(Token = "0x6000C81")]
		[Address(RVA = "0x4AE5380", Offset = "0x4AE5380", VA = "0x4AE5380")]
		[UnityEngine.Bindings.FreeFunction("SpriteAccessLegacy::GetSpriteVertices", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000237")]
	public ushort[] triangles
	{
		[Token(Token = "0x6000C82")]
		[Address(RVA = "0x4AE5440", Offset = "0x4AE5440", VA = "0x4AE5440")]
		[UnityEngine.Bindings.FreeFunction("SpriteAccessLegacy::GetSpriteIndices", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000238")]
	public Vector2[] uv
	{
		[Token(Token = "0x6000C83")]
		[Address(RVA = "0x4AE5500", Offset = "0x4AE5500", VA = "0x4AE5500")]
		[UnityEngine.Bindings.FreeFunction("SpriteAccessLegacy::GetSpriteUVs", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x4AE4660", Offset = "0x4AE4660", VA = "0x4AE4660")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private Sprite()
	{
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x4AE46D0", Offset = "0x4AE46D0", VA = "0x4AE46D0")]
	internal int GetPackingRotation()
	{
		return default(int);
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x4AE4790", Offset = "0x4AE4790", VA = "0x4AE4790")]
	internal int GetPacked()
	{
		return default(int);
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x4AE4850", Offset = "0x4AE4850", VA = "0x4AE4850")]
	internal Vector4 GetInnerUVs()
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x4AE4930", Offset = "0x4AE4930", VA = "0x4AE4930")]
	internal Vector4 GetOuterUVs()
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x4AE4A10", Offset = "0x4AE4A10", VA = "0x4AE4A10")]
	internal Vector4 GetPadding()
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x4AE4AF0", Offset = "0x4AE4AF0", VA = "0x4AE4AF0")]
	[UnityEngine.Bindings.FreeFunction("SpritesBindings::CreateSprite", ThrowsException = true)]
	internal static Sprite CreateSprite(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape, [UnityEngine.Bindings.Unmarshalled] SecondarySpriteTexture[] secondaryTexture)
	{
		return null;
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x4AE55C0", Offset = "0x4AE55C0", VA = "0x4AE55C0")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape)
	{
		return null;
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x4AE55D0", Offset = "0x4AE55D0", VA = "0x4AE55D0")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape, SecondarySpriteTexture[] secondaryTextures)
	{
		return null;
	}

	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x4AE5C40", Offset = "0x4AE5C40", VA = "0x4AE5C40")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border)
	{
		return null;
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x4AE5C50", Offset = "0x4AE5C50", VA = "0x4AE5C50")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType)
	{
		return null;
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x4AE5CE0", Offset = "0x4AE5CE0", VA = "0x4AE5CE0")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude)
	{
		return null;
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x4AE5D70", Offset = "0x4AE5D70", VA = "0x4AE5D70")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit)
	{
		return null;
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x4AE5E00", Offset = "0x4AE5E00", VA = "0x4AE5E00")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x4AE4760", Offset = "0x4AE4760", VA = "0x4AE4760")]
	private static extern int GetPackingRotation_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x4AE4820", Offset = "0x4AE4820", VA = "0x4AE4820")]
	private static extern int GetPacked_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x4AE48F0", Offset = "0x4AE48F0", VA = "0x4AE48F0")]
	private static extern void GetInnerUVs_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x4AE49D0", Offset = "0x4AE49D0", VA = "0x4AE49D0")]
	private static extern void GetOuterUVs_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x4AE4AB0", Offset = "0x4AE4AB0", VA = "0x4AE4AB0")]
	private static extern void GetPadding_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x4AE4C10", Offset = "0x4AE4C10", VA = "0x4AE4C10")]
	private static extern Sprite CreateSprite_Injected(IntPtr texture, [In] ref Rect rect, [In] ref Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, [In] ref Vector4 border, bool generateFallbackPhysicsShape, SecondarySpriteTexture[] secondaryTexture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x4AE4D40", Offset = "0x4AE4D40", VA = "0x4AE4D40")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x4AE4E20", Offset = "0x4AE4E20", VA = "0x4AE4E20")]
	private static extern void get_rect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x4AE4F00", Offset = "0x4AE4F00", VA = "0x4AE4F00")]
	private static extern void get_border_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x4AE4FD0", Offset = "0x4AE4FD0", VA = "0x4AE4FD0")]
	private static extern Texture2D get_texture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x4AE5090", Offset = "0x4AE5090", VA = "0x4AE5090")]
	private static extern float get_pixelsPerUnit_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x4AE5150", Offset = "0x4AE5150", VA = "0x4AE5150")]
	private static extern Texture2D get_associatedAlphaSplitTexture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x4AE5220", Offset = "0x4AE5220", VA = "0x4AE5220")]
	private static extern void get_pivot_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x4AE5410", Offset = "0x4AE5410", VA = "0x4AE5410")]
	private static extern Vector2[] get_vertices_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x4AE54D0", Offset = "0x4AE54D0", VA = "0x4AE54D0")]
	private static extern ushort[] get_triangles_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x4AE5590", Offset = "0x4AE5590", VA = "0x4AE5590")]
	private static extern Vector2[] get_uv_Injected(IntPtr _unity_self);
}
