// ==================== AoTTG2 cross-reference ====================
// Type: UI.HoverTooltip
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/HoverTooltip.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/HoverTooltip.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x2000795")]
internal class HoverTooltip : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x4002650")]
	[FieldOffset(Offset = "0x20")]
	public string Message;

	[Token(Token = "0x4002651")]
	[FieldOffset(Offset = "0x28")]
	public float Offset;

	[Token(Token = "0x4002652")]
	[FieldOffset(Offset = "0x30")]
	public TooltipPopup PopupOverride;

	[Token(Token = "0x4002653")]
	[FieldOffset(Offset = "0x38")]
	private TooltipPopup popup;

	[Token(Token = "0x6004942")]
	[Address(RVA = "0x5BBEDA0", Offset = "0x5BBDDA0", VA = "0x5BBEDA0")]
	private TooltipPopup GetPopup()
	{
		// Lifted from source/cpp/UI/HoverTooltip.c (UI.HoverTooltip$$GetPopup): 3 lines keep C-only constructs
		TooltipPopup exists;
		BaseMenu pUVar1;
		bool bVar2;
		TooltipPopup* ppUVar3;

		exists = this.PopupOverride;
		bVar2 = ((bool)(Object)exists);
		if (bVar2) {
			ppUVar3 = &this.PopupOverride;
		}
		else {
			pUVar1 = UIManager.CurrentMenu;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			ppUVar3 = &pUVar1.TooltipPopup;
		}
		return *ppUVar3;
	}

	[Token(Token = "0x6004943")]
	[Address(RVA = "0x5BBEE40", Offset = "0x5BBDE40", VA = "0x5BBEE40", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerEnterHandler_002EOnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/HoverTooltip.c (UI.HoverTooltip$$UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter): 3 lines keep C-only constructs
		TooltipPopup* targetAddress;
		bool bVar1;
		TooltipPopup pUVar2;
		MethodInfo method_00;

		method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
		bVar1 = (this.Message == (String)method_00);
		if (!bVar1) {
			pUVar2 = this.GetPopup();
			targetAddress = &this.popup;
			this.popup = pUVar2;
			pUVar2 = this.popup;
			bVar1 = ((bool)(Object)pUVar2);
			if (bVar1) {
				pUVar2 = *targetAddress;
				if (pUVar2 == null) {
					throw new NullReferenceException();
				}
				pUVar2.Show(this.Message, (Component)this, this.Offset);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004944")]
	[Address(RVA = "0x5BBF1E0", Offset = "0x5BBE1E0", VA = "0x5BBF1E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerExitHandler_002EOnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/HoverTooltip.c (UI.HoverTooltip$$UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit): 5 lines keep C-only constructs
		TooltipPopup* targetAddress;
		TooltipPopup pUVar1;
		Object x;
		bool bVar2;

		pUVar1 = this.popup;
		targetAddress = &this.popup;
		bVar2 = ((bool)(Object)pUVar1);
		if (bVar2) {
			if (*targetAddress == null) {
	label_05cbf29c: ;
				throw new NullReferenceException();
			}
			x = (Object)((*targetAddress).fields).Caller;
			bVar2 = (x == (Object)this);
			if (bVar2) {
				pUVar1 = *targetAddress;
				if (pUVar1 == null) goto label_05cbf29c;
				pUVar1.Hide();
			}
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x6004945")]
	[Address(RVA = "0x5BBF2B0", Offset = "0x5BBE2B0", VA = "0x5BBF2B0")]
	private void OnDisable()
	{
		// Lifted from source/cpp/UI/HoverTooltip.c (UI.HoverTooltip$$OnDisable): 5 lines keep C-only constructs
		TooltipPopup* targetAddress;
		TooltipPopup pUVar1;
		Object x;
		bool bVar2;

		pUVar1 = this.popup;
		targetAddress = &this.popup;
		bVar2 = ((bool)(Object)pUVar1);
		if (bVar2) {
			if (*targetAddress == null) {
	label_05cbf36c: ;
				throw new NullReferenceException();
			}
			x = (Object)((*targetAddress).fields).Caller;
			bVar2 = (x == (Object)this);
			if (bVar2) {
				pUVar1 = *targetAddress;
				if (pUVar1 == null) goto label_05cbf36c;
				pUVar1.HideImmediate();
			}
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x6004946")]
	[Address(RVA = "0x5BBF380", Offset = "0x5BBE380", VA = "0x5BBF380")]
	public HoverTooltip()
	{
		// Lifted from source/cpp/UI/HoverTooltip.c (UI.HoverTooltip$$.ctor): clean
		this.Offset = 40.0;
		base();
		return;
	}
}
