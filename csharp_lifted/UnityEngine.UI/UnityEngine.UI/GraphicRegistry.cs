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

[Token(Token = "0x2000020")]
public class GraphicRegistry
{
	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x0")]
	private static GraphicRegistry s_Instance;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Canvas, IndexedSet<Graphic>> m_Graphics;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<Canvas, IndexedSet<Graphic>> m_RaycastableGraphics;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<Graphic> s_EmptyList;

	[Token(Token = "0x1700004A")]
	public static GraphicRegistry instance
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x6A70630", Offset = "0x6A6F630", VA = "0x6A70630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x6A70490", Offset = "0x6A6F490", VA = "0x6A70490")]
	protected GraphicRegistry()
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x6A6B740", Offset = "0x6A6A740", VA = "0x6A6B740")]
	public static void RegisterGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x6A6A8A0", Offset = "0x6A698A0", VA = "0x6A6A8A0")]
	public static void RegisterRaycastGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x6A6B310", Offset = "0x6A6A310", VA = "0x6A6B310")]
	public static void UnregisterGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x6A6A720", Offset = "0x6A69720", VA = "0x6A6A720")]
	public static void UnregisterRaycastGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x6A6C100", Offset = "0x6A6B100", VA = "0x6A6C100")]
	public static void DisableGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x6A70710", Offset = "0x6A6F710", VA = "0x6A70710")]
	public static void DisableRaycastGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x6A708A0", Offset = "0x6A6F8A0", VA = "0x6A708A0")]
	public static IList<Graphic> GetGraphicsForCanvas(Canvas canvas)
	{
		return null;
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x6A6FAE0", Offset = "0x6A6EAE0", VA = "0x6A6FAE0")]
	public static IList<Graphic> GetRaycastableGraphicsForCanvas(Canvas canvas)
	{
		return null;
	}
}
