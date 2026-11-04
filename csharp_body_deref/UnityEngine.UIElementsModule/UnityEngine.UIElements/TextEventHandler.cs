// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextEventHandler
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.TextCore.Text;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004A8")]
internal class TextEventHandler
{
	[Token(Token = "0x4000FE4")]
	[FieldOffset(Offset = "0x10")]
	private TextElement m_TextElement;

	[Token(Token = "0x4000FE5")]
	[FieldOffset(Offset = "0x18")]
	private EventCallback<PointerDownEvent> m_LinkTagOnPointerDown;

	[Token(Token = "0x4000FE6")]
	[FieldOffset(Offset = "0x20")]
	private EventCallback<PointerUpEvent> m_LinkTagOnPointerUp;

	[Token(Token = "0x4000FE7")]
	[FieldOffset(Offset = "0x28")]
	private EventCallback<PointerMoveEvent> m_LinkTagOnPointerMove;

	[Token(Token = "0x4000FE8")]
	[FieldOffset(Offset = "0x30")]
	private EventCallback<PointerOutEvent> m_LinkTagOnPointerOut;

	[Token(Token = "0x4000FE9")]
	[FieldOffset(Offset = "0x38")]
	private EventCallback<PointerUpEvent> m_ATagOnPointerUp;

	[Token(Token = "0x4000FEA")]
	[FieldOffset(Offset = "0x40")]
	private EventCallback<PointerMoveEvent> m_ATagOnPointerMove;

	[Token(Token = "0x4000FEB")]
	[FieldOffset(Offset = "0x48")]
	private EventCallback<PointerOverEvent> m_ATagOnPointerOver;

	[Token(Token = "0x4000FEC")]
	[FieldOffset(Offset = "0x50")]
	private EventCallback<PointerOutEvent> m_ATagOnPointerOut;

	[Token(Token = "0x4000FED")]
	[FieldOffset(Offset = "0x58")]
	internal bool isOverridingCursor;

	[Token(Token = "0x4000FEE")]
	[FieldOffset(Offset = "0x5C")]
	internal int currentLinkIDHash;

	[Token(Token = "0x4000FEF")]
	[FieldOffset(Offset = "0x60")]
	internal bool hasLinkTag;

	[Token(Token = "0x4000FF0")]
	[FieldOffset(Offset = "0x61")]
	internal bool hasATag;

	[Token(Token = "0x17000996")]
	private UnityEngine.TextCore.Text.TextInfo textInfo
	{
		[Token(Token = "0x6002468")]
		[Address(RVA = "0x313FD50", Offset = "0x313E350", VA = "0x18313FD50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002469")]
	[Address(RVA = "0x313FD10", Offset = "0x313E310", VA = "0x18313FD10")]
	public TextEventHandler(TextElement textElement)
	{
	}

	[Token(Token = "0x600246A")]
	[Address(RVA = "0x313FB80", Offset = "0x313E180", VA = "0x18313FB80")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x600246B")]
	[Address(RVA = "0x3125890", Offset = "0x3123E90", VA = "0x183125890")]
	private bool HasAllocatedLinkCallbacks()
	{
		return default(bool);
	}

	[Token(Token = "0x600246C")]
	[Address(RVA = "0x313E3D0", Offset = "0x313C9D0", VA = "0x18313E3D0")]
	private void AllocateLinkCallbacks()
	{
	}

	[Token(Token = "0x600246D")]
	[Address(RVA = "0x3125880", Offset = "0x3123E80", VA = "0x183125880")]
	private bool HasAllocatedATagCallbacks()
	{
		return default(bool);
	}

	[Token(Token = "0x600246E")]
	[Address(RVA = "0x313E260", Offset = "0x313C860", VA = "0x18313E260")]
	private void AllocateATagCallbacks()
	{
	}

	[Token(Token = "0x600246F")]
	[Address(RVA = "0x313DFE0", Offset = "0x313C5E0", VA = "0x18313DFE0")]
	private void ATagOnPointerUp(PointerUpEvent pue)
	{
	}

	[Token(Token = "0x6002470")]
	[Address(RVA = "0x3125B70", Offset = "0x3124170", VA = "0x183125B70")]
	private void ATagOnPointerOver(PointerOverEvent _)
	{
	}

	[Token(Token = "0x6002471")]
	[Address(RVA = "0x313DD00", Offset = "0x313C300", VA = "0x18313DD00")]
	private void ATagOnPointerMove(PointerMoveEvent pme)
	{
	}

	[Token(Token = "0x6002472")]
	[Address(RVA = "0x3125B70", Offset = "0x3124170", VA = "0x183125B70")]
	private void ATagOnPointerOut(PointerOutEvent evt)
	{
	}

	[Token(Token = "0x6002473")]
	[Address(RVA = "0x313EE00", Offset = "0x313D400", VA = "0x18313EE00")]
	private void LinkTagOnPointerDown(PointerDownEvent pde)
	{
	}

	[Token(Token = "0x6002474")]
	[Address(RVA = "0x313F830", Offset = "0x313DE30", VA = "0x18313F830")]
	private void LinkTagOnPointerUp(PointerUpEvent pue)
	{
	}

	[Token(Token = "0x6002475")]
	[Address(RVA = "0x313F150", Offset = "0x313D750", VA = "0x18313F150")]
	private void LinkTagOnPointerMove(PointerMoveEvent pme)
	{
	}

	[Token(Token = "0x6002476")]
	[Address(RVA = "0x313F6E0", Offset = "0x313DCE0", VA = "0x18313F6E0")]
	private void LinkTagOnPointerOut(PointerOutEvent poe)
	{
	}

	[Token(Token = "0x6002477")]
	[Address(RVA = "0x313E680", Offset = "0x313CC80", VA = "0x18313E680")]
	internal void HandleLinkAndATagCallbacks()
	{
	}

	[Token(Token = "0x6002478")]
	[Address(RVA = "0x313ECC0", Offset = "0x313D2C0", VA = "0x18313ECC0")]
	internal void HandleLinkTag()
	{
	}

	[Token(Token = "0x6002479")]
	[Address(RVA = "0x313E540", Offset = "0x313CB40", VA = "0x18313E540")]
	internal void HandleATag()
	{
	}
}
