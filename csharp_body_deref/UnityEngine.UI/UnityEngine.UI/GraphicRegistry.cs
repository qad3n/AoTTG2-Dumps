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
		[Address(RVA = "0x4BDBCD0", Offset = "0x4BDBCD0", VA = "0x4BDBCD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4BDBB30", Offset = "0x4BDBB30", VA = "0x4BDBB30")]
	protected GraphicRegistry()
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4BD6D20", Offset = "0x4BD6D20", VA = "0x4BD6D20")]
	public static void RegisterGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4BD5E80", Offset = "0x4BD5E80", VA = "0x4BD5E80")]
	public static void RegisterRaycastGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x4BD68E0", Offset = "0x4BD68E0", VA = "0x4BD68E0")]
	public static void UnregisterGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x4BD5D00", Offset = "0x4BD5D00", VA = "0x4BD5D00")]
	public static void UnregisterRaycastGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x4BD76F0", Offset = "0x4BD76F0", VA = "0x4BD76F0")]
	public static void DisableGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4BDBDB0", Offset = "0x4BDBDB0", VA = "0x4BDBDB0")]
	public static void DisableRaycastGraphicForCanvas(Canvas c, Graphic graphic)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x4BDBF40", Offset = "0x4BDBF40", VA = "0x4BDBF40")]
	public static IList<Graphic> GetGraphicsForCanvas(Canvas canvas)
	{
		return null;
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4BDB170", Offset = "0x4BDB170", VA = "0x4BDB170")]
	public static IList<Graphic> GetRaycastableGraphicsForCanvas(Canvas canvas)
	{
		return null;
	}
}
