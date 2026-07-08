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
			[Address(RVA = "0x4DCC620", Offset = "0x4DCC620", VA = "0x4DCC620", Slot = "4")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005AC")]
			[Address(RVA = "0x4DCC630", Offset = "0x4DCC630", VA = "0x4DCC630")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700016F")]
		public string pointerType
		{
			[Token(Token = "0x60005AD")]
			[Address(RVA = "0x4DCC640", Offset = "0x4DCC640", VA = "0x4DCC640", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60005AE")]
			[Address(RVA = "0x4DCC650", Offset = "0x4DCC650", VA = "0x4DCC650")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000170")]
		public bool isPrimary
		{
			[Token(Token = "0x60005AF")]
			[Address(RVA = "0x4DCC660", Offset = "0x4DCC660", VA = "0x4DCC660", Slot = "6")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60005B0")]
			[Address(RVA = "0x4DCC670", Offset = "0x4DCC670", VA = "0x4DCC670")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000171")]
		public int button
		{
			[Token(Token = "0x60005B1")]
			[Address(RVA = "0x4DCC680", Offset = "0x4DCC680", VA = "0x4DCC680", Slot = "7")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005B2")]
			[Address(RVA = "0x4DCC690", Offset = "0x4DCC690", VA = "0x4DCC690")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000172")]
		public int pressedButtons
		{
			[Token(Token = "0x60005B3")]
			[Address(RVA = "0x4DCC6A0", Offset = "0x4DCC6A0", VA = "0x4DCC6A0", Slot = "8")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005B4")]
			[Address(RVA = "0x4DCC6B0", Offset = "0x4DCC6B0", VA = "0x4DCC6B0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000173")]
		public Vector3 position
		{
			[Token(Token = "0x60005B5")]
			[Address(RVA = "0x4DCC6C0", Offset = "0x4DCC6C0", VA = "0x4DCC6C0", Slot = "9")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005B6")]
			[Address(RVA = "0x4DCC6D0", Offset = "0x4DCC6D0", VA = "0x4DCC6D0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000174")]
		public Vector3 localPosition
		{
			[Token(Token = "0x60005B7")]
			[Address(RVA = "0x4DCC6E0", Offset = "0x4DCC6E0", VA = "0x4DCC6E0", Slot = "10")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005B8")]
			[Address(RVA = "0x4DCC6F0", Offset = "0x4DCC6F0", VA = "0x4DCC6F0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000175")]
		public Vector3 deltaPosition
		{
			[Token(Token = "0x60005B9")]
			[Address(RVA = "0x4DCC700", Offset = "0x4DCC700", VA = "0x4DCC700", Slot = "11")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005BA")]
			[Address(RVA = "0x4DCC710", Offset = "0x4DCC710", VA = "0x4DCC710")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000176")]
		public float deltaTime
		{
			[Token(Token = "0x60005BB")]
			[Address(RVA = "0x4DCC720", Offset = "0x4DCC720", VA = "0x4DCC720", Slot = "12")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005BC")]
			[Address(RVA = "0x4DCC730", Offset = "0x4DCC730", VA = "0x4DCC730")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000177")]
		public int clickCount
		{
			[Token(Token = "0x60005BD")]
			[Address(RVA = "0x4DCC740", Offset = "0x4DCC740", VA = "0x4DCC740", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005BE")]
			[Address(RVA = "0x4DCC750", Offset = "0x4DCC750", VA = "0x4DCC750")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000178")]
		public float pressure
		{
			[Token(Token = "0x60005BF")]
			[Address(RVA = "0x4DCC760", Offset = "0x4DCC760", VA = "0x4DCC760", Slot = "14")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005C0")]
			[Address(RVA = "0x4DCC770", Offset = "0x4DCC770", VA = "0x4DCC770")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000179")]
		public float tangentialPressure
		{
			[Token(Token = "0x60005C1")]
			[Address(RVA = "0x4DCC780", Offset = "0x4DCC780", VA = "0x4DCC780", Slot = "15")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005C2")]
			[Address(RVA = "0x4DCC790", Offset = "0x4DCC790", VA = "0x4DCC790")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017A")]
		public float altitudeAngle
		{
			[Token(Token = "0x60005C3")]
			[Address(RVA = "0x4DCC7A0", Offset = "0x4DCC7A0", VA = "0x4DCC7A0", Slot = "16")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005C4")]
			[Address(RVA = "0x4DCC7B0", Offset = "0x4DCC7B0", VA = "0x4DCC7B0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017B")]
		public float azimuthAngle
		{
			[Token(Token = "0x60005C5")]
			[Address(RVA = "0x4DCC7C0", Offset = "0x4DCC7C0", VA = "0x4DCC7C0", Slot = "17")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005C6")]
			[Address(RVA = "0x4DCC7D0", Offset = "0x4DCC7D0", VA = "0x4DCC7D0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017C")]
		public float twist
		{
			[Token(Token = "0x60005C7")]
			[Address(RVA = "0x4DCC7E0", Offset = "0x4DCC7E0", VA = "0x4DCC7E0", Slot = "18")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005C8")]
			[Address(RVA = "0x4DCC7F0", Offset = "0x4DCC7F0", VA = "0x4DCC7F0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017D")]
		public Vector2 tilt
		{
			[Token(Token = "0x60005C9")]
			[Address(RVA = "0x4DCC800", Offset = "0x4DCC800", VA = "0x4DCC800", Slot = "19")]
			[CompilerGenerated]
			get
			{
				return default(Vector2);
			}
			[Token(Token = "0x60005CA")]
			[Address(RVA = "0x4DCC810", Offset = "0x4DCC810", VA = "0x4DCC810")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017E")]
		public PenStatus penStatus
		{
			[Token(Token = "0x60005CB")]
			[Address(RVA = "0x4DCC820", Offset = "0x4DCC820", VA = "0x4DCC820", Slot = "20")]
			[CompilerGenerated]
			get
			{
				return default(PenStatus);
			}
			[Token(Token = "0x60005CC")]
			[Address(RVA = "0x4DCC830", Offset = "0x4DCC830", VA = "0x4DCC830")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017F")]
		public Vector2 radius
		{
			[Token(Token = "0x60005CD")]
			[Address(RVA = "0x4DCC840", Offset = "0x4DCC840", VA = "0x4DCC840", Slot = "21")]
			[CompilerGenerated]
			get
			{
				return default(Vector2);
			}
			[Token(Token = "0x60005CE")]
			[Address(RVA = "0x4DCC850", Offset = "0x4DCC850", VA = "0x4DCC850")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000180")]
		public Vector2 radiusVariance
		{
			[Token(Token = "0x60005CF")]
			[Address(RVA = "0x4DCC860", Offset = "0x4DCC860", VA = "0x4DCC860", Slot = "22")]
			[CompilerGenerated]
			get
			{
				return default(Vector2);
			}
			[Token(Token = "0x60005D0")]
			[Address(RVA = "0x4DCC870", Offset = "0x4DCC870", VA = "0x4DCC870")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000181")]
		public EventModifiers modifiers
		{
			[Token(Token = "0x60005D1")]
			[Address(RVA = "0x4DCC880", Offset = "0x4DCC880", VA = "0x4DCC880", Slot = "23")]
			[CompilerGenerated]
			get
			{
				return default(EventModifiers);
			}
			[Token(Token = "0x60005D2")]
			[Address(RVA = "0x4DCC890", Offset = "0x4DCC890", VA = "0x4DCC890")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000182")]
		public bool shiftKey
		{
			[Token(Token = "0x60005D3")]
			[Address(RVA = "0x4DCC8A0", Offset = "0x4DCC8A0", VA = "0x4DCC8A0", Slot = "24")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000183")]
		public bool ctrlKey
		{
			[Token(Token = "0x60005D4")]
			[Address(RVA = "0x4DCC8B0", Offset = "0x4DCC8B0", VA = "0x4DCC8B0", Slot = "25")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000184")]
		public bool commandKey
		{
			[Token(Token = "0x60005D5")]
			[Address(RVA = "0x4DCC8C0", Offset = "0x4DCC8C0", VA = "0x4DCC8C0", Slot = "26")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000185")]
		public bool altKey
		{
			[Token(Token = "0x60005D6")]
			[Address(RVA = "0x4DCC8D0", Offset = "0x4DCC8D0", VA = "0x4DCC8D0", Slot = "27")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000186")]
		public bool actionKey
		{
			[Token(Token = "0x60005D7")]
			[Address(RVA = "0x4DCC8E0", Offset = "0x4DCC8E0", VA = "0x4DCC8E0", Slot = "28")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x4DCBFD0", Offset = "0x4DCBFD0", VA = "0x4DCBFD0")]
		public void Read(PanelEventHandler self, PointerEventData eventData, PointerEventType eventType)
		{
		}

		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x4DCC540", Offset = "0x4DCC540", VA = "0x4DCC540")]
		public void SetPosition(Vector3 positionOverride, Vector3 deltaOverride)
		{
		}

		[Token(Token = "0x60005DA")]
		[Address(RVA = "0x4DCC600", Offset = "0x4DCC600", VA = "0x4DCC600")]
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
		[Address(RVA = "0x4DC9570", Offset = "0x4DC9570", VA = "0x4DC9570", Slot = "29")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000588")]
		[Address(RVA = "0x4DC9580", Offset = "0x4DC9580", VA = "0x4DC9580", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x1700016A")]
	private GameObject selectableGameObject
	{
		[Token(Token = "0x6000589")]
		[Address(RVA = "0x4DC9960", Offset = "0x4DC9960", VA = "0x4DC9960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016B")]
	private EventSystem eventSystem
	{
		[Token(Token = "0x600058A")]
		[Address(RVA = "0x4DC9980", Offset = "0x4DC9980", VA = "0x4DC9980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016C")]
	private bool isCurrentFocusedPanel
	{
		[Token(Token = "0x600058B")]
		[Address(RVA = "0x4DC9AA0", Offset = "0x4DC9AA0", VA = "0x4DC9AA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016D")]
	private Focusable currentFocusedElement
	{
		[Token(Token = "0x600058C")]
		[Address(RVA = "0x4DC9B70", Offset = "0x4DC9B70", VA = "0x4DC9B70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x4DC9BB0", Offset = "0x4DC9BB0", VA = "0x4DC9BB0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x4DC9BD0", Offset = "0x4DC9BD0", VA = "0x4DC9BD0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x4DC97C0", Offset = "0x4DC97C0", VA = "0x4DC97C0")]
	private void RegisterCallbacks()
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x4DC9620", Offset = "0x4DC9620", VA = "0x4DC9620")]
	private void UnregisterCallbacks()
	{
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x4DC9BF0", Offset = "0x4DC9BF0", VA = "0x4DC9BF0")]
	private void OnPanelDestroyed()
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x4DC9C50", Offset = "0x4DC9C50", VA = "0x4DC9C50")]
	private void OnElementFocus(FocusEvent e)
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x4DC9E10", Offset = "0x4DC9E10", VA = "0x4DC9E10")]
	private void OnElementBlur(BlurEvent e)
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x4DC9E20", Offset = "0x4DC9E20", VA = "0x4DC9E20", Slot = "24")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x4DC9EA0", Offset = "0x4DC9EA0", VA = "0x4DC9EA0", Slot = "25")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x4DC9EC0", Offset = "0x4DC9EC0", VA = "0x4DC9EC0", Slot = "17")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x4DCA290", Offset = "0x4DCA290", VA = "0x4DCA290", Slot = "18")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x4DCA510", Offset = "0x4DCA510", VA = "0x4DCA510", Slot = "19")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x4DCA860", Offset = "0x4DCA860", VA = "0x4DCA860", Slot = "26")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x4DCAB70", Offset = "0x4DCAB70", VA = "0x4DCAB70", Slot = "27")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x4DCABC0", Offset = "0x4DCABC0", VA = "0x4DCABC0", Slot = "20")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x4DCB010", Offset = "0x4DCB010", VA = "0x4DCB010", Slot = "21")]
	public void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x4DCB2A0", Offset = "0x4DCB2A0", VA = "0x4DCB2A0", Slot = "22")]
	public void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x4DCB550", Offset = "0x4DCB550", VA = "0x4DCB550", Slot = "23")]
	public void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x4DCA220", Offset = "0x4DCA220", VA = "0x4DCA220")]
	private void SendEvent(EventBase e, BaseEventData sourceEventData)
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x4DCB780", Offset = "0x4DCB780", VA = "0x4DCB780")]
	private void SendEvent(EventBase e, Event sourceEvent)
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x4DCB7E0", Offset = "0x4DCB7E0", VA = "0x4DCB7E0")]
	private void Update()
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x4DCB860", Offset = "0x4DCB860", VA = "0x4DCB860")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x4DCAE50", Offset = "0x4DCAE50", VA = "0x4DCAE50")]
	private void ProcessImguiEvents(Focusable target)
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x4DCB870", Offset = "0x4DCB870", VA = "0x4DCB870")]
	private void ProcessKeyboardEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x4DCB8E0", Offset = "0x4DCB8E0", VA = "0x4DCB8E0")]
	private void ProcessTabEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x4DCBD90", Offset = "0x4DCBD90", VA = "0x4DCBD90")]
	private void SendTabEvent(Event e, NavigationMoveEvent.Direction direction, Focusable target)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x4DCB940", Offset = "0x4DCB940", VA = "0x4DCB940")]
	private void SendKeyUpEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x4DCBB60", Offset = "0x4DCBB60", VA = "0x4DCBB60")]
	private void SendKeyDownEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x4DCA0D0", Offset = "0x4DCA0D0", VA = "0x4DCA0D0")]
	private bool ReadPointerData(PointerEvent pe, PointerEventData eventData, PointerEventType eventType = PointerEventType.Default)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x4DCC560", Offset = "0x4DCC560", VA = "0x4DCC560")]
	public PanelEventHandler()
	{
	}
}
