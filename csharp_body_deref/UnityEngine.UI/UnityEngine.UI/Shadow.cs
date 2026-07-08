using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000088")]
[AddComponentMenu("UI/Effects/Shadow", 80)]
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

	[Token(Token = "0x17000155")]
	public Color effectColor
	{
		[Token(Token = "0x600053A")]
		[Address(RVA = "0x4DC87B0", Offset = "0x4DC87B0", VA = "0x4DC87B0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x4DC87C0", Offset = "0x4DC87C0", VA = "0x4DC87C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000156")]
	public Vector2 effectDistance
	{
		[Token(Token = "0x600053C")]
		[Address(RVA = "0x4DC8870", Offset = "0x4DC8870", VA = "0x4DC8870")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600053D")]
		[Address(RVA = "0x4DC8880", Offset = "0x4DC8880", VA = "0x4DC8880")]
		set
		{
		}
	}

	[Token(Token = "0x17000157")]
	public bool useGraphicAlpha
	{
		[Token(Token = "0x600053E")]
		[Address(RVA = "0x4DC89F0", Offset = "0x4DC89F0", VA = "0x4DC89F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600053F")]
		[Address(RVA = "0x4DC8A00", Offset = "0x4DC8A00", VA = "0x4DC8A00")]
		set
		{
		}
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x4DC8780", Offset = "0x4DC8780", VA = "0x4DC8780")]
	protected Shadow()
	{
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x4DC8AA0", Offset = "0x4DC8AA0", VA = "0x4DC8AA0")]
	protected void ApplyShadowZeroAlloc(List<UIVertex> verts, Color32 color, int start, int end, float x, float y)
	{
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x4DC8FA0", Offset = "0x4DC8FA0", VA = "0x4DC8FA0")]
	protected void ApplyShadow(List<UIVertex> verts, Color32 color, int start, int end, float x, float y)
	{
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x4DC8FB0", Offset = "0x4DC8FB0", VA = "0x4DC8FB0", Slot = "20")]
	public override void ModifyMesh(VertexHelper vh)
	{
	}
}
