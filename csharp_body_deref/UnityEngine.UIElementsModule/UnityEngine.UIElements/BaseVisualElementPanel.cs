// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseVisualElementPanel
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.UIElements.Layout;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002B6")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule", "UnityEditor.VectorGraphicsModule" })]
internal abstract class BaseVisualElementPanel : IPanel, IDisposable, IGroupBox
{
	[Token(Token = "0x4000A62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<BaseVisualElementPanel> m_panelDisposed;

	[Token(Token = "0x4000A63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private UIElementsBridge m_UIElementsBridge;

	[Token(Token = "0x4000A64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private float m_Scale;

	[Token(Token = "0x4000A65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal LayoutConfig layoutConfig;

	[Token(Token = "0x4000A66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private float m_PixelsPerPoint;

	[Token(Token = "0x4000A69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	internal IPanelRenderer panelRenderer;

	[Token(Token = "0x4000A6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private TimerEventScheduler m_Scheduler;

	[Token(Token = "0x4000A70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private TimeFunction m_TimeSinceStartupFunc;

	[Token(Token = "0x4000A72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	internal ElementUnderPointer m_TopElementUnderPointers;

	[Token(Token = "0x4000A73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_isFlatChanged;

	[Token(Token = "0x4000A74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private bool m_IsFlat;

	[Token(Token = "0x4000A75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action m_atlasChanged;

	[Token(Token = "0x4000A76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private HierarchyEvent m_hierarchyChanged;

	[Token(Token = "0x4000A77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<IPanel> beforeUpdate;

	[Token(Token = "0x4000A78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly Vector2 s_OutsidePanelCoordinates;

	[Token(Token = "0x4000A79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public readonly Lazy<HashSet<TextElement>> textElementRegistry;

	[Token(Token = "0x4000A7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	internal Func<AbstractGenericMenu> CreateMenuFunctor;

	[Token(Token = "0x17000399")]
	public abstract UnityEngine.EventInterests IMGUIEventInterests
	{
		[Token(Token = "0x60011F4")]
		get;
		[Token(Token = "0x60011F5")]
		set;
	}

	[Token(Token = "0x1700039A")]
	public abstract ScriptableObject ownerObject
	{
		[Token(Token = "0x60011F6")]
		get;
		[Token(Token = "0x60011F7")]
		protected set;
	}

	[Token(Token = "0x1700039B")]
	public abstract SavePersistentViewData saveViewData
	{
		[Token(Token = "0x60011F8")]
		get;
	}

	[Token(Token = "0x1700039C")]
	public abstract GetViewDataDictionary getViewDataDictionary
	{
		[Token(Token = "0x60011F9")]
		get;
	}

	[Token(Token = "0x1700039D")]
	public abstract int IMGUIContainersCount
	{
		[Token(Token = "0x60011FA")]
		get;
		[Token(Token = "0x60011FB")]
		set;
	}

	[Token(Token = "0x1700039E")]
	public abstract FocusController focusController
	{
		[Token(Token = "0x60011FC")]
		get;
		[Token(Token = "0x60011FD")]
		set;
	}

	[Token(Token = "0x1700039F")]
	public abstract IMGUIContainer rootIMGUIContainer
	{
		[Token(Token = "0x60011FE")]
		get;
	}

	[Token(Token = "0x170003A0")]
	internal UIElementsBridge uiElementsBridge
	{
		[Token(Token = "0x6001201")]
		[Address(RVA = "0x32AA400", Offset = "0x32A8A00", VA = "0x1832AA400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A1")]
	internal float scale
	{
		[Token(Token = "0x600120D")]
		[Address(RVA = "0x32AA270", Offset = "0x32A8870", VA = "0x1832AA270")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600120E")]
		[Address(RVA = "0x32AA770", Offset = "0x32A8D70", VA = "0x1832AA770")]
		set
		{
		}
	}

	[Token(Token = "0x170003A2")]
	public float scaledPixelsPerPoint
	{
		[Token(Token = "0x600120F")]
		[Address(RVA = "0x32AA280", Offset = "0x32A8880", VA = "0x1832AA280", Slot = "9")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170003A3")]
	public float referenceSpritePixelsPerUnit
	{
		[Token(Token = "0x6001210")]
		[Address(RVA = "0x12BEF70", Offset = "0x12BD570", VA = "0x1812BEF70")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001211")]
		[Address(RVA = "0x12BF1F0", Offset = "0x12BD7F0", VA = "0x1812BF1F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003A4")]
	internal PanelClearSettings clearSettings
	{
		[Token(Token = "0x6001212")]
		[Address(RVA = "0x32AA200", Offset = "0x32A8800", VA = "0x1832AA200")]
		[CompilerGenerated]
		get
		{
			return default(PanelClearSettings);
		}
		[Token(Token = "0x6001213")]
		[Address(RVA = "0x32AA700", Offset = "0x32A8D00", VA = "0x1832AA700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003A5")]
	internal bool duringLayoutPhase
	{
		[Token(Token = "0x6001214")]
		[Address(RVA = "0xB5B960", Offset = "0xB59F60", VA = "0x180B5B960")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001215")]
		[Address(RVA = "0xB5BDB0", Offset = "0xB5A3B0", VA = "0x180B5BDB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003A6")]
	public bool isDirty
	{
		[Token(Token = "0x6001216")]
		[Address(RVA = "0x32AA220", Offset = "0x32A8820", VA = "0x1832AA220", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A7")]
	internal abstract uint version
	{
		[Token(Token = "0x6001217")]
		get;
	}

	[Token(Token = "0x170003A8")]
	internal abstract uint repaintVersion
	{
		[Token(Token = "0x6001218")]
		get;
	}

	[Token(Token = "0x170003A9")]
	internal abstract uint hierarchyVersion
	{
		[Token(Token = "0x6001219")]
		get;
	}

	[Token(Token = "0x170003AA")]
	internal virtual RepaintData repaintData
	{
		[Token(Token = "0x600121C")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580", Slot = "38")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600121D")]
		[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900", Slot = "39")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003AB")]
	internal virtual ICursorManager cursorManager
	{
		[Token(Token = "0x600121E")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20", Slot = "40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600121F")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60", Slot = "41")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003AC")]
	public ContextualMenuManager contextualMenuManager
	{
		[Token(Token = "0x6001220")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890", Slot = "42")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001221")]
		[Address(RVA = "0x58AA30", Offset = "0x589030", VA = "0x18058AA30")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170003AD")]
	internal virtual DataBindingManager dataBindingManager
	{
		[Token(Token = "0x6001222")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220", Slot = "43")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001223")]
		[Address(RVA = "0x1537500", Offset = "0x1535B00", VA = "0x181537500", Slot = "44")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003AE")]
	public abstract VisualElement visualTree
	{
		[Token(Token = "0x6001224")]
		get;
	}

	[Token(Token = "0x170003AF")]
	public abstract EventDispatcher dispatcher
	{
		[Token(Token = "0x6001225")]
		get;
		[Token(Token = "0x6001226")]
		set;
	}

	[Token(Token = "0x170003B0")]
	internal TimerEventScheduler scheduler
	{
		[Token(Token = "0x6001228")]
		[Address(RVA = "0x32AA290", Offset = "0x32A8890", VA = "0x1832AA290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B1")]
	internal abstract IStylePropertyAnimationSystem styleAnimationSystem
	{
		[Token(Token = "0x6001229")]
		get;
		[Token(Token = "0x600122A")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		set;
	}

	[Token(Token = "0x170003B2")]
	public abstract ContextType contextType
	{
		[Token(Token = "0x600122B")]
		get;
	}

	[Token(Token = "0x170003B3")]
	internal TimeFunction TimeSinceStartupFunc
	{
		[Token(Token = "0x600122C")]
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B4")]
	internal bool disposed
	{
		[Token(Token = "0x6001233")]
		[Address(RVA = "0x1ABF0C0", Offset = "0x1ABD6C0", VA = "0x181ABF0C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001234")]
		[Address(RVA = "0x318B9F0", Offset = "0x3189FF0", VA = "0x18318B9F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003B5")]
	public bool isFlat
	{
		[Token(Token = "0x600123F")]
		[Address(RVA = "0x222D960", Offset = "0x222BF60", VA = "0x18222D960")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001240")]
		[Address(RVA = "0x32AA720", Offset = "0x32A8D20", VA = "0x1832AA720")]
		set
		{
		}
	}

	[Token(Token = "0x170003B6")]
	public abstract AtlasBase atlas
	{
		[Token(Token = "0x6001245")]
		get;
		[Token(Token = "0x6001246")]
		set;
	}

	[Token(Token = "0x14000027")]
	internal event Action<BaseVisualElementPanel> panelDisposed
	{
		[Token(Token = "0x60011FF")]
		[Address(RVA = "0x32AA150", Offset = "0x32A8750", VA = "0x1832AA150")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001200")]
		[Address(RVA = "0x32AA650", Offset = "0x32A8C50", VA = "0x1832AA650")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000028")]
	internal event Action isFlatChanged
	{
		[Token(Token = "0x600123D")]
		[Address(RVA = "0x32AA0B0", Offset = "0x32A86B0", VA = "0x1832AA0B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600123E")]
		[Address(RVA = "0x32AA5B0", Offset = "0x32A8BB0", VA = "0x1832AA5B0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000029")]
	internal event Action atlasChanged
	{
		[Token(Token = "0x6001242")]
		[Address(RVA = "0x32A9F70", Offset = "0x32A8570", VA = "0x1832A9F70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001243")]
		[Address(RVA = "0x32AA470", Offset = "0x32A8A70", VA = "0x1832AA470")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400002A")]
	internal event HierarchyEvent hierarchyChanged
	{
		[Token(Token = "0x6001247")]
		[Address(RVA = "0x32AA010", Offset = "0x32A8610", VA = "0x1832AA010")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001248")]
		[Address(RVA = "0x32AA510", Offset = "0x32A8B10", VA = "0x1832AA510")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x32A9CA0", Offset = "0x32A82A0", VA = "0x1832A9CA0")]
	protected BaseVisualElementPanel()
	{
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x32A8DE0", Offset = "0x32A73E0", VA = "0x1832A8DE0", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x32A8E40", Offset = "0x32A7440", VA = "0x1832A8E40", Slot = "24")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001205")]
	public abstract void Repaint(Event e);

	[Token(Token = "0x6001206")]
	public abstract void ValidateLayout();

	[Token(Token = "0x6001207")]
	public abstract void TickSchedulingUpdaters();

	[Token(Token = "0x6001208")]
	public abstract void UpdateForRepaint();

	[Token(Token = "0x6001209")]
	public abstract void UpdateAnimations();

	[Token(Token = "0x600120A")]
	public abstract void UpdateBindings();

	[Token(Token = "0x600120B")]
	public abstract void UpdateDataBinding();

	[Token(Token = "0x600120C")]
	public abstract void ApplyStyles();

	[Token(Token = "0x600121A")]
	internal abstract void OnVersionChanged(VisualElement ele, VersionChangeType changeTypeFlag);

	[Token(Token = "0x600121B")]
	internal abstract void SetUpdater(IVisualTreeUpdater updater, VisualTreeUpdatePhase phase);

	[Token(Token = "0x6001227")]
	[Address(RVA = "0x32A9420", Offset = "0x32A7A20", VA = "0x1832A9420")]
	internal void SendEvent(EventBase e, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x600122D")]
	[Address(RVA = "0x32A96E0", Offset = "0x32A7CE0", VA = "0x1832A96E0")]
	public long TimeSinceStartupMs()
	{
		return default(long);
	}

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x32A9860", Offset = "0x32A7E60", VA = "0x1832A9860")]
	public double TimeSinceStartupSeconds()
	{
		return default(double);
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x32A8DD0", Offset = "0x32A73D0", VA = "0x1832A8DD0")]
	internal static double DefaultTimeSinceStartup()
	{
		return default(double);
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x32A9050", Offset = "0x32A7650", VA = "0x1832A9050", Slot = "51")]
	public VisualElement Pick(Vector2 point)
	{
		return null;
	}

	[Token(Token = "0x6001231")]
	public abstract VisualElement Pick(Vector2 point, int pointerId);

	[Token(Token = "0x6001232")]
	public abstract VisualElement PickAll(Vector2 point, List<VisualElement> picked);

	[Token(Token = "0x6001235")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal abstract IVisualTreeUpdater GetUpdater(VisualTreeUpdatePhase phase);

	[Token(Token = "0x6001236")]
	[Address(RVA = "0x32A8FB0", Offset = "0x32A75B0", VA = "0x1832A8FB0")]
	internal VisualElement GetTopElementUnderPointer(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6001237")]
	[Address(RVA = "0x32A93A0", Offset = "0x32A79A0", VA = "0x1832A93A0")]
	internal void RemoveElementFromPointerCache(VisualElement e)
	{
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x32A96A0", Offset = "0x32A7CA0", VA = "0x1832A96A0")]
	internal void SetTopElementUnderPointer(int pointerId, VisualElement element, EventBase triggerEvent)
	{
	}

	[Token(Token = "0x6001239")]
	[Address(RVA = "0x32A9660", Offset = "0x32A7C60", VA = "0x1832A9660")]
	internal void SetTopElementUnderPointer(int pointerId, VisualElement element, Vector2 position)
	{
	}

	[Token(Token = "0x600123A")]
	[Address(RVA = "0x32A90D0", Offset = "0x32A76D0", VA = "0x1832A90D0")]
	internal VisualElement RecomputeTopElementUnderPointer(int pointerId, Vector2 pointerPos, EventBase triggerEvent)
	{
		return null;
	}

	[Token(Token = "0x600123B")]
	[Address(RVA = "0x32A8CF0", Offset = "0x32A72F0", VA = "0x1832A8CF0")]
	internal void ClearCachedElementUnderPointer(int pointerId, EventBase triggerEvent)
	{
	}

	[Token(Token = "0x600123C")]
	[Address(RVA = "0x32A8D30", Offset = "0x32A7330", VA = "0x1832A8D30")]
	internal bool CommitElementUnderPointers()
	{
		return default(bool);
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x32A9560", Offset = "0x32A7B60", VA = "0x1832A9560")]
	internal void SetSpecializedHierarchyFlagsUpdater()
	{
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x32A8FE0", Offset = "0x32A75E0", VA = "0x1832A8FE0")]
	protected void InvokeAtlasChanged()
	{
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x32A9020", Offset = "0x32A7620", VA = "0x1832A9020")]
	internal void InvokeHierarchyChanged(VisualElement ve, HierarchyChangeType changeType, [Optional] IReadOnlyList<VisualElement> additionalContext)
	{
	}

	[Token(Token = "0x600124A")]
	[Address(RVA = "0x32A9000", Offset = "0x32A7600", VA = "0x1832A9000")]
	internal void InvokeBeforeUpdate()
	{
	}

	[Token(Token = "0x600124B")]
	[Address(RVA = "0x32A99B0", Offset = "0x32A7FB0", VA = "0x1832A99B0")]
	internal bool UpdateElementUnderPointers()
	{
		return default(bool);
	}

	[Token(Token = "0x600124C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionAdded(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x600124D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionRemoved(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x600124E")]
	[Address(RVA = "0x32A93D0", Offset = "0x32A79D0", VA = "0x1832A93D0", Slot = "57")]
	public virtual void Render()
	{
	}

	[Token(Token = "0x600124F")]
	[Address(RVA = "0x32A8DA0", Offset = "0x32A73A0", VA = "0x1832A8DA0")]
	internal AbstractGenericMenu CreateMenu()
	{
		return null;
	}
}
