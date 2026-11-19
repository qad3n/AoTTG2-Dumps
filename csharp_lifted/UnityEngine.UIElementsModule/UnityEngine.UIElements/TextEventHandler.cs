// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextEventHandler
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B3ECD0", Offset = "0x6B3DCD0", VA = "0x6B3ECD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002469")]
	[Address(RVA = "0x6B3ED00", Offset = "0x6B3DD00", VA = "0x6B3ED00")]
	public TextEventHandler(TextElement textElement)
	{
	}

	[Token(Token = "0x600246A")]
	[Address(RVA = "0x6B3ED40", Offset = "0x6B3DD40", VA = "0x6B3ED40")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x600246B")]
	[Address(RVA = "0x6B3EED0", Offset = "0x6B3DED0", VA = "0x6B3EED0")]
	private bool HasAllocatedLinkCallbacks()
	{
		return default(bool);
	}

	[Token(Token = "0x600246C")]
	[Address(RVA = "0x6B3EEF0", Offset = "0x6B3DEF0", VA = "0x6B3EEF0")]
	private void AllocateLinkCallbacks()
	{
	}

	[Token(Token = "0x600246D")]
	[Address(RVA = "0x6B3EEE0", Offset = "0x6B3DEE0", VA = "0x6B3EEE0")]
	private bool HasAllocatedATagCallbacks()
	{
		return default(bool);
	}

	[Token(Token = "0x600246E")]
	[Address(RVA = "0x6B3F070", Offset = "0x6B3E070", VA = "0x6B3F070")]
	private void AllocateATagCallbacks()
	{
	}

	[Token(Token = "0x600246F")]
	[Address(RVA = "0x6B3F1F0", Offset = "0x6B3E1F0", VA = "0x6B3F1F0")]
	private void ATagOnPointerUp(PointerUpEvent pue)
	{
	}

	[Token(Token = "0x6002470")]
	[Address(RVA = "0x6B3F3F0", Offset = "0x6B3E3F0", VA = "0x6B3F3F0")]
	private void ATagOnPointerOver(PointerOverEvent _)
	{
	}

	[Token(Token = "0x6002471")]
	[Address(RVA = "0x6B3F400", Offset = "0x6B3E400", VA = "0x6B3F400")]
	private void ATagOnPointerMove(PointerMoveEvent pme)
	{
	}

	[Token(Token = "0x6002472")]
	[Address(RVA = "0x6B3F760", Offset = "0x6B3E760", VA = "0x6B3F760")]
	private void ATagOnPointerOut(PointerOutEvent evt)
	{
	}

	[Token(Token = "0x6002473")]
	[Address(RVA = "0x6B3F770", Offset = "0x6B3E770", VA = "0x6B3F770")]
	private void LinkTagOnPointerDown(PointerDownEvent pde)
	{
	}

	[Token(Token = "0x6002474")]
	[Address(RVA = "0x6B3FAC0", Offset = "0x6B3EAC0", VA = "0x6B3FAC0")]
	private void LinkTagOnPointerUp(PointerUpEvent pue)
	{
	}

	[Token(Token = "0x6002475")]
	[Address(RVA = "0x6B3FE10", Offset = "0x6B3EE10", VA = "0x6B3FE10")]
	private void LinkTagOnPointerMove(PointerMoveEvent pme)
	{
	}

	[Token(Token = "0x6002476")]
	[Address(RVA = "0x6B40430", Offset = "0x6B3F430", VA = "0x6B40430")]
	private void LinkTagOnPointerOut(PointerOutEvent poe)
	{
	}

	[Token(Token = "0x6002477")]
	[Address(RVA = "0x6B405F0", Offset = "0x6B3F5F0", VA = "0x6B405F0")]
	internal void HandleLinkAndATagCallbacks()
	{
	}

	[Token(Token = "0x6002478")]
	[Address(RVA = "0x6B40A90", Offset = "0x6B3FA90", VA = "0x6B40A90")]
	internal void HandleLinkTag()
	{
	}

	[Token(Token = "0x6002479")]
	[Address(RVA = "0x6B40B90", Offset = "0x6B3FB90", VA = "0x6B40B90")]
	internal void HandleATag()
	{
	}
}
