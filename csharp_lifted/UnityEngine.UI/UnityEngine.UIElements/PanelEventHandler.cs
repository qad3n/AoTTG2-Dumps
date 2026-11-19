// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PanelEventHandler
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x6D044A0", Offset = "0x6D034A0", VA = "0x6D044A0", Slot = "4")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005BC")]
			[Address(RVA = "0x6D044B0", Offset = "0x6D034B0", VA = "0x6D044B0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000170")]
		public string pointerType
		{
			[Token(Token = "0x60005BD")]
			[Address(RVA = "0x6D044C0", Offset = "0x6D034C0", VA = "0x6D044C0", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60005BE")]
			[Address(RVA = "0x6D044D0", Offset = "0x6D034D0", VA = "0x6D044D0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000171")]
		public bool isPrimary
		{
			[Token(Token = "0x60005BF")]
			[Address(RVA = "0x6D044E0", Offset = "0x6D034E0", VA = "0x6D044E0", Slot = "6")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60005C0")]
			[Address(RVA = "0x6D044F0", Offset = "0x6D034F0", VA = "0x6D044F0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000172")]
		public int button
		{
			[Token(Token = "0x60005C1")]
			[Address(RVA = "0x6D04500", Offset = "0x6D03500", VA = "0x6D04500", Slot = "7")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005C2")]
			[Address(RVA = "0x6D04510", Offset = "0x6D03510", VA = "0x6D04510")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000173")]
		public int pressedButtons
		{
			[Token(Token = "0x60005C3")]
			[Address(RVA = "0x6D04520", Offset = "0x6D03520", VA = "0x6D04520", Slot = "8")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005C4")]
			[Address(RVA = "0x6D04530", Offset = "0x6D03530", VA = "0x6D04530")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000174")]
		public Vector3 position
		{
			[Token(Token = "0x60005C5")]
			[Address(RVA = "0x6D04540", Offset = "0x6D03540", VA = "0x6D04540", Slot = "9")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005C6")]
			[Address(RVA = "0x6D04550", Offset = "0x6D03550", VA = "0x6D04550")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000175")]
		public Vector3 localPosition
		{
			[Token(Token = "0x60005C7")]
			[Address(RVA = "0x6D04560", Offset = "0x6D03560", VA = "0x6D04560", Slot = "10")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005C8")]
			[Address(RVA = "0x6D04570", Offset = "0x6D03570", VA = "0x6D04570")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000176")]
		public Vector3 deltaPosition
		{
			[Token(Token = "0x60005C9")]
			[Address(RVA = "0x6D04580", Offset = "0x6D03580", VA = "0x6D04580", Slot = "11")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005CA")]
			[Address(RVA = "0x6D04590", Offset = "0x6D03590", VA = "0x6D04590")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000177")]
		public float deltaTime
		{
			[Token(Token = "0x60005CB")]
			[Address(RVA = "0x6D045A0", Offset = "0x6D035A0", VA = "0x6D045A0", Slot = "12")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005CC")]
			[Address(RVA = "0x6D045B0", Offset = "0x6D035B0", VA = "0x6D045B0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000178")]
		public int clickCount
		{
			[Token(Token = "0x60005CD")]
			[Address(RVA = "0x6D045C0", Offset = "0x6D035C0", VA = "0x6D045C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60005CE")]
			[Address(RVA = "0x6D045D0", Offset = "0x6D035D0", VA = "0x6D045D0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000179")]
		public float pressure
		{
			[Token(Token = "0x60005CF")]
			[Address(RVA = "0x6D045E0", Offset = "0x6D035E0", VA = "0x6D045E0", Slot = "14")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005D0")]
			[Address(RVA = "0x6D045F0", Offset = "0x6D035F0", VA = "0x6D045F0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017A")]
		public float tangentialPressure
		{
			[Token(Token = "0x60005D1")]
			[Address(RVA = "0x6D04600", Offset = "0x6D03600", VA = "0x6D04600", Slot = "15")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005D2")]
			[Address(RVA = "0x6D04610", Offset = "0x6D03610", VA = "0x6D04610")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017B")]
		public float altitudeAngle
		{
			[Token(Token = "0x60005D3")]
			[Address(RVA = "0x6D04620", Offset = "0x6D03620", VA = "0x6D04620", Slot = "16")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005D4")]
			[Address(RVA = "0x6D04630", Offset = "0x6D03630", VA = "0x6D04630")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017C")]
		public float azimuthAngle
		{
			[Token(Token = "0x60005D5")]
			[Address(RVA = "0x6D04640", Offset = "0x6D03640", VA = "0x6D04640", Slot = "17")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005D6")]
			[Address(RVA = "0x6D04650", Offset = "0x6D03650", VA = "0x6D04650")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017D")]
		public float twist
		{
			[Token(Token = "0x60005D7")]
			[Address(RVA = "0x6D04660", Offset = "0x6D03660", VA = "0x6D04660", Slot = "18")]
			[CompilerGenerated]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60005D8")]
			[Address(RVA = "0x6D04670", Offset = "0x6D03670", VA = "0x6D04670")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017E")]
		public Vector2 tilt
		{
			[Token(Token = "0x60005D9")]
			[Address(RVA = "0x6D04680", Offset = "0x6D03680", VA = "0x6D04680", Slot = "19")]
			[CompilerGenerated]
			get
			{
				return default(Vector2);
			}
			[Token(Token = "0x60005DA")]
			[Address(RVA = "0x6D04690", Offset = "0x6D03690", VA = "0x6D04690")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700017F")]
		public PenStatus penStatus
		{
			[Token(Token = "0x60005DB")]
			[Address(RVA = "0x6D046A0", Offset = "0x6D036A0", VA = "0x6D046A0", Slot = "20")]
			[CompilerGenerated]
			get
			{
				return default(PenStatus);
			}
			[Token(Token = "0x60005DC")]
			[Address(RVA = "0x6D046B0", Offset = "0x6D036B0", VA = "0x6D046B0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000180")]
		public Vector2 radius
		{
			[Token(Token = "0x60005DD")]
			[Address(RVA = "0x6D046C0", Offset = "0x6D036C0", VA = "0x6D046C0", Slot = "21")]
			[CompilerGenerated]
			get
			{
				return default(Vector2);
			}
			[Token(Token = "0x60005DE")]
			[Address(RVA = "0x6D046D0", Offset = "0x6D036D0", VA = "0x6D046D0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000181")]
		public Vector2 radiusVariance
		{
			[Token(Token = "0x60005DF")]
			[Address(RVA = "0x6D046E0", Offset = "0x6D036E0", VA = "0x6D046E0", Slot = "22")]
			[CompilerGenerated]
			get
			{
				return default(Vector2);
			}
			[Token(Token = "0x60005E0")]
			[Address(RVA = "0x6D046F0", Offset = "0x6D036F0", VA = "0x6D046F0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000182")]
		public EventModifiers modifiers
		{
			[Token(Token = "0x60005E1")]
			[Address(RVA = "0x6D04700", Offset = "0x6D03700", VA = "0x6D04700", Slot = "23")]
			[CompilerGenerated]
			get
			{
				return default(EventModifiers);
			}
			[Token(Token = "0x60005E2")]
			[Address(RVA = "0x6D04710", Offset = "0x6D03710", VA = "0x6D04710")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000183")]
		public bool shiftKey
		{
			[Token(Token = "0x60005E3")]
			[Address(RVA = "0x6D04720", Offset = "0x6D03720", VA = "0x6D04720", Slot = "24")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000184")]
		public bool ctrlKey
		{
			[Token(Token = "0x60005E4")]
			[Address(RVA = "0x6D04730", Offset = "0x6D03730", VA = "0x6D04730", Slot = "25")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000185")]
		public bool commandKey
		{
			[Token(Token = "0x60005E5")]
			[Address(RVA = "0x6D04740", Offset = "0x6D03740", VA = "0x6D04740", Slot = "26")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000186")]
		public bool altKey
		{
			[Token(Token = "0x60005E6")]
			[Address(RVA = "0x6D04750", Offset = "0x6D03750", VA = "0x6D04750", Slot = "27")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000187")]
		public bool actionKey
		{
			[Token(Token = "0x60005E7")]
			[Address(RVA = "0x6D04760", Offset = "0x6D03760", VA = "0x6D04760", Slot = "28")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000188")]
		public Vector3 screenPosition
		{
			[Token(Token = "0x60005E8")]
			[Address(RVA = "0x6D047C0", Offset = "0x6D037C0", VA = "0x6D047C0")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005E9")]
			[Address(RVA = "0x6D047E0", Offset = "0x6D037E0", VA = "0x6D047E0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000189")]
		public Vector3 screenDelta
		{
			[Token(Token = "0x60005EA")]
			[Address(RVA = "0x6D047F0", Offset = "0x6D037F0", VA = "0x6D047F0")]
			[CompilerGenerated]
			get
			{
				return default(Vector3);
			}
			[Token(Token = "0x60005EB")]
			[Address(RVA = "0x6D04810", Offset = "0x6D03810", VA = "0x6D04810")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700018A")]
		public Ray worldRay
		{
			[Token(Token = "0x60005EC")]
			[Address(RVA = "0x6D04820", Offset = "0x6D03820", VA = "0x6D04820")]
			[CompilerGenerated]
			get
			{
				return default(Ray);
			}
			[Token(Token = "0x60005ED")]
			[Address(RVA = "0x6D04840", Offset = "0x6D03840", VA = "0x6D04840")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700018B")]
		public UIDocument document
		{
			[Token(Token = "0x60005EE")]
			[Address(RVA = "0x6D04860", Offset = "0x6D03860", VA = "0x6D04860")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60005EF")]
			[Address(RVA = "0x6D04870", Offset = "0x6D03870", VA = "0x6D04870")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700018C")]
		public VisualElement elementTarget
		{
			[Token(Token = "0x60005F0")]
			[Address(RVA = "0x6D04890", Offset = "0x6D03890", VA = "0x6D04890")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60005F1")]
			[Address(RVA = "0x6D048A0", Offset = "0x6D038A0", VA = "0x6D048A0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700018D")]
		public VisualElement elementUnderPointer
		{
			[Token(Token = "0x60005F2")]
			[Address(RVA = "0x6D048C0", Offset = "0x6D038C0", VA = "0x6D048C0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60005F3")]
			[Address(RVA = "0x6D048D0", Offset = "0x6D038D0", VA = "0x6D048D0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60005F4")]
		[Address(RVA = "0x6D038D0", Offset = "0x6D028D0", VA = "0x6D038D0")]
		public void Read(PanelEventHandler self, PointerEventData eventData, PointerEventType eventType)
		{
		}

		[Token(Token = "0x60005F5")]
		[Address(RVA = "0x6D03F90", Offset = "0x6D02F90", VA = "0x6D03F90")]
		public bool ComputeTarget(UnityEngine.UIElements.BaseRuntimePanel panel)
		{
			return default(bool);
		}

		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x6D04900", Offset = "0x6D03900", VA = "0x6D04900")]
		private Vector3 GetPanelPosition(VisualElement pickedElement, UIDocument document, Ray worldRay)
		{
			return default(Vector3);
		}

		[Token(Token = "0x60005F7")]
		[Address(RVA = "0x6D04480", Offset = "0x6D03480", VA = "0x6D04480")]
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
		[Address(RVA = "0x6D00C80", Offset = "0x6CFFC80", VA = "0x6D00C80", Slot = "30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000594")]
		[Address(RVA = "0x6D00C90", Offset = "0x6CFFC90", VA = "0x6D00C90", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x1700016B")]
	private GameObject selectableGameObject
	{
		[Token(Token = "0x6000595")]
		[Address(RVA = "0x6D01070", Offset = "0x6D00070", VA = "0x6D01070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016C")]
	private EventSystem eventSystem
	{
		[Token(Token = "0x6000596")]
		[Address(RVA = "0x6D01090", Offset = "0x6D00090", VA = "0x6D01090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016D")]
	private bool isCurrentFocusedPanel
	{
		[Token(Token = "0x6000597")]
		[Address(RVA = "0x6D011B0", Offset = "0x6D001B0", VA = "0x6D011B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016E")]
	private Focusable currentFocusedElement
	{
		[Token(Token = "0x6000598")]
		[Address(RVA = "0x6D01270", Offset = "0x6D00270", VA = "0x6D01270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x6D012B0", Offset = "0x6D002B0", VA = "0x6D012B0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x6D012D0", Offset = "0x6D002D0", VA = "0x6D012D0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x6D00ED0", Offset = "0x6CFFED0", VA = "0x6D00ED0")]
	private void RegisterCallbacks()
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x6D00D30", Offset = "0x6CFFD30", VA = "0x6D00D30")]
	private void UnregisterCallbacks()
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x6D012F0", Offset = "0x6D002F0", VA = "0x6D012F0")]
	private void OnPanelDestroyed()
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x6D01350", Offset = "0x6D00350", VA = "0x6D01350")]
	private void OnElementFocus(FocusEvent e)
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x6D01510", Offset = "0x6D00510", VA = "0x6D01510")]
	private void OnElementBlur(BlurEvent e)
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x6D01520", Offset = "0x6D00520", VA = "0x6D01520", Slot = "24")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x6D015A0", Offset = "0x6D005A0", VA = "0x6D015A0", Slot = "25")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x6D015C0", Offset = "0x6D005C0", VA = "0x6D015C0", Slot = "17")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x6D018E0", Offset = "0x6D008E0", VA = "0x6D018E0", Slot = "18")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x6D01B10", Offset = "0x6D00B10", VA = "0x6D01B10", Slot = "19")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x6D02160", Offset = "0x6D01160", VA = "0x6D02160", Slot = "26")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x6D02520", Offset = "0x6D01520", VA = "0x6D02520", Slot = "27")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x6D02600", Offset = "0x6D01600", VA = "0x6D02600", Slot = "29")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x6D02620", Offset = "0x6D01620", VA = "0x6D02620", Slot = "20")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x6D02910", Offset = "0x6D01910", VA = "0x6D02910", Slot = "21")]
	public void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x6D02B40", Offset = "0x6D01B40", VA = "0x6D02B40", Slot = "22")]
	public void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x6D02DA0", Offset = "0x6D01DA0", VA = "0x6D02DA0", Slot = "23")]
	public void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x6D01870", Offset = "0x6D00870", VA = "0x6D01870")]
	private void SendEvent(EventBase e, BaseEventData sourceEventData)
	{
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x6D02FB0", Offset = "0x6D01FB0", VA = "0x6D02FB0")]
	private void SendEvent(EventBase e, Event sourceEvent)
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x6D02FD0", Offset = "0x6D01FD0", VA = "0x6D02FD0")]
	public void Update()
	{
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x6D03270", Offset = "0x6D02270", VA = "0x6D03270")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x6D01F20", Offset = "0x6D00F20", VA = "0x6D01F20")]
	private void ProcessImguiEvents(Focusable target)
	{
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x6D03280", Offset = "0x6D02280", VA = "0x6D03280")]
	private void ProcessKeyboardEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x6D032F0", Offset = "0x6D022F0", VA = "0x6D032F0")]
	private void ProcessTabEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x6D03730", Offset = "0x6D02730", VA = "0x6D03730")]
	private void SendTabEvent(Event e, NavigationMoveEvent.Direction direction, Focusable target)
	{
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x6D03350", Offset = "0x6D02350", VA = "0x6D03350")]
	private void SendKeyUpEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x6D03540", Offset = "0x6D02540", VA = "0x6D03540")]
	private void SendKeyDownEvent(Event e, Focusable target)
	{
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x6D01780", Offset = "0x6D00780", VA = "0x6D01780")]
	private bool ReadPointerData(PointerEvent pe, PointerEventData eventData, PointerEventType eventType = PointerEventType.Default)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B7")]
	private void UpdatePointerEventTarget<TPointerEvent>(TPointerEvent e, PointerEvent eventData) where TPointerEvent : PointerEventBase<TPointerEvent>, new()
	{
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x6D02850", Offset = "0x6D01850", VA = "0x6D02850")]
	private UnityEngine.UIElements.NavigationDeviceType GetDeviceType(BaseEventData eventData)
	{
		return default(UnityEngine.UIElements.NavigationDeviceType);
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x6D03040", Offset = "0x6D02040", VA = "0x6D03040")]
	private void UpdateWorldSpacePointers()
	{
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x6D04390", Offset = "0x6D03390", VA = "0x6D04390")]
	public PanelEventHandler()
	{
	}
}
