// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.GraphicRegistry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UI.Collections;

namespace UnityEngine.UI;

[Token(Token = "0x2000022")]
public class GraphicRegistry
{
	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x0")]
	private static GraphicRegistry s_Instance;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Canvas, IndexedSet<Graphic>> m_Graphics;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<Canvas, IndexedSet<Graphic>> m_RaycastableGraphics;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<Graphic> s_EmptyList;

	[Token(Token = "0x1700004A")]
	public static GraphicRegistry instance
	{
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x4F03600", Offset = "0x4F03600", VA = "0x4F03600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4F03460", Offset = "0x4F03460", VA = "0x4F03460")]
	protected GraphicRegistry()
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4EFE650", Offset = "0x4EFE650", VA = "0x4EFE650")]
	public static void RegisterGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4EFD7B0", Offset = "0x4EFD7B0", VA = "0x4EFD7B0")]
	public static void RegisterRaycastGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x4EFE210", Offset = "0x4EFE210", VA = "0x4EFE210")]
	public static void UnregisterGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x4EFD630", Offset = "0x4EFD630", VA = "0x4EFD630")]
	public static void UnregisterRaycastGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x4EFF020", Offset = "0x4EFF020", VA = "0x4EFF020")]
	public static void DisableGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4F036E0", Offset = "0x4F036E0", VA = "0x4F036E0")]
	public static void DisableRaycastGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x4F03870", Offset = "0x4F03870", VA = "0x4F03870")]
	public static IList<Graphic> GetGraphicsForCanvas(Canvas canvas)
	{
		return null;
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4F02AA0", Offset = "0x4F02AA0", VA = "0x4F02AA0")]
	public static IList<Graphic> GetRaycastableGraphicsForCanvas(Canvas canvas)
	{
		return null;
	}
}
