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
			[Address(RVA = "0x6A69730", Offset = "0x6A68730", VA = "0x6A69730")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000A3")]
			[Address(RVA = "0x6A69740", Offset = "0x6A68740", VA = "0x6A69740")]
			set
			{
			}
		}

		[Token(Token = "0x17000020")]
		public Image image
		{
			[Token(Token = "0x60000A4")]
			[Address(RVA = "0x6A69750", Offset = "0x6A68750", VA = "0x6A69750")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000A5")]
			[Address(RVA = "0x6A69760", Offset = "0x6A68760", VA = "0x6A69760")]
			set
			{
			}
		}

		[Token(Token = "0x17000021")]
		public RectTransform rectTransform
		{
			[Token(Token = "0x60000A6")]
			[Address(RVA = "0x6A69770", Offset = "0x6A68770", VA = "0x6A69770")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000A7")]
			[Address(RVA = "0x6A69780", Offset = "0x6A68780", VA = "0x6A69780")]
			set
			{
			}
		}

		[Token(Token = "0x17000022")]
		public Toggle toggle
		{
			[Token(Token = "0x60000A8")]
			[Address(RVA = "0x6A69790", Offset = "0x6A68790", VA = "0x6A69790")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000A9")]
			[Address(RVA = "0x6A697A0", Offset = "0x6A687A0", VA = "0x6A697A0")]
			set
			{
			}
		}

		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x6A697B0", Offset = "0x6A687B0", VA = "0x6A697B0", Slot = "6")]
		public virtual void OnPointerEnter(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x6A69820", Offset = "0x6A68820", VA = "0x6A69820", Slot = "7")]
		public virtual void OnCancel(BaseEventData eventData)
		{
		}

		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x6A698A0", Offset = "0x6A688A0", VA = "0x6A698A0")]
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
			[Address(RVA = "0x6A698B0", Offset = "0x6A688B0", VA = "0x6A698B0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000AE")]
			[Address(RVA = "0x6A698C0", Offset = "0x6A688C0", VA = "0x6A698C0")]
			set
			{
			}
		}

		[Token(Token = "0x17000024")]
		public Sprite image
		{
			[Token(Token = "0x60000AF")]
			[Address(RVA = "0x6A698D0", Offset = "0x6A688D0", VA = "0x6A698D0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000B0")]
			[Address(RVA = "0x6A698E0", Offset = "0x6A688E0", VA = "0x6A698E0")]
			set
			{
			}
		}

		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x6A651E0", Offset = "0x6A641E0", VA = "0x6A651E0")]
		public OptionData()
		{
		}

		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x6A66A90", Offset = "0x6A65A90", VA = "0x6A66A90")]
		public OptionData(string text)
		{
		}

		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x6A66C20", Offset = "0x6A65C20", VA = "0x6A66C20")]
		public OptionData(Sprite image)
		{
		}

		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x6A698F0", Offset = "0x6A688F0", VA = "0x6A698F0")]
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
			[Address(RVA = "0x6A69930", Offset = "0x6A68930", VA = "0x6A69930")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000B6")]
			[Address(RVA = "0x6A69940", Offset = "0x6A68940", VA = "0x6A69940")]
			set
			{
			}
		}

		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x6A66410", Offset = "0x6A65410", VA = "0x6A66410")]
		public OptionDataList()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000017")]
	public class DropdownEvent : UnityEvent<int>
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x6A66490", Offset = "0x6A65490", VA = "0x6A66490")]
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
			[Address(RVA = "0x6A69A40", Offset = "0x6A68A40", VA = "0x6A69A40", Slot = "4")]
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
			[Address(RVA = "0x6A69A90", Offset = "0x6A68A90", VA = "0x6A69A90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x6A69570", Offset = "0x6A68570", VA = "0x6A69570")]
		[DebuggerHidden]
		public _003CDelayedDestroyDropdownList_003Ed__75(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x6A69980", Offset = "0x6A68980", VA = "0x6A69980", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x6A69990", Offset = "0x6A68990", VA = "0x6A69990", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x6A69A50", Offset = "0x6A68A50", VA = "0x6A69A50", Slot = "8")]
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
		[Address(RVA = "0x6A65FD0", Offset = "0x6A64FD0", VA = "0x6A65FD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x6A65160", Offset = "0x6A64160", VA = "0x6A65160")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public Text captionText
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x6A65FE0", Offset = "0x6A64FE0", VA = "0x6A65FE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x6A65180", Offset = "0x6A64180", VA = "0x6A65180")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Image captionImage
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x6A65FF0", Offset = "0x6A64FF0", VA = "0x6A65FF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x6A66000", Offset = "0x6A65000", VA = "0x6A66000")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public Text itemText
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x6A66020", Offset = "0x6A65020", VA = "0x6A66020")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x6A651A0", Offset = "0x6A641A0", VA = "0x6A651A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public Image itemImage
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x6A66030", Offset = "0x6A65030", VA = "0x6A66030")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x6A66040", Offset = "0x6A65040", VA = "0x6A66040")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public List<OptionData> options
	{
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x6A651C0", Offset = "0x6A641C0", VA = "0x6A651C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x6A66060", Offset = "0x6A65060", VA = "0x6A66060")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public DropdownEvent onValueChanged
	{
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x6A66090", Offset = "0x6A65090", VA = "0x6A66090")]
		get
		{
			return null;
		}
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x6A660A0", Offset = "0x6A650A0", VA = "0x6A660A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public float alphaFadeSpeed
	{
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x6A660C0", Offset = "0x6A650C0", VA = "0x6A660C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x6A660D0", Offset = "0x6A650D0", VA = "0x6A660D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public int value
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x6A660E0", Offset = "0x6A650E0", VA = "0x6A660E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x6A660F0", Offset = "0x6A650F0", VA = "0x6A660F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x6A66250", Offset = "0x6A65250", VA = "0x6A66250")]
	public void SetValueWithoutNotify(int input)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x6A66100", Offset = "0x6A65100", VA = "0x6A66100")]
	private void Set(int value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x6A66260", Offset = "0x6A65260", VA = "0x6A66260")]
	protected Dropdown()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x6A664D0", Offset = "0x6A654D0", VA = "0x6A664D0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x6A665D0", Offset = "0x6A655D0", VA = "0x6A665D0", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x6A66680", Offset = "0x6A65680", VA = "0x6A66680", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x6A651F0", Offset = "0x6A641F0", VA = "0x6A651F0")]
	public void RefreshShownValue()
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x6A668C0", Offset = "0x6A658C0", VA = "0x6A668C0")]
	public void AddOptions(List<OptionData> options)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x6A66930", Offset = "0x6A65930", VA = "0x6A66930")]
	public void AddOptions(List<string> options)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x6A66AC0", Offset = "0x6A65AC0", VA = "0x6A66AC0")]
	public void AddOptions(List<Sprite> options)
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x6A66C50", Offset = "0x6A65C50", VA = "0x6A66C50")]
	public void ClearOptions()
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x6A66CC0", Offset = "0x6A65CC0", VA = "0x6A66CC0")]
	private void SetupTemplate(Canvas rootCanvas)
	{
	}

	[Token(Token = "0x600008E")]
	private static T GetOrAddComponent<T>(GameObject go) where T : Component
	{
		return null;
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x6A67410", Offset = "0x6A66410", VA = "0x6A67410", Slot = "42")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x6A686D0", Offset = "0x6A676D0", VA = "0x6A686D0", Slot = "43")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x6A686E0", Offset = "0x6A676E0", VA = "0x6A686E0", Slot = "44")]
	public virtual void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x6A67420", Offset = "0x6A66420", VA = "0x6A67420")]
	public void Show()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x6A68CF0", Offset = "0x6A67CF0", VA = "0x6A68CF0", Slot = "45")]
	protected virtual GameObject CreateBlocker(Canvas rootCanvas)
	{
		return null;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x6A69210", Offset = "0x6A68210", VA = "0x6A69210", Slot = "46")]
	protected virtual void DestroyBlocker(GameObject blocker)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x6A69280", Offset = "0x6A68280", VA = "0x6A69280", Slot = "47")]
	protected virtual GameObject CreateDropdownList(GameObject template)
	{
		return null;
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x6A692E0", Offset = "0x6A682E0", VA = "0x6A692E0", Slot = "48")]
	protected virtual void DestroyDropdownList(GameObject dropdownList)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x6A69350", Offset = "0x6A68350", VA = "0x6A69350", Slot = "49")]
	protected virtual DropdownItem CreateItem(DropdownItem itemTemplate)
	{
		return null;
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x6A693B0", Offset = "0x6A683B0", VA = "0x6A693B0", Slot = "50")]
	protected virtual void DestroyItem(DropdownItem item)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x6A688E0", Offset = "0x6A678E0", VA = "0x6A688E0")]
	private DropdownItem AddItem(OptionData data, bool selected, DropdownItem itemTemplate, List<DropdownItem> items)
	{
		return null;
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x6A693C0", Offset = "0x6A683C0", VA = "0x6A693C0")]
	private void AlphaFadeList(float duration, float alpha)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x6A68BD0", Offset = "0x6A67BD0", VA = "0x6A68BD0")]
	private void AlphaFadeList(float duration, float start, float end)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x6A69440", Offset = "0x6A68440", VA = "0x6A69440")]
	private void SetAlpha(float alpha)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x6A686F0", Offset = "0x6A676F0", VA = "0x6A686F0")]
	public void Hide()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x6A694F0", Offset = "0x6A684F0", VA = "0x6A694F0")]
	[IteratorStateMachine(typeof(_003CDelayedDestroyDropdownList_003Ed__75))]
	private IEnumerator DelayedDestroyDropdownList(float delay)
	{
		return null;
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x6A66720", Offset = "0x6A65720", VA = "0x6A66720")]
	private void ImmediateDestroyDropdownList()
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x6A69590", Offset = "0x6A68590", VA = "0x6A69590")]
	private void OnSelectItem(Toggle toggle)
	{
	}
}
