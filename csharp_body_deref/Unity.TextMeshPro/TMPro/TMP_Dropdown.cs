// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_Dropdown
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
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x2000036")]
[AddComponentMenu("UI/Dropdown - TextMeshPro", 35)]
[RequireComponent(typeof(RectTransform))]
public class TMP_Dropdown : Selectable, IPointerClickHandler, IEventSystemHandler, ISubmitHandler, ICancelHandler
{
	[Token(Token = "0x2000037")]
	protected internal class DropdownItem : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, ICancelHandler
	{
		[Token(Token = "0x4000199")]
		[FieldOffset(Offset = "0x20")]
		[SerializeField]
		private TMP_Text m_Text;

		[Token(Token = "0x400019A")]
		[FieldOffset(Offset = "0x28")]
		[SerializeField]
		private Image m_Image;

		[Token(Token = "0x400019B")]
		[FieldOffset(Offset = "0x30")]
		[SerializeField]
		private RectTransform m_RectTransform;

		[Token(Token = "0x400019C")]
		[FieldOffset(Offset = "0x38")]
		[SerializeField]
		private Toggle m_Toggle;

		[Token(Token = "0x17000044")]
		public TMP_Text text
		{
			[Token(Token = "0x60001B6")]
			[Address(RVA = "0x4C4BF00", Offset = "0x4C4BF00", VA = "0x4C4BF00")]
			get
			{
				return null;
			}
			[Token(Token = "0x60001B7")]
			[Address(RVA = "0x4C4BF10", Offset = "0x4C4BF10", VA = "0x4C4BF10")]
			set
			{
			}
		}

		[Token(Token = "0x17000045")]
		public Image image
		{
			[Token(Token = "0x60001B8")]
			[Address(RVA = "0x4C4BF20", Offset = "0x4C4BF20", VA = "0x4C4BF20")]
			get
			{
				return null;
			}
			[Token(Token = "0x60001B9")]
			[Address(RVA = "0x4C4BF30", Offset = "0x4C4BF30", VA = "0x4C4BF30")]
			set
			{
			}
		}

		[Token(Token = "0x17000046")]
		public RectTransform rectTransform
		{
			[Token(Token = "0x60001BA")]
			[Address(RVA = "0x4C4BF40", Offset = "0x4C4BF40", VA = "0x4C4BF40")]
			get
			{
				return null;
			}
			[Token(Token = "0x60001BB")]
			[Address(RVA = "0x4C4BF50", Offset = "0x4C4BF50", VA = "0x4C4BF50")]
			set
			{
			}
		}

