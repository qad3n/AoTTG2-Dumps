// ==================== AoTTG2 cross-reference ====================
// Type: UI.ChatScrollRect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ChatScrollRect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200082F")]
public class ChatScrollRect : ScrollRect
{
	[Token(Token = "0x40028CF")]
	[FieldOffset(Offset = "0x130")]
	private bool isMouseOver;

	[Token(Token = "0x40028D0")]
	[FieldOffset(Offset = "0x131")]
	private bool isDragging;

	[Token(Token = "0x40028D1")]
	[FieldOffset(Offset = "0x138")]
	private Image handleImage;

	[Token(Token = "0x40028D2")]
	[FieldOffset(Offset = "0x140")]
	private ChatPanel _chatPanel;

	[Token(Token = "0x40028D3")]
	[FieldOffset(Offset = "0x148")]
	private float lastScrollTime;

	[Token(Token = "0x40028D4")]
	private const float SCROLL_INTERACTION_TIMEOUT = 1f;

	[Token(Token = "0x6004E12")]
	[Address(RVA = "0x5C1AB90", Offset = "0x5C19B90", VA = "0x5C1AB90", Slot = "6")]
	protected override void Start()
	{
		// Lifted from source/cpp/UI/ChatScrollRect.c (UI.ChatScrollRect$$Start): 8 lines keep C-only constructs
		Image* targetAddress;
		Scrollbar pUVar1;
		RectTransform __this_00;
		UnityEngine_Events_UnityEvent_float__o __this_01;
		bool bVar2;
		ChatPanel pUVar3;
		Image pUVar4;
		UnityAction<T0> call;
		GameObject __this_02;

		this.Start();
		pUVar3 = this.GetComponentInParent<ChatPanel>();
		this._chatPanel = pUVar3;
		pUVar1 = this.m_VerticalScrollbar;
		bVar2 = ((Object)pUVar1 != null);
		if (!bVar2) {
			return;
		}
		this.verticalScrollbarVisibility = 1;
		pUVar1 = this.m_VerticalScrollbar;
		if ((pUVar1 != null) &&(__this_00 = pUVar1.m_HandleRect, __this_00 != null)) {
			pUVar4 = __this_00.GetComponent<Image>();
			targetAddress = &this.handleImage;
			this.handleImage = pUVar4;
			pUVar1 = this.m_VerticalScrollbar;
			if (pUVar1 != null) {
				__this_01 = (UnityEngine_Events_UnityEvent_float__o)pUVar1.m_OnValueChanged;
				call = new UnityAction<float>((object)this, (intptr_t)MethodInfo_UI_ChatScrollRect_OnScrollbarValueChanged);
				if (__this_01 != null) {
					__this_01.AddListener(call);
					pUVar1 = this.m_VerticalScrollbar;
					if ((pUVar1 != null) &&(__this_02 = pUVar1.gameObject, __this_02 != null)) {
						__this_02.SetActive(true);
						pUVar4 = *targetAddress;
						bVar2 = ((Object)pUVar4 != null);
						if (!bVar2) {
							return;
						}
						if (*targetAddress != null) {
							(*targetAddress).enabled = false;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E13")]
	[Address(RVA = "0x5C1AD80", Offset = "0x5C19D80", VA = "0x5C1AD80")]
	private void OnScrollbarValueChanged(float value)
	{
		// Lifted from source/cpp/UI/ChatScrollRect.c (UI.ChatScrollRect$$OnScrollbarValueChanged): 7 lines keep C-only constructs
		UnityEngine_Events_UnityEvent_Vector2__o __this_00;
		byte[] in_register_00001204 = new byte[12];
		byte[] auVar1 = new byte[16];

		auVar1._4_12_ = in_register_00001204;
		auVar1._0_4_ = value;
		__this_00 = (UnityEngine_Events_UnityEvent_Vector2__o)this.m_OnValueChanged;
		if (__this_00 == null) {
			return;
		}
		__this_00.Invoke((Vector2)(auVar1._0_8_ << 0x20));
		return;
	}

	[Token(Token = "0x6004E14")]
	[Address(RVA = "0x5C1ADE0", Offset = "0x5C19DE0", VA = "0x5C1ADE0", Slot = "48")]
	protected override void LateUpdate()
	{
		// Lifted from source/cpp/UI/ChatScrollRect.c (UI.ChatScrollRect$$LateUpdate): clean
		ChatPanel pUVar1;
		TMP_InputField pTVar2;
		Image pUVar3;
		bool bVar4;
		float fVar5;

		this.LateUpdate();
		pUVar1 = this._chatPanel;
		bVar4 = ((Object)pUVar1 != null);
		if (bVar4) {
			pUVar1 = this._chatPanel;
			if (pUVar1 == null) goto label_05d1af69;
			if (pUVar1._isInteractingWithChatUI == false) {
				if (pUVar1._isDestroyed == false) {
					pTVar2 = pUVar1._inputField;
					bVar4 = ((Object)pTVar2 != null);
					if (bVar4) {
						pTVar2 = pUVar1._inputField;
						if (pTVar2 == null) goto label_05d1af69;
						if (pTVar2.m_AllowInput != false) goto label_05d1af08;
					}
				}
				if (((pUVar1._emojiPanelActive == false) && (this.isDragging == false)) &&(this.isMouseOver == false)) {
					fVar5 = Time.time;
					if (this.lastScrollTime + 1.0 < fVar5) {
						this.verticalNormalizedPosition = 0.0;
					}
				}
			}
		}
	label_05d1af08: ;
		if (this.isDragging != false) {
			pUVar3 = this.handleImage;
			bVar4 = ((Object)pUVar3 != null);
			if (bVar4) {
				pUVar3 = this.handleImage;
				if (pUVar3 != null) {
					pUVar3.enabled = true;
					return;
				}
	label_05d1af69: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6004E15")]
	[Address(RVA = "0x5C199E0", Offset = "0x5C189E0", VA = "0x5C199E0")]
	public void OnMouseEnter()
	{
		// Lifted from source/cpp/UI/ChatScrollRect.c (UI.ChatScrollRect$$OnMouseEnter): clean
		Image pUVar1;
		bool bVar2;

		this.isMouseOver = true;
		pUVar1 = this.handleImage;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this.handleImage;
			bVar2 = true;
			if (this.isMouseOver == false) {
				bVar2 = this.isDragging != false;
			}
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.enabled = bVar2;
			return;
		}
		return;
	}

	[Token(Token = "0x6004E16")]
	[Address(RVA = "0x5C19B20", Offset = "0x5C18B20", VA = "0x5C19B20")]
	public void OnMouseExit()
	{
		// Lifted from source/cpp/UI/ChatScrollRect.c (UI.ChatScrollRect$$OnMouseExit): clean
		Image pUVar1;
		bool bVar2;

		this.isMouseOver = false;
		pUVar1 = this.handleImage;
		bVar2 = ((Object)pUVar1 != null);
		if ((bVar2) && (this.isDragging == false)) {
			pUVar1 = this.handleImage;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.enabled = false;
			return;
		}
		return;
	}

	[Token(Token = "0x6004E17")]
	[Address(RVA = "0x5C1AF70", Offset = "0x5C19F70", VA = "0x5C1AF70")]
	private void UpdateHandleVisibility()
	{
		// Lifted from source/cpp/UI/ChatScrollRect.c (UI.ChatScrollRect$$UpdateHandleVisibility): clean
		Image pUVar1;
		bool bVar2;

		pUVar1 = this.handleImage;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this.handleImage;
			bVar2 = true;
			if (this.isMouseOver == false) {
				bVar2 = this.isDragging != false;
			}
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.enabled = bVar2;
			return;
		}
		return;
	}

	[Token(Token = "0x6004E18")]
	[Address(RVA = "0x5C1B010", Offset = "0x5C1A010", VA = "0x5C1B010", Slot = "44")]
	public override void OnBeginDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/ChatScrollRect.c (UI.ChatScrollRect$$OnBeginDrag): clean
		this.isDragging = true;
		this.OnBeginDrag(eventData);
		return;
	}

	[Token(Token = "0x6004E19")]
	[Address(RVA = "0x5C1B020", Offset = "0x5C1A020", VA = "0x5C1B020", Slot = "45")]
	public override void OnEndDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/ChatScrollRect.c (UI.ChatScrollRect$$OnEndDrag): clean
		Image pUVar1;
		bool bVar2;

		this.OnEndDrag(eventData);
		this.isDragging = false;
		pUVar1 = this.handleImage;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this.handleImage;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.enabled = this.isMouseOver;
			return;
		}
		return;
	}

	[Token(Token = "0x6004E1A")]
	[Address(RVA = "0x5C1B0C0", Offset = "0x5C1A0C0", VA = "0x5C1B0C0", Slot = "46")]
	public override void OnDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/ChatScrollRect.c (UI.ChatScrollRect$$OnDrag): clean
		Image pUVar1;
		bool bVar2;

		if (this.isDragging == false) {
			return;
		}
		pUVar1 = this.handleImage;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this.handleImage;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.enabled = true;
		}
		this.OnDrag(eventData);
		return;
	}

	[Token(Token = "0x6004E1B")]
	[Address(RVA = "0x5C1B160", Offset = "0x5C1A160", VA = "0x5C1B160", Slot = "42")]
	public override void OnScroll(PointerEventData data)
	{
		// Lifted from source/cpp/UI/ChatScrollRect.c (UI.ChatScrollRect$$OnScroll): clean
		Vector2 UVar1;
		ChatPanel pUVar2;
		Image pUVar3;
		bool bVar4;
		float fVar5;
		Vector2 UVar6;

		if (this.isMouseOver == false) {
			return;
		}
		if (data != null) {
			UVar1 = data._scrollDelta_k__BackingField;
			UVar6.x = UVar1.x * 1.5;
			UVar6.y = UVar1.y * 1.5;
			data._scrollDelta_k__BackingField = UVar6;
			this.OnScroll(data);
			fVar5 = Time.time;
			this.lastScrollTime = fVar5;
			pUVar2 = this._chatPanel;
			bVar4 = ((Object)pUVar2 != null);
			if (bVar4) {
				pUVar2 = this._chatPanel;
				if (pUVar2 == null) goto label_05d1b25c;
				pUVar2.UpdateChatInteractionState();
			}
			pUVar3 = this.handleImage;
			bVar4 = ((Object)pUVar3 != null);
			if (!bVar4) {
				return;
			}
			pUVar3 = this.handleImage;
			if (pUVar3 != null) {
				pUVar3.enabled = true;
				return;
			}
		}
	label_05d1b25c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E1C")]
	[Address(RVA = "0x5C1B270", Offset = "0x5C1A270", VA = "0x5C1B270")]
	public ChatScrollRect()
	{
		// Lifted from source/cpp/UI/ChatScrollRect.c (UI.ChatScrollRect$$.ctor): clean
		base();
		return;
	}
}
