// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.RawImage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50D8AB0", Offset = "0x50D8AB0", VA = "0x50D8AB0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E4")]
	public Texture texture
	{
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x50D8C00", Offset = "0x50D8C00", VA = "0x50D8C00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000376")]
		[Address(RVA = "0x50D8C10", Offset = "0x50D8C10", VA = "0x50D8C10")]
		set
		{
		}
	}

	[Token(Token = "0x170000E5")]
	public Rect uvRect
	{
		[Token(Token = "0x6000377")]
		[Address(RVA = "0x50D8CC0", Offset = "0x50D8CC0", VA = "0x50D8CC0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000378")]
		[Address(RVA = "0x50D8CE0", Offset = "0x50D8CE0", VA = "0x50D8CE0")]
		set
		{
		}
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x50D8A80", Offset = "0x50D8A80", VA = "0x50D8A80")]
	protected RawImage()
	{
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x50D8D40", Offset = "0x50D8D40", VA = "0x50D8D40", Slot = "45")]
	public override void SetNativeSize()
	{
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x50D9080", Offset = "0x50D9080", VA = "0x50D9080", Slot = "44")]
	protected override void OnPopulateMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x50D9750", Offset = "0x50D9750", VA = "0x50D9750", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}
}