		[Token(Token = "0x17000047")]
		public Toggle toggle
		{
			[Token(Token = "0x60001BC")]
			[Address(RVA = "0x4C4BF60", Offset = "0x4C4BF60", VA = "0x4C4BF60")]
			get
			{
				return null;
			}
			[Token(Token = "0x60001BD")]
			[Address(RVA = "0x4C4BF70", Offset = "0x4C4BF70", VA = "0x4C4BF70")]
			set
			{
			}
		}

		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x4C4BF80", Offset = "0x4C4BF80", VA = "0x4C4BF80", Slot = "6")]
		public virtual void OnPointerEnter(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x4C4BFF0", Offset = "0x4C4BFF0", VA = "0x4C4BFF0", Slot = "7")]
		public virtual void OnCancel(BaseEventData eventData)
		{
		}

		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x4C4C070", Offset = "0x4C4C070", VA = "0x4C4C070")]
		public DropdownItem()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000038")]
	public class OptionData
	{
		[Token(Token = "0x400019D")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private string m_Text;

		[Token(Token = "0x400019E")]
		[FieldOffset(Offset = "0x18")]
		[SerializeField]
		private Sprite m_Image;

		[Token(Token = "0x17000048")]
		public string text
		{
			[Token(Token = "0x60001C1")]
			[Address(RVA = "0x4C4C080", Offset = "0x4C4C080", VA = "0x4C4C080")]
			get
			{
				return null;
			}
			[Token(Token = "0x60001C2")]
			[Address(RVA = "0x4C4C090", Offset = "0x4C4C090", VA = "0x4C4C090")]
			set
			{
			}
		}

		[Token(Token = "0x17000049")]
		public Sprite image
		{
			[Token(Token = "0x60001C3")]
			[Address(RVA = "0x4C4C0A0", Offset = "0x4C4C0A0", VA = "0x4C4C0A0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60001C4")]
			[Address(RVA = "0x4C4C0B0", Offset = "0x4C4C0B0", VA = "0x4C4C0B0")]
			set
			{
			}
		}

		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x4C47F10", Offset = "0x4C47F10", VA = "0x4C47F10")]
		public OptionData()
		{
		}

		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x4C48E00", Offset = "0x4C48E00", VA = "0x4C48E00")]
		public OptionData(string text)
		{
		}

		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x4C48F90", Offset = "0x4C48F90", VA = "0x4C48F90")]
		public OptionData(Sprite image)
		{
		}

		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x4C4C0C0", Offset = "0x4C4C0C0", VA = "0x4C4C0C0")]
		public OptionData(string text, Sprite image)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000039")]
	public class OptionDataList
	{
		[Token(Token = "0x400019F")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private List<OptionData> m_Options;

		[Token(Token = "0x1700004A")]
		public List<OptionData> options
		{
			[Token(Token = "0x60001C9")]
			[Address(RVA = "0x4C4C100", Offset = "0x4C4C100", VA = "0x4C4C100")]
			get
			{
				return null;
			}
			[Token(Token = "0x60001CA")]
			[Address(RVA = "0x4C4C110", Offset = "0x4C4C110", VA = "0x4C4C110")]
			set
			{
			}
		}

		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x4C48760", Offset = "0x4C48760", VA = "0x4C48760")]
		public OptionDataList()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200003A")]
	public class DropdownEvent : UnityEvent<int>
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x4C487E0", Offset = "0x4C487E0", VA = "0x4C487E0")]
		public DropdownEvent()
		{
		}
	}

	[Token(Token = "0x200003C")]
	[CompilerGenerated]
	private sealed class _003CDelayedDestroyDropdownList_003Ed__81 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001A2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001A3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001A4")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x40001A5")]
		[FieldOffset(Offset = "0x28")]
		public TMP_Dropdown _003C_003E4__this;

		[Token(Token = "0x1700004B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60001D2")]
			[Address(RVA = "0x4C4C210", Offset = "0x4C4C210", VA = "0x4C4C210", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700004C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001D4")]
			[Address(RVA = "0x4C4C260", Offset = "0x4C4C260", VA = "0x4C4C260", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x4C4BD40", Offset = "0x4C4BD40", VA = "0x4C4BD40")]
		[DebuggerHidden]
		public _003CDelayedDestroyDropdownList_003Ed__81(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x4C4C150", Offset = "0x4C4C150", VA = "0x4C4C150", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x4C4C160", Offset = "0x4C4C160", VA = "0x4C4C160", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x4C4C220", Offset = "0x4C4C220", VA = "0x4C4C220", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x100")]
	[SerializeField]
	private RectTransform m_Template;

	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private TMP_Text m_CaptionText;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	private Image m_CaptionImage;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x118")]
	[SerializeField]
	private Graphic m_Placeholder;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x120")]
	[Space]
	[SerializeField]
	private TMP_Text m_ItemText;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x128")]
	[SerializeField]
	private Image m_ItemImage;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x130")]
	[Space]
	[SerializeField]
	private int m_Value;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x138")]
	[Space]
	[SerializeField]
	private OptionDataList m_Options;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x140")]
	[Space]
	[SerializeField]
	private DropdownEvent m_OnValueChanged;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x148")]
	[SerializeField]
	private float m_AlphaFadeSpeed;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x150")]
	private GameObject m_Dropdown;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x158")]
	private GameObject m_Blocker;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x160")]
	private List<DropdownItem> m_Items;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x168")]
	private TweenRunner<FloatTween> m_AlphaTweenRunner;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x170")]
	private bool validTemplate;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x178")]
	private Coroutine m_Coroutine;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x0")]
	private static OptionData s_NoOptionData;

	[Token(Token = "0x17000039")]
	public RectTransform template
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x4C48250", Offset = "0x4C48250", VA = "0x4C48250")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x4C47E90", Offset = "0x4C47E90", VA = "0x4C47E90")]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public TMP_Text captionText
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x4C48260", Offset = "0x4C48260", VA = "0x4C48260")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x4C47EB0", Offset = "0x4C47EB0", VA = "0x4C47EB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public Image captionImage
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x4C48270", Offset = "0x4C48270", VA = "0x4C48270")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x4C48280", Offset = "0x4C48280", VA = "0x4C48280")]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public Graphic placeholder
	{
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x4C482A0", Offset = "0x4C482A0", VA = "0x4C482A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x4C482B0", Offset = "0x4C482B0", VA = "0x4C482B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public TMP_Text itemText
	{
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x4C482D0", Offset = "0x4C482D0", VA = "0x4C482D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x4C47ED0", Offset = "0x4C47ED0", VA = "0x4C47ED0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	public Image itemImage
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x4C482E0", Offset = "0x4C482E0", VA = "0x4C482E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x4C482F0", Offset = "0x4C482F0", VA = "0x4C482F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public List<OptionData> options
	{
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x4C47EF0", Offset = "0x4C47EF0", VA = "0x4C47EF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x4C48310", Offset = "0x4C48310", VA = "0x4C48310")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public DropdownEvent onValueChanged
	{
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x4C48340", Offset = "0x4C48340", VA = "0x4C48340")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x4C48350", Offset = "0x4C48350", VA = "0x4C48350")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public float alphaFadeSpeed
	{
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x4C48370", Offset = "0x4C48370", VA = "0x4C48370")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x4C48380", Offset = "0x4C48380", VA = "0x4C48380")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public int value
	{
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x4C48390", Offset = "0x4C48390", VA = "0x4C48390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x4C483A0", Offset = "0x4C483A0", VA = "0x4C483A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool IsExpanded
	{
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x4C48560", Offset = "0x4C48560", VA = "0x4C48560")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x4C48550", Offset = "0x4C48550", VA = "0x4C48550")]
	public void SetValueWithoutNotify(int input)
	{
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x4C483B0", Offset = "0x4C483B0", VA = "0x4C483B0")]
	private void SetValue(int value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x4C485B0", Offset = "0x4C485B0", VA = "0x4C485B0")]
	protected TMP_Dropdown()
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x4C48820", Offset = "0x4C48820", VA = "0x4C48820", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x4C48920", Offset = "0x4C48920", VA = "0x4C48920", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x4C489D0", Offset = "0x4C489D0", VA = "0x4C489D0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x4C47F20", Offset = "0x4C47F20", VA = "0x4C47F20")]
	public void RefreshShownValue()
	{
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x4C48C30", Offset = "0x4C48C30", VA = "0x4C48C30")]
	public void AddOptions(List<OptionData> options)
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x4C48CA0", Offset = "0x4C48CA0", VA = "0x4C48CA0")]
	public void AddOptions(List<string> options)
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x4C48E30", Offset = "0x4C48E30", VA = "0x4C48E30")]
	public void AddOptions(List<Sprite> options)
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x4C48FC0", Offset = "0x4C48FC0", VA = "0x4C48FC0")]
	public void ClearOptions()
	{
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x4C49070", Offset = "0x4C49070", VA = "0x4C49070")]
	private void SetupTemplate()
	{
	}

	[Token(Token = "0x60001A2")]
	private static T GetOrAddComponent<T>(GameObject go) where T : Component
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x4C49770", Offset = "0x4C49770", VA = "0x4C49770", Slot = "42")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x4C4AE80", Offset = "0x4C4AE80", VA = "0x4C4AE80", Slot = "43")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x4C4AE90", Offset = "0x4C4AE90", VA = "0x4C4AE90", Slot = "44")]
	public virtual void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x4C49780", Offset = "0x4C49780", VA = "0x4C49780")]
	public void Show()
	{
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x4C4B510", Offset = "0x4C4B510", VA = "0x4C4B510", Slot = "45")]
	protected virtual GameObject CreateBlocker(Canvas rootCanvas)
	{
		return null;
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x4C4B9E0", Offset = "0x4C4B9E0", VA = "0x4C4B9E0", Slot = "46")]
	protected virtual void DestroyBlocker(GameObject blocker)
	{
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x4C4BA50", Offset = "0x4C4BA50", VA = "0x4C4BA50", Slot = "47")]
	protected virtual GameObject CreateDropdownList(GameObject template)
	{
		return null;
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x4C4BAB0", Offset = "0x4C4BAB0", VA = "0x4C4BAB0", Slot = "48")]
	protected virtual void DestroyDropdownList(GameObject dropdownList)
	{
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x4C4BB20", Offset = "0x4C4BB20", VA = "0x4C4BB20", Slot = "49")]
	protected virtual DropdownItem CreateItem(DropdownItem itemTemplate)
	{
		return null;
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x4C4BB80", Offset = "0x4C4BB80", VA = "0x4C4BB80", Slot = "50")]
	protected virtual void DestroyItem(DropdownItem item)
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x4C4B0D0", Offset = "0x4C4B0D0", VA = "0x4C4B0D0")]
	private DropdownItem AddItem(OptionData data, bool selected, DropdownItem itemTemplate, List<DropdownItem> items)
	{
		return null;
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x4C4BB90", Offset = "0x4C4BB90", VA = "0x4C4BB90")]
	private void AlphaFadeList(float duration, float alpha)
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x4C4B3D0", Offset = "0x4C4B3D0", VA = "0x4C4B3D0")]
	private void AlphaFadeList(float duration, float start, float end)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x4C4BC10", Offset = "0x4C4BC10", VA = "0x4C4BC10")]
	private void SetAlpha(float alpha)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x4C4AEA0", Offset = "0x4C4AEA0", VA = "0x4C4AEA0")]
	public void Hide()
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x4C4BCC0", Offset = "0x4C4BCC0", VA = "0x4C4BCC0")]
	[IteratorStateMachine(typeof(_003CDelayedDestroyDropdownList_003Ed__81))]
	private IEnumerator DelayedDestroyDropdownList(float delay)
	{
		return null;
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x4C48A70", Offset = "0x4C48A70", VA = "0x4C48A70")]
	private void ImmediateDestroyDropdownList()
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x4C4BD60", Offset = "0x4C4BD60", VA = "0x4C4BD60")]
	private void OnSelectItem(Toggle toggle)
	{
	}
}
