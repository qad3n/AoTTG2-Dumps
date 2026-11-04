// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IMGUIContainer
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x32BC7B0", Offset = "0x32BADB0", VA = "0x1832BC7B0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000292")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x6001195")]
		[Address(RVA = "0x32BC7F0", Offset = "0x32BADF0", VA = "0x1832BC7F0")]
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
		[Address(RVA = "0x32BC350", Offset = "0x32BA950", VA = "0x1832BC350")]
		public UITKScope()
		{
		}

		[Token(Token = "0x6001197")]
		[Address(RVA = "0x32BC2B0", Offset = "0x32BA8B0", VA = "0x1832BC2B0", Slot = "4")]
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
		[Address(RVA = "0x32B0F20", Offset = "0x32AF520", VA = "0x1832B0F20")]
		public NotUITKScope()
		{
		}

		[Token(Token = "0x6001199")]
		[Address(RVA = "0x32B0E80", Offset = "0x32AF480", VA = "0x1832B0E80", Slot = "4")]
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
		[Address(RVA = "0x3279CF0", Offset = "0x32782F0", VA = "0x183279CF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600116B")]
		[Address(RVA = "0x3279E20", Offset = "0x3278420", VA = "0x183279E20")]
		set
		{
		}
	}

	[Token(Token = "0x17000380")]
	internal UnityEngine.ObjectGUIState guiState
	{
		[Token(Token = "0x600116C")]
		[Address(RVA = "0x3279BC0", Offset = "0x32781C0", VA = "0x183279BC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000381")]
	internal Rect lastWorldClip
	{
		[Token(Token = "0x600116D")]
		[Address(RVA = "0x3279C80", Offset = "0x3278280", VA = "0x183279C80")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x600116E")]
		[Address(RVA = "0x3279E10", Offset = "0x3278410", VA = "0x183279E10")]
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
		[Address(RVA = "0x3279BB0", Offset = "0x32781B0", VA = "0x183279BB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001170")]
		[Address(RVA = "0x3279D80", Offset = "0x3278380", VA = "0x183279D80")]
		set
		{
		}
	}

	[Token(Token = "0x17000383")]
	private GUILayoutUtility.LayoutCache cache
	{
		[Token(Token = "0x6001171")]
		[Address(RVA = "0x3279B00", Offset = "0x3278100", VA = "0x183279B00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000384")]
	private float layoutMeasuredWidth
	{
		[Token(Token = "0x6001172")]
		[Address(RVA = "0x3279CC0", Offset = "0x32782C0", VA = "0x183279CC0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000385")]
	private float layoutMeasuredHeight
	{
		[Token(Token = "0x6001173")]
		[Address(RVA = "0x3279C90", Offset = "0x3278290", VA = "0x183279C90")]
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
		[Address(RVA = "0x323A0A0", Offset = "0x32386A0", VA = "0x18323A0A0")]
		get
		{
			return default(ContextType);
		}
		[Token(Token = "0x6001175")]
		[Address(RVA = "0x3279D00", Offset = "0x3278300", VA = "0x183279D00")]
		set
		{
		}
	}

	[Token(Token = "0x17000387")]
	internal bool focusOnlyIfHasFocusableControls
	{
		[Token(Token = "0x6001176")]
		[Address(RVA = "0x31D1E30", Offset = "0x31D0430", VA = "0x1831D1E30")]
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
		[Address(RVA = "0x3279B80", Offset = "0x3278180", VA = "0x183279B80", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001178")]
	[Address(RVA = "0x3279060", Offset = "0x3277660", VA = "0x183279060")]
	static IMGUIContainer()
	{
	}

	[Token(Token = "0x6001179")]
	[Address(RVA = "0x3279AF0", Offset = "0x32780F0", VA = "0x183279AF0")]
	public IMGUIContainer()
	{
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x3279760", Offset = "0x3277D60", VA = "0x183279760")]
	public IMGUIContainer(Action onGUIHandler)
	{
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x3278500", Offset = "0x3276B00", VA = "0x183278500")]
	private void OnGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600117C")]
	[Address(RVA = "0x32787E0", Offset = "0x3276DE0", VA = "0x1832787E0")]
	private void SaveGlobals()
	{
	}

	[Token(Token = "0x600117D")]
	[Address(RVA = "0x3278660", Offset = "0x3276C60", VA = "0x183278660")]
	private void RestoreGlobals()
	{
	}

	[Token(Token = "0x600117E")]
	[Address(RVA = "0x3275D10", Offset = "0x3274310", VA = "0x183275D10")]
	private void DoOnGUI(Event evt, Matrix4x4 parentTransform, Rect clippingRect, bool isComputingLayout, Rect layoutSize, Action onGUIHandler, bool canAffectFocus = true)
	{
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x32784E0", Offset = "0x3276AE0", VA = "0x1832784E0")]
	public void MarkDirtyLayout()
	{
	}

	[Token(Token = "0x6001180")]
	[Address(RVA = "0x32754D0", Offset = "0x3273AD0", VA = "0x1832754D0")]
	private void DoIMGUIRepaint()
	{
	}

	[Token(Token = "0x6001181")]
	[Address(RVA = "0x3278A00", Offset = "0x3277000", VA = "0x183278A00")]
	internal bool SendEventToIMGUI(EventBase evt, bool canAffectFocus = true, bool verifyBounds = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x3278920", Offset = "0x3276F20", VA = "0x183278920")]
	private bool SendEventToIMGUIRaw(EventBase evt, bool canAffectFocus, bool verifyBounds)
	{
		return default(bool);
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x3278E10", Offset = "0x3277410", VA = "0x183278E10")]
	private bool VerifyBounds(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6001184")]
	[Address(RVA = "0x3277F00", Offset = "0x3276500", VA = "0x183277F00")]
	private bool IsContainerCapturingTheMouse()
	{
		return default(bool);
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x3278300", Offset = "0x3276900", VA = "0x183278300")]
	private bool IsLocalEvent(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6001186")]
	[Address(RVA = "0x3278120", Offset = "0x3276720", VA = "0x183278120")]
	private bool IsEventInsideLocalWindow(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x3278030", Offset = "0x3276630", VA = "0x183278030")]
	private static bool IsDockAreaMouseUp(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x3277840", Offset = "0x3275E40", VA = "0x183277840")]
	internal bool HandleIMGUIEvent(Event e, bool canAffectFocus)
	{
		return default(bool);
	}

	[Token(Token = "0x6001189")]
	[Address(RVA = "0x32775D0", Offset = "0x3275BD0", VA = "0x1832775D0")]
	internal bool HandleIMGUIEvent(Event e, Action onGUIHandler, bool canAffectFocus)
	{
		return default(bool);
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x3277AA0", Offset = "0x32760A0", VA = "0x183277AA0")]
	private bool HandleIMGUIEvent(Event e, Matrix4x4 worldTransform, Rect clippingRect, Action onGUIHandler, bool canAffectFocus)
	{
		return default(bool);
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x25EACE0", Offset = "0x25E92E0", VA = "0x1825EACE0", Slot = "9")]
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
	[Address(RVA = "0x3277000", Offset = "0x3275600", VA = "0x183277000", Slot = "8")]
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
	[Address(RVA = "0x3278C80", Offset = "0x3277280", VA = "0x183278C80")]
	private void SetFoldoutDepthClass()
	{
	}

	[Token(Token = "0x600118E")]
	[Address(RVA = "0x3275910", Offset = "0x3273F10", VA = "0x183275910", Slot = "137")]
	protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600118F")]
	[Address(RVA = "0x3276D60", Offset = "0x3275360", VA = "0x183276D60")]
	private Rect GetCurrentClipRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6001190")]
	[Address(RVA = "0x3276E50", Offset = "0x3275450", VA = "0x183276E50")]
	private static void GetCurrentTransformAndClip(IMGUIContainer container, Event evt, out Matrix4x4 transform, out Rect clipRect)
	{
	}

	[Token(Token = "0x6001191")]
	[Address(RVA = "0x3275450", Offset = "0x3273A50", VA = "0x183275450", Slot = "141")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001192")]
	[Address(RVA = "0x32754B0", Offset = "0x3273AB0", VA = "0x1832754B0", Slot = "142")]
	protected virtual void Dispose(bool disposeManaged)
	{
	}
}
