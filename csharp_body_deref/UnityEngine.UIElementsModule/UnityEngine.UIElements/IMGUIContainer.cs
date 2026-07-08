using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200021A")]
public class IMGUIContainer : VisualElement, IDisposable
{
	[Token(Token = "0x200021B")]
	public new class UxmlFactory : UxmlFactory<IMGUIContainer, UxmlTraits>
	{
		[Token(Token = "0x6000DFB")]
		[Address(RVA = "0x4D242D0", Offset = "0x4D242D0", VA = "0x4D242D0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200021C")]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x6000DFC")]
		[Address(RVA = "0x4D24310", Offset = "0x4D24310", VA = "0x4D24310")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x200021D")]
	private struct GUIGlobals
	{
		[Token(Token = "0x400079E")]
		[FieldOffset(Offset = "0x0")]
		public Matrix4x4 matrix;

		[Token(Token = "0x400079F")]
		[FieldOffset(Offset = "0x40")]
		public Color color;

		[Token(Token = "0x40007A0")]
		[FieldOffset(Offset = "0x50")]
		public Color contentColor;

		[Token(Token = "0x40007A1")]
		[FieldOffset(Offset = "0x60")]
		public Color backgroundColor;

		[Token(Token = "0x40007A2")]
		[FieldOffset(Offset = "0x70")]
		public bool enabled;

		[Token(Token = "0x40007A3")]
		[FieldOffset(Offset = "0x71")]
		public bool changed;

		[Token(Token = "0x40007A4")]
		[FieldOffset(Offset = "0x74")]
		public int displayIndex;
	}

	[Token(Token = "0x4000782")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty cullingEnabledProperty;

	[Token(Token = "0x4000783")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty contextTypeProperty;

	[Token(Token = "0x4000784")]
	[FieldOffset(Offset = "0x3D8")]
	private Action m_OnGUIHandler;

	[Token(Token = "0x4000785")]
	[FieldOffset(Offset = "0x3E0")]
	private UnityEngine.ObjectGUIState m_ObjectGUIState;

	[Token(Token = "0x4000786")]
	[FieldOffset(Offset = "0x3E8")]
	internal bool useOwnerObjectGUIState;

	[Token(Token = "0x4000788")]
	[FieldOffset(Offset = "0x3FC")]
	private bool m_CullingEnabled;

	[Token(Token = "0x4000789")]
	[FieldOffset(Offset = "0x3FD")]
	private bool m_IsFocusDelegated;

	[Token(Token = "0x400078A")]
	[FieldOffset(Offset = "0x3FE")]
	private bool m_RefreshCachedLayout;

	[Token(Token = "0x400078B")]
	[FieldOffset(Offset = "0x400")]
	private GUILayoutUtility.LayoutCache m_Cache;

	[Token(Token = "0x400078C")]
	[FieldOffset(Offset = "0x408")]
	private Rect m_CachedClippingRect;

	[Token(Token = "0x400078D")]
	[FieldOffset(Offset = "0x418")]
	private Matrix4x4 m_CachedTransform;

	[Token(Token = "0x400078E")]
	[FieldOffset(Offset = "0x458")]
	private ContextType m_ContextType;

	[Token(Token = "0x400078F")]
	[FieldOffset(Offset = "0x45C")]
	private bool lostFocus;

	[Token(Token = "0x4000790")]
	[FieldOffset(Offset = "0x45D")]
	private bool receivedFocus;

	[Token(Token = "0x4000791")]
	[FieldOffset(Offset = "0x460")]
	private FocusChangeDirection focusChangeDirection;

	[Token(Token = "0x4000792")]
	[FieldOffset(Offset = "0x468")]
	private bool hasFocusableControls;

	[Token(Token = "0x4000793")]
	[FieldOffset(Offset = "0x46C")]
	private int newKeyboardFocusControlID;

	[Token(Token = "0x4000795")]
	[FieldOffset(Offset = "0x140")]
	public static readonly string ussClassName;

	[Token(Token = "0x4000796")]
	[FieldOffset(Offset = "0x148")]
	internal static readonly string ussFoldoutChildDepthClassName;

	[Token(Token = "0x4000797")]
	[FieldOffset(Offset = "0x150")]
	internal static readonly List<string> ussFoldoutChildDepthClassNames;

	[Token(Token = "0x4000798")]
	[FieldOffset(Offset = "0x474")]
	private GUIGlobals m_GUIGlobals;

	[Token(Token = "0x4000799")]
	[FieldOffset(Offset = "0x158")]
	private static readonly ProfilerMarker k_OnGUIMarker;

	[Token(Token = "0x400079A")]
	[FieldOffset(Offset = "0x160")]
	private static readonly ProfilerMarker k_ImmediateCallbackMarker;

	[Token(Token = "0x400079B")]
	[FieldOffset(Offset = "0x168")]
	private static Event s_DefaultMeasureEvent;

	[Token(Token = "0x400079C")]
	[FieldOffset(Offset = "0x170")]
	private static Event s_MeasureEvent;

	[Token(Token = "0x400079D")]
	[FieldOffset(Offset = "0x178")]
	private static Event s_CurrentEvent;

	[Token(Token = "0x17000294")]
	public Action onGUIHandler
	{
		[Token(Token = "0x6000DCF")]
		[Address(RVA = "0x4D1FDD0", Offset = "0x4D1FDD0", VA = "0x4D1FDD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DD0")]
		[Address(RVA = "0x4D1FDE0", Offset = "0x4D1FDE0", VA = "0x4D1FDE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000295")]
	internal UnityEngine.ObjectGUIState guiState
	{
		[Token(Token = "0x6000DD1")]
		[Address(RVA = "0x4D1FE40", Offset = "0x4D1FE40", VA = "0x4D1FE40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000296")]
	internal Rect lastWorldClip
	{
		[Token(Token = "0x6000DD2")]
		[Address(RVA = "0x4D1FEF0", Offset = "0x4D1FEF0", VA = "0x4D1FEF0")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000DD3")]
		[Address(RVA = "0x4D1FF10", Offset = "0x4D1FF10", VA = "0x4D1FF10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000297")]
	[CreateProperty]
	public bool cullingEnabled
	{
		[Token(Token = "0x6000DD4")]
		[Address(RVA = "0x4D1FF20", Offset = "0x4D1FF20", VA = "0x4D1FF20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DD5")]
		[Address(RVA = "0x4D1FF30", Offset = "0x4D1FF30", VA = "0x4D1FF30")]
		set
		{
		}
	}

	[Token(Token = "0x17000298")]
	private GUILayoutUtility.LayoutCache cache
	{
		[Token(Token = "0x6000DD6")]
		[Address(RVA = "0x4D20000", Offset = "0x4D20000", VA = "0x4D20000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000299")]
	private float layoutMeasuredWidth
	{
		[Token(Token = "0x6000DD7")]
		[Address(RVA = "0x4D20090", Offset = "0x4D20090", VA = "0x4D20090")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700029A")]
	private float layoutMeasuredHeight
	{
		[Token(Token = "0x6000DD8")]
		[Address(RVA = "0x4D20130", Offset = "0x4D20130", VA = "0x4D20130")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700029B")]
	[CreateProperty]
	public ContextType contextType
	{
		[Token(Token = "0x6000DD9")]
		[Address(RVA = "0x4D201D0", Offset = "0x4D201D0", VA = "0x4D201D0")]
		get
		{
			return default(ContextType);
		}
		[Token(Token = "0x6000DDA")]
		[Address(RVA = "0x4D201E0", Offset = "0x4D201E0", VA = "0x4D201E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700029C")]
	internal bool focusOnlyIfHasFocusableControls
	{
		[Token(Token = "0x6000DDB")]
		[Address(RVA = "0x4D20280", Offset = "0x4D20280", VA = "0x4D20280")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029D")]
	public override bool canGrabFocus
	{
		[Token(Token = "0x6000DDC")]
		[Address(RVA = "0x4D20290", Offset = "0x4D20290", VA = "0x4D20290", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x4D202B0", Offset = "0x4D202B0", VA = "0x4D202B0")]
	static IMGUIContainer()
	{
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x4D20810", Offset = "0x4D20810", VA = "0x4D20810")]
	public IMGUIContainer()
	{
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x4D20820", Offset = "0x4D20820", VA = "0x4D20820")]
	public IMGUIContainer(Action onGUIHandler)
	{
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x4D20C30", Offset = "0x4D20C30", VA = "0x4D20C30")]
	private void OnGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x4D20CF0", Offset = "0x4D20CF0", VA = "0x4D20CF0")]
	private void SaveGlobals()
	{
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x4D20E10", Offset = "0x4D20E10", VA = "0x4D20E10")]
	private void RestoreGlobals()
	{
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x4D20F50", Offset = "0x4D20F50", VA = "0x4D20F50")]
	private void DoOnGUI(Event evt, Matrix4x4 parentTransform, Rect clippingRect, bool isComputingLayout, Rect layoutSize, Action onGUIHandler, bool canAffectFocus = true)
	{
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x4D22080", Offset = "0x4D22080", VA = "0x4D22080")]
	public void MarkDirtyLayout()
	{
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x4D220A0", Offset = "0x4D220A0", VA = "0x4D220A0")]
	private void ProcessEvent(EventBase evt)
	{
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x4D224D0", Offset = "0x4D224D0", VA = "0x4D224D0")]
	private void DoIMGUIRepaint()
	{
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x4D22230", Offset = "0x4D22230", VA = "0x4D22230")]
	internal bool SendEventToIMGUI(EventBase evt, bool canAffectFocus = true, bool verifyBounds = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x4D22D40", Offset = "0x4D22D40", VA = "0x4D22D40")]
	private bool SendEventToIMGUIRaw(EventBase evt, bool canAffectFocus, bool verifyBounds)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x4D22F30", Offset = "0x4D22F30", VA = "0x4D22F30")]
	private bool VerifyBounds(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x4D23080", Offset = "0x4D23080", VA = "0x4D23080")]
	private bool IsContainerCapturingTheMouse()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x4D231B0", Offset = "0x4D231B0", VA = "0x4D231B0")]
	private bool IsLocalEvent(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x4D233A0", Offset = "0x4D233A0", VA = "0x4D233A0")]
	private bool IsEventInsideLocalWindow(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x4D23550", Offset = "0x4D23550", VA = "0x4D23550")]
	private static bool IsDockAreaMouseUp(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x4D22FB0", Offset = "0x4D22FB0", VA = "0x4D22FB0")]
	internal bool HandleIMGUIEvent(Event e, bool canAffectFocus)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x4D23680", Offset = "0x4D23680", VA = "0x4D23680")]
	internal bool HandleIMGUIEvent(Event e, Action onGUIHandler, bool canAffectFocus)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x4D22950", Offset = "0x4D22950", VA = "0x4D22950")]
	private bool HandleIMGUIEvent(Event e, Matrix4x4 worldTransform, Rect clippingRect, Action onGUIHandler, bool canAffectFocus)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x4D23A90", Offset = "0x4D23A90", VA = "0x4D23A90", Slot = "9")]
	[EventInterest(EventInterestOptionsInternal.TriggeredByOS)]
	[EventInterest(new Type[]
	{
		typeof(NavigationMoveEvent),
		typeof(NavigationSubmitEvent),
		typeof(NavigationCancelEvent)
	})]
	protected override void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x4D23AD0", Offset = "0x4D23AD0", VA = "0x4D23AD0", Slot = "11")]
	[EventInterest(new Type[]
	{
		typeof(NavigationMoveEvent),
		typeof(NavigationSubmitEvent),
		typeof(NavigationCancelEvent)
	})]
	[EventInterest(EventInterestOptionsInternal.TriggeredByOS)]
	internal override void ExecuteDefaultActionDisabledAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x4D23B10", Offset = "0x4D23B10", VA = "0x4D23B10", Slot = "10")]
	[EventInterest(new Type[]
	{
		typeof(BlurEvent),
		typeof(FocusEvent),
		typeof(DetachFromPanelEvent),
		typeof(AttachToPanelEvent)
	})]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x4D23DE0", Offset = "0x4D23DE0", VA = "0x4D23DE0")]
	private void SetFoldoutDepthClass()
	{
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x4D23F60", Offset = "0x4D23F60", VA = "0x4D23F60", Slot = "96")]
	protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x4D23640", Offset = "0x4D23640", VA = "0x4D23640")]
	private Rect GetCurrentClipRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x4D23740", Offset = "0x4D23740", VA = "0x4D23740")]
	private static void GetCurrentTransformAndClip(IMGUIContainer container, Event evt, out Matrix4x4 transform, out Rect clipRect)
	{
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x4D24230", Offset = "0x4D24230", VA = "0x4D24230", Slot = "98")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x4D242A0", Offset = "0x4D242A0", VA = "0x4D242A0", Slot = "99")]
	protected virtual void Dispose(bool disposeManaged)
	{
	}
}
