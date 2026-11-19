// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IMGUIContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000290")]
public class IMGUIContainer : VisualElement, IDisposable
{
	[Token(Token = "0x2000291")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<IMGUIContainer, UxmlTraits>
	{
		[Token(Token = "0x6001194")]
		[Address(RVA = "0x6CB12C0", Offset = "0x6CB02C0", VA = "0x6CB12C0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000292")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x6001195")]
		[Address(RVA = "0x6CB1300", Offset = "0x6CB0300", VA = "0x6CB1300")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x2000293")]
	internal struct UITKScope : IDisposable
	{
		[Token(Token = "0x40009B9")]
		[FieldOffset(Offset = "0x0")]
		private bool wasUITK;

		[Token(Token = "0x6001196")]
		[Address(RVA = "0x6CB1360", Offset = "0x6CB0360", VA = "0x6CB1360")]
		public UITKScope()
		{
		}

		[Token(Token = "0x6001197")]
		[Address(RVA = "0x6CB1470", Offset = "0x6CB0470", VA = "0x6CB1470", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000294")]
	internal struct NotUITKScope : IDisposable
	{
		[Token(Token = "0x40009BA")]
		[FieldOffset(Offset = "0x0")]
		private bool wasUITK;

		[Token(Token = "0x6001198")]
		[Address(RVA = "0x6CB1510", Offset = "0x6CB0510", VA = "0x6CB1510")]
		public NotUITKScope()
		{
		}

		[Token(Token = "0x6001199")]
		[Address(RVA = "0x6CB1620", Offset = "0x6CB0620", VA = "0x6CB1620", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000295")]
	private struct GUIGlobals
	{
		[Token(Token = "0x40009BB")]
		[FieldOffset(Offset = "0x0")]
		public Matrix4x4 matrix;

		[Token(Token = "0x40009BC")]
		[FieldOffset(Offset = "0x40")]
		public Color color;

		[Token(Token = "0x40009BD")]
		[FieldOffset(Offset = "0x50")]
		public Color contentColor;

		[Token(Token = "0x40009BE")]
		[FieldOffset(Offset = "0x60")]
		public Color backgroundColor;

		[Token(Token = "0x40009BF")]
		[FieldOffset(Offset = "0x70")]
		public bool enabled;

		[Token(Token = "0x40009C0")]
		[FieldOffset(Offset = "0x71")]
		public bool changed;

		[Token(Token = "0x40009C1")]
		[FieldOffset(Offset = "0x74")]
		public int displayIndex;

		[Token(Token = "0x40009C2")]
		[FieldOffset(Offset = "0x78")]
		public float pixelsPerPoint;
	}

	[Token(Token = "0x400099D")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId cullingEnabledProperty;

	[Token(Token = "0x400099E")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId contextTypeProperty;

	[Token(Token = "0x400099F")]
	[FieldOffset(Offset = "0x2C8")]
	private Action m_OnGUIHandler;

	[Token(Token = "0x40009A0")]
	[FieldOffset(Offset = "0x2D0")]
	private UnityEngine.ObjectGUIState m_ObjectGUIState;

	[Token(Token = "0x40009A1")]
	[FieldOffset(Offset = "0x2D8")]
	internal bool useOwnerObjectGUIState;

	[Token(Token = "0x40009A3")]
	[FieldOffset(Offset = "0x2EC")]
	private bool m_CullingEnabled;

	[Token(Token = "0x40009A4")]
	[FieldOffset(Offset = "0x2ED")]
	private bool m_IsFocusDelegated;

	[Token(Token = "0x40009A5")]
	[FieldOffset(Offset = "0x2EE")]
	private bool m_RefreshCachedLayout;

	[Token(Token = "0x40009A6")]
	[FieldOffset(Offset = "0x2F0")]
	private GUILayoutUtility.LayoutCache m_Cache;

	[Token(Token = "0x40009A7")]
	[FieldOffset(Offset = "0x2F8")]
	private Rect m_CachedClippingRect;

	[Token(Token = "0x40009A8")]
	[FieldOffset(Offset = "0x308")]
	private Matrix4x4 m_CachedTransform;

	[Token(Token = "0x40009A9")]
	[FieldOffset(Offset = "0x348")]
	private ContextType m_ContextType;

	[Token(Token = "0x40009AA")]
	[FieldOffset(Offset = "0x34C")]
	private bool lostFocus;

	[Token(Token = "0x40009AB")]
	[FieldOffset(Offset = "0x34D")]
	private bool receivedFocus;

	[Token(Token = "0x40009AC")]
	[FieldOffset(Offset = "0x350")]
	private FocusChangeDirection focusChangeDirection;

	[Token(Token = "0x40009AD")]
	[FieldOffset(Offset = "0x358")]
	private bool hasFocusableControls;

	[Token(Token = "0x40009AE")]
	[FieldOffset(Offset = "0x35C")]
	private int newKeyboardFocusControlID;

	[Token(Token = "0x40009B0")]
	[FieldOffset(Offset = "0x130")]
	public static readonly string ussClassName;

	[Token(Token = "0x40009B1")]
	[FieldOffset(Offset = "0x138")]
	internal static readonly string ussFoldoutChildDepthClassName;

	[Token(Token = "0x40009B2")]
	[FieldOffset(Offset = "0x140")]
	internal static readonly List<string> ussFoldoutChildDepthClassNames;

	[Token(Token = "0x40009B3")]
	[FieldOffset(Offset = "0x364")]
	private GUIGlobals m_GUIGlobals;

	[Token(Token = "0x40009B4")]
	[FieldOffset(Offset = "0x148")]
	private static readonly ProfilerMarker k_OnGUIMarker;

	[Token(Token = "0x40009B5")]
	[FieldOffset(Offset = "0x150")]
	private static readonly ProfilerMarker k_ImmediateCallbackMarker;

	[Token(Token = "0x40009B6")]
	[FieldOffset(Offset = "0x158")]
	private static Event s_DefaultMeasureEvent;

	[Token(Token = "0x40009B7")]
	[FieldOffset(Offset = "0x160")]
	private static Event s_MeasureEvent;

	[Token(Token = "0x40009B8")]
	[FieldOffset(Offset = "0x168")]
	private static Event s_CurrentEvent;

	[Token(Token = "0x1700037F")]
	public Action onGUIHandler
	{
		[Token(Token = "0x600116A")]
		[Address(RVA = "0x6C91660", Offset = "0x6C90660", VA = "0x6C91660")]
		get
		{
			return null;
		}
		[Token(Token = "0x600116B")]
		[Address(RVA = "0x6C91670", Offset = "0x6C90670", VA = "0x6C91670")]
		set
		{
		}
	}

	[Token(Token = "0x17000380")]
	internal UnityEngine.ObjectGUIState guiState
	{
		[Token(Token = "0x600116C")]
		[Address(RVA = "0x6C916D0", Offset = "0x6C906D0", VA = "0x6C916D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000381")]
	internal Rect lastWorldClip
	{
		[Token(Token = "0x600116D")]
		[Address(RVA = "0x6C917A0", Offset = "0x6C907A0", VA = "0x6C917A0")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x600116E")]
		[Address(RVA = "0x6C917C0", Offset = "0x6C907C0", VA = "0x6C917C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000382")]
	[CreateProperty]
	public bool cullingEnabled
	{
		[Token(Token = "0x600116F")]
		[Address(RVA = "0x6C917D0", Offset = "0x6C907D0", VA = "0x6C917D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001170")]
		[Address(RVA = "0x6C917E0", Offset = "0x6C907E0", VA = "0x6C917E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000383")]
	private GUILayoutUtility.LayoutCache cache
	{
		[Token(Token = "0x6001171")]
		[Address(RVA = "0x6C91870", Offset = "0x6C90870", VA = "0x6C91870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000384")]
	private float layoutMeasuredWidth
	{
		[Token(Token = "0x6001172")]
		[Address(RVA = "0x6C91900", Offset = "0x6C90900", VA = "0x6C91900")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000385")]
	private float layoutMeasuredHeight
	{
		[Token(Token = "0x6001173")]
		[Address(RVA = "0x6C91990", Offset = "0x6C90990", VA = "0x6C91990")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000386")]
	[CreateProperty]
	public ContextType contextType
	{
		[Token(Token = "0x6001174")]
		[Address(RVA = "0x6C91A20", Offset = "0x6C90A20", VA = "0x6C91A20")]
		get
		{
			return default(ContextType);
		}
		[Token(Token = "0x6001175")]
		[Address(RVA = "0x6C91A30", Offset = "0x6C90A30", VA = "0x6C91A30")]
		set
		{
		}
	}

	[Token(Token = "0x17000387")]
	internal bool focusOnlyIfHasFocusableControls
	{
		[Token(Token = "0x6001176")]
		[Address(RVA = "0x6C91AB0", Offset = "0x6C90AB0", VA = "0x6C91AB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000388")]
	public override bool canGrabFocus
	{
		[Token(Token = "0x6001177")]
		[Address(RVA = "0x6C91AC0", Offset = "0x6C90AC0", VA = "0x6C91AC0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001178")]
	[Address(RVA = "0x6C91AE0", Offset = "0x6C90AE0", VA = "0x6C91AE0")]
	static IMGUIContainer()
	{
	}

	[Token(Token = "0x6001179")]
	[Address(RVA = "0x6C92030", Offset = "0x6C91030", VA = "0x6C92030")]
	public IMGUIContainer()
	{
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x6C92040", Offset = "0x6C91040", VA = "0x6C92040")]
	public IMGUIContainer(Action onGUIHandler)
	{
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x6C92430", Offset = "0x6C91430", VA = "0x6C92430")]
	private void OnGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600117C")]
	[Address(RVA = "0x6C92590", Offset = "0x6C91590", VA = "0x6C92590")]
	private void SaveGlobals()
	{
	}

	[Token(Token = "0x600117D")]
	[Address(RVA = "0x6C926C0", Offset = "0x6C916C0", VA = "0x6C926C0")]
	private void RestoreGlobals()
	{
	}

	[Token(Token = "0x600117E")]
	[Address(RVA = "0x6C92850", Offset = "0x6C91850", VA = "0x6C92850")]
	private void DoOnGUI(Event evt, Matrix4x4 parentTransform, Rect clippingRect, bool isComputingLayout, Rect layoutSize, Action onGUIHandler, bool canAffectFocus = true)
	{
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x6C93B60", Offset = "0x6C92B60", VA = "0x6C93B60")]
	public void MarkDirtyLayout()
	{
	}

	[Token(Token = "0x6001180")]
	[Address(RVA = "0x6C93B80", Offset = "0x6C92B80", VA = "0x6C93B80")]
	private void DoIMGUIRepaint()
	{
	}

	[Token(Token = "0x6001181")]
	[Address(RVA = "0x6C945D0", Offset = "0x6C935D0", VA = "0x6C945D0")]
	internal bool SendEventToIMGUI(EventBase evt, bool canAffectFocus = true, bool verifyBounds = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x6C94830", Offset = "0x6C93830", VA = "0x6C94830")]
	private bool SendEventToIMGUIRaw(EventBase evt, bool canAffectFocus, bool verifyBounds)
	{
		return default(bool);
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x6C94A10", Offset = "0x6C93A10", VA = "0x6C94A10")]
	private bool VerifyBounds(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6001184")]
	[Address(RVA = "0x6C94B60", Offset = "0x6C93B60", VA = "0x6C94B60")]
	private bool IsContainerCapturingTheMouse()
	{
		return default(bool);
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x6C94C80", Offset = "0x6C93C80", VA = "0x6C94C80")]
	private bool IsLocalEvent(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6001186")]
	[Address(RVA = "0x6C94E70", Offset = "0x6C93E70", VA = "0x6C94E70")]
	private bool IsEventInsideLocalWindow(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x6C950C0", Offset = "0x6C940C0", VA = "0x6C950C0")]
	private static bool IsDockAreaMouseUp(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x6C94A90", Offset = "0x6C93A90", VA = "0x6C94A90")]
	internal bool HandleIMGUIEvent(Event e, bool canAffectFocus)
	{
		return default(bool);
	}

	[Token(Token = "0x6001189")]
	[Address(RVA = "0x6C95250", Offset = "0x6C94250", VA = "0x6C95250")]
	internal bool HandleIMGUIEvent(Event e, Action onGUIHandler, bool canAffectFocus)
	{
		return default(bool);
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x6C94110", Offset = "0x6C93110", VA = "0x6C94110")]
	private bool HandleIMGUIEvent(Event e, Matrix4x4 worldTransform, Rect clippingRect, Action onGUIHandler, bool canAffectFocus)
	{
		return default(bool);
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x6C955E0", Offset = "0x6C945E0", VA = "0x6C955E0", Slot = "9")]
	[EventInterest(new Type[]
	{
		typeof(NavigationMoveEvent),
		typeof(NavigationSubmitEvent),
		typeof(NavigationCancelEvent),
		typeof(BlurEvent),
		typeof(FocusEvent),
		typeof(DetachFromPanelEvent),
		typeof(AttachToPanelEvent)
	})]
	[EventInterest(EventInterestOptionsInternal.TriggeredByOS)]
	internal override void HandleEventBubbleUpDisabled(EventBase evt)
	{
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x6C95600", Offset = "0x6C94600", VA = "0x6C95600", Slot = "8")]
	[EventInterest(EventInterestOptionsInternal.TriggeredByOS)]
	[EventInterest(new Type[]
	{
		typeof(NavigationMoveEvent),
		typeof(NavigationSubmitEvent),
		typeof(NavigationCancelEvent),
		typeof(BlurEvent),
		typeof(FocusEvent),
		typeof(DetachFromPanelEvent),
		typeof(AttachToPanelEvent)
	})]
	protected override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x600118D")]
	[Address(RVA = "0x6C95A50", Offset = "0x6C94A50", VA = "0x6C95A50")]
	private void SetFoldoutDepthClass()
	{
	}

	[Token(Token = "0x600118E")]
	[Address(RVA = "0x6C95BC0", Offset = "0x6C94BC0", VA = "0x6C95BC0", Slot = "137")]
	protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600118F")]
	[Address(RVA = "0x6C95180", Offset = "0x6C94180", VA = "0x6C95180")]
	private Rect GetCurrentClipRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6001190")]
	[Address(RVA = "0x6C95310", Offset = "0x6C94310", VA = "0x6C95310")]
	private static void GetCurrentTransformAndClip(IMGUIContainer container, Event evt, out Matrix4x4 transform, out Rect clipRect)
	{
	}

	[Token(Token = "0x6001191")]
	[Address(RVA = "0x6C95F50", Offset = "0x6C94F50", VA = "0x6C95F50", Slot = "141")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001192")]
	[Address(RVA = "0x6C95FC0", Offset = "0x6C94FC0", VA = "0x6C95FC0", Slot = "142")]
	protected virtual void Dispose(bool disposeManaged)
	{
	}
}
