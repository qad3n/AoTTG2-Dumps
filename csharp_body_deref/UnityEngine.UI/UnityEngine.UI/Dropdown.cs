// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Dropdown
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.UI.CoroutineTween;

namespace UnityEngine.UI;

[Token(Token = "0x2000013")]
[AddComponentMenu("UI (Canvas)/Legacy/Dropdown", 102)]
[RequireComponent(typeof(RectTransform))]
[UnityEngine.UGUIHelpURL("Dropdown")]
public class Dropdown : Selectable, IPointerClickHandler, IEventSystemHandler, ISubmitHandler, ICancelHandler
{
	[Token(Token = "0x2000014")]
	protected internal class DropdownItem : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, ICancelHandler
	{
		[Token(Token = "0x400004E")]
		[FieldOffset(Offset = "0x20")]
		[SerializeField]
		private Text m_Text;

		[Token(Token = "0x400004F")]
		[FieldOffset(Offset = "0x28")]
		[SerializeField]
		private Image m_Image;

		[Token(Token = "0x4000050")]
		[FieldOffset(Offset = "0x30")]
		[SerializeField]
		private RectTransform m_RectTransform;

		[Token(Token = "0x4000051")]
		[FieldOffset(Offset = "0x38")]
		[SerializeField]
		private Toggle m_Toggle;

