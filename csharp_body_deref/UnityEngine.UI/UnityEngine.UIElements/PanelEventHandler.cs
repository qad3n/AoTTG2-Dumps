// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PanelEventHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000092")]
[AddComponentMenu("UI Toolkit/Panel Event Handler (UI Toolkit)")]
public class PanelEventHandler : UIBehaviour, IPointerMoveHandler, IEventSystemHandler, IPointerUpHandler, IPointerDownHandler, ISubmitHandler, ICancelHandler, IMoveHandler, IScrollHandler, ISelectHandler, IDeselectHandler, IPointerExitHandler, IPointerEnterHandler, UnityEngine.UIElements.IRuntimePanelComponent
{
	[Token(Token = "0x2000093")]
	private enum PointerEventType
	{
		[Token(Token = "0x4000291")]
		Default,
		[Token(Token = "0x4000292")]
		Down,
		[Token(Token = "0x4000293")]
		Up
	}

	[Token(Token = "0x2000094")]
	private class PointerEvent : IPointerEvent
	{
		[Token(Token = "0x1700016E")]
		public int pointerId
		{
			[Token(Token = "0x60005AB")]
			[Address(RVA = "0x50F3F70", Offset = "0x50F3F70", VA = "0x50F3F70", Slot = "4")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005AC")]
			[Address(RVA = "0x50F3F80", Offset = "0x50F3F80", VA = "0x50F3F80")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700016F")]
		public string pointerType
		{
			[Token(Token = "0x60005AD")]
			[Address(RVA = "0x50F3F90", Offset = "0x50F3F90", VA = "0x50F3F90", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60005AE")]
			[Address(RVA = "0x50F3FA0", Offset = "0x50F3FA0", VA = "0x50F3FA0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000170")]
		public bool isPrimary
		{
			[Token(Token = "0x60005AF")]
			[Address(RVA = "0x50F3FB0", Offset = "0x50F3FB0", VA = "0x50F3FB0", Slot = "6")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60005B0")]
			[Address(RVA = "0x50F3FC0", Offset = "0x50F3FC0", VA = "0x50F3FC0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000171")]
		public int button
		{
			[Token(Token = "0x60005B1")]
			[Address(RVA = "0x50F3FD0", Offset = "0x50F3FD0", VA = "0x50F3FD0", Slot = "7")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005B2")]
			[Address(RVA = "0x50F3FE0", Offset = "0x50F3FE0", VA = "0x50F3FE0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000172")]
		public int pressedButtons
		{
			[Token(Token = "0x60005B3")]
			[Address(RVA = "0x50F3FF0", Offset = "0x50F3FF0", VA = "0x50F3FF0", Slot = "8")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005B4")]
			[Address(RVA = "0x50F4000", Offset = "0x50F4000", VA = "0x50F4000")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000173")]
		public Vector3 position
		{
			[Token(Token = "0x60005B5")]
			[Address(RVA = "0x50F4010", Offset = "0x50F4010", VA = "0x50F4010", Slot = "9")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005B6")]
			[Address(RVA = "0x50F4020", Offset = "0x50F4020", VA = "0x50F4020")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000174")]
		public Vector3 localPosition
		{
			[Token(Token = "0x60005B7")]
			[Address(RVA = "0x50F4030", Offset = "0x50F4030", VA = "0x50F4030", Slot = "10")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005B8")]
			[Address(RVA = "0x50F4040", Offset = "0x50F4040", VA = "0x50F4040")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000175")]
		public Vector3 deltaPosition
		{
			[Token(Token = "0x60005B9")]
			[Address(RVA = "0x50F4050", Offset = "0x50F4050", VA = "0x50F4050", Slot = "11")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005BA")]
			[Address(RVA = "0x50F4060", Offset = "0x50F4060", VA = "0x50F4060")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000176")]
		public float deltaTime
		{
			[Token(Token = "0x60005BB")]
			[Address(RVA = "0x50F4070", Offset = "0x50F4070", VA = "0x50F4070", Slot = "12")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005BC")]
			[Address(RVA = "0x50F4080", Offset = "0x50F4080", VA = "0x50F4080")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000177")]
		public int clickCount
		{
			[Token(Token = "0x60005BD")]
			[Address(RVA = "0x50F4090", Offset = "0x50F4090", VA = "0x50F4090", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005BE")]
			[Address(RVA = "0x50F40A0", Offset = "0x50F40A0", VA = "0x50F40A0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000178")]
		public float pressure
		{
			[Token(Token = "0x60005BF")]
			[Address(RVA = "0x50F40B0", Offset = "0x50F40B0", VA = "0x50F40B0", Slot = "14")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005C0")]
			[Address(RVA = "0x50F40C0", Offset = "0x50F40C0", VA = "0x50F40C0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000179")]
		public float tangentialPressure
		{
			[Token(Token = "0x60005C1")]
			[Address(RVA = "0x50F40D0", Offset = "0x50F40D0", VA = "0x50F40D0", Slot = "15")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005C2")]
			[Address(RVA = "0x50F40E0", Offset = "0x50F40E0", VA = "0x50F40E0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017A")]
		public float altitudeAngle
		{
			[Token(Token = "0x60005C3")]
			[Address(RVA = "0x50F40F0", Offset = "0x50F40F0", VA = "0x50F40F0", Slot = "16")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005C4")]
			[Address(RVA = "0x50F4100", Offset = "0x50F4100", VA = "0x50F4100")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017B")]
		public float azimuthAngle
		{
			[Token(Token = "0x60005C5")]
			[Address(RVA = "0x50F4110", Offset = "0x50F4110", VA = "0x50F4110", Slot = "17")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005C6")]
			[Address(RVA = "0x50F4120", Offset = "0x50F4120", VA = "0x50F4120")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017C")]
		public float twist
		{
			[Token(Token = "0x60005C7")]
			[Address(RVA = "0x50F4130", Offset = "0x50F4130", VA = "0x50F4130", Slot = "18")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005C8")]
			[Address(RVA = "0x50F4140", Offset = "0x50F4140", VA = "0x50F4140")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017D")]
		public Vector2 tilt
		{
			[Token(Token = "0x60005C9")]
			[Address(RVA = "0x50F4150", Offset = "0x50F4150", VA = "0x50F4150", Slot = "19")]
			[CompilerGenerated]
			get
			{
				return default(Vector2);
			}
			[Token(Token = "0x60005CA")]
			[Address(RVA = "0x50F4160", Offset = "0x50F4160", VA = "0x50F4160")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017E")]
		public PenStatus penStatus
		{
			[Token(Token = "0x60005CB")]
			[Address(RVA = "0x50F4170", Offset = "0x50F4170", VA = "0x50F4170", Slot = "20")]
			[CompilerGenerated]
			get
			{
				return default(PenStatus);
			}
			[Token(Token = "0x60005CC")]
			[Address(RVA = "0x50F4180", Offset = "0x50F4180", VA = "0x50F4180")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017F")]
		public Vector2 radius
		{
			[Token(Token = "0x60005CD")]
			[Address(RVA = "0x50F4190", Offset = "0x50F4190", VA = "0x50F4190", Slot = "21")]
			[CompilerGenerated]
			get
			{
				return default(Vector2);
			}
			[Token(Token = "0x60005CE")]
			[Address(RVA = "0x50F41A0", Offset = "0x50F41A0", VA = "0x50F41A0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000180")]
		public Vector2 radiusVariance
		{
			[Token(Token = "0x60005CF")]
			[Address(RVA = "0x50F41B0", Offset = "0x50F41B0", VA = "0x50F41B0", Slot = "22")]
			[CompilerGenerated]
			get
			{
				return default(Vector2);
			}
			[Token(Token = "0x60005D0")]
			[Address(RVA = "0x50F41C0", Offset = "0x50F41C0", VA = "0x50F41C0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000181")]
		public EventModifiers modifiers
		{
			[Token(Token = "0x60005D1")]
			[Address(RVA = "0x50F41D0", Offset = "0x50F41D0", VA = "0x50F41D0", Slot = "23")]
			[CompilerGenerated]
			get
			{
				return default(EventModifiers);
			}
			[Token(Token = "0x60005D2")]
			[Address(RVA = "0x50F41E0", Offset = "0x50F41E0", VA = "0x50F41E0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000182")]
		public bool shiftKey
		{
			[Token(Token = "0x60005D3")]
			[Address(RVA = "0x50F41F0", Offset = "0x50F41F0", VA = "0x50F41F0", Slot = "24")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000183")]
		public bool ctrlKey
		{
			[Token(Token = "0x60005D4")]
			[Address(RVA = "0x50F4200", Offset = "0x50F4200", VA = "0x50F4200", Slot = "25")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000184")]
		public bool commandKey
		{
			[Token(Token = "0x60005D5")]
			[Address(RVA = "0x50F4210", Offset = "0x50F4210", VA = "0x50F4210", Slot = "26")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000185")]
		public bool altKey
		{
			[Token(Token = "0x60005D6")]
			[Address(RVA = "0x50F4220", Offset = "0x50F4220", VA = "0x50F4220", Slot = "27")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000186")]
		public bool actionKey
		{
			[Token(Token = "0x60005D7")]
			[Address(RVA = "0x50F4230", Offset = "0x50F4230", VA = "0x50F4230", Slot = "28")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x50F3920", Offset = "0x50F3920", VA = "0x50F3920")]
		public void Read(PanelEventHandler self, PointerEventData eventData, PointerEventType eventType)
		{
		}

		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x50F3E90", Offset = "0x50F3E90", VA = "0x50F3E90")]
		public void SetPosition(Vector3 positionOverride, Vector3 deltaOverride)
		{
		}

		[Token(Token = "0x60005DA")]
		[Address(RVA = "0x50F3F50", Offset = "0x50F3F50", VA = "0x50F3F50")]
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
	private bool m_Selecting;

	[Token(Token = "0x400028E")]
	[FieldOffset(Offset = "0x38")]
	private Event m_Event;

	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x0")]
	private static EventModifiers s_Modifiers;

	[Token(Token = "0x17000169")]
	public IPanel panel
	{
		[Token(Token = "0x6000587")]
		[Address(RVA = "0x50F0EC0", Offset = "0x50F0EC0", VA = "0x50F0EC0", Slot = "29")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000588")]
		[Address(RVA = "0x50F0ED0", Offset = "0x50F0ED0", VA = "0x50F0ED0", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x1700016A")]
	private GameObject selectableGameObject
	{
		[Token(Token = "0x6000589")]
		[Address(RVA = "0x50F12B0", Offset = "0x50F12B0", VA = "0x50F12B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016B")]
	private EventSystem eventSystem
	{
		[Token(Token = "0x600058A")]
		[Address(RVA = "0x50F12D0", Offset = "0x50F12D0", VA = "0x50F12D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016C")]
	private bool isCurrentFocusedPanel
	{
		[Token(Token = "0x600058B")]
		[Address(RVA = "0x50F13F0", Offset = "0x50F13F0", VA = "0x50F13F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016D")]
	private Focusable currentFocusedElement
	{
		[Token(Token = "0x600058C")]
		[Address(RVA = "0x50F14C0", Offset = "0x50F14C0", VA = "0x50F14C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x50F1500", Offset = "0x50F1500", VA = "0x50F1500", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x50F1520", Offset = "0x50F1520", VA = "0x50F1520", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x50F1110", Offset = "0x50F1110", VA = "0x50F1110")]
	private void RegisterCallbacks()
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x50F0F70", Offset = "0x50F0F70", VA = "0x50F0F70")]
	private void UnregisterCallbacks()
	{
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x50F1540", Offset = "0x50F1540", VA = "0x50F1540")]
	private void OnPanelDestroyed()
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x50F15A0", Offset = "0x50F15A0", VA = "0x50F15A0")]
	private void OnElementFocus(FocusEvent e)
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x50F1760", Offset = "0x50F1760", VA = "0x50F1760")]
	private void OnElementBlur(BlurEvent e)
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x50F1770", Offset = "0x50F1770", VA = "0x50F1770", Slot = "24")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x50F17F0", Offset = "0x50F17F0", VA = "0x50F17F0", Slot = "25")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x50F1810", Offset = "0x50F1810", VA = "0x50F1810", Slot = "17")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x50F1BE0", Offset = "0x50F1BE0", VA = "0x50F1BE0", Slot = "18")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x50F1E60", Offset = "0x50F1E60", VA = "0x50F1E60", Slot = "19")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x50F21B0", Offset = "0x50F21B0", VA = "0x50F21B0", Slot = "26")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x50F24C0", Offset = "0x50F24C0", VA = "0x50F24C0", Slot = "27")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x50F2510", Offset = "0x50F2510", VA = "0x50F2510", Slot = "20")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x50F2960", Offset = "0x50F2960", VA = "0x50F2960", Slot = "21")]
	public void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x50F2BF0", Offset = "0x50F2BF0", VA = "0x50F2BF0", Slot = "22")]
	public void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x50F2EA0", Offset = "0x50F2EA0", VA = "0x50F2EA0", Slot = "23")]
	public void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x50F1B70", Offset = "0x50F1B70", VA = "0x50F1B70")]
	private void SendEvent(EventBase e, BaseEventData sourceEventData)
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x50F30D0", Offset = "0x50F30D0", VA = "0x50F30D0")]
	private void SendEvent(EventBase e, Event sourceEvent)
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x50F3130", Offset = "0x50F3130", VA = "0x50F3130")]
	private void Update()
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x50F31B0", Offset = "0x50F31B0", VA = "0x50F31B0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x50F27A0", Offset = "0x50F27A0", VA = "0x50F27A0")]
	private void ProcessImguiEvents(Focusable target)
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x50F31C0", Offset = "0x50F31C0", VA = "0x50F31C0")]
	private void ProcessKeyboardEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x50F3230", Offset = "0x50F3230", VA = "0x50F3230")]
	private void ProcessTabEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x50F36E0", Offset = "0x50F36E0", VA = "0x50F36E0")]
	private void SendTabEvent(Event e, NavigationMoveEvent.Direction direction, Focusable target)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x50F3290", Offset = "0x50F3290", VA = "0x50F3290")]
	private void SendKeyUpEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x50F34B0", Offset = "0x50F34B0", VA = "0x50F34B0")]
	private void SendKeyDownEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x50F1A20", Offset = "0x50F1A20", VA = "0x50F1A20")]
	private bool ReadPointerData(PointerEvent pe, PointerEventData eventData, PointerEventType eventType = PointerEventType.Default)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x50F3EB0", Offset = "0x50F3EB0", VA = "0x50F3EB0")]
	public PanelEventHandler()
	{
	}
}
