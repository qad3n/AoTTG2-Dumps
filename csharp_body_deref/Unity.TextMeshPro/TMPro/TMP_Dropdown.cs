// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_Dropdown
// Update status: CHANGED in this game update
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
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000F7")]
			[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
			set
			{
			}
		}

		[Token(Token = "0x1700003A")]
		public Image image
		{
			[Token(Token = "0x60000F8")]
			[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000F9")]
			[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
			set
			{
			}
		}

		[Token(Token = "0x1700003B")]
		public RectTransform rectTransform
		{
			[Token(Token = "0x60000FA")]
			[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000FB")]
			[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
			set
			{
			}
		}

		[Token(Token = "0x1700003C")]
		public Toggle toggle
		{
			[Token(Token = "0x60000FC")]
			[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60000FD")]
			[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
			set
			{
			}
		}

		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x2CDD550", Offset = "0x2CDBB50", VA = "0x182CDD550", Slot = "6")]
		public virtual void OnPointerEnter(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x2CDD4C0", Offset = "0x2CDBAC0", VA = "0x182CDD4C0", Slot = "7")]
		public virtual void OnCancel(BaseEventData eventData)
		{
		}

		[Token(Token = "0x6000100")]
		[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
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
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000102")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			set
			{
			}
		}

		[Token(Token = "0x1700003E")]
		public Sprite image
		{
			[Token(Token = "0x6000103")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000104")]
			[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
			set
			{
			}
		}

		[Token(Token = "0x1700003F")]
		public Color color
		{
			[Token(Token = "0x6000105")]
			[Address(RVA = "0xC84140", Offset = "0xC82740", VA = "0x180C84140")]
			get
			{
				return default(Color);
			}
			[Token(Token = "0x6000106")]
			[Address(RVA = "0x19377C0", Offset = "0x1935DC0", VA = "0x1819377C0")]
			set
			{
			}
		}

		[Token(Token = "0x6000107")]
		[Address(RVA = "0x2CDF8C0", Offset = "0x2CDDEC0", VA = "0x182CDF8C0")]
		public OptionData()
		{
		}

		[Token(Token = "0x6000108")]
		[Address(RVA = "0x2CDF960", Offset = "0x2CDDF60", VA = "0x182CDF960")]
		public OptionData(string text)
		{
		}

		[Token(Token = "0x6000109")]
		[Address(RVA = "0x2CDF9B0", Offset = "0x2CDDFB0", VA = "0x182CDF9B0")]
		public OptionData(Sprite image)
		{
		}

		[Token(Token = "0x600010A")]
		[Address(RVA = "0x2CDF8F0", Offset = "0x2CDDEF0", VA = "0x182CDF8F0")]
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
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return null;
			}
			[Token(Token = "0x600010C")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			set
			{
			}
		}

		[Token(Token = "0x600010D")]
		[Address(RVA = "0x2CDF840", Offset = "0x2CDDE40", VA = "0x182CDF840")]
		public OptionDataList()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200002B")]
	public class DropdownEvent : UnityEvent<int>
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x2CDD480", Offset = "0x2CDBA80", VA = "0x182CDD480")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000114")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CDelayedDestroyDropdownList_003Ed__90(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000115")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000116")]
		[Address(RVA = "0x2CF4280", Offset = "0x2CF2880", VA = "0x182CF4280", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000118")]
		[Address(RVA = "0x2CF4340", Offset = "0x2CF2940", VA = "0x182CF4340", Slot = "8")]
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
		[Address(RVA = "0x187BC70", Offset = "0x187A270", VA = "0x18187BC70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x2CE6B90", Offset = "0x2CE5190", VA = "0x182CE6B90")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public TMP_Text captionText
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x1BD4C80", Offset = "0x1BD3280", VA = "0x181BD4C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x2CE6A90", Offset = "0x2CE5090", VA = "0x182CE6A90")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public Image captionImage
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x1C41CF0", Offset = "0x1C402F0", VA = "0x181C41CF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x2CE6A60", Offset = "0x2CE5060", VA = "0x182CE6A60")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public Graphic placeholder
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x1C54FF0", Offset = "0x1C535F0", VA = "0x181C54FF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x2CE6B60", Offset = "0x2CE5160", VA = "0x182CE6B60")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public TMP_Text itemText
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0xA2F260", Offset = "0xA2D860", VA = "0x180A2F260")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x2CE6AF0", Offset = "0x2CE50F0", VA = "0x182CE6AF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public Image itemImage
	{
		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x2CE6A00", Offset = "0x2CE5000", VA = "0x182CE6A00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x2CE6AC0", Offset = "0x2CE50C0", VA = "0x182CE6AC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public List<OptionData> options
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x2CE6A10", Offset = "0x2CE5010", VA = "0x182CE6A10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x2CE6B20", Offset = "0x2CE5120", VA = "0x182CE6B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public DropdownEvent onValueChanged
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x1D1FA50", Offset = "0x1D1E050", VA = "0x181D1FA50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x1D1FE00", Offset = "0x1D1E400", VA = "0x181D1FE00")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public float alphaFadeSpeed
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x2CE69F0", Offset = "0x2CE4FF0", VA = "0x182CE69F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x2CE6A50", Offset = "0x2CE5050", VA = "0x182CE6A50")]
		set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public int value
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x2CE6A30", Offset = "0x2CE5030", VA = "0x182CE6A30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x2CE6BC0", Offset = "0x2CE51C0", VA = "0x182CE6BC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public bool IsExpanded
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x2CE6980", Offset = "0x2CE4F80", VA = "0x182CE6980")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000038")]
	public bool MultiSelect
	{
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x2CE69E0", Offset = "0x2CE4FE0", VA = "0x182CE69E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x2CE6A40", Offset = "0x2CE5040", VA = "0x182CE6A40")]
		set
		{
		}
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x2CE4630", Offset = "0x2CE2C30", VA = "0x182CE4630")]
	public void SetValueWithoutNotify(int input)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x2CE4640", Offset = "0x2CE2C40", VA = "0x182CE4640")]
	private void SetValue(int value, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x2CE67E0", Offset = "0x2CE4DE0", VA = "0x182CE67E0")]
	protected TMP_Dropdown()
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x2CE2F60", Offset = "0x2CE1560", VA = "0x182CE2F60", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x2CE64E0", Offset = "0x2CE4AE0", VA = "0x182CE64E0", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x2CE3D10", Offset = "0x2CE2310", VA = "0x182CE3D10", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x2CE4110", Offset = "0x2CE2710", VA = "0x182CE4110")]
	public void RefreshShownValue()
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x2CE29D0", Offset = "0x2CE0FD0", VA = "0x182CE29D0")]
	public void AddOptions(List<OptionData> options)
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x2CE2A40", Offset = "0x2CE1040", VA = "0x182CE2A40")]
	public void AddOptions(List<string> options)
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x2CE2BD0", Offset = "0x2CE11D0", VA = "0x182CE2BD0")]
	public void AddOptions(List<Sprite> options)
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x2CE30B0", Offset = "0x2CE16B0", VA = "0x182CE30B0")]
	public void ClearOptions()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x2CE47C0", Offset = "0x2CE2DC0", VA = "0x182CE47C0")]
	private void SetupTemplate()
	{
	}

	[Token(Token = "0x60000DF")]
	private static T GetOrAddComponent<T>(GameObject go) where T : Component
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x2CE3DC0", Offset = "0x2CE23C0", VA = "0x182CE3DC0", Slot = "42")]
	public virtual void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x2CE3DC0", Offset = "0x2CE23C0", VA = "0x182CE3DC0", Slot = "43")]
	public virtual void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x2CE3D00", Offset = "0x2CE2300", VA = "0x182CE3D00", Slot = "44")]
	public virtual void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x2CE4EB0", Offset = "0x2CE34B0", VA = "0x182CE4EB0")]
	public void Show()
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x2CE3CC0", Offset = "0x2CE22C0", VA = "0x182CE3CC0")]
	private static bool IsEverythingValue(int count, int value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x2CE3860", Offset = "0x2CE1E60", VA = "0x182CE3860")]
	private static int EverythingValue(int count)
	{
		return default(int);
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x2CE3170", Offset = "0x2CE1770", VA = "0x182CE3170", Slot = "45")]
	protected virtual GameObject CreateBlocker(Canvas rootCanvas)
	{
		return null;
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x2CE37C0", Offset = "0x2CE1DC0", VA = "0x182CE37C0", Slot = "46")]
	protected virtual void DestroyBlocker(GameObject blocker)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x2CE3680", Offset = "0x2CE1C80", VA = "0x182CE3680", Slot = "47")]
	protected virtual GameObject CreateDropdownList(GameObject template)
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x2CE3810", Offset = "0x2CE1E10", VA = "0x182CE3810", Slot = "48")]
	protected virtual void DestroyDropdownList(GameObject dropdownList)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x2CE36E0", Offset = "0x2CE1CE0", VA = "0x182CE36E0", Slot = "49")]
	protected virtual DropdownItem CreateItem(DropdownItem itemTemplate)
	{
		return null;
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "50")]
	protected virtual void DestroyItem(DropdownItem item)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x2CE2670", Offset = "0x2CE0C70", VA = "0x182CE2670")]
	private DropdownItem AddItem(OptionData data, bool selected, DropdownItem itemTemplate, List<DropdownItem> items)
	{
		return null;
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x2CE2ED0", Offset = "0x2CE14D0", VA = "0x182CE2ED0")]
	private void AlphaFadeList(float duration, float alpha)
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x2CE2D60", Offset = "0x2CE1360", VA = "0x182CE2D60")]
	private void AlphaFadeList(float duration, float start, float end)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x2CE4580", Offset = "0x2CE2B80", VA = "0x182CE4580")]
	private void SetAlpha(float alpha)
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x2CE38C0", Offset = "0x2CE1EC0", VA = "0x182CE38C0")]
	public void Hide()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x2CE3740", Offset = "0x2CE1D40", VA = "0x182CE3740")]
	[IteratorStateMachine(typeof(_003CDelayedDestroyDropdownList_003Ed__90))]
	private IEnumerator DelayedDestroyDropdownList(float delay)
	{
		return null;
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x2CE3AC0", Offset = "0x2CE20C0", VA = "0x182CE3AC0")]
	private void ImmediateDestroyDropdownList()
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x2CE3DD0", Offset = "0x2CE23D0", VA = "0x182CE3DD0")]
	private void OnSelectItem(Toggle toggle)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x2CE3890", Offset = "0x2CE1E90", VA = "0x182CE3890")]
	private static int FirstActiveFlagIndex(int value)
	{
		return default(int);
	}
}
