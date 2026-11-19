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

[Token(Token = "0x200005C")]
[RequireComponent(typeof(CanvasRenderer))]
[AddComponentMenu("UI (Canvas)/Raw Image", 12)]
[UnityEngine.UGUIHelpURL("RawImage")]
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

	[Token(Token = "0x170000E4")]
	public override Texture mainTexture
	{
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x6CE8B40", Offset = "0x6CE7B40", VA = "0x6CE8B40", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E5")]
	public Texture texture
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x6CE8CE0", Offset = "0x6CE7CE0", VA = "0x6CE8CE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x6CE8CF0", Offset = "0x6CE7CF0", VA = "0x6CE8CF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E6")]
	public Rect uvRect
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x6CE8DA0", Offset = "0x6CE7DA0", VA = "0x6CE8DA0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x6CE8DC0", Offset = "0x6CE7DC0", VA = "0x6CE8DC0")]
		set
		{
		}
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x6CE8B10", Offset = "0x6CE7B10", VA = "0x6CE8B10")]
	protected RawImage()
	{
	}

	[Token(Token = "0x6000385")]
	[Address(RVA = "0x6CE8EA0", Offset = "0x6CE7EA0", VA = "0x6CE8EA0", Slot = "45")]
	public override void SetNativeSize()
	{
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x6CE9230", Offset = "0x6CE8230", VA = "0x6CE9230", Slot = "44")]
	protected override void OnPopulateMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x6CE9890", Offset = "0x6CE8890", VA = "0x6CE9890", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}
}
