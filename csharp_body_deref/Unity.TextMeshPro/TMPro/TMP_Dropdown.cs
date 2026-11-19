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

[Token(Token = "0x2000027")]
[AddComponentMenu("UI (Canvas)/Dropdown - TextMeshPro", 35)]
[RequireComponent(typeof(RectTransform))]
[TMPro.TMPHelpURL("index")]
public class TMP_Dropdown : Selectable, IPointerClickHandler, IEventSystemHandler, ISubmitHandler, ICancelHandler
{
	[Token(Token = "0x2000028")]
	protected internal class DropdownItem : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, ICancelHandler
	{
		[Token(Token = "0x40000BA")]
		[FieldOffset(Offset = "0x20")]
		[SerializeField]
		private TMP_Text m_Text;

		[Token(Token = "0x40000BB")]
		[FieldOffset(Offset = "0x28")]
		[SerializeField]
		private Image m_Image;

		[Token(Token = "0x40000BC")]
		[FieldOffset(Offset = "0x30")]
		[SerializeField]
		private RectTransform m_RectTransform;

		[Token(Token = "0x40000BD")]
		[FieldOffset(Offset = "0x38")]
		[SerializeField]
		private Toggle m_Toggle;

		[Token(Token = "0x17000039")]
		public TMP_Text text
		{
			[Token(Token = "0x60000F6")]
			[Address(RVA = "0x66E5180", Offset = "0x66E4180", VA = "0x66E5180")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000F7")]
			[Address(RVA = "0x66E5190", Offset = "0x66E4190", VA = "0x66E5190")]
			set
			{
			}
		}

		[Token(Token = "0x1700003A")]
		public Image image
		{
			[Token(Token = "0x60000F8")]
			[Address(RVA = "0x66E51A0", Offset = "0x66E41A0", VA = "0x66E51A0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000F9")]
			[Address(RVA = "0x66E51B0", Offset = "0x66E41B0", VA = "0x66E51B0")]
			set
			{
			}
		}

		[Token(Token = "0x1700003B")]
		public RectTransform rectTransform
		{
			[Token(Token = "0x60000FA")]
			[Address(RVA = "0x66E51C0", Offset = "0x66E41C0", VA = "0x66E51C0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000FB")]
			[Address(RVA = "0x66E51D0", Offset = "0x66E41D0", VA = "0x66E51D0")]
			set
			{
			}
		}

		[Token(Token = "0x1700003C")]
		public Toggle toggle
		{
			[Token(Token = "0x60000FC")]
			[Address(RVA = "0x66E51E0", Offset = "0x66E41E0", VA = "0x66E51E0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000FD")]
			[Address(RVA = "0x66E51F0", Offset = "0x66E41F0", VA = "0x66E51F0")]
			set
			{
			}
		}

		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x66E5200", Offset = "0x66E4200", VA = "0x66E5200", Slot = "6")]
		public virtual void OnPointerEnter(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x66E5270", Offset = "0x66E4270", VA = "0x66E5270", Slot = "7")]
		public virtual void OnCancel(BaseEventData eventData)
		{
		}

		[Token(Token = "0x6000100")]
		[Address(RVA = "0x66E52F0", Offset = "0x66E42F0", VA = "0x66E52F0")]
		public DropdownItem()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000029")]
	public class OptionData
	{
		[Token(Token = "0x40000BE")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private string m_Text;

		[Token(Token = "0x40000BF")]
		[FieldOffset(Offset = "0x18")]
		[SerializeField]
		private Sprite m_Image;

		[Token(Token = "0x40000C0")]
		[FieldOffset(Offset = "0x20")]
		[SerializeField]
		private Color m_Color;

		[Token(Token = "0x1700003D")]
		public string text
		{
			[Token(Token = "0x6000101")]
			[Address(RVA = "0x66E5300", Offset = "0x66E4300", VA = "0x66E5300")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000102")]
			[Address(RVA = "0x66E5310", Offset = "0x66E4310", VA = "0x66E5310")]
			set
			{
			}
		}

		[Token(Token = "0x1700003E")]
		public Sprite image
		{
			[Token(Token = "0x6000103")]
			[Address(RVA = "0x66E5320", Offset = "0x66E4320", VA = "0x66E5320")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000104")]
			[Address(RVA = "0x66E5330", Offset = "0x66E4330", VA = "0x66E5330")]
			set
			{
			}
		}

		[Token(Token = "0x1700003F")]
		public Color color
		{
			[Token(Token = "0x6000105")]
			[Address(RVA = "0x66E5340", Offset = "0x66E4340", VA = "0x66E5340")]
			get
			{
				return default(Color);
			}
			[Token(Token = "0x6000106")]
			[Address(RVA = "0x66E5350", Offset = "0x66E4350", VA = "0x66E5350")]
			set
			{
			}
		}

		[Token(Token = "0x6000107")]
		[Address(RVA = "0x66DFAC0", Offset = "0x66DEAC0", VA = "0x66DFAC0")]
		public OptionData()
		{
		}

		[Token(Token = "0x6000108")]
		[Address(RVA = "0x66E1680", Offset = "0x66E0680", VA = "0x66E1680")]
		public OptionData(string text)
		{
		}

		[Token(Token = "0x6000109")]
		[Address(RVA = "0x66E1830", Offset = "0x66E0830", VA = "0x66E1830")]
		public OptionData(Sprite image)
		{
		}

		[Token(Token = "0x600010A")]
		[Address(RVA = "0x66E5360", Offset = "0x66E4360", VA = "0x66E5360")]
		public OptionData(string text, Sprite image, Color color)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200002A")]
	public class OptionDataList
	{
		[Token(Token = "0x40000C1")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private List<OptionData> m_Options;

		[Token(Token = "0x17000040")]
		public List<OptionData> options
		{
			[Token(Token = "0x600010B")]
			[Address(RVA = "0x66E53D0", Offset = "0x66E43D0", VA = "0x66E53D0")]
			get
			{
				return null;
			}
			[Token(Token = "0x600010C")]
			[Address(RVA = "0x66E53E0", Offset = "0x66E43E0", VA = "0x66E53E0")]
			set
			{
			}
		}

		[Token(Token = "0x600010D")]
		[Address(RVA = "0x66E0930", Offset = "0x66DF930", VA = "0x66E0930")]
		public OptionDataList()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200002B")]
	public class DropdownEvent : UnityEvent<int>
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x66E09B0", Offset = "0x66DF9B0", VA = "0x66E09B0")]
		public DropdownEvent()
		{
		}
	}

	[Token(Token = "0x200002E")]
	[CompilerGenerated]
	private sealed class _003CDelayedDestroyDropdownList_003Ed__90 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000C7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000C8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40000C9")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x40000CA")]
		[FieldOffset(Offset = "0x28")]
		public TMP_Dropdown _003C_003E4__this;

		[Token(Token = "0x17000041")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000117")]
			[Address(RVA = "0x66E5520", Offset = "0x66E4520", VA = "0x66E5520", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000042")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000119")]
			[Address(RVA = "0x66E5570", Offset = "0x66E4570", VA = "0x66E5570", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000114")]
		[Address(RVA = "0x66E4C10", Offset = "0x66E3C10", VA = "0x66E4C10")]
		[DebuggerHidden]
		public _003CDelayedDestroyDropdownList_003Ed__90(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000115")]
		[Address(RVA = "0x66E5460", Offset = "0x66E4460", VA = "0x66E5460", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000116")]
		[Address(RVA = "0x66E5470", Offset = "0x66E4470", VA = "0x66E5470", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000118")]
		[Address(RVA = "0x66E5530", Offset = "0x66E4530", VA = "0x66E5530", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly OptionData k_NothingOption;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x8")]
	private static readonly OptionData k_EverythingOption;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x10")]
	private static readonly OptionData k_MixedOption;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x100")]
	[SerializeField]
	private RectTransform m_Template;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private TMP_Text m_CaptionText;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	private Image m_CaptionImage;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x118")]
	[SerializeField]
	private Graphic m_Placeholder;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x120")]
	[Space]
	[SerializeField]
	private TMP_Text m_ItemText;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x128")]
	[SerializeField]
	private Image m_ItemImage;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x130")]
	[Space]
	[SerializeField]
	private int m_Value;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x134")]
	[SerializeField]
	private bool m_MultiSelect;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x138")]
	[Space]
	[SerializeField]
	private OptionDataList m_Options;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x140")]
	[Space]
	[SerializeField]
	private DropdownEvent m_OnValueChanged;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x148")]
	[SerializeField]
	private float m_AlphaFadeSpeed;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x150")]
	private GameObject m_Dropdown;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x158")]
	private GameObject m_Blocker;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x160")]
	private List<DropdownItem> m_Items;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x168")]
	private TweenRunner<FloatTween> m_AlphaTweenRunner;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x170")]
	private bool validTemplate;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x178")]
	private Coroutine m_Coroutine;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x18")]
	private static OptionData s_NoOptionData;

	[Token(Token = "0x1700002D")]
	public RectTransform template
	{
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x66E0400", Offset = "0x66DF400", VA = "0x66E0400")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x66DFA40", Offset = "0x66DEA40", VA = "0x66DFA40")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public TMP_Text captionText
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x66E0410", Offset = "0x66DF410", VA = "0x66E0410")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x66DFA60", Offset = "0x66DEA60", VA = "0x66DFA60")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public Image captionImage
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x66E0420", Offset = "0x66DF420", VA = "0x66E0420")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x66E0430", Offset = "0x66DF430", VA = "0x66E0430")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public Graphic placeholder
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x66E0450", Offset = "0x66DF450", VA = "0x66E0450")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x66E0460", Offset = "0x66DF460", VA = "0x66E0460")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public TMP_Text itemText
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x66E0480", Offset = "0x66DF480", VA = "0x66E0480")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x66DFA80", Offset = "0x66DEA80", VA = "0x66DFA80")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public Image itemImage
	{
		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x66E0490", Offset = "0x66DF490", VA = "0x66E0490")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x66E04A0", Offset = "0x66DF4A0", VA = "0x66E04A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public List<OptionData> options
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x66DFAA0", Offset = "0x66DEAA0", VA = "0x66DFAA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x66E04C0", Offset = "0x66DF4C0", VA = "0x66E04C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public DropdownEvent onValueChanged
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x66E04F0", Offset = "0x66DF4F0", VA = "0x66E04F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x66E0500", Offset = "0x66DF500", VA = "0x66E0500")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public float alphaFadeSpeed
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x66E0520", Offset = "0x66DF520", VA = "0x66E0520")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x66E0530", Offset = "0x66DF530", VA = "0x66E0530")]
		set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public int value
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x66E0540", Offset = "0x66DF540", VA = "0x66E0540")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x66E0550", Offset = "0x66DF550", VA = "0x66E0550")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public bool IsExpanded
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x66E0710", Offset = "0x66DF710", VA = "0x66E0710")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000038")]
	public bool MultiSelect
	{
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x66E0760", Offset = "0x66DF760", VA = "0x66E0760")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x66E0770", Offset = "0x66DF770", VA = "0x66E0770")]
		set
		{
		}
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x66E0700", Offset = "0x66DF700", VA = "0x66E0700")]
	public void SetValueWithoutNotify(int input)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x66E0560", Offset = "0x66DF560", VA = "0x66E0560")]
	private void SetValue(int value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x66E0780", Offset = "0x66DF780", VA = "0x66E0780")]
	protected TMP_Dropdown()
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x66E09F0", Offset = "0x66DF9F0", VA = "0x66E09F0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x66E0B20", Offset = "0x66DFB20", VA = "0x66E0B20", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x66E0BD0", Offset = "0x66DFBD0", VA = "0x66E0BD0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x66DFAE0", Offset = "0x66DEAE0", VA = "0x66DFAE0")]
	public void RefreshShownValue()
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x66E14A0", Offset = "0x66E04A0", VA = "0x66E14A0")]
	public void AddOptions(List<OptionData> options)
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x66E1510", Offset = "0x66E0510", VA = "0x66E1510")]
	public void AddOptions(List<string> options)
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x66E16C0", Offset = "0x66E06C0", VA = "0x66E16C0")]
	public void AddOptions(List<Sprite> options)
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x66E1870", Offset = "0x66E0870", VA = "0x66E1870")]
	public void ClearOptions()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x66E1920", Offset = "0x66E0920", VA = "0x66E1920")]
	private void SetupTemplate()
	{
	}

	[Token(Token = "0x60000DF")]
	private static T GetOrAddComponent<T>(GameObject go) where T : Component
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x66E1FF0", Offset = "0x66E0FF0", VA = "0x66E1FF0", Slot = "42")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x66E3C70", Offset = "0x66E2C70", VA = "0x66E3C70", Slot = "43")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x66E3C80", Offset = "0x66E2C80", VA = "0x66E3C80", Slot = "44")]
	public virtual void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x66E2000", Offset = "0x66E1000", VA = "0x66E2000")]
	public void Show()
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x66E1020", Offset = "0x66E0020", VA = "0x66E1020")]
	private static bool IsEverythingValue(int count, int value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x66E4320", Offset = "0x66E3320", VA = "0x66E4320")]
	private static int EverythingValue(int count)
	{
		return default(int);
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x66E4390", Offset = "0x66E3390", VA = "0x66E4390", Slot = "45")]
	protected virtual GameObject CreateBlocker(Canvas rootCanvas)
	{
		return null;
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x66E48B0", Offset = "0x66E38B0", VA = "0x66E48B0", Slot = "46")]
	protected virtual void DestroyBlocker(GameObject blocker)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x66E4920", Offset = "0x66E3920", VA = "0x66E4920", Slot = "47")]
	protected virtual GameObject CreateDropdownList(GameObject template)
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x66E4980", Offset = "0x66E3980", VA = "0x66E4980", Slot = "48")]
	protected virtual void DestroyDropdownList(GameObject dropdownList)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x66E49F0", Offset = "0x66E39F0", VA = "0x66E49F0", Slot = "49")]
	protected virtual DropdownItem CreateItem(DropdownItem itemTemplate)
	{
		return null;
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x66E4A50", Offset = "0x66E3A50", VA = "0x66E4A50", Slot = "50")]
	protected virtual void DestroyItem(DropdownItem item)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x66E3EC0", Offset = "0x66E2EC0", VA = "0x66E3EC0")]
	private DropdownItem AddItem(OptionData data, bool selected, DropdownItem itemTemplate, List<DropdownItem> items)
	{
		return null;
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x66E4A60", Offset = "0x66E3A60", VA = "0x66E4A60")]
	private void AlphaFadeList(float duration, float alpha)
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x66E4200", Offset = "0x66E3200", VA = "0x66E4200")]
	private void AlphaFadeList(float duration, float start, float end)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x66E4AE0", Offset = "0x66E3AE0", VA = "0x66E4AE0")]
	private void SetAlpha(float alpha)
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x66E3C90", Offset = "0x66E2C90", VA = "0x66E3C90")]
	public void Hide()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x66E4B90", Offset = "0x66E3B90", VA = "0x66E4B90")]
	[IteratorStateMachine(typeof(_003CDelayedDestroyDropdownList_003Ed__90))]
	private IEnumerator DelayedDestroyDropdownList(float delay)
	{
		return null;
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x66E0C70", Offset = "0x66DFC70", VA = "0x66E0C70")]
	private void ImmediateDestroyDropdownList()
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x66E4C30", Offset = "0x66E3C30", VA = "0x66E4C30")]
	private void OnSelectItem(Toggle toggle)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x66E0E30", Offset = "0x66DFE30", VA = "0x66E0E30")]
	private static int FirstActiveFlagIndex(int value)
	{
		return default(int);
	}
}
