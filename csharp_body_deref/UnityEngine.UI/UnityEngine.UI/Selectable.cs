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
		[Address(RVA = "0x50E3180", Offset = "0x50E3180", VA = "0x50E3180")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000117")]
	public static int allSelectableCount
	{
		[Token(Token = "0x6000420")]
		[Address(RVA = "0x50E3210", Offset = "0x50E3210", VA = "0x50E3210")]
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
		[Address(RVA = "0x50E3280", Offset = "0x50E3280", VA = "0x50E3280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000119")]
	public Navigation navigation
	{
		[Token(Token = "0x6000423")]
		[Address(RVA = "0x50E3480", Offset = "0x50E3480", VA = "0x50E3480")]
		get
		{
			return default(Navigation);
		}
		[Token(Token = "0x6000424")]
		[Address(RVA = "0x50E34A0", Offset = "0x50E34A0", VA = "0x50E34A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011A")]
	public Transition transition
	{
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x50E35D0", Offset = "0x50E35D0", VA = "0x50E35D0")]
		get
		{
			return default(Transition);
		}
		[Token(Token = "0x6000426")]
		[Address(RVA = "0x50E35E0", Offset = "0x50E35E0", VA = "0x50E35E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public ColorBlock colors
	{
		[Token(Token = "0x6000427")]
		[Address(RVA = "0x50E3690", Offset = "0x50E3690", VA = "0x50E3690")]
		get
		{
			return default(ColorBlock);
		}
		[Token(Token = "0x6000428")]
		[Address(RVA = "0x50E36D0", Offset = "0x50E36D0", VA = "0x50E36D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	public SpriteState spriteState
	{
		[Token(Token = "0x6000429")]
		[Address(RVA = "0x50E37B0", Offset = "0x50E37B0", VA = "0x50E37B0")]
		get
		{
			return default(SpriteState);
		}
		[Token(Token = "0x600042A")]
		[Address(RVA = "0x50E37D0", Offset = "0x50E37D0", VA = "0x50E37D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011D")]
	public AnimationTriggers animationTriggers
	{
		[Token(Token = "0x600042B")]
		[Address(RVA = "0x50E3890", Offset = "0x50E3890", VA = "0x50E3890")]
		get
		{
			return null;
		}
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x50E38A0", Offset = "0x50E38A0", VA = "0x50E38A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011E")]
	public Graphic targetGraphic
	{
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x50E3950", Offset = "0x50E3950", VA = "0x50E3950")]
		get
		{
			return null;
		}
		[Token(Token = "0x600042E")]
		[Address(RVA = "0x50E3960", Offset = "0x50E3960", VA = "0x50E3960")]
		set
		{
		}
	}

	[Token(Token = "0x1700011F")]
	public bool interactable
	{
		[Token(Token = "0x600042F")]
		[Address(RVA = "0x50E3A10", Offset = "0x50E3A10", VA = "0x50E3A10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000430")]
		[Address(RVA = "0x50E3A20", Offset = "0x50E3A20", VA = "0x50E3A20")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	private bool isPointerInside
	{
		[Token(Token = "0x6000431")]
		[Address(RVA = "0x50E3BD0", Offset = "0x50E3BD0", VA = "0x50E3BD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000432")]
		[Address(RVA = "0x50E3BE0", Offset = "0x50E3BE0", VA = "0x50E3BE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	private bool isPointerDown
	{
		[Token(Token = "0x6000433")]
		[Address(RVA = "0x50E3BF0", Offset = "0x50E3BF0", VA = "0x50E3BF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000434")]
		[Address(RVA = "0x50E3C00", Offset = "0x50E3C00", VA = "0x50E3C00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000122")]
	private bool hasSelection
	{
		[Token(Token = "0x6000435")]
		[Address(RVA = "0x50E3C10", Offset = "0x50E3C10", VA = "0x50E3C10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000436")]
		[Address(RVA = "0x50E3C20", Offset = "0x50E3C20", VA = "0x50E3C20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000123")]
	public Image image
	{
		[Token(Token = "0x6000438")]
		[Address(RVA = "0x50E3C30", Offset = "0x50E3C30", VA = "0x50E3C30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x50E3CA0", Offset = "0x50E3CA0", VA = "0x50E3CA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	public Animator animator
	{
		[Token(Token = "0x600043A")]
		[Address(RVA = "0x50E3CC0", Offset = "0x50E3CC0", VA = "0x50E3CC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000125")]
	protected SelectionState currentSelectionState
	{
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x50E4060", Offset = "0x50E4060", VA = "0x50E4060")]
		get
		{
			return default(SelectionState);
		}
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x50E33C0", Offset = "0x50E33C0", VA = "0x50E33C0")]
	public static int AllSelectablesNoAlloc(Selectable[] selectables)
	{
		return default(int);
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x50DB700", Offset = "0x50DB700", VA = "0x50DB700")]
	protected Selectable()
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x50E3D00", Offset = "0x50E3D00", VA = "0x50E3D00", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x50E3DA0", Offset = "0x50E3DA0", VA = "0x50E3DA0", Slot = "14")]
	protected override void OnCanvasGroupChanged()
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x50E3E20", Offset = "0x50E3E20", VA = "0x50E3E20")]
	private bool ParentGroupAllowsInteraction()
	{
		return default(bool);
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x50E3FE0", Offset = "0x50E3FE0", VA = "0x50E3FE0", Slot = "24")]
	public virtual bool IsInteractable()
	{
		return default(bool);
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x50E4000", Offset = "0x50E4000", VA = "0x50E4000", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x50DBD90", Offset = "0x50DBD90", VA = "0x50DBD90", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x50E40B0", Offset = "0x50E40B0", VA = "0x50E40B0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x50E3570", Offset = "0x50E3570", VA = "0x50E3570")]
	private void OnSetProperty()
	{
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x50DC0A0", Offset = "0x50DC0A0", VA = "0x50DC0A0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x50E40E0", Offset = "0x50E40E0", VA = "0x50E40E0")]
	private void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x50E4180", Offset = "0x50E4180", VA = "0x50E4180", Slot = "25")]
	protected virtual void InstantClearState()
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x50E47D0", Offset = "0x50E47D0", VA = "0x50E47D0", Slot = "26")]
	protected virtual void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x50E4A80", Offset = "0x50E4A80", VA = "0x50E4A80")]
	public Selectable FindSelectable(Vector3 dir)
	{
		return null;
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x50E4FC0", Offset = "0x50E4FC0", VA = "0x50E4FC0")]
	private static Vector3 GetPointOnRectEdge(RectTransform rect, Vector2 dir)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x50E5110", Offset = "0x50E5110", VA = "0x50E5110")]
	private void Navigate(AxisEventData eventData, Selectable sel)
	{
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x50DD6B0", Offset = "0x50DD6B0", VA = "0x50DD6B0", Slot = "27")]
	public virtual Selectable FindSelectableOnLeft()
	{
		return null;
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x50DD780", Offset = "0x50DD780", VA = "0x50DD780", Slot = "28")]
	public virtual Selectable FindSelectableOnRight()
	{
		return null;
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x50DD850", Offset = "0x50DD850", VA = "0x50DD850", Slot = "29")]
	public virtual Selectable FindSelectableOnUp()
	{
		return null;
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x50DD920", Offset = "0x50DD920", VA = "0x50DD920", Slot = "30")]
	public virtual Selectable FindSelectableOnDown()
	{
		return null;
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x50DD5E0", Offset = "0x50DD5E0", VA = "0x50DD5E0", Slot = "31")]
	public virtual void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x50E4280", Offset = "0x50E4280", VA = "0x50E4280")]
	private void StartColorTween(Color targetColor, bool instant)
	{
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x50E4370", Offset = "0x50E4370", VA = "0x50E4370")]
	private void DoSpriteSwap(Sprite newSprite)
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x50E44D0", Offset = "0x50E44D0", VA = "0x50E44D0")]
	private void TriggerAnimation(string triggername)
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x50E51B0", Offset = "0x50E51B0", VA = "0x50E51B0")]
	protected bool IsHighlighted()
	{
		return default(bool);
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x50E4140", Offset = "0x50E4140", VA = "0x50E4140")]
	protected bool IsPressed()
	{
		return default(bool);
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x50E5210", Offset = "0x50E5210", VA = "0x50E5210")]
	private void EvaluateAndTransitionToSelectionState()
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x50DCA20", Offset = "0x50DCA20", VA = "0x50DCA20", Slot = "32")]
	public virtual void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x50DCE00", Offset = "0x50DCE00", VA = "0x50DCE00", Slot = "33")]
	public virtual void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x50E52A0", Offset = "0x50E52A0", VA = "0x50E52A0", Slot = "34")]
	public virtual void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x50E5340", Offset = "0x50E5340", VA = "0x50E5340", Slot = "35")]
	public virtual void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x50E53E0", Offset = "0x50E53E0", VA = "0x50E53E0", Slot = "36")]
	public virtual void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x50E5480", Offset = "0x50E5480", VA = "0x50E5480", Slot = "37")]
	public virtual void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x50E5520", Offset = "0x50E5520", VA = "0x50E5520", Slot = "38")]
	public virtual void Select()
	{
	}
}
