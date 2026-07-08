using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Token(Token = "0x2000069")]
[AddComponentMenu("UI/Selectable", 35)]
[ExecuteAlways]
[SelectionBase]
[DisallowMultipleComponent]
public class Selectable : UIBehaviour, IMoveHandler, IEventSystemHandler, IPointerDownHandler, IPointerUpHandler, IPointerEnterHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x200006A")]
	public enum Transition
	{
		[Token(Token = "0x4000216")]
		None,
		[Token(Token = "0x4000217")]
		ColorTint,
		[Token(Token = "0x4000218")]
		SpriteSwap,
		[Token(Token = "0x4000219")]
		Animation
	}

	[Token(Token = "0x200006B")]
	protected enum SelectionState
	{
		[Token(Token = "0x400021B")]
		Normal,
		[Token(Token = "0x400021C")]
		Highlighted,
		[Token(Token = "0x400021D")]
		Pressed,
		[Token(Token = "0x400021E")]
		Selected,
		[Token(Token = "0x400021F")]
		Disabled
	}

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x0")]
	protected static Selectable[] s_Selectables;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x8")]
	protected static int s_SelectableCount;

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x20")]
	private bool m_EnableCalled;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x28")]
	[FormerlySerializedAs("navigation")]
	[SerializeField]
	private Navigation m_Navigation;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x50")]
	[FormerlySerializedAs("transition")]
	[SerializeField]
	private Transition m_Transition;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x54")]
	[FormerlySerializedAs("colors")]
	[SerializeField]
	private ColorBlock m_Colors;

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0xB0")]
	[FormerlySerializedAs("spriteState")]
	[SerializeField]
	private SpriteState m_SpriteState;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0xD0")]
	[FormerlySerializedAs("animationTriggers")]
	[SerializeField]
	private AnimationTriggers m_AnimationTriggers;

	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0xD8")]
	[Tooltip("Can the Selectable be interacted with?")]
	[SerializeField]
	private bool m_Interactable;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0xE0")]
	[FormerlySerializedAs("highlightGraphic")]
	[FormerlySerializedAs("m_HighlightGraphic")]
	[SerializeField]
	private Graphic m_TargetGraphic;

	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0xE8")]
	private bool m_GroupsAllowInteraction;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0xEC")]
	protected int m_CurrentIndex;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0xF8")]
	private readonly List<CanvasGroup> m_CanvasGroupCache;

	[Token(Token = "0x17000116")]
	public static Selectable[] allSelectablesArray
	{
		[Token(Token = "0x600041F")]
		[Address(RVA = "0x4DBB830", Offset = "0x4DBB830", VA = "0x4DBB830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000117")]
	public static int allSelectableCount
	{
		[Token(Token = "0x6000420")]
		[Address(RVA = "0x4DBB8C0", Offset = "0x4DBB8C0", VA = "0x4DBB8C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000118")]
	[Obsolete("Replaced with allSelectablesArray to have better performance when disabling a element", false)]
	public static List<Selectable> allSelectables
	{
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x4DBB930", Offset = "0x4DBB930", VA = "0x4DBB930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000119")]
	public Navigation navigation
	{
		[Token(Token = "0x6000423")]
		[Address(RVA = "0x4DBBB30", Offset = "0x4DBBB30", VA = "0x4DBBB30")]
		get
		{
			return default(Navigation);
		}
		[Token(Token = "0x6000424")]
		[Address(RVA = "0x4DBBB50", Offset = "0x4DBBB50", VA = "0x4DBBB50")]
		set
		{
		}
	}

	[Token(Token = "0x1700011A")]
	public Transition transition
	{
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x4DBBC80", Offset = "0x4DBBC80", VA = "0x4DBBC80")]
		get
		{
			return default(Transition);
		}
		[Token(Token = "0x6000426")]
		[Address(RVA = "0x4DBBC90", Offset = "0x4DBBC90", VA = "0x4DBBC90")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public ColorBlock colors
	{
		[Token(Token = "0x6000427")]
		[Address(RVA = "0x4DBBD40", Offset = "0x4DBBD40", VA = "0x4DBBD40")]
		get
		{
			return default(ColorBlock);
		}
		[Token(Token = "0x6000428")]
		[Address(RVA = "0x4DBBD80", Offset = "0x4DBBD80", VA = "0x4DBBD80")]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	public SpriteState spriteState
	{
		[Token(Token = "0x6000429")]
		[Address(RVA = "0x4DBBE60", Offset = "0x4DBBE60", VA = "0x4DBBE60")]
		get
		{
			return default(SpriteState);
		}
		[Token(Token = "0x600042A")]
		[Address(RVA = "0x4DBBE80", Offset = "0x4DBBE80", VA = "0x4DBBE80")]
		set
		{
		}
	}

	[Token(Token = "0x1700011D")]
	public AnimationTriggers animationTriggers
	{
		[Token(Token = "0x600042B")]
		[Address(RVA = "0x4DBBF40", Offset = "0x4DBBF40", VA = "0x4DBBF40")]
		get
		{
			return null;
		}
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x4DBBF50", Offset = "0x4DBBF50", VA = "0x4DBBF50")]
		set
		{
		}
	}

	[Token(Token = "0x1700011E")]
	public Graphic targetGraphic
	{
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x4DBC000", Offset = "0x4DBC000", VA = "0x4DBC000")]
		get
		{
			return null;
		}
		[Token(Token = "0x600042E")]
		[Address(RVA = "0x4DBC010", Offset = "0x4DBC010", VA = "0x4DBC010")]
		set
		{
		}
	}

	[Token(Token = "0x1700011F")]
	public bool interactable
	{
		[Token(Token = "0x600042F")]
		[Address(RVA = "0x4DBC0C0", Offset = "0x4DBC0C0", VA = "0x4DBC0C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000430")]
		[Address(RVA = "0x4DBC0D0", Offset = "0x4DBC0D0", VA = "0x4DBC0D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	private bool isPointerInside
	{
		[Token(Token = "0x6000431")]
		[Address(RVA = "0x4DBC280", Offset = "0x4DBC280", VA = "0x4DBC280")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000432")]
		[Address(RVA = "0x4DBC290", Offset = "0x4DBC290", VA = "0x4DBC290")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	private bool isPointerDown
	{
		[Token(Token = "0x6000433")]
		[Address(RVA = "0x4DBC2A0", Offset = "0x4DBC2A0", VA = "0x4DBC2A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000434")]
		[Address(RVA = "0x4DBC2B0", Offset = "0x4DBC2B0", VA = "0x4DBC2B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000122")]
	private bool hasSelection
	{
		[Token(Token = "0x6000435")]
		[Address(RVA = "0x4DBC2C0", Offset = "0x4DBC2C0", VA = "0x4DBC2C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000436")]
		[Address(RVA = "0x4DBC2D0", Offset = "0x4DBC2D0", VA = "0x4DBC2D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000123")]
	public Image image
	{
		[Token(Token = "0x6000438")]
		[Address(RVA = "0x4DBC2E0", Offset = "0x4DBC2E0", VA = "0x4DBC2E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x4DBC350", Offset = "0x4DBC350", VA = "0x4DBC350")]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	public Animator animator
	{
		[Token(Token = "0x600043A")]
		[Address(RVA = "0x4DBC370", Offset = "0x4DBC370", VA = "0x4DBC370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000125")]
	protected SelectionState currentSelectionState
	{
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x4DBC710", Offset = "0x4DBC710", VA = "0x4DBC710")]
		get
		{
			return default(SelectionState);
		}
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x4DBBA70", Offset = "0x4DBBA70", VA = "0x4DBBA70")]
	public static int AllSelectablesNoAlloc(Selectable[] selectables)
	{
		return default(int);
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x4DB9290", Offset = "0x4DB9290", VA = "0x4DB9290")]
	protected Selectable()
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x4DBC3B0", Offset = "0x4DBC3B0", VA = "0x4DBC3B0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x4DBC450", Offset = "0x4DBC450", VA = "0x4DBC450", Slot = "14")]
	protected override void OnCanvasGroupChanged()
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x4DBC4D0", Offset = "0x4DBC4D0", VA = "0x4DBC4D0")]
	private bool ParentGroupAllowsInteraction()
	{
		return default(bool);
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x4DBC690", Offset = "0x4DBC690", VA = "0x4DBC690", Slot = "24")]
	public virtual bool IsInteractable()
	{
		return default(bool);
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x4DBC6B0", Offset = "0x4DBC6B0", VA = "0x4DBC6B0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x4DB98A0", Offset = "0x4DB98A0", VA = "0x4DB98A0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x4DBC760", Offset = "0x4DBC760", VA = "0x4DBC760", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x4DBBC20", Offset = "0x4DBBC20", VA = "0x4DBBC20")]
	private void OnSetProperty()
	{
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x4DB9BB0", Offset = "0x4DB9BB0", VA = "0x4DB9BB0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x4DBC790", Offset = "0x4DBC790", VA = "0x4DBC790")]
	private void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x4DBC830", Offset = "0x4DBC830", VA = "0x4DBC830", Slot = "25")]
	protected virtual void InstantClearState()
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x4DBCE80", Offset = "0x4DBCE80", VA = "0x4DBCE80", Slot = "26")]
	protected virtual void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x4DBD130", Offset = "0x4DBD130", VA = "0x4DBD130")]
	public Selectable FindSelectable(Vector3 dir)
	{
		return null;
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x4DBD670", Offset = "0x4DBD670", VA = "0x4DBD670")]
	private static Vector3 GetPointOnRectEdge(RectTransform rect, Vector2 dir)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x4DBD7C0", Offset = "0x4DBD7C0", VA = "0x4DBD7C0")]
	private void Navigate(AxisEventData eventData, Selectable sel)
	{
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x4DBB1C0", Offset = "0x4DBB1C0", VA = "0x4DBB1C0", Slot = "27")]
	public virtual Selectable FindSelectableOnLeft()
	{
		return null;
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x4DBB290", Offset = "0x4DBB290", VA = "0x4DBB290", Slot = "28")]
	public virtual Selectable FindSelectableOnRight()
	{
		return null;
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x4DBB360", Offset = "0x4DBB360", VA = "0x4DBB360", Slot = "29")]
	public virtual Selectable FindSelectableOnUp()
	{
		return null;
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x4DBB430", Offset = "0x4DBB430", VA = "0x4DBB430", Slot = "30")]
	public virtual Selectable FindSelectableOnDown()
	{
		return null;
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x4DBB0F0", Offset = "0x4DBB0F0", VA = "0x4DBB0F0", Slot = "31")]
	public virtual void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x4DBC930", Offset = "0x4DBC930", VA = "0x4DBC930")]
	private void StartColorTween(Color targetColor, bool instant)
	{
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x4DBCA20", Offset = "0x4DBCA20", VA = "0x4DBCA20")]
	private void DoSpriteSwap(Sprite newSprite)
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x4DBCB80", Offset = "0x4DBCB80", VA = "0x4DBCB80")]
	private void TriggerAnimation(string triggername)
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x4DBD860", Offset = "0x4DBD860", VA = "0x4DBD860")]
	protected bool IsHighlighted()
	{
		return default(bool);
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x4DBC7F0", Offset = "0x4DBC7F0", VA = "0x4DBC7F0")]
	protected bool IsPressed()
	{
		return default(bool);
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x4DBD8C0", Offset = "0x4DBD8C0", VA = "0x4DBD8C0")]
	private void EvaluateAndTransitionToSelectionState()
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x4DBA530", Offset = "0x4DBA530", VA = "0x4DBA530", Slot = "32")]
	public virtual void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x4DBA910", Offset = "0x4DBA910", VA = "0x4DBA910", Slot = "33")]
	public virtual void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x4DBD950", Offset = "0x4DBD950", VA = "0x4DBD950", Slot = "34")]
	public virtual void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x4DBD9F0", Offset = "0x4DBD9F0", VA = "0x4DBD9F0", Slot = "35")]
	public virtual void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x4DBDA90", Offset = "0x4DBDA90", VA = "0x4DBDA90", Slot = "36")]
	public virtual void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x4DBDB30", Offset = "0x4DBDB30", VA = "0x4DBDB30", Slot = "37")]
	public virtual void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x4DBDBD0", Offset = "0x4DBDBD0", VA = "0x4DBDBD0", Slot = "38")]
	public virtual void Select()
	{
	}
}
