// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000205")]
internal sealed class AottgGameCreateChoiceHover : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerMoveHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x2000206")]
	internal sealed class AottgGameCreateChoiceFocus : MonoBehaviour, ISelectHandler, IEventSystemHandler, IDeselectHandler
	{
		[Token(Token = "0x4000ADF")]
		[FieldOffset(Offset = "0x20")]
		private AottgGameCreateChoiceHover _hover;

		[Token(Token = "0x6000BF1")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		public void Setup(AottgGameCreateChoiceHover hover)
		{
		}

		[Token(Token = "0x6000BF2")]
		[Address(RVA = "0x23C2130", Offset = "0x23C0730", VA = "0x1823C2130", Slot = "4")]
		public void OnSelect(BaseEventData eventData)
		{
		}

		[Token(Token = "0x6000BF3")]
		[Address(RVA = "0x23C2100", Offset = "0x23C0700", VA = "0x1823C2100", Slot = "5")]
		public void OnDeselect(BaseEventData eventData)
		{
		}

		[Token(Token = "0x6000BF4")]
		[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
		public AottgGameCreateChoiceFocus()
		{
		}
	}

	[Token(Token = "0x4000AD4")]
	[FieldOffset(Offset = "0x20")]
	private string _title;

	[Token(Token = "0x4000AD5")]
	[FieldOffset(Offset = "0x28")]
	private string _description;

	[Token(Token = "0x4000AD6")]
	[FieldOffset(Offset = "0x30")]
	private string _previewId;

	[Token(Token = "0x4000AD7")]
	[FieldOffset(Offset = "0x38")]
	private string _labelId;

	[Token(Token = "0x4000AD8")]
	[FieldOffset(Offset = "0x40")]
	private bool _framed;

	[Token(Token = "0x4000AD9")]
	[FieldOffset(Offset = "0x41")]
	private bool _mutedBackground;

	[Token(Token = "0x4000ADA")]
	[FieldOffset(Offset = "0x48")]
	private GisketchLogoMotionBlur _blur;

	[Token(Token = "0x4000ADB")]
	[FieldOffset(Offset = "0x50")]
	private UnityEngine.UI.Outline _outline;

	[Token(Token = "0x4000ADC")]
	[FieldOffset(Offset = "0x58")]
	private AottgGameCreateCardPreview _cardPreview;

	[Token(Token = "0x4000ADD")]
	[FieldOffset(Offset = "0x60")]
	private bool _hovered;

	[Token(Token = "0x4000ADE")]
	[FieldOffset(Offset = "0x61")]
	private bool _selected;

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x23C2C30", Offset = "0x23C1230", VA = "0x1823C2C30")]
	public void Setup(string title, string description, string previewId, string labelId, bool framed, bool mutedBackground)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x23C2790", Offset = "0x23C0D90", VA = "0x1823C2790", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x23C2920", Offset = "0x23C0F20", VA = "0x1823C2920", Slot = "6")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x23C2880", Offset = "0x23C0E80", VA = "0x1823C2880", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x23C29B0", Offset = "0x23C0FB0", VA = "0x1823C29B0", Slot = "7")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x23C2770", Offset = "0x23C0D70", VA = "0x1823C2770", Slot = "8")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x23C2780", Offset = "0x23C0D80", VA = "0x1823C2780")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x23C36B0", Offset = "0x23C1CB0", VA = "0x1823C36B0")]
	private void Show()
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x23C2A30", Offset = "0x23C1030", VA = "0x1823C2A30")]
	private void SetHovered(bool hovered)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x23C2B30", Offset = "0x23C1130", VA = "0x1823C2B30")]
	private void SetText(string objectName, string value)
	{
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x23C25B0", Offset = "0x23C0BB0", VA = "0x1823C25B0")]
	private Image FindImage(string objectName)
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x23C2690", Offset = "0x23C0C90", VA = "0x1823C2690")]
	private TMP_Text FindText(string objectName)
	{
		return null;
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgGameCreateChoiceHover()
	{
	}
}
