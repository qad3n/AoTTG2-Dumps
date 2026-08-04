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

[Token(Token = "0x20001AF")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/SpriteUtility.h")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/SpriteFrame.h")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/Common/SpriteDataAccess.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/Common/ScriptBindings/SpritesMarshalling.h")]
public sealed class Sprite : Object
{
	[Token(Token = "0x1700022E")]
	public Bounds bounds
	{
		[Token(Token = "0x6000C7A")]
		[Address(RVA = "0x4E0C5B0", Offset = "0x4E0C5B0", VA = "0x4E0C5B0")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x1700022F")]
	public Rect rect
	{
		[Token(Token = "0x6000C7B")]
		[Address(RVA = "0x4E0C6B0", Offset = "0x4E0C6B0", VA = "0x4E0C6B0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000230")]
	public Vector4 border
	{
		[Token(Token = "0x6000C7C")]
		[Address(RVA = "0x4E0C790", Offset = "0x4E0C790", VA = "0x4E0C790")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x17000231")]
	public Texture2D texture
	{
		[Token(Token = "0x6000C7D")]
		[Address(RVA = "0x4E0C870", Offset = "0x4E0C870", VA = "0x4E0C870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000232")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x6000C7E")]
		[Address(RVA = "0x4E0C930", Offset = "0x4E0C930", VA = "0x4E0C930")]
		[UnityEngine.Bindings.NativeMethod("GetPixelsToUnits")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000233")]
	public Texture2D associatedAlphaSplitTexture
	{
		[Token(Token = "0x6000C7F")]
		[Address(RVA = "0x4E0C9F0", Offset = "0x4E0C9F0", VA = "0x4E0C9F0")]
		[UnityEngine.Bindings.NativeMethod("GetAlphaTexture")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000234")]
	public Vector2 pivot
	{
		[Token(Token = "0x6000C80")]
		[Address(RVA = "0x4E0CAB0", Offset = "0x4E0CAB0", VA = "0x4E0CAB0")]
		[UnityEngine.Bindings.NativeMethod("GetPivotInPixels")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000235")]
	public bool packed
	{
		[Token(Token = "0x6000C81")]
		[Address(RVA = "0x4E0CB90", Offset = "0x4E0CB90", VA = "0x4E0CB90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000236")]
	public SpritePackingRotation packingRotation
	{
		[Token(Token = "0x6000C82")]
		[Address(RVA = "0x4E0CC20", Offset = "0x4E0CC20", VA = "0x4E0CC20")]
		get
		{
			return default(SpritePackingRotation);
		}
	}

	[Token(Token = "0x17000237")]
	public Vector2[] vertices
	{
		[Token(Token = "0x6000C83")]
		[Address(RVA = "0x4E0CCB0", Offset = "0x4E0CCB0", VA = "0x4E0CCB0")]
		[UnityEngine.Bindings.FreeFunction("SpriteAccessLegacy::GetSpriteVertices", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000238")]
	public ushort[] triangles
	{
		[Token(Token = "0x6000C84")]
		[Address(RVA = "0x4E0CD70", Offset = "0x4E0CD70", VA = "0x4E0CD70")]
		[UnityEngine.Bindings.FreeFunction("SpriteAccessLegacy::GetSpriteIndices", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000239")]
	public Vector2[] uv
	{
		[Token(Token = "0x6000C85")]
		[Address(RVA = "0x4E0CE30", Offset = "0x4E0CE30", VA = "0x4E0CE30")]
		[UnityEngine.Bindings.FreeFunction("SpriteAccessLegacy::GetSpriteUVs", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x4E0BF90", Offset = "0x4E0BF90", VA = "0x4E0BF90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private Sprite()
	{
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x4E0C000", Offset = "0x4E0C000", VA = "0x4E0C000")]
	internal int GetPackingRotation()
	{
		return default(int);
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x4E0C0C0", Offset = "0x4E0C0C0", VA = "0x4E0C0C0")]
	internal int GetPacked()
	{
		return default(int);
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x4E0C180", Offset = "0x4E0C180", VA = "0x4E0C180")]
	internal Vector4 GetInnerUVs()
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x4E0C260", Offset = "0x4E0C260", VA = "0x4E0C260")]
	internal Vector4 GetOuterUVs()
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x4E0C340", Offset = "0x4E0C340", VA = "0x4E0C340")]
	internal Vector4 GetPadding()
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x4E0C420", Offset = "0x4E0C420", VA = "0x4E0C420")]
	[UnityEngine.Bindings.FreeFunction("SpritesBindings::CreateSprite", ThrowsException = true)]
	internal static Sprite CreateSprite(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape, [UnityEngine.Bindings.Unmarshalled] SecondarySpriteTexture[] secondaryTexture)
	{
		return null;
	}

	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x4E0CEF0", Offset = "0x4E0CEF0", VA = "0x4E0CEF0")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape)
	{
		return null;
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x4E0CF00", Offset = "0x4E0CF00", VA = "0x4E0CF00")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape, SecondarySpriteTexture[] secondaryTextures)
	{
		return null;
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x4E0D570", Offset = "0x4E0D570", VA = "0x4E0D570")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border)
	{
		return null;
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x4E0D580", Offset = "0x4E0D580", VA = "0x4E0D580")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType)
	{
		return null;
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x4E0D610", Offset = "0x4E0D610", VA = "0x4E0D610")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude)
	{
		return null;
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x4E0D6A0", Offset = "0x4E0D6A0", VA = "0x4E0D6A0")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit)
	{
		return null;
	}

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x4E0D730", Offset = "0x4E0D730", VA = "0x4E0D730")]
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x4E0C090", Offset = "0x4E0C090", VA = "0x4E0C090")]
	private static extern int GetPackingRotation_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x4E0C150", Offset = "0x4E0C150", VA = "0x4E0C150")]
	private static extern int GetPacked_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x4E0C220", Offset = "0x4E0C220", VA = "0x4E0C220")]
	private static extern void GetInnerUVs_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x4E0C300", Offset = "0x4E0C300", VA = "0x4E0C300")]
	private static extern void GetOuterUVs_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x4E0C3E0", Offset = "0x4E0C3E0", VA = "0x4E0C3E0")]
	private static extern void GetPadding_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x4E0C540", Offset = "0x4E0C540", VA = "0x4E0C540")]
	private static extern Sprite CreateSprite_Injected(IntPtr texture, [In] ref Rect rect, [In] ref Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, [In] ref Vector4 border, bool generateFallbackPhysicsShape, SecondarySpriteTexture[] secondaryTexture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x4E0C670", Offset = "0x4E0C670", VA = "0x4E0C670")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x4E0C750", Offset = "0x4E0C750", VA = "0x4E0C750")]
	private static extern void get_rect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x4E0C830", Offset = "0x4E0C830", VA = "0x4E0C830")]
	private static extern void get_border_Injected(IntPtr _unity_self, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x4E0C900", Offset = "0x4E0C900", VA = "0x4E0C900")]
	private static extern Texture2D get_texture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x4E0C9C0", Offset = "0x4E0C9C0", VA = "0x4E0C9C0")]
	private static extern float get_pixelsPerUnit_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x4E0CA80", Offset = "0x4E0CA80", VA = "0x4E0CA80")]
	private static extern Texture2D get_associatedAlphaSplitTexture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x4E0CB50", Offset = "0x4E0CB50", VA = "0x4E0CB50")]
	private static extern void get_pivot_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x4E0CD40", Offset = "0x4E0CD40", VA = "0x4E0CD40")]
	private static extern Vector2[] get_vertices_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x4E0CE00", Offset = "0x4E0CE00", VA = "0x4E0CE00")]
	private static extern ushort[] get_triangles_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x4E0CEC0", Offset = "0x4E0CEC0", VA = "0x4E0CEC0")]
	private static extern Vector2[] get_uv_Injected(IntPtr _unity_self);
}
