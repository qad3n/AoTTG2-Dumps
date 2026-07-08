using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Token(Token = "0x200005E")]
[RequireComponent(typeof(CanvasRenderer))]
[AddComponentMenu("UI/Raw Image", 12)]
public class RawImage : MaskableGraphic
{
	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0xD8")]
	[FormerlySerializedAs("m_Tex")]
	[SerializeField]
	private Texture m_Texture;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0xE0")]
	[SerializeField]
	private Rect m_UVRect;

	[Token(Token = "0x170000E3")]
	public override Texture mainTexture
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x4DB1160", Offset = "0x4DB1160", VA = "0x4DB1160", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E4")]
	public Texture texture
	{
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x4DB12B0", Offset = "0x4DB12B0", VA = "0x4DB12B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000376")]
		[Address(RVA = "0x4DB12C0", Offset = "0x4DB12C0", VA = "0x4DB12C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E5")]
	public Rect uvRect
	{
		[Token(Token = "0x6000377")]
		[Address(RVA = "0x4DB1370", Offset = "0x4DB1370", VA = "0x4DB1370")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000378")]
		[Address(RVA = "0x4DB1390", Offset = "0x4DB1390", VA = "0x4DB1390")]
		set
		{
		}
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x4DB1130", Offset = "0x4DB1130", VA = "0x4DB1130")]
	protected RawImage()
	{
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x4DB13F0", Offset = "0x4DB13F0", VA = "0x4DB13F0", Slot = "45")]
	public override void SetNativeSize()
	{
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x4DB1730", Offset = "0x4DB1730", VA = "0x4DB1730", Slot = "44")]
	protected override void OnPopulateMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x4DB1E00", Offset = "0x4DB1E00", VA = "0x4DB1E00", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}
}
