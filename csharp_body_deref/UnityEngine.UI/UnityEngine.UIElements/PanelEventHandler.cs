// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PanelEventHandler
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000090")]
[AddComponentMenu("UI Toolkit/Panel Event Handler (UI Toolkit)")]
[UnityEngine.UGUIHelpURL("PanelEventHandler")]
public class PanelEventHandler : UIBehaviour, IPointerMoveHandler, IEventSystemHandler, IPointerUpHandler, IPointerDownHandler, ISubmitHandler, ICancelHandler, IMoveHandler, IScrollHandler, ISelectHandler, IDeselectHandler, IPointerExitHandler, IPointerEnterHandler, IPointerClickHandler
{
	[Token(Token = "0x2000091")]
	private enum PointerEventType
	{
		[Token(Token = "0x4000293")]
		Default,
		[Token(Token = "0x4000294")]
		Down,
		[Token(Token = "0x4000295")]
		Up
	}

	[Token(Token = "0x2000092")]
	private class PointerEvent : IPointerEvent
	{
		[Token(Token = "0x1700016F")]
		public int pointerId
		{
			[Token(Token = "0x60005BB")]
			[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005BC")]
			[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000170")]
		public string pointerType
		{
			[Token(Token = "0x60005BD")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60005BE")]
			[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000171")]
		public bool isPrimary
		{
			[Token(Token = "0x60005BF")]
			[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "6")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60005C0")]
			[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000172")]
		public int button
		{
			[Token(Token = "0x60005C1")]
			[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280", Slot = "7")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005C2")]
			[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000173")]
		public int pressedButtons
		{
			[Token(Token = "0x60005C3")]
			[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030", Slot = "8")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005C4")]
			[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000174")]
		public Vector3 position
		{
			[Token(Token = "0x60005C5")]
			[Address(RVA = "0x585000", Offset = "0x583600", VA = "0x180585000", Slot = "9")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005C6")]
			[Address(RVA = "0x585070", Offset = "0x583670", VA = "0x180585070")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000175")]
		public Vector3 localPosition
		{
			[Token(Token = "0x60005C7")]
			[Address(RVA = "0x1D65970", Offset = "0x1D63F70", VA = "0x181D65970", Slot = "10")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005C8")]
			[Address(RVA = "0x32FCE10", Offset = "0x32FB410", VA = "0x1832FCE10")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000176")]
		public Vector3 deltaPosition
		{
			[Token(Token = "0x60005C9")]
			[Address(RVA = "0x32FCD30", Offset = "0x32FB330", VA = "0x1832FCD30", Slot = "11")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005CA")]
			[Address(RVA = "0x32FCE00", Offset = "0x32FB400", VA = "0x1832FCE00")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000177")]
		public float deltaTime
		{
			[Token(Token = "0x60005CB")]
			[Address(RVA = "0xDA5AC0", Offset = "0xDA40C0", VA = "0x180DA5AC0", Slot = "12")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005CC")]
			[Address(RVA = "0x2E909C0", Offset = "0x2E8EFC0", VA = "0x182E909C0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000178")]
		public int clickCount
		{
			[Token(Token = "0x60005CD")]
			[Address(RVA = "0xB57820", Offset = "0xB55E20", VA = "0x180B57820", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005CE")]
			[Address(RVA = "0x1CFDDB0", Offset = "0x1CFC3B0", VA = "0x181CFDDB0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000179")]
		public float pressure
		{
			[Token(Token = "0x60005CF")]
			[Address(RVA = "0x2E90980", Offset = "0x2E8EF80", VA = "0x182E90980", Slot = "14")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005D0")]
			[Address(RVA = "0x2E909D0", Offset = "0x2E8EFD0", VA = "0x182E909D0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017A")]
		public float tangentialPressure
		{
			[Token(Token = "0x60005D1")]
			[Address(RVA = "0x2E909A0", Offset = "0x2E8EFA0", VA = "0x182E909A0", Slot = "15")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005D2")]
			[Address(RVA = "0x2E909F0", Offset = "0x2E8EFF0", VA = "0x182E909F0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017B")]
		public float altitudeAngle
		{
			[Token(Token = "0x60005D3")]
			[Address(RVA = "0x58A700", Offset = "0x588D00", VA = "0x18058A700", Slot = "16")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005D4")]
			[Address(RVA = "0x58A9F0", Offset = "0x588FF0", VA = "0x18058A9F0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017C")]
		public float azimuthAngle
		{
			[Token(Token = "0x60005D5")]
			[Address(RVA = "0xCDE8A0", Offset = "0xCDCEA0", VA = "0x180CDE8A0", Slot = "17")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005D6")]
			[Address(RVA = "0xCDEB40", Offset = "0xCDD140", VA = "0x180CDEB40")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017D")]
		public float twist
		{
			[Token(Token = "0x60005D7")]
			[Address(RVA = "0x12BF160", Offset = "0x12BD760", VA = "0x1812BF160", Slot = "18")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005D8")]
			[Address(RVA = "0x12BF410", Offset = "0x12BDA10", VA = "0x1812BF410")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017E")]
		public Vector2 tilt
		{
			[Token(Token = "0x60005D9")]
			[Address(RVA = "0xA4D560", Offset = "0xA4BB60", VA = "0x180A4D560", Slot = "19")]
			[CompilerGenerated]
			get
			{
				return default(Vector2);
			}
			[Token(Token = "0x60005DA")]
			[Address(RVA = "0xA4D700", Offset = "0xA4BD00", VA = "0x180A4D700")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017F")]
		public PenStatus penStatus
		{
			[Token(Token = "0x60005DB")]
			[Address(RVA = "0x187BA40", Offset = "0x187A040", VA = "0x18187BA40", Slot = "20")]
			[CompilerGenerated]
			get
			{
				return default(PenStatus);
			}
			[Token(Token = "0x60005DC")]
			[Address(RVA = "0x261CA60", Offset = "0x261B060", VA = "0x18261CA60")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000180")]
		public Vector2 radius
		{
			[Token(Token = "0x60005DD")]
			[Address(RVA = "0x32FCD70", Offset = "0x32FB370", VA = "0x1832FCD70", Slot = "21")]
			[CompilerGenerated]
			get
			{
				return default(Vector2);
			}
			[Token(Token = "0x60005DE")]
			[Address(RVA = "0x32FCE30", Offset = "0x32FB430", VA = "0x1832FCE30")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000181")]
		public Vector2 radiusVariance
		{
			[Token(Token = "0x60005DF")]
			[Address(RVA = "0x32FCD50", Offset = "0x32FB350", VA = "0x1832FCD50", Slot = "22")]
			[CompilerGenerated]
			get
			{
				return default(Vector2);
			}
			[Token(Token = "0x60005E0")]
			[Address(RVA = "0x32FCE20", Offset = "0x32FB420", VA = "0x1832FCE20")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000182")]
		public EventModifiers modifiers
		{
			[Token(Token = "0x60005E1")]
			[Address(RVA = "0xA4D4B0", Offset = "0xA4BAB0", VA = "0x180A4D4B0", Slot = "23")]
			[CompilerGenerated]
			get
			{
				return default(EventModifiers);
			}
			[Token(Token = "0x60005E2")]
			[Address(RVA = "0xA4D5A0", Offset = "0xA4BBA0", VA = "0x180A4D5A0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000183")]
		public bool shiftKey
		{
			[Token(Token = "0x60005E3")]
			[Address(RVA = "0x32FCDD0", Offset = "0x32FB3D0", VA = "0x1832FCDD0", Slot = "24")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000184")]
		public bool ctrlKey
		{
			[Token(Token = "0x60005E4")]
			[Address(RVA = "0x32FCD20", Offset = "0x32FB320", VA = "0x1832FCD20", Slot = "25")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000185")]
		public bool commandKey
		{
			[Token(Token = "0x60005E5")]
			[Address(RVA = "0x32FCD10", Offset = "0x32FB310", VA = "0x1832FCD10", Slot = "26")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000186")]
		public bool altKey
		{
			[Token(Token = "0x60005E6")]
			[Address(RVA = "0x32FCD00", Offset = "0x32FB300", VA = "0x1832FCD00", Slot = "27")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000187")]
		public bool actionKey
		{
			[Token(Token = "0x60005E7")]
			[Address(RVA = "0x32FCC90", Offset = "0x32FB290", VA = "0x1832FCC90", Slot = "28")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000188")]
		public Vector3 screenPosition
		{
			[Token(Token = "0x60005E8")]
			[Address(RVA = "0x32FCDB0", Offset = "0x32FB3B0", VA = "0x1832FCDB0")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005E9")]
			[Address(RVA = "0x32FCE60", Offset = "0x32FB460", VA = "0x1832FCE60")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000189")]
		public Vector3 screenDelta
		{
			[Token(Token = "0x60005EA")]
			[Address(RVA = "0x32FCD90", Offset = "0x32FB390", VA = "0x1832FCD90")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005EB")]
			[Address(RVA = "0x32FCE40", Offset = "0x32FB440", VA = "0x1832FCE40")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700018A")]
		public Ray worldRay
		{
			[Token(Token = "0x60005EC")]
			[Address(RVA = "0x32FCDE0", Offset = "0x32FB3E0", VA = "0x1832FCDE0")]
			[CompilerGenerated]
			get
			{
				return default(Ray);
			}
			[Token(Token = "0x60005ED")]
			[Address(RVA = "0x32FCE80", Offset = "0x32FB480", VA = "0x1832FCE80")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700018B")]
		public UIDocument document
		{
			[Token(Token = "0x60005EE")]
			[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60005EF")]
			[Address(RVA = "0xC8FFC0", Offset = "0xC8E5C0", VA = "0x180C8FFC0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700018C")]
		public VisualElement elementTarget
		{
			[Token(Token = "0x60005F0")]
			[Address(RVA = "0x187BC00", Offset = "0x187A200", VA = "0x18187BC00")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60005F1")]
			[Address(RVA = "0x1C42420", Offset = "0x1C40A20", VA = "0x181C42420")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700018D")]
		public VisualElement elementUnderPointer
		{
			[Token(Token = "0x60005F2")]
			[Address(RVA = "0x187BC40", Offset = "0x187A240", VA = "0x18187BC40")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60005F3")]
			[Address(RVA = "0x1BE7800", Offset = "0x1BE5E00", VA = "0x181BE7800")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60005F4")]
		[Address(RVA = "0x32FC5A0", Offset = "0x32FABA0", VA = "0x1832FC5A0")]
		public void Read(PanelEventHandler self, PointerEventData eventData, PointerEventType eventType)
		{
		}

		[Token(Token = "0x60005F5")]
		[Address(RVA = "0x32FC060", Offset = "0x32FA660", VA = "0x1832FC060")]
		public bool ComputeTarget(UnityEngine.UIElements.BaseRuntimePanel panel)
		{
			return default(bool);
		}

		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x32FC420", Offset = "0x32FAA20", VA = "0x1832FC420")]
		private Vector3 GetPanelPosition(VisualElement pickedElement, UIDocument document, Ray worldRay)
		{
			return default(Vector3);
		}

		[Token(Token = "0x60005F7")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PointerEvent()
		{
		}
	}

	[Token(Token = "0x400028B")]
	[FieldOffset(Offset = "0x20")]
	private UnityEngine.UIElements.BaseRuntimePanel m_Panel;

	[Token(Token = "0x400028C")]
	[FieldOffset(Offset = "0x28")]
	private readonly PointerEvent m_PointerEvent;

	[Token(Token = "0x400028D")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<PointerEventData> m_ContainedPointers;

	[Token(Token = "0x400028E")]
	[FieldOffset(Offset = "0x38")]
	private float m_LastClickTime;

	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x3C")]
	private bool m_Selecting;

	[Token(Token = "0x4000290")]
	[FieldOffset(Offset = "0x40")]
	private Event m_Event;

	[Token(Token = "0x4000291")]
	[FieldOffset(Offset = "0x0")]
	private static EventModifiers s_Modifiers;

	[Token(Token = "0x1700016A")]
	public IPanel panel
	{
		[Token(Token = "0x6000593")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000594")]
		[Address(RVA = "0x32F9230", Offset = "0x32F7830", VA = "0x1832F9230", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x1700016B")]
	private GameObject selectableGameObject
	{
		[Token(Token = "0x6000595")]
		[Address(RVA = "0x32F9210", Offset = "0x32F7810", VA = "0x1832F9210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016C")]
	private EventSystem eventSystem
	{
		[Token(Token = "0x6000596")]
		[Address(RVA = "0x32F9070", Offset = "0x32F7670", VA = "0x1832F9070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016D")]
	private bool isCurrentFocusedPanel
	{
		[Token(Token = "0x6000597")]
		[Address(RVA = "0x32F9140", Offset = "0x32F7740", VA = "0x1832F9140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016E")]
	private Focusable currentFocusedElement
	{
		[Token(Token = "0x6000598")]
		[Address(RVA = "0x32F9030", Offset = "0x32F7630", VA = "0x1832F9030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x32F6E00", Offset = "0x32F5400", VA = "0x1832F6E00", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x32F6D40", Offset = "0x32F5340", VA = "0x1832F6D40", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x32F83F0", Offset = "0x32F69F0", VA = "0x1832F83F0")]
	private void RegisterCallbacks()
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x32F8A30", Offset = "0x32F7030", VA = "0x1832F8A30")]
	private void UnregisterCallbacks()
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x32F7050", Offset = "0x32F5650", VA = "0x1832F7050")]
	private void OnPanelDestroyed()
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x32F6D50", Offset = "0x32F5350", VA = "0x1832F6D50")]
	private void OnElementFocus(FocusEvent e)
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void OnElementBlur(BlurEvent e)
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x32F7DE0", Offset = "0x32F63E0", VA = "0x1832F7DE0", Slot = "24")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x32F6D20", Offset = "0x32F5320", VA = "0x1832F6D20", Slot = "25")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x32F7890", Offset = "0x32F5E90", VA = "0x1832F7890", Slot = "17")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x32F79F0", Offset = "0x32F5FF0", VA = "0x1832F79F0", Slot = "18")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x32F70D0", Offset = "0x32F56D0", VA = "0x1832F70D0", Slot = "19")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x32F7540", Offset = "0x32F5B40", VA = "0x1832F7540", Slot = "26")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x32F7430", Offset = "0x32F5A30", VA = "0x1832F7430", Slot = "27")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x32F70B0", Offset = "0x32F56B0", VA = "0x1832F70B0", Slot = "29")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x32F7E50", Offset = "0x32F6450", VA = "0x1832F7E50", Slot = "20")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x32F6B40", Offset = "0x32F5140", VA = "0x1832F6B40", Slot = "21")]
	public void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x32F6E10", Offset = "0x32F5410", VA = "0x1832F6E10", Slot = "22")]
	public void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x32F7BC0", Offset = "0x32F61C0", VA = "0x1832F7BC0", Slot = "23")]
	public void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x32F8590", Offset = "0x32F6B90", VA = "0x1832F8590")]
	private void SendEvent(EventBase e, BaseEventData sourceEventData)
	{
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x32F8600", Offset = "0x32F6C00", VA = "0x1832F8600")]
	private void SendEvent(EventBase e, Event sourceEvent)
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x32F8E00", Offset = "0x32F7400", VA = "0x1832F8E00")]
	public void Update()
	{
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x32F6B30", Offset = "0x32F5130", VA = "0x1832F6B30")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x32F8030", Offset = "0x32F6630", VA = "0x1832F8030")]
	private void ProcessImguiEvents(Focusable target)
	{
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x32F81E0", Offset = "0x32F67E0", VA = "0x1832F81E0")]
	private void ProcessKeyboardEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x32F8270", Offset = "0x32F6870", VA = "0x1832F8270")]
	private void ProcessTabEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x32F88F0", Offset = "0x32F6EF0", VA = "0x1832F88F0")]
	private void SendTabEvent(Event e, NavigationMoveEvent.Direction direction, Focusable target)
	{
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x32F8790", Offset = "0x32F6D90", VA = "0x1832F8790")]
	private void SendKeyUpEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x32F8630", Offset = "0x32F6C30", VA = "0x1832F8630")]
	private void SendKeyDownEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x32F82E0", Offset = "0x32F68E0", VA = "0x1832F82E0")]
	private bool ReadPointerData(PointerEvent pe, PointerEventData eventData, PointerEventType eventType = PointerEventType.Default)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B7")]
	private void UpdatePointerEventTarget<TPointerEvent>(TPointerEvent e, PointerEvent eventData) where TPointerEvent : PointerEventBase<TPointerEvent>, new()
	{
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x32F6A40", Offset = "0x32F5040", VA = "0x1832F6A40")]
	private UnityEngine.UIElements.NavigationDeviceType GetDeviceType(BaseEventData eventData)
	{
		return default(UnityEngine.UIElements.NavigationDeviceType);
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x32F8BD0", Offset = "0x32F71D0", VA = "0x1832F8BD0")]
	private void UpdateWorldSpacePointers()
	{
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x32F8F40", Offset = "0x32F7540", VA = "0x1832F8F40")]
	public PanelEventHandler()
	{
	}
}
