// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000220")]
internal sealed class AottgGameCreateChoiceHover : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerMoveHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x2000221")]
	internal sealed class AottgGameCreateChoiceFocus : MonoBehaviour, ISelectHandler, IEventSystemHandler, IDeselectHandler
	{
		[Token(Token = "0x4000B61")]
		[FieldOffset(Offset = "0x20")]
		private AottgGameCreateChoiceHover _hover;

		[Token(Token = "0x6000CBD")]
		[Address(RVA = "0x5D93140", Offset = "0x5D92140", VA = "0x5D93140")]
		public void Setup(AottgGameCreateChoiceHover hover)
		{
		}

		[Token(Token = "0x6000CBE")]
		[Address(RVA = "0x5D93150", Offset = "0x5D92150", VA = "0x5D93150", Slot = "4")]
		public void OnSelect(BaseEventData eventData)
		{
		}

		[Token(Token = "0x6000CBF")]
		[Address(RVA = "0x5D931D0", Offset = "0x5D921D0", VA = "0x5D931D0", Slot = "5")]
		public void OnDeselect(BaseEventData eventData)
		{
		}

		[Token(Token = "0x6000CC0")]
		[Address(RVA = "0x5D931F0", Offset = "0x5D921F0", VA = "0x5D931F0")]
		public AottgGameCreateChoiceFocus()
		{
		}
	}

	[Token(Token = "0x4000B56")]
	[FieldOffset(Offset = "0x20")]
	private string _title;

	[Token(Token = "0x4000B57")]
	[FieldOffset(Offset = "0x28")]
	private string _description;

	[Token(Token = "0x4000B58")]
	[FieldOffset(Offset = "0x30")]
	private string _previewId;

	[Token(Token = "0x4000B59")]
	[FieldOffset(Offset = "0x38")]
	private string _labelId;

	[Token(Token = "0x4000B5A")]
	[FieldOffset(Offset = "0x40")]
	private bool _framed;

	[Token(Token = "0x4000B5B")]
	[FieldOffset(Offset = "0x41")]
	private bool _mutedBackground;

	[Token(Token = "0x4000B5C")]
	[FieldOffset(Offset = "0x48")]
	private GisketchLogoMotionBlur _blur;

	[Token(Token = "0x4000B5D")]
	[FieldOffset(Offset = "0x50")]
	private Image _hoverRing;

	[Token(Token = "0x4000B5E")]
	[FieldOffset(Offset = "0x58")]
	private AottgGameCreateCardPreview _cardPreview;

	[Token(Token = "0x4000B5F")]
	[FieldOffset(Offset = "0x60")]
	private bool _hovered;

	[Token(Token = "0x4000B60")]
	[FieldOffset(Offset = "0x61")]
	private bool _selected;

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x5D8F2F0", Offset = "0x5D8E2F0", VA = "0x5D8F2F0")]
	public void Setup(string title, string description, string previewId, string labelId, bool framed, bool mutedBackground)
	{
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x5D92AF0", Offset = "0x5D91AF0", VA = "0x5D92AF0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x5D92C40", Offset = "0x5D91C40", VA = "0x5D92C40", Slot = "6")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x5D92CC0", Offset = "0x5D91CC0", VA = "0x5D92CC0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x5D92E60", Offset = "0x5D91E60", VA = "0x5D92E60", Slot = "7")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x5D92ED0", Offset = "0x5D91ED0", VA = "0x5D92ED0", Slot = "8")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x5D92EE0", Offset = "0x5D91EE0", VA = "0x5D92EE0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x5D92BD0", Offset = "0x5D91BD0", VA = "0x5D92BD0")]
	private void Show()
	{
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x5D92D50", Offset = "0x5D91D50", VA = "0x5D92D50")]
	private void SetHovered(bool hovered)
	{
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x5D92EF0", Offset = "0x5D91EF0", VA = "0x5D92EF0")]
	private void SetText(string objectName, string value)
	{
	}

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x5D925C0", Offset = "0x5D915C0", VA = "0x5D925C0")]
	private Image CreateHoverRing()
	{
		return null;
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x5D924F0", Offset = "0x5D914F0", VA = "0x5D924F0")]
	private Image FindImage(string objectName)
	{
		return null;
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x5D92A20", Offset = "0x5D91A20", VA = "0x5D92A20")]
	private TMP_Text FindText(string objectName)
	{
		return null;
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x5D93130", Offset = "0x5D92130", VA = "0x5D93130")]
	public AottgGameCreateChoiceHover()
	{
	}
}
