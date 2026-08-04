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

[Token(Token = "0x2000015")]
[AddComponentMenu("UI/Legacy/Dropdown", 102)]
[RequireComponent(typeof(RectTransform))]
public class Dropdown : Selectable, IPointerClickHandler, IEventSystemHandler, ISubmitHandler, ICancelHandler
{
	[Token(Token = "0x2000016")]
	protected internal class DropdownItem : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, ICancelHandler
	{
		[Token(Token = "0x4000053")]
		[FieldOffset(Offset = "0x20")]
		[SerializeField]
		private Text m_Text;

		[Token(Token = "0x4000054")]
		[FieldOffset(Offset = "0x28")]
		[SerializeField]
		private Image m_Image;

		[Token(Token = "0x4000055")]
		[FieldOffset(Offset = "0x30")]
		[SerializeField]
		private RectTransform m_RectTransform;

		[Token(Token = "0x4000056")]
		[FieldOffset(Offset = "0x38")]
		[SerializeField]
		private Toggle m_Toggle;

		[Token(Token = "0x1700001F")]
		public Text text
		{
			[Token(Token = "0x60000A4")]
			[Address(RVA = "0x4EFC6C0", Offset = "0x4EFC6C0", VA = "0x4EFC6C0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000A5")]
			[Address(RVA = "0x4EFC6D0", Offset = "0x4EFC6D0", VA = "0x4EFC6D0")]
			set
			{
			}
		}

		[Token(Token = "0x17000020")]
		public Image image
		{
			[Token(Token = "0x60000A6")]
			[Address(RVA = "0x4EFC6E0", Offset = "0x4EFC6E0", VA = "0x4EFC6E0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000A7")]
			[Address(RVA = "0x4EFC6F0", Offset = "0x4EFC6F0", VA = "0x4EFC6F0")]
			set
			{
			}
		}

