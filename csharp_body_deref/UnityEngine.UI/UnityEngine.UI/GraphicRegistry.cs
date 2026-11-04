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
		[Address(RVA = "0x3070100", Offset = "0x306E700", VA = "0x183070100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x306FF70", Offset = "0x306E570", VA = "0x18306FF70")]
	protected GraphicRegistry()
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x306F780", Offset = "0x306DD80", VA = "0x18306F780")]
	public static void RegisterGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x306F980", Offset = "0x306DF80", VA = "0x18306F980")]
	public static void RegisterRaycastGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x306FB90", Offset = "0x306E190", VA = "0x18306FB90")]
	public static void UnregisterGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x306FD50", Offset = "0x306E350", VA = "0x18306FD50")]
	public static void UnregisterRaycastGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x306F170", Offset = "0x306D770", VA = "0x18306F170")]
	public static void DisableGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x306F470", Offset = "0x306DA70", VA = "0x18306F470")]
	public static void DisableRaycastGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x306F600", Offset = "0x306DC00", VA = "0x18306F600")]
	public static IList<Graphic> GetGraphicsForCanvas(Canvas canvas)
	{
		return null;
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x306F6C0", Offset = "0x306DCC0", VA = "0x18306F6C0")]
	public static IList<Graphic> GetRaycastableGraphicsForCanvas(Canvas canvas)
	{
		return null;
	}
}