		[Token(Token = "0x1700001F")]
		public Text text
		{
			[Token(Token = "0x60000A2")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000A3")]
			[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
			set
			{
			}
		}

		[Token(Token = "0x17000020")]
		public Image image
		{
			[Token(Token = "0x60000A4")]
			[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000A5")]
			[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
			set
			{
			}
		}

		[Token(Token = "0x17000021")]
		public RectTransform rectTransform
		{
			[Token(Token = "0x60000A6")]
			[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000A7")]
			[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
			set
			{
			}
		}

		[Token(Token = "0x17000022")]
		public Toggle toggle
		{
			[Token(Token = "0x60000A8")]
			[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000A9")]
			[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
			set
			{
			}
		}

		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x3069A60", Offset = "0x3068060", VA = "0x183069A60", Slot = "6")]
		public virtual void OnPointerEnter(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x30699D0", Offset = "0x3067FD0", VA = "0x1830699D0", Slot = "7")]
		public virtual void OnCancel(BaseEventData eventData)
		{
		}

		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
		public DropdownItem()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000015")]
	public class OptionData
	{
		[Token(Token = "0x4000052")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private string m_Text;

		[Token(Token = "0x4000053")]
		[FieldOffset(Offset = "0x18")]
		[SerializeField]
		private Sprite m_Image;

		[Token(Token = "0x17000023")]
		public string text
		{
			[Token(Token = "0x60000AD")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000AE")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			set
			{
			}
		}

		[Token(Token = "0x17000024")]
		public Sprite image
		{
			[Token(Token = "0x60000AF")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000B0")]
			[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
			set
			{
			}
		}

		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public OptionData()
		{
		}

		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		public OptionData(string text)
		{
		}

		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x19FFAE0", Offset = "0x19FE0E0", VA = "0x1819FFAE0")]
		public OptionData(Sprite image)
		{
		}

		[Token(Token = "0x60000B4")]
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		public OptionData(string text, Sprite image)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000016")]
	public class OptionDataList
	{
		[Token(Token = "0x4000054")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private List<OptionData> m_Options;

		[Token(Token = "0x17000025")]
		public List<OptionData> options
		{
			[Token(Token = "0x60000B5")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000B6")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			set
			{
			}
		}

		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x307C6F0", Offset = "0x307ACF0", VA = "0x18307C6F0")]
		public OptionDataList()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000017")]
	public class DropdownEvent : UnityEvent<int>
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x3069990", Offset = "0x3067F90", VA = "0x183069990")]
		public DropdownEvent()
		{
		}
	}

	[Token(Token = "0x2000019")]
	[CompilerGenerated]
	private sealed class _003CDelayedDestroyDropdownList_003Ed__75 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000057")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000058")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000059")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x400005A")]
		[FieldOffset(Offset = "0x28")]
		public Dropdown _003C_003E4__this;

		[Token(Token = "0x17000026")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60000BE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000027")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000C0")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CDelayedDestroyDropdownList_003Ed__75(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x307C9A0", Offset = "0x307AFA0", VA = "0x18307C9A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x307CA60", Offset = "0x307B060", VA = "0x18307CA60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x100")]
	[SerializeField]
	private RectTransform m_Template;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private Text m_CaptionText;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	private Image m_CaptionImage;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x118")]
	[Space]
	[SerializeField]
	private Text m_ItemText;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x120")]
	[SerializeField]
	private Image m_ItemImage;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x128")]
	[Space]
	[SerializeField]
	private int m_Value;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x130")]
	[Space]
	[SerializeField]
	private OptionDataList m_Options;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x138")]
	[Space]
	[SerializeField]
	private DropdownEvent m_OnValueChanged;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x140")]
	[SerializeField]
	private float m_AlphaFadeSpeed;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x148")]
	private GameObject m_Dropdown;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x150")]
	private GameObject m_Blocker;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x158")]
	private List<DropdownItem> m_Items;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x160")]
	private TweenRunner<FloatTween> m_AlphaTweenRunner;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x168")]
	private bool validTemplate;

	[Token(Token = "0x400004C")]
	private const int kHighSortingLayer = 30000;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x0")]
	private static OptionData s_NoOptionData;

	[Token(Token = "0x17000016")]
	public RectTransform template
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x187BC70", Offset = "0x187A270", VA = "0x18187BC70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x306D200", Offset = "0x306B800", VA = "0x18306D200")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public Text captionText
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x1BD4C80", Offset = "0x1BD3280", VA = "0x181BD4C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x306D110", Offset = "0x306B710", VA = "0x18306D110")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Image captionImage
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x1C41CF0", Offset = "0x1C402F0", VA = "0x181C41CF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x306D0E0", Offset = "0x306B6E0", VA = "0x18306D0E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public Text itemText
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x1C54FF0", Offset = "0x1C535F0", VA = "0x181C54FF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x306D170", Offset = "0x306B770", VA = "0x18306D170")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public Image itemImage
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0xA2F260", Offset = "0xA2D860", VA = "0x180A2F260")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x306D140", Offset = "0x306B740", VA = "0x18306D140")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public List<OptionData> options
	{
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x306D0A0", Offset = "0x306B6A0", VA = "0x18306D0A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x306D1C0", Offset = "0x306B7C0", VA = "0x18306D1C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public DropdownEvent onValueChanged
	{
		[Token(Token = "0x600007C")]
		[Address(RVA = "0xA29AC0", Offset = "0xA280C0", VA = "0x180A29AC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x306D1A0", Offset = "0x306B7A0", VA = "0x18306D1A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public float alphaFadeSpeed
	{
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x306D090", Offset = "0x306B690", VA = "0x18306D090")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x306D0D0", Offset = "0x306B6D0", VA = "0x18306D0D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public int value
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x306D0C0", Offset = "0x306B6C0", VA = "0x18306D0C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x306D230", Offset = "0x306B830", VA = "0x18306D230")]
		set
		{
		}
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x306B430", Offset = "0x3069A30", VA = "0x18306B430")]
	public void SetValueWithoutNotify(int input)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x306B440", Offset = "0x3069A40", VA = "0x18306B440")]
	private void Set(int value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x306CEF0", Offset = "0x306B4F0", VA = "0x18306CEF0")]
	protected Dropdown()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x306A370", Offset = "0x3068970", VA = "0x18306A370", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x306CDB0", Offset = "0x306B3B0", VA = "0x18306CDB0", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x306AFA0", Offset = "0x30695A0", VA = "0x18306AFA0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x306B180", Offset = "0x3069780", VA = "0x18306B180")]
	public void RefreshShownValue()
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x306A100", Offset = "0x3068700", VA = "0x18306A100")]
	public void AddOptions(List<OptionData> options)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x3069E00", Offset = "0x3068400", VA = "0x183069E00")]
	public void AddOptions(List<string> options)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x3069F80", Offset = "0x3068580", VA = "0x183069F80")]
	public void AddOptions(List<Sprite> options)
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x306A480", Offset = "0x3068A80", VA = "0x18306A480")]
	public void ClearOptions()
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x306B570", Offset = "0x3069B70", VA = "0x18306B570")]
	private void SetupTemplate(Canvas rootCanvas)
	{
	}

	[Token(Token = "0x600008E")]
	private static T GetOrAddComponent<T>(GameObject go) where T : Component
	{
		return null;
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x306B050", Offset = "0x3069650", VA = "0x18306B050", Slot = "42")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x306B050", Offset = "0x3069650", VA = "0x18306B050", Slot = "43")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x306AF90", Offset = "0x3069590", VA = "0x18306AF90", Slot = "44")]
	public virtual void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x306BC90", Offset = "0x306A290", VA = "0x18306BC90")]
	public void Show()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x306A500", Offset = "0x3068B00", VA = "0x18306A500", Slot = "45")]
	protected virtual GameObject CreateBlocker(Canvas rootCanvas)
	{
		return null;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x306AB50", Offset = "0x3069150", VA = "0x18306AB50", Slot = "46")]
	protected virtual void DestroyBlocker(GameObject blocker)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x306AA10", Offset = "0x3069010", VA = "0x18306AA10", Slot = "47")]
	protected virtual GameObject CreateDropdownList(GameObject template)
	{
		return null;
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x306ABA0", Offset = "0x30691A0", VA = "0x18306ABA0", Slot = "48")]
	protected virtual void DestroyDropdownList(GameObject dropdownList)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x306AA70", Offset = "0x3069070", VA = "0x18306AA70", Slot = "49")]
	protected virtual DropdownItem CreateItem(DropdownItem itemTemplate)
	{
		return null;
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "50")]
	protected virtual void DestroyItem(DropdownItem item)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x3069AE0", Offset = "0x30680E0", VA = "0x183069AE0")]
	private DropdownItem AddItem(OptionData data, bool selected, DropdownItem itemTemplate, List<DropdownItem> items)
	{
		return null;
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x306A2E0", Offset = "0x30688E0", VA = "0x18306A2E0")]
	private void AlphaFadeList(float duration, float alpha)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x306A170", Offset = "0x3068770", VA = "0x18306A170")]
	private void AlphaFadeList(float duration, float start, float end)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x306B380", Offset = "0x3069980", VA = "0x18306B380")]
	private void SetAlpha(float alpha)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x306ABF0", Offset = "0x30691F0", VA = "0x18306ABF0")]
	public void Hide()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x306AAD0", Offset = "0x30690D0", VA = "0x18306AAD0")]
	[IteratorStateMachine(typeof(_003CDelayedDestroyDropdownList_003Ed__75))]
	private IEnumerator DelayedDestroyDropdownList(float delay)
	{
		return null;
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x306ADD0", Offset = "0x30693D0", VA = "0x18306ADD0")]
	private void ImmediateDestroyDropdownList()
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x306B060", Offset = "0x3069660", VA = "0x18306B060")]
	private void OnSelectItem(Toggle toggle)
	{
	}
}
