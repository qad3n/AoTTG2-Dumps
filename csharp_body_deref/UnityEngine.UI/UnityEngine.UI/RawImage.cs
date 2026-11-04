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
	[FieldOffset(Offset = "0xE0")]
	[FormerlySerializedAs("m_Tex")]
	[SerializeField]
	private Texture m_Texture;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0xE8")]
	[SerializeField]
	private Rect m_UVRect;

	[Token(Token = "0x170000E4")]
	public override Texture mainTexture
	{
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x32DB7B0", Offset = "0x32D9DB0", VA = "0x1832DB7B0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E5")]
	public Texture texture
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x187BC50", Offset = "0x187A250", VA = "0x18187BC50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x32DB980", Offset = "0x32D9F80", VA = "0x1832DB980")]
		set
		{
		}
	}

	[Token(Token = "0x170000E6")]
	public Rect uvRect
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x32DB970", Offset = "0x32D9F70", VA = "0x1832DB970")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x32DBA30", Offset = "0x32DA030", VA = "0x1832DBA30")]
		set
		{
		}
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x32DB770", Offset = "0x32D9D70", VA = "0x1832DB770")]
	protected RawImage()
	{
	}

	[Token(Token = "0x6000385")]
	[Address(RVA = "0x32DB5E0", Offset = "0x32D9BE0", VA = "0x1832DB5E0", Slot = "45")]
	public override void SetNativeSize()
	{
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x32DB270", Offset = "0x32D9870", VA = "0x1832DB270", Slot = "44")]
	protected override void OnPopulateMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x3079430", Offset = "0x3077A30", VA = "0x183079430", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}
}
