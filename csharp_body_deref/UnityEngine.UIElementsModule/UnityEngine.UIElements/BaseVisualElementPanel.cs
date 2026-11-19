// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseVisualElementPanel
// Update status: unchanged since the previous dump
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
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
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
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
		[Address(RVA = "0x6CB37B0", Offset = "0x6CB27B0", VA = "0x6CB37B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A1")]
	internal float scale
	{
		[Token(Token = "0x600120D")]
		[Address(RVA = "0x6CB3CD0", Offset = "0x6CB2CD0", VA = "0x6CB3CD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600120E")]
		[Address(RVA = "0x6CB3CE0", Offset = "0x6CB2CE0", VA = "0x6CB3CE0")]
		set
		{
		}
	}

	[Token(Token = "0x170003A2")]
	public float scaledPixelsPerPoint
	{
		[Token(Token = "0x600120F")]
		[Address(RVA = "0x6CB3DF0", Offset = "0x6CB2DF0", VA = "0x6CB3DF0", Slot = "9")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170003A3")]
	public float referenceSpritePixelsPerUnit
	{
		[Token(Token = "0x6001210")]
		[Address(RVA = "0x6CB3E00", Offset = "0x6CB2E00", VA = "0x6CB3E00")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001211")]
		[Address(RVA = "0x6CB3E10", Offset = "0x6CB2E10", VA = "0x6CB3E10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003A4")]
	internal PanelClearSettings clearSettings
	{
		[Token(Token = "0x6001212")]
		[Address(RVA = "0x6CB3E20", Offset = "0x6CB2E20", VA = "0x6CB3E20")]
		[CompilerGenerated]
		get
		{
			return default(PanelClearSettings);
		}
		[Token(Token = "0x6001213")]
		[Address(RVA = "0x6CB3E40", Offset = "0x6CB2E40", VA = "0x6CB3E40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003A5")]
	internal bool duringLayoutPhase
	{
		[Token(Token = "0x6001214")]
		[Address(RVA = "0x6CB3E60", Offset = "0x6CB2E60", VA = "0x6CB3E60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001215")]
		[Address(RVA = "0x6CB3E70", Offset = "0x6CB2E70", VA = "0x6CB3E70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003A6")]
	public bool isDirty
	{
		[Token(Token = "0x6001216")]
		[Address(RVA = "0x6CB3E80", Offset = "0x6CB2E80", VA = "0x6CB3E80", Slot = "8")]
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
		[Address(RVA = "0x6CB3EC0", Offset = "0x6CB2EC0", VA = "0x6CB3EC0", Slot = "38")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600121D")]
		[Address(RVA = "0x6CB3ED0", Offset = "0x6CB2ED0", VA = "0x6CB3ED0", Slot = "39")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003AB")]
	internal virtual ICursorManager cursorManager
	{
		[Token(Token = "0x600121E")]
		[Address(RVA = "0x6CB3EF0", Offset = "0x6CB2EF0", VA = "0x6CB3EF0", Slot = "40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600121F")]
		[Address(RVA = "0x6CB3F00", Offset = "0x6CB2F00", VA = "0x6CB3F00", Slot = "41")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003AC")]
	public ContextualMenuManager contextualMenuManager
	{
		[Token(Token = "0x6001220")]
		[Address(RVA = "0x6CB3F20", Offset = "0x6CB2F20", VA = "0x6CB3F20", Slot = "42")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001221")]
		[Address(RVA = "0x6CB3F30", Offset = "0x6CB2F30", VA = "0x6CB3F30")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170003AD")]
	internal virtual DataBindingManager dataBindingManager
	{
		[Token(Token = "0x6001222")]
		[Address(RVA = "0x6CB3F50", Offset = "0x6CB2F50", VA = "0x6CB3F50", Slot = "43")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001223")]
		[Address(RVA = "0x6CB3F60", Offset = "0x6CB2F60", VA = "0x6CB3F60", Slot = "44")]
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
		[Address(RVA = "0x6CB41A0", Offset = "0x6CB31A0", VA = "0x6CB41A0")]
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
		[Address(RVA = "0x6CB4330", Offset = "0x6CB3330", VA = "0x6CB4330")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B4")]
	internal bool disposed
	{
		[Token(Token = "0x6001233")]
		[Address(RVA = "0x6CB45B0", Offset = "0x6CB35B0", VA = "0x6CB45B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001234")]
		[Address(RVA = "0x6CB45C0", Offset = "0x6CB35C0", VA = "0x6CB45C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003B5")]
	public bool isFlat
	{
		[Token(Token = "0x600123F")]
		[Address(RVA = "0x6CB4AB0", Offset = "0x6CB3AB0", VA = "0x6CB4AB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001240")]
		[Address(RVA = "0x6CB4AC0", Offset = "0x6CB3AC0", VA = "0x6CB4AC0")]
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
		[Address(RVA = "0x6CB3670", Offset = "0x6CB2670", VA = "0x6CB3670")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001200")]
		[Address(RVA = "0x6CB3710", Offset = "0x6CB2710", VA = "0x6CB3710")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000028")]
	internal event Action isFlatChanged
	{
		[Token(Token = "0x600123D")]
		[Address(RVA = "0x6CB4970", Offset = "0x6CB3970", VA = "0x6CB4970")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600123E")]
		[Address(RVA = "0x6CB4A10", Offset = "0x6CB3A10", VA = "0x6CB4A10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000029")]
	internal event Action atlasChanged
	{
		[Token(Token = "0x6001242")]
		[Address(RVA = "0x6CB4BF0", Offset = "0x6CB3BF0", VA = "0x6CB4BF0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001243")]
		[Address(RVA = "0x6CB4C90", Offset = "0x6CB3C90", VA = "0x6CB4C90")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400002A")]
	internal event HierarchyEvent hierarchyChanged
	{
		[Token(Token = "0x6001247")]
		[Address(RVA = "0x6CB4D50", Offset = "0x6CB3D50", VA = "0x6CB4D50")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001248")]
		[Address(RVA = "0x6CB4DF0", Offset = "0x6CB3DF0", VA = "0x6CB4DF0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x6CB3810", Offset = "0x6CB2810", VA = "0x6CB3810")]
	protected BaseVisualElementPanel()
	{
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x6CB3AF0", Offset = "0x6CB2AF0", VA = "0x6CB3AF0", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x6CB3B60", Offset = "0x6CB2B60", VA = "0x6CB3B60", Slot = "24")]
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
	[Address(RVA = "0x6CB3F80", Offset = "0x6CB2F80", VA = "0x6CB3F80")]
	internal void SendEvent(EventBase e, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x600122D")]
	[Address(RVA = "0x6CB4180", Offset = "0x6CB3180", VA = "0x6CB4180")]
	public long TimeSinceStartupMs()
	{
		return default(long);
	}

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x6CB4340", Offset = "0x6CB3340", VA = "0x6CB4340")]
	public double TimeSinceStartupSeconds()
	{
		return default(double);
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x6CB4520", Offset = "0x6CB3520", VA = "0x6CB4520")]
	internal static double DefaultTimeSinceStartup()
	{
		return default(double);
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x6CB4530", Offset = "0x6CB3530", VA = "0x6CB4530", Slot = "51")]
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
	[Address(RVA = "0x6CB45D0", Offset = "0x6CB35D0", VA = "0x6CB45D0")]
	internal VisualElement GetTopElementUnderPointer(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6001237")]
	[Address(RVA = "0x6CB45F0", Offset = "0x6CB35F0", VA = "0x6CB45F0")]
	internal void RemoveElementFromPointerCache(VisualElement e)
	{
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x6CB4610", Offset = "0x6CB3610", VA = "0x6CB4610")]
	internal void SetTopElementUnderPointer(int pointerId, VisualElement element, EventBase triggerEvent)
	{
	}

	[Token(Token = "0x6001239")]
	[Address(RVA = "0x6CB4640", Offset = "0x6CB3640", VA = "0x6CB4640")]
	internal void SetTopElementUnderPointer(int pointerId, VisualElement element, Vector2 position)
	{
	}

	[Token(Token = "0x600123A")]
	[Address(RVA = "0x6CB4670", Offset = "0x6CB3670", VA = "0x6CB4670")]
	internal VisualElement RecomputeTopElementUnderPointer(int pointerId, Vector2 pointerPos, EventBase triggerEvent)
	{
		return null;
	}

	[Token(Token = "0x600123B")]
	[Address(RVA = "0x6CB48E0", Offset = "0x6CB38E0", VA = "0x6CB48E0")]
	internal void ClearCachedElementUnderPointer(int pointerId, EventBase triggerEvent)
	{
	}

	[Token(Token = "0x600123C")]
	[Address(RVA = "0x6CB4910", Offset = "0x6CB3910", VA = "0x6CB4910")]
	internal bool CommitElementUnderPointers()
	{
		return default(bool);
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x6CB4B00", Offset = "0x6CB3B00", VA = "0x6CB4B00")]
	internal void SetSpecializedHierarchyFlagsUpdater()
	{
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x6CB4D30", Offset = "0x6CB3D30", VA = "0x6CB4D30")]
	protected void InvokeAtlasChanged()
	{
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x6CB4E90", Offset = "0x6CB3E90", VA = "0x6CB4E90")]
	internal void InvokeHierarchyChanged(VisualElement ve, HierarchyChangeType changeType, [Optional] IReadOnlyList<VisualElement> additionalContext)
	{
	}

	[Token(Token = "0x600124A")]
	[Address(RVA = "0x6CB4EB0", Offset = "0x6CB3EB0", VA = "0x6CB4EB0")]
	internal void InvokeBeforeUpdate()
	{
	}

	[Token(Token = "0x600124B")]
	[Address(RVA = "0x6CB4ED0", Offset = "0x6CB3ED0", VA = "0x6CB4ED0")]
	internal bool UpdateElementUnderPointers()
	{
		return default(bool);
	}

	[Token(Token = "0x600124C")]
	[Address(RVA = "0x6CB5160", Offset = "0x6CB4160", VA = "0x6CB5160", Slot = "11")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionAdded(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x600124D")]
	[Address(RVA = "0x6CB5170", Offset = "0x6CB4170", VA = "0x6CB5170", Slot = "12")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionRemoved(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x600124E")]
	[Address(RVA = "0x6CB5180", Offset = "0x6CB4180", VA = "0x6CB5180", Slot = "57")]
	public virtual void Render()
	{
	}

	[Token(Token = "0x600124F")]
	[Address(RVA = "0x6CB5230", Offset = "0x6CB4230", VA = "0x6CB5230")]
	internal AbstractGenericMenu CreateMenu()
	{
		return null;
	}
}
