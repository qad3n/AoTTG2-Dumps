using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x2000020")]
[AddComponentMenu("UI/Dropdown - TextMeshPro", 35)]
[RequireComponent(typeof(RectTransform))]
public class TMP_Dropdown : Selectable, IPointerClickHandler, IEventSystemHandler, ISubmitHandler, ICancelHandler
{
	[Token(Token = "0x2000021")]
	protected internal class DropdownItem : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, ICancelHandler
	{
		[Token(Token = "0x40000A5")]
		[FieldOffset(Offset = "0x20")]
		[SerializeField]
		private TMP_Text m_Text;

		[Token(Token = "0x40000A6")]
		[FieldOffset(Offset = "0x28")]
		[SerializeField]
		private Image m_Image;

		[Token(Token = "0x40000A7")]
		[FieldOffset(Offset = "0x30")]
		[SerializeField]
		private RectTransform m_RectTransform;

		[Token(Token = "0x40000A8")]
		[FieldOffset(Offset = "0x38")]
		[SerializeField]
		private Toggle m_Toggle;

		[Token(Token = "0x17000023")]
		public TMP_Text text
		{
			[Token(Token = "0x60000C5")]
			[Address(RVA = "0x48FE980", Offset = "0x48FE980", VA = "0x48FE980")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000C6")]
			[Address(RVA = "0x48FE990", Offset = "0x48FE990", VA = "0x48FE990")]
			set
			{
			}
		}

		[Token(Token = "0x17000024")]
		public Image image
		{
			[Token(Token = "0x60000C7")]
			[Address(RVA = "0x48FE9A0", Offset = "0x48FE9A0", VA = "0x48FE9A0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000C8")]
			[Address(RVA = "0x48FE9B0", Offset = "0x48FE9B0", VA = "0x48FE9B0")]
			set
			{
			}
		}

		[Token(Token = "0x17000025")]
		public RectTransform rectTransform
		{
			[Token(Token = "0x60000C9")]
			[Address(RVA = "0x48FE9C0", Offset = "0x48FE9C0", VA = "0x48FE9C0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000CA")]
			[Address(RVA = "0x48FE9D0", Offset = "0x48FE9D0", VA = "0x48FE9D0")]
			set
			{
			}
		}

		[Token(Token = "0x17000026")]
		public Toggle toggle
		{
			[Token(Token = "0x60000CB")]
			[Address(RVA = "0x48FE9E0", Offset = "0x48FE9E0", VA = "0x48FE9E0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000CC")]
			[Address(RVA = "0x48FE9F0", Offset = "0x48FE9F0", VA = "0x48FE9F0")]
			set
			{
			}
		}

		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x48FEA00", Offset = "0x48FEA00", VA = "0x48FEA00", Slot = "6")]
		public virtual void OnPointerEnter(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x48FEA70", Offset = "0x48FEA70", VA = "0x48FEA70", Slot = "7")]
		public virtual void OnCancel(BaseEventData eventData)
		{
		}

		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x48FEAF0", Offset = "0x48FEAF0", VA = "0x48FEAF0")]
		public DropdownItem()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000022")]
	public class OptionData
	{
		[Token(Token = "0x40000A9")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private string m_Text;

		[Token(Token = "0x40000AA")]
		[FieldOffset(Offset = "0x18")]
		[SerializeField]
		private Sprite m_Image;

		[Token(Token = "0x17000027")]
		public string text
		{
			[Token(Token = "0x60000D0")]
			[Address(RVA = "0x48FEB00", Offset = "0x48FEB00", VA = "0x48FEB00")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000D1")]
			[Address(RVA = "0x48FEB10", Offset = "0x48FEB10", VA = "0x48FEB10")]
			set
			{
			}
		}

		[Token(Token = "0x17000028")]
		public Sprite image
		{
			[Token(Token = "0x60000D2")]
			[Address(RVA = "0x48FEB20", Offset = "0x48FEB20", VA = "0x48FEB20")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000D3")]
			[Address(RVA = "0x48FEB30", Offset = "0x48FEB30", VA = "0x48FEB30")]
			set
			{
			}
		}

		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x48FA990", Offset = "0x48FA990", VA = "0x48FA990")]
		public OptionData()
		{
		}

		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x48FB880", Offset = "0x48FB880", VA = "0x48FB880")]
		public OptionData(string text)
		{
		}

		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x48FBA10", Offset = "0x48FBA10", VA = "0x48FBA10")]
		public OptionData(Sprite image)
		{
		}

		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x48FEB40", Offset = "0x48FEB40", VA = "0x48FEB40")]
		public OptionData(string text, Sprite image)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000023")]
	public class OptionDataList
	{
		[Token(Token = "0x40000AB")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private List<OptionData> m_Options;

		[Token(Token = "0x17000029")]
		public List<OptionData> options
		{
			[Token(Token = "0x60000D8")]
			[Address(RVA = "0x48FEB80", Offset = "0x48FEB80", VA = "0x48FEB80")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000D9")]
			[Address(RVA = "0x48FEB90", Offset = "0x48FEB90", VA = "0x48FEB90")]
			set
			{
			}
		}

		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x48FB1E0", Offset = "0x48FB1E0", VA = "0x48FB1E0")]
		public OptionDataList()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000024")]
	public class DropdownEvent : UnityEvent<int>
	{
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x48FB260", Offset = "0x48FB260", VA = "0x48FB260")]
		public DropdownEvent()
		{
		}
	}

	[Token(Token = "0x2000026")]
	[CompilerGenerated]
	private sealed class _003CDelayedDestroyDropdownList_003Ed__81 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000AE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000AF")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40000B0")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x40000B1")]
		[FieldOffset(Offset = "0x28")]
		public TMP_Dropdown _003C_003E4__this;

		[Token(Token = "0x1700002A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60000E1")]
			[Address(RVA = "0x48FEC90", Offset = "0x48FEC90", VA = "0x48FEC90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700002B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000E3")]
			[Address(RVA = "0x48FECE0", Offset = "0x48FECE0", VA = "0x48FECE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x48FE7C0", Offset = "0x48FE7C0", VA = "0x48FE7C0")]
		[DebuggerHidden]
		public _003CDelayedDestroyDropdownList_003Ed__81(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60000DF")]
		[Address(RVA = "0x48FEBD0", Offset = "0x48FEBD0", VA = "0x48FEBD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60000E0")]
		[Address(RVA = "0x48FEBE0", Offset = "0x48FEBE0", VA = "0x48FEBE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x48FECA0", Offset = "0x48FECA0", VA = "0x48FECA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x100")]
	[SerializeField]
	private RectTransform m_Template;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private TMP_Text m_CaptionText;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	private Image m_CaptionImage;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x118")]
	[SerializeField]
	private Graphic m_Placeholder;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x120")]
	[Space]
	[SerializeField]
	private TMP_Text m_ItemText;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x128")]
	[SerializeField]
	private Image m_ItemImage;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x130")]
	[Space]
	[SerializeField]
	private int m_Value;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x138")]
	[Space]
	[SerializeField]
	private OptionDataList m_Options;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x140")]
	[Space]
	[SerializeField]
	private DropdownEvent m_OnValueChanged;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x148")]
	[SerializeField]
	private float m_AlphaFadeSpeed;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x150")]
	private GameObject m_Dropdown;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x158")]
	private GameObject m_Blocker;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x160")]
	private List<DropdownItem> m_Items;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x168")]
	private TweenRunner<FloatTween> m_AlphaTweenRunner;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x170")]
	private bool validTemplate;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x178")]
	private Coroutine m_Coroutine;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x0")]
	private static OptionData s_NoOptionData;

	[Token(Token = "0x17000018")]
	public RectTransform template
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x48FACD0", Offset = "0x48FACD0", VA = "0x48FACD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x48FA910", Offset = "0x48FA910", VA = "0x48FA910")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public TMP_Text captionText
	{
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x48FACE0", Offset = "0x48FACE0", VA = "0x48FACE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x48FA930", Offset = "0x48FA930", VA = "0x48FA930")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public Image captionImage
	{
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x48FACF0", Offset = "0x48FACF0", VA = "0x48FACF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x48FAD00", Offset = "0x48FAD00", VA = "0x48FAD00")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public Graphic placeholder
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x48FAD20", Offset = "0x48FAD20", VA = "0x48FAD20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x48FAD30", Offset = "0x48FAD30", VA = "0x48FAD30")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public TMP_Text itemText
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x48FAD50", Offset = "0x48FAD50", VA = "0x48FAD50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x48FA950", Offset = "0x48FA950", VA = "0x48FA950")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public Image itemImage
	{
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x48FAD60", Offset = "0x48FAD60", VA = "0x48FAD60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x48FAD70", Offset = "0x48FAD70", VA = "0x48FAD70")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public List<OptionData> options
	{
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x48FA970", Offset = "0x48FA970", VA = "0x48FA970")]
		get
		{
			return null;
		}
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x48FAD90", Offset = "0x48FAD90", VA = "0x48FAD90")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public DropdownEvent onValueChanged
	{
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x48FADC0", Offset = "0x48FADC0", VA = "0x48FADC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x48FADD0", Offset = "0x48FADD0", VA = "0x48FADD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public float alphaFadeSpeed
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x48FADF0", Offset = "0x48FADF0", VA = "0x48FADF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x48FAE00", Offset = "0x48FAE00", VA = "0x48FAE00")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public int value
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x48FAE10", Offset = "0x48FAE10", VA = "0x48FAE10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x48FAE20", Offset = "0x48FAE20", VA = "0x48FAE20")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public bool IsExpanded
	{
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x48FAFE0", Offset = "0x48FAFE0", VA = "0x48FAFE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x48FAFD0", Offset = "0x48FAFD0", VA = "0x48FAFD0")]
	public void SetValueWithoutNotify(int input)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x48FAE30", Offset = "0x48FAE30", VA = "0x48FAE30")]
	private void SetValue(int value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x48FB030", Offset = "0x48FB030", VA = "0x48FB030")]
	protected TMP_Dropdown()
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x48FB2A0", Offset = "0x48FB2A0", VA = "0x48FB2A0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x48FB3A0", Offset = "0x48FB3A0", VA = "0x48FB3A0", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x48FB450", Offset = "0x48FB450", VA = "0x48FB450", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x48FA9A0", Offset = "0x48FA9A0", VA = "0x48FA9A0")]
	public void RefreshShownValue()
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x48FB6B0", Offset = "0x48FB6B0", VA = "0x48FB6B0")]
	public void AddOptions(List<OptionData> options)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x48FB720", Offset = "0x48FB720", VA = "0x48FB720")]
	public void AddOptions(List<string> options)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x48FB8B0", Offset = "0x48FB8B0", VA = "0x48FB8B0")]
	public void AddOptions(List<Sprite> options)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x48FBA40", Offset = "0x48FBA40", VA = "0x48FBA40")]
	public void ClearOptions()
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x48FBAF0", Offset = "0x48FBAF0", VA = "0x48FBAF0")]
	private void SetupTemplate()
	{
	}

	[Token(Token = "0x60000B1")]
	private static T GetOrAddComponent<T>(GameObject go) where T : Component
	{
		return null;
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x48FC1F0", Offset = "0x48FC1F0", VA = "0x48FC1F0", Slot = "42")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x48FD900", Offset = "0x48FD900", VA = "0x48FD900", Slot = "43")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x48FD910", Offset = "0x48FD910", VA = "0x48FD910", Slot = "44")]
	public virtual void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x48FC200", Offset = "0x48FC200", VA = "0x48FC200")]
	public void Show()
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x48FDF90", Offset = "0x48FDF90", VA = "0x48FDF90", Slot = "45")]
	protected virtual GameObject CreateBlocker(Canvas rootCanvas)
	{
		return null;
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x48FE460", Offset = "0x48FE460", VA = "0x48FE460", Slot = "46")]
	protected virtual void DestroyBlocker(GameObject blocker)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x48FE4D0", Offset = "0x48FE4D0", VA = "0x48FE4D0", Slot = "47")]
	protected virtual GameObject CreateDropdownList(GameObject template)
	{
		return null;
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x48FE530", Offset = "0x48FE530", VA = "0x48FE530", Slot = "48")]
	protected virtual void DestroyDropdownList(GameObject dropdownList)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x48FE5A0", Offset = "0x48FE5A0", VA = "0x48FE5A0", Slot = "49")]
	protected virtual DropdownItem CreateItem(DropdownItem itemTemplate)
	{
		return null;
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x48FE600", Offset = "0x48FE600", VA = "0x48FE600", Slot = "50")]
	protected virtual void DestroyItem(DropdownItem item)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x48FDB50", Offset = "0x48FDB50", VA = "0x48FDB50")]
	private DropdownItem AddItem(OptionData data, bool selected, DropdownItem itemTemplate, List<DropdownItem> items)
	{
		return null;
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x48FE610", Offset = "0x48FE610", VA = "0x48FE610")]
	private void AlphaFadeList(float duration, float alpha)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x48FDE50", Offset = "0x48FDE50", VA = "0x48FDE50")]
	private void AlphaFadeList(float duration, float start, float end)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x48FE690", Offset = "0x48FE690", VA = "0x48FE690")]
	private void SetAlpha(float alpha)
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x48FD920", Offset = "0x48FD920", VA = "0x48FD920")]
	public void Hide()
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x48FE740", Offset = "0x48FE740", VA = "0x48FE740")]
	[IteratorStateMachine(typeof(_003CDelayedDestroyDropdownList_003Ed__81))]
	private IEnumerator DelayedDestroyDropdownList(float delay)
	{
		return null;
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x48FB4F0", Offset = "0x48FB4F0", VA = "0x48FB4F0")]
	private void ImmediateDestroyDropdownList()
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x48FE7E0", Offset = "0x48FE7E0", VA = "0x48FE7E0")]
	private void OnSelectItem(Toggle toggle)
	{
	}
}
