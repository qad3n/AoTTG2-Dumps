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
		[Address(RVA = "0x50F0100", Offset = "0x50F0100", VA = "0x50F0100")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x50F0110", Offset = "0x50F0110", VA = "0x50F0110")]
		set
		{
		}
	}

	[Token(Token = "0x17000156")]
	public Vector2 effectDistance
	{
		[Token(Token = "0x600053C")]
		[Address(RVA = "0x50F01C0", Offset = "0x50F01C0", VA = "0x50F01C0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600053D")]
		[Address(RVA = "0x50F01D0", Offset = "0x50F01D0", VA = "0x50F01D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000157")]
	public bool useGraphicAlpha
	{
		[Token(Token = "0x600053E")]
		[Address(RVA = "0x50F0340", Offset = "0x50F0340", VA = "0x50F0340")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600053F")]
		[Address(RVA = "0x50F0350", Offset = "0x50F0350", VA = "0x50F0350")]
		set
		{
		}
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x50F00D0", Offset = "0x50F00D0", VA = "0x50F00D0")]
	protected Shadow()
	{
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x50F03F0", Offset = "0x50F03F0", VA = "0x50F03F0")]
	protected void ApplyShadowZeroAlloc(List<UIVertex> verts, Color32 color, int start, int end, float x, float y)
	{
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x50F08F0", Offset = "0x50F08F0", VA = "0x50F08F0")]
	protected void ApplyShadow(List<UIVertex> verts, Color32 color, int start, int end, float x, float y)
	{
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x50F0900", Offset = "0x50F0900", VA = "0x50F0900", Slot = "20")]
	public override void ModifyMesh(VertexHelper vh)
	{
	}
}
