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
		[Address(RVA = "0x6CF2C90", Offset = "0x6CF1C90", VA = "0x6CF2C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000118")]
	public static int allSelectableCount
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x6CF2D20", Offset = "0x6CF1D20", VA = "0x6CF2D20")]
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
		[Address(RVA = "0x6CF2D90", Offset = "0x6CF1D90", VA = "0x6CF2D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011A")]
	public Navigation navigation
	{
		[Token(Token = "0x600042F")]
		[Address(RVA = "0x6CF2F90", Offset = "0x6CF1F90", VA = "0x6CF2F90")]
		get
		{
			return default(Navigation);
		}
		[Token(Token = "0x6000430")]
		[Address(RVA = "0x6CF2FB0", Offset = "0x6CF1FB0", VA = "0x6CF2FB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public Transition transition
	{
		[Token(Token = "0x6000431")]
		[Address(RVA = "0x6CF30E0", Offset = "0x6CF20E0", VA = "0x6CF30E0")]
		get
		{
			return default(Transition);
		}
		[Token(Token = "0x6000432")]
		[Address(RVA = "0x6CF30F0", Offset = "0x6CF20F0", VA = "0x6CF30F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	public ColorBlock colors
	{
		[Token(Token = "0x6000433")]
		[Address(RVA = "0x6CF31A0", Offset = "0x6CF21A0", VA = "0x6CF31A0")]
		get
		{
			return default(ColorBlock);
		}
		[Token(Token = "0x6000434")]
		[Address(RVA = "0x6CF31E0", Offset = "0x6CF21E0", VA = "0x6CF31E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011D")]
	public SpriteState spriteState
	{
		[Token(Token = "0x6000435")]
		[Address(RVA = "0x6CF32C0", Offset = "0x6CF22C0", VA = "0x6CF32C0")]
		get
		{
			return default(SpriteState);
		}
		[Token(Token = "0x6000436")]
		[Address(RVA = "0x6CF32E0", Offset = "0x6CF22E0", VA = "0x6CF32E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011E")]
	public AnimationTriggers animationTriggers
	{
		[Token(Token = "0x6000437")]
		[Address(RVA = "0x6CF33A0", Offset = "0x6CF23A0", VA = "0x6CF33A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000438")]
		[Address(RVA = "0x6CF33B0", Offset = "0x6CF23B0", VA = "0x6CF33B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011F")]
	public Graphic targetGraphic
	{
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x6CF3460", Offset = "0x6CF2460", VA = "0x6CF3460")]
		get
		{
			return null;
		}
		[Token(Token = "0x600043A")]
		[Address(RVA = "0x6CF3470", Offset = "0x6CF2470", VA = "0x6CF3470")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	public bool interactable
	{
		[Token(Token = "0x600043B")]
		[Address(RVA = "0x6CF3520", Offset = "0x6CF2520", VA = "0x6CF3520")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x6CF3530", Offset = "0x6CF2530", VA = "0x6CF3530")]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	private bool isPointerInside
	{
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x6CF36E0", Offset = "0x6CF26E0", VA = "0x6CF36E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x6CF36F0", Offset = "0x6CF26F0", VA = "0x6CF36F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000122")]
	private bool isPointerDown
	{
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x6CF3700", Offset = "0x6CF2700", VA = "0x6CF3700")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x6CF3710", Offset = "0x6CF2710", VA = "0x6CF3710")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000123")]
	private bool hasSelection
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x6CF3720", Offset = "0x6CF2720", VA = "0x6CF3720")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x6CF3730", Offset = "0x6CF2730", VA = "0x6CF3730")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	public Image image
	{
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x6CF3740", Offset = "0x6CF2740", VA = "0x6CF3740")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x6CF37B0", Offset = "0x6CF27B0", VA = "0x6CF37B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000125")]
	public Animator animator
	{
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x6CF37D0", Offset = "0x6CF27D0", VA = "0x6CF37D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000126")]
	protected SelectionState currentSelectionState
	{
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x6CF3B70", Offset = "0x6CF2B70", VA = "0x6CF3B70")]
		get
		{
			return default(SelectionState);
		}
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x6CF2ED0", Offset = "0x6CF1ED0", VA = "0x6CF2ED0")]
	public static int AllSelectablesNoAlloc(Selectable[] selectables)
	{
		return default(int);
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x6CF07D0", Offset = "0x6CEF7D0", VA = "0x6CF07D0")]
	protected Selectable()
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x6CF3810", Offset = "0x6CF2810", VA = "0x6CF3810", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x6CF38B0", Offset = "0x6CF28B0", VA = "0x6CF38B0", Slot = "14")]
	protected override void OnCanvasGroupChanged()
	{
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x6CF3930", Offset = "0x6CF2930", VA = "0x6CF3930")]
	private bool ParentGroupAllowsInteraction()
	{
		return default(bool);
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x6CF3AF0", Offset = "0x6CF2AF0", VA = "0x6CF3AF0", Slot = "24")]
	public virtual bool IsInteractable()
	{
		return default(bool);
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x6CF3B10", Offset = "0x6CF2B10", VA = "0x6CF3B10", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x6CF0DE0", Offset = "0x6CEFDE0", VA = "0x6CF0DE0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x6CF3BC0", Offset = "0x6CF2BC0", VA = "0x6CF3BC0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x6CF3080", Offset = "0x6CF2080", VA = "0x6CF3080")]
	private void OnSetProperty()
	{
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x6CF10F0", Offset = "0x6CF00F0", VA = "0x6CF10F0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x6CF3BF0", Offset = "0x6CF2BF0", VA = "0x6CF3BF0")]
	private void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x6CF3C90", Offset = "0x6CF2C90", VA = "0x6CF3C90", Slot = "25")]
	protected virtual void InstantClearState()
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x6CF42E0", Offset = "0x6CF32E0", VA = "0x6CF42E0", Slot = "26")]
	protected virtual void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x6CF4570", Offset = "0x6CF3570", VA = "0x6CF4570")]
	public Selectable FindSelectable(Vector3 dir)
	{
		return null;
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x6CF4B20", Offset = "0x6CF3B20", VA = "0x6CF4B20")]
	private static Vector3 GetPointOnRectEdge(RectTransform rect, Vector2 dir)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x6CF4CA0", Offset = "0x6CF3CA0", VA = "0x6CF4CA0")]
	private void Navigate(AxisEventData eventData, Selectable sel)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x6CF2440", Offset = "0x6CF1440", VA = "0x6CF2440", Slot = "27")]
	public virtual Selectable FindSelectableOnLeft()
	{
		return null;
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x6CF25B0", Offset = "0x6CF15B0", VA = "0x6CF25B0", Slot = "28")]
	public virtual Selectable FindSelectableOnRight()
	{
		return null;
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x6CF2720", Offset = "0x6CF1720", VA = "0x6CF2720", Slot = "29")]
	public virtual Selectable FindSelectableOnUp()
	{
		return null;
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x6CF2890", Offset = "0x6CF1890", VA = "0x6CF2890", Slot = "30")]
	public virtual Selectable FindSelectableOnDown()
	{
		return null;
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x6CF2300", Offset = "0x6CF1300", VA = "0x6CF2300", Slot = "31")]
	public virtual void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x6CF3D90", Offset = "0x6CF2D90", VA = "0x6CF3D90")]
	private void StartColorTween(Color targetColor, bool instant)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x6CF3E80", Offset = "0x6CF2E80", VA = "0x6CF3E80")]
	private void DoSpriteSwap(Sprite newSprite)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x6CF3FE0", Offset = "0x6CF2FE0", VA = "0x6CF3FE0")]
	private void TriggerAnimation(string triggername)
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x6CF4D40", Offset = "0x6CF3D40", VA = "0x6CF4D40")]
	protected bool IsHighlighted()
	{
		return default(bool);
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x6CF3C50", Offset = "0x6CF2C50", VA = "0x6CF3C50")]
	protected bool IsPressed()
	{
		return default(bool);
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x6CF4DA0", Offset = "0x6CF3DA0", VA = "0x6CF4DA0")]
	private void EvaluateAndTransitionToSelectionState()
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x6CF1AE0", Offset = "0x6CF0AE0", VA = "0x6CF1AE0", Slot = "32")]
	public virtual void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x6CF1EB0", Offset = "0x6CF0EB0", VA = "0x6CF1EB0", Slot = "33")]
	public virtual void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x6CF4E30", Offset = "0x6CF3E30", VA = "0x6CF4E30", Slot = "34")]
	public virtual void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x6CF4ED0", Offset = "0x6CF3ED0", VA = "0x6CF4ED0", Slot = "35")]
	public virtual void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x6CF4F70", Offset = "0x6CF3F70", VA = "0x6CF4F70", Slot = "36")]
	public virtual void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x6CF5010", Offset = "0x6CF4010", VA = "0x6CF5010", Slot = "37")]
	public virtual void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x6CF50B0", Offset = "0x6CF40B0", VA = "0x6CF50B0", Slot = "38")]
	public virtual void Select()
	{
	}
}
