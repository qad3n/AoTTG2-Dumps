// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Selectable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Token(Token = "0x2000067")]
[AddComponentMenu("UI (Canvas)/Selectable", 35)]
[ExecuteAlways]
[SelectionBase]
[DisallowMultipleComponent]
[UnityEngine.UGUIHelpURL("Selectable")]
public class Selectable : UIBehaviour, IMoveHandler, IEventSystemHandler, IPointerDownHandler, IPointerUpHandler, IPointerEnterHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x2000068")]
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

	[Token(Token = "0x2000069")]
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

	[Token(Token = "0x17000117")]
	public static Selectable[] allSelectablesArray
	{
		[Token(Token = "0x600042B")]
		[Address(RVA = "0x32E7D70", Offset = "0x32E6370", VA = "0x1832E7D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000118")]
	public static int allSelectableCount
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x32E7D20", Offset = "0x32E6320", VA = "0x1832E7D20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000119")]
	[Obsolete("Replaced with allSelectablesArray to have better performance when disabling a element", false)]
	public static List<Selectable> allSelectables
	{
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x32E7E00", Offset = "0x32E6400", VA = "0x1832E7E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011A")]
	public Navigation navigation
	{
		[Token(Token = "0x600042F")]
		[Address(RVA = "0x2B475F0", Offset = "0x2B45BF0", VA = "0x182B475F0")]
		get
		{
			return default(Navigation);
		}
		[Token(Token = "0x6000430")]
		[Address(RVA = "0x32E8300", Offset = "0x32E6900", VA = "0x1832E8300")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public Transition transition
	{
		[Token(Token = "0x6000431")]
		[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540")]
		get
		{
			return default(Transition);
		}
		[Token(Token = "0x6000432")]
		[Address(RVA = "0x32E8450", Offset = "0x32E6A50", VA = "0x1832E8450")]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	public ColorBlock colors
	{
		[Token(Token = "0x6000433")]
		[Address(RVA = "0x32E7F40", Offset = "0x32E6540", VA = "0x1832E7F40")]
		get
		{
			return default(ColorBlock);
		}
		[Token(Token = "0x6000434")]
		[Address(RVA = "0x32E80F0", Offset = "0x32E66F0", VA = "0x1832E80F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011D")]
	public SpriteState spriteState
	{
		[Token(Token = "0x6000435")]
		[Address(RVA = "0x32E8070", Offset = "0x32E6670", VA = "0x1832E8070")]
		get
		{
			return default(SpriteState);
		}
		[Token(Token = "0x6000436")]
		[Address(RVA = "0x32E8380", Offset = "0x32E6980", VA = "0x1832E8380")]
		set
		{
		}
	}

	[Token(Token = "0x1700011E")]
	public AnimationTriggers animationTriggers
	{
		[Token(Token = "0x6000437")]
		[Address(RVA = "0x187BC40", Offset = "0x187A240", VA = "0x18187BC40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000438")]
		[Address(RVA = "0x32E8090", Offset = "0x32E6690", VA = "0x1832E8090")]
		set
		{
		}
	}

	[Token(Token = "0x1700011F")]
	public Graphic targetGraphic
	{
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x187BC50", Offset = "0x187A250", VA = "0x18187BC50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600043A")]
		[Address(RVA = "0x32E83F0", Offset = "0x32E69F0", VA = "0x1832E83F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	public bool interactable
	{
		[Token(Token = "0x600043B")]
		[Address(RVA = "0x266E4E0", Offset = "0x266CAE0", VA = "0x18266E4E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x32E8190", Offset = "0x32E6790", VA = "0x1832E8190")]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	private bool isPointerInside
	{
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x1C3F930", Offset = "0x1C3DF30", VA = "0x181C3F930")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x2C12990", Offset = "0x2C10F90", VA = "0x182C12990")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000122")]
	private bool isPointerDown
	{
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x1C3FA20", Offset = "0x1C3E020", VA = "0x181C3FA20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x2C123E0", Offset = "0x2C109E0", VA = "0x182C123E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000123")]
	private bool hasSelection
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x1C3F8A0", Offset = "0x1C3DEA0", VA = "0x181C3F8A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x1C3FA30", Offset = "0x1C3E030", VA = "0x181C3FA30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	public Image image
	{
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x32E7FF0", Offset = "0x32E65F0", VA = "0x1832E7FF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x1BD5200", Offset = "0x1BD3800", VA = "0x181BD5200")]
		set
		{
		}
	}

	[Token(Token = "0x17000125")]
	public Animator animator
	{
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x32E7F00", Offset = "0x32E6500", VA = "0x1832E7F00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000126")]
	protected SelectionState currentSelectionState
	{
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x32E7F80", Offset = "0x32E6580", VA = "0x1832E7F80")]
		get
		{
			return default(SelectionState);
		}
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x32E5610", Offset = "0x32E3C10", VA = "0x1832E5610")]
	public static int AllSelectablesNoAlloc(Selectable[] selectables)
	{
		return default(int);
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x32E7BA0", Offset = "0x32E61A0", VA = "0x1832E7BA0")]
	protected Selectable()
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x32E56E0", Offset = "0x32E3CE0", VA = "0x1832E56E0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x32E6AF0", Offset = "0x32E50F0", VA = "0x1832E6AF0", Slot = "14")]
	protected override void OnCanvasGroupChanged()
	{
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x32E7570", Offset = "0x32E5B70", VA = "0x1832E7570")]
	private bool ParentGroupAllowsInteraction()
	{
		return default(bool);
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x32E6980", Offset = "0x32E4F80", VA = "0x1832E6980", Slot = "24")]
	public virtual bool IsInteractable()
	{
		return default(bool);
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x32E6BA0", Offset = "0x32E51A0", VA = "0x1832E6BA0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x32E6DC0", Offset = "0x32E53C0", VA = "0x1832E6DC0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x32E7540", Offset = "0x32E5B40", VA = "0x1832E7540", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x32E6BA0", Offset = "0x32E51A0", VA = "0x1832E6BA0")]
	private void OnSetProperty()
	{
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x32E6C10", Offset = "0x32E5210", VA = "0x1832E6C10", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x32E6A90", Offset = "0x32E5090", VA = "0x1832E6A90")]
	private void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x32E6800", Offset = "0x32E4E00", VA = "0x1832E6800", Slot = "25")]
	protected virtual void InstantClearState()
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x32E5820", Offset = "0x32E3E20", VA = "0x1832E5820", Slot = "26")]
	protected virtual void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x32E5F20", Offset = "0x32E4520", VA = "0x1832E5F20")]
	public Selectable FindSelectable(Vector3 dir)
	{
		return null;
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x32E65C0", Offset = "0x32E4BC0", VA = "0x1832E65C0")]
	private static Vector3 GetPointOnRectEdge(RectTransform rect, Vector2 dir)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x32E69F0", Offset = "0x32E4FF0", VA = "0x1832E69F0")]
	private void Navigate(AxisEventData eventData, Selectable sel)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x32E5C80", Offset = "0x32E4280", VA = "0x1832E5C80", Slot = "27")]
	public virtual Selectable FindSelectableOnLeft()
	{
		return null;
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x32E5D60", Offset = "0x32E4360", VA = "0x1832E5D60", Slot = "28")]
	public virtual Selectable FindSelectableOnRight()
	{
		return null;
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x32E5E40", Offset = "0x32E4440", VA = "0x1832E5E40", Slot = "29")]
	public virtual Selectable FindSelectableOnUp()
	{
		return null;
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x32E5BA0", Offset = "0x32E41A0", VA = "0x1832E5BA0", Slot = "30")]
	public virtual Selectable FindSelectableOnDown()
	{
		return null;
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x32E70E0", Offset = "0x32E56E0", VA = "0x1832E70E0", Slot = "31")]
	public virtual void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x32E77F0", Offset = "0x32E5DF0", VA = "0x1832E77F0")]
	private void StartColorTween(Color targetColor, bool instant)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x32E5780", Offset = "0x32E3D80", VA = "0x1832E5780")]
	private void DoSpriteSwap(Sprite newSprite)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x32E78D0", Offset = "0x32E5ED0", VA = "0x1832E78D0")]
	private void TriggerAnimation(string triggername)
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x32E6920", Offset = "0x32E4F20", VA = "0x1832E6920")]
	protected bool IsHighlighted()
	{
		return default(bool);
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x32E69A0", Offset = "0x32E4FA0", VA = "0x1832E69A0")]
	protected bool IsPressed()
	{
		return default(bool);
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x32E5B30", Offset = "0x32E4130", VA = "0x1832E5B30")]
	private void EvaluateAndTransitionToSelectionState()
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x32E7200", Offset = "0x32E5800", VA = "0x1832E7200", Slot = "32")]
	public virtual void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x32E7450", Offset = "0x32E5A50", VA = "0x1832E7450", Slot = "33")]
	public virtual void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x32E7370", Offset = "0x32E5970", VA = "0x1832E7370", Slot = "34")]
	public virtual void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x32E73E0", Offset = "0x32E59E0", VA = "0x1832E73E0", Slot = "35")]
	public virtual void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x32E74D0", Offset = "0x32E5AD0", VA = "0x1832E74D0", Slot = "36")]
	public virtual void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x32E6B30", Offset = "0x32E5130", VA = "0x1832E6B30", Slot = "37")]
	public virtual void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x32E7700", Offset = "0x32E5D00", VA = "0x1832E7700", Slot = "38")]
	public virtual void Select()
	{
	}
}
