// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Shadow
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000086")]
[AddComponentMenu("UI (Canvas)/Effects/Shadow", 80)]
[UnityEngine.UGUIHelpURL("Shadow")]
public class Shadow : BaseMeshEffect
{
	[Token(Token = "0x400026F")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private Color m_EffectColor;

	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private Vector2 m_EffectDistance;

	[Token(Token = "0x4000271")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private bool m_UseGraphicAlpha;

	[Token(Token = "0x4000272")]
	private const float kMaxEffectDistance = 600f;

	[Token(Token = "0x17000156")]
	public Color effectColor
	{
		[Token(Token = "0x6000546")]
		[Address(RVA = "0x6CFFF60", Offset = "0x6CFEF60", VA = "0x6CFFF60")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000547")]
		[Address(RVA = "0x6CFFF70", Offset = "0x6CFEF70", VA = "0x6CFFF70")]
		set
		{
		}
	}

	[Token(Token = "0x17000157")]
	public Vector2 effectDistance
	{
		[Token(Token = "0x6000548")]
		[Address(RVA = "0x6D00020", Offset = "0x6CFF020", VA = "0x6D00020")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000549")]
		[Address(RVA = "0x6D00030", Offset = "0x6CFF030", VA = "0x6D00030")]
		set
		{
		}
	}

	[Token(Token = "0x17000158")]
	public bool useGraphicAlpha
	{
		[Token(Token = "0x600054A")]
		[Address(RVA = "0x6D001A0", Offset = "0x6CFF1A0", VA = "0x6D001A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600054B")]
		[Address(RVA = "0x6D001B0", Offset = "0x6CFF1B0", VA = "0x6D001B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x6CFFF30", Offset = "0x6CFEF30", VA = "0x6CFFF30")]
	protected Shadow()
	{
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x6D00250", Offset = "0x6CFF250", VA = "0x6D00250")]
	protected void ApplyShadowZeroAlloc(List<UIVertex> verts, Color32 color, int start, int end, float x, float y)
	{
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x6D006C0", Offset = "0x6CFF6C0", VA = "0x6D006C0")]
	protected void ApplyShadow(List<UIVertex> verts, Color32 color, int start, int end, float x, float y)
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x6D006D0", Offset = "0x6CFF6D0", VA = "0x6D006D0", Slot = "20")]
	public override void ModifyMesh(VertexHelper vh)
	{
	}
}