		[Token(Token = "0x17000021")]
		public RectTransform rectTransform
		{
			[Token(Token = "0x60000A8")]
			[Address(RVA = "0x4EFC700", Offset = "0x4EFC700", VA = "0x4EFC700")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000A9")]
			[Address(RVA = "0x4EFC710", Offset = "0x4EFC710", VA = "0x4EFC710")]
			set
			{
			}
		}

		[Token(Token = "0x17000022")]
		public Toggle toggle
		{
			[Token(Token = "0x60000AA")]
			[Address(RVA = "0x4EFC720", Offset = "0x4EFC720", VA = "0x4EFC720")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000AB")]
			[Address(RVA = "0x4EFC730", Offset = "0x4EFC730", VA = "0x4EFC730")]
			set
			{
			}
		}

		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x4EFC740", Offset = "0x4EFC740", VA = "0x4EFC740", Slot = "6")]
		public virtual void OnPointerEnter(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x4EFC7B0", Offset = "0x4EFC7B0", VA = "0x4EFC7B0", Slot = "7")]
		public virtual void OnCancel(BaseEventData eventData)
		{
		}

		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x4EFC830", Offset = "0x4EFC830", VA = "0x4EFC830")]
		public DropdownItem()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000017")]
	public class OptionData
	{
		[Token(Token = "0x4000057")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private string m_Text;

		[Token(Token = "0x4000058")]
		[FieldOffset(Offset = "0x18")]
		[SerializeField]
		private Sprite m_Image;

		[Token(Token = "0x17000023")]
		public string text
		{
			[Token(Token = "0x60000AF")]
			[Address(RVA = "0x4EFC840", Offset = "0x4EFC840", VA = "0x4EFC840")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000B0")]
			[Address(RVA = "0x4EFC850", Offset = "0x4EFC850", VA = "0x4EFC850")]
			set
			{
			}
		}

		[Token(Token = "0x17000024")]
		public Sprite image
		{
			[Token(Token = "0x60000B1")]
			[Address(RVA = "0x4EFC860", Offset = "0x4EFC860", VA = "0x4EFC860")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000B2")]
			[Address(RVA = "0x4EFC870", Offset = "0x4EFC870", VA = "0x4EFC870")]
			set
			{
			}
		}

		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x4EF7D80", Offset = "0x4EF7D80", VA = "0x4EF7D80")]
		public OptionData()
		{
		}

		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x4EF9630", Offset = "0x4EF9630", VA = "0x4EF9630")]
		public OptionData(string text)
		{
		}

		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x4EF97D0", Offset = "0x4EF97D0", VA = "0x4EF97D0")]
		public OptionData(Sprite image)
		{
		}

		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x4EFC880", Offset = "0x4EFC880", VA = "0x4EFC880")]
		public OptionData(string text, Sprite image)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000018")]
	public class OptionDataList
	{
		[Token(Token = "0x4000059")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private List<OptionData> m_Options;

		[Token(Token = "0x17000025")]
		public List<OptionData> options
		{
			[Token(Token = "0x60000B7")]
			[Address(RVA = "0x4EFC8C0", Offset = "0x4EFC8C0", VA = "0x4EFC8C0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000B8")]
			[Address(RVA = "0x4EFC8D0", Offset = "0x4EFC8D0", VA = "0x4EFC8D0")]
			set
			{
			}
		}

		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x4EF8FC0", Offset = "0x4EF8FC0", VA = "0x4EF8FC0")]
		public OptionDataList()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000019")]
	public class DropdownEvent : UnityEvent<int>
	{
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x4EF9040", Offset = "0x4EF9040", VA = "0x4EF9040")]
		public DropdownEvent()
		{
		}
	}

	[Token(Token = "0x200001B")]
	[CompilerGenerated]
	private sealed class _003CDelayedDestroyDropdownList_003Ed__75 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400005C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400005D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400005E")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x400005F")]
		[FieldOffset(Offset = "0x28")]
		public Dropdown _003C_003E4__this;

		[Token(Token = "0x17000026")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60000C0")]
			[Address(RVA = "0x4EFC9D0", Offset = "0x4EFC9D0", VA = "0x4EFC9D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000027")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000C2")]
			[Address(RVA = "0x4EFCA20", Offset = "0x4EFCA20", VA = "0x4EFCA20", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x4EFC500", Offset = "0x4EFC500", VA = "0x4EFC500")]
		[DebuggerHidden]
		public _003CDelayedDestroyDropdownList_003Ed__75(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x4EFC910", Offset = "0x4EFC910", VA = "0x4EFC910", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x4EFC920", Offset = "0x4EFC920", VA = "0x4EFC920", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x4EFC9E0", Offset = "0x4EFC9E0", VA = "0x4EFC9E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x100")]
	[SerializeField]
	private RectTransform m_Template;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private Text m_CaptionText;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	private Image m_CaptionImage;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x118")]
	[Space]
	[SerializeField]
	private Text m_ItemText;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x120")]
	[SerializeField]
	private Image m_ItemImage;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x128")]
	[Space]
	[SerializeField]
	private int m_Value;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x130")]
	[Space]
	[SerializeField]
	private OptionDataList m_Options;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x138")]
	[Space]
	[SerializeField]
	private DropdownEvent m_OnValueChanged;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x140")]
	[SerializeField]
	private float m_AlphaFadeSpeed;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x148")]
	private GameObject m_Dropdown;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x150")]
	private GameObject m_Blocker;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x158")]
	private List<DropdownItem> m_Items;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x160")]
	private TweenRunner<FloatTween> m_AlphaTweenRunner;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x168")]
	private bool validTemplate;

	[Token(Token = "0x4000051")]
	private const int kHighSortingLayer = 30000;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x0")]
	private static OptionData s_NoOptionData;

	[Token(Token = "0x17000016")]
	public RectTransform template
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x4EF8B80", Offset = "0x4EF8B80", VA = "0x4EF8B80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x4EF7D00", Offset = "0x4EF7D00", VA = "0x4EF7D00")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public Text captionText
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x4EF8B90", Offset = "0x4EF8B90", VA = "0x4EF8B90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x4EF7D20", Offset = "0x4EF7D20", VA = "0x4EF7D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Image captionImage
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x4EF8BA0", Offset = "0x4EF8BA0", VA = "0x4EF8BA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x4EF8BB0", Offset = "0x4EF8BB0", VA = "0x4EF8BB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public Text itemText
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x4EF8BD0", Offset = "0x4EF8BD0", VA = "0x4EF8BD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x4EF7D40", Offset = "0x4EF7D40", VA = "0x4EF7D40")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public Image itemImage
	{
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x4EF8BE0", Offset = "0x4EF8BE0", VA = "0x4EF8BE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x4EF8BF0", Offset = "0x4EF8BF0", VA = "0x4EF8BF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public List<OptionData> options
	{
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x4EF7D60", Offset = "0x4EF7D60", VA = "0x4EF7D60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x4EF8C10", Offset = "0x4EF8C10", VA = "0x4EF8C10")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public DropdownEvent onValueChanged
	{
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x4EF8C40", Offset = "0x4EF8C40", VA = "0x4EF8C40")]
		get
		{
			return null;
		}
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x4EF8C50", Offset = "0x4EF8C50", VA = "0x4EF8C50")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public float alphaFadeSpeed
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x4EF8C70", Offset = "0x4EF8C70", VA = "0x4EF8C70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x4EF8C80", Offset = "0x4EF8C80", VA = "0x4EF8C80")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public int value
	{
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x4EF8C90", Offset = "0x4EF8C90", VA = "0x4EF8C90")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x4EF8CA0", Offset = "0x4EF8CA0", VA = "0x4EF8CA0")]
		set
		{
		}
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4EF8E00", Offset = "0x4EF8E00", VA = "0x4EF8E00")]
	public void SetValueWithoutNotify(int input)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4EF8CB0", Offset = "0x4EF8CB0", VA = "0x4EF8CB0")]
	private void Set(int value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4EF8E10", Offset = "0x4EF8E10", VA = "0x4EF8E10")]
	protected Dropdown()
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4EF9080", Offset = "0x4EF9080", VA = "0x4EF9080", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4EF9180", Offset = "0x4EF9180", VA = "0x4EF9180", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4EF9230", Offset = "0x4EF9230", VA = "0x4EF9230", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4EF7D90", Offset = "0x4EF7D90", VA = "0x4EF7D90")]
	public void RefreshShownValue()
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4EF9450", Offset = "0x4EF9450", VA = "0x4EF9450")]
	public void AddOptions(List<OptionData> options)
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4EF94C0", Offset = "0x4EF94C0", VA = "0x4EF94C0")]
	public void AddOptions(List<string> options)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4EF9660", Offset = "0x4EF9660", VA = "0x4EF9660")]
	public void AddOptions(List<Sprite> options)
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4EF9800", Offset = "0x4EF9800", VA = "0x4EF9800")]
	public void ClearOptions()
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4EF9870", Offset = "0x4EF9870", VA = "0x4EF9870")]
	private void SetupTemplate(Canvas rootCanvas)
	{
	}

	[Token(Token = "0x6000090")]
	private static T GetOrAddComponent<T>(GameObject go) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4EF9FF0", Offset = "0x4EF9FF0", VA = "0x4EF9FF0", Slot = "42")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4EFB680", Offset = "0x4EFB680", VA = "0x4EFB680", Slot = "43")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4EFB690", Offset = "0x4EFB690", VA = "0x4EFB690", Slot = "44")]
	public virtual void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4EFA000", Offset = "0x4EFA000", VA = "0x4EFA000")]
	public void Show()
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4EFBCD0", Offset = "0x4EFBCD0", VA = "0x4EFBCD0", Slot = "45")]
	protected virtual GameObject CreateBlocker(Canvas rootCanvas)
	{
		return null;
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4EFC1A0", Offset = "0x4EFC1A0", VA = "0x4EFC1A0", Slot = "46")]
	protected virtual void DestroyBlocker(GameObject blocker)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4EFC210", Offset = "0x4EFC210", VA = "0x4EFC210", Slot = "47")]
	protected virtual GameObject CreateDropdownList(GameObject template)
	{
		return null;
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4EFC270", Offset = "0x4EFC270", VA = "0x4EFC270", Slot = "48")]
	protected virtual void DestroyDropdownList(GameObject dropdownList)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4EFC2E0", Offset = "0x4EFC2E0", VA = "0x4EFC2E0", Slot = "49")]
	protected virtual DropdownItem CreateItem(DropdownItem itemTemplate)
	{
		return null;
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4EFC340", Offset = "0x4EFC340", VA = "0x4EFC340", Slot = "50")]
	protected virtual void DestroyItem(DropdownItem item)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4EFB890", Offset = "0x4EFB890", VA = "0x4EFB890")]
	private DropdownItem AddItem(OptionData data, bool selected, DropdownItem itemTemplate, List<DropdownItem> items)
	{
		return null;
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4EFC350", Offset = "0x4EFC350", VA = "0x4EFC350")]
	private void AlphaFadeList(float duration, float alpha)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4EFBB90", Offset = "0x4EFBB90", VA = "0x4EFBB90")]
	private void AlphaFadeList(float duration, float start, float end)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x4EFC3D0", Offset = "0x4EFC3D0", VA = "0x4EFC3D0")]
	private void SetAlpha(float alpha)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4EFB6A0", Offset = "0x4EFB6A0", VA = "0x4EFB6A0")]
	public void Hide()
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x4EFC480", Offset = "0x4EFC480", VA = "0x4EFC480")]
	[IteratorStateMachine(typeof(_003CDelayedDestroyDropdownList_003Ed__75))]
	private IEnumerator DelayedDestroyDropdownList(float delay)
	{
		return null;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4EF92D0", Offset = "0x4EF92D0", VA = "0x4EF92D0")]
	private void ImmediateDestroyDropdownList()
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4EFC520", Offset = "0x4EFC520", VA = "0x4EFC520")]
	private void OnSelectItem(Toggle toggle)
	{
	}
}
