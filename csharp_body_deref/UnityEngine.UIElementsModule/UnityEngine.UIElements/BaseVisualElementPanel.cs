using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements.Layout;

namespace UnityEngine.UIElements;

[Token(Token = "0x200023C")]
internal abstract class BaseVisualElementPanel : IPanel, IDisposable, IGroupBox
{
	[Token(Token = "0x4000825")]
	[FieldOffset(Offset = "0x18")]
	private UIElementsBridge m_UIElementsBridge;

	[Token(Token = "0x4000826")]
	[FieldOffset(Offset = "0x20")]
	private float m_Scale;

	[Token(Token = "0x4000827")]
	[FieldOffset(Offset = "0x28")]
	internal LayoutConfig layoutConfig;

	[Token(Token = "0x4000828")]
	[FieldOffset(Offset = "0x58")]
	private float m_PixelsPerPoint;

	[Token(Token = "0x400082B")]
	[FieldOffset(Offset = "0x74")]
	private uint m_VertexBudget;

	[Token(Token = "0x4000831")]
	[FieldOffset(Offset = "0xA0")]
	internal ElementUnderPointer m_TopElementUnderPointers;

	[Token(Token = "0x4000835")]
	[FieldOffset(Offset = "0xC0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<Material> updateMaterial;

	[Token(Token = "0x4000837")]
	[FieldOffset(Offset = "0xD0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<IPanel> beforeUpdate;

	[Token(Token = "0x170002AE")]
	public abstract UnityEngine.EventInterests IMGUIEventInterests
	{
		[Token(Token = "0x6000E4F")]
		get;
		[Token(Token = "0x6000E50")]
		set;
	}

	[Token(Token = "0x170002AF")]
	public abstract ScriptableObject ownerObject
	{
		[Token(Token = "0x6000E51")]
		get;
		[Token(Token = "0x6000E52")]
		protected set;
	}

	[Token(Token = "0x170002B0")]
	public abstract SavePersistentViewData saveViewData
	{
		[Token(Token = "0x6000E53")]
		get;
	}

	[Token(Token = "0x170002B1")]
	public abstract GetViewDataDictionary getViewDataDictionary
	{
		[Token(Token = "0x6000E54")]
		get;
	}

	[Token(Token = "0x170002B2")]
	public abstract int IMGUIContainersCount
	{
		[Token(Token = "0x6000E55")]
		get;
		[Token(Token = "0x6000E56")]
		set;
	}

	[Token(Token = "0x170002B3")]
	public abstract FocusController focusController
	{
		[Token(Token = "0x6000E57")]
		get;
		[Token(Token = "0x6000E58")]
		set;
	}

	[Token(Token = "0x170002B4")]
	public abstract IMGUIContainer rootIMGUIContainer
	{
		[Token(Token = "0x6000E59")]
		get;
	}

	[Token(Token = "0x170002B5")]
	internal UIElementsBridge uiElementsBridge
	{
		[Token(Token = "0x6000E5C")]
		[Address(RVA = "0x4D26420", Offset = "0x4D26420", VA = "0x4D26420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B6")]
	internal float scale
	{
		[Token(Token = "0x6000E66")]
		[Address(RVA = "0x4D26880", Offset = "0x4D26880", VA = "0x4D26880")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E67")]
		[Address(RVA = "0x4D1C1B0", Offset = "0x4D1C1B0", VA = "0x4D1C1B0")]
		set
		{
		}
	}

	[Token(Token = "0x170002B7")]
	internal float pixelsPerPoint
	{
		[Token(Token = "0x6000E68")]
		[Address(RVA = "0x4D268A0", Offset = "0x4D268A0", VA = "0x4D268A0")]
		set
		{
		}
	}

	[Token(Token = "0x170002B8")]
	public float scaledPixelsPerPoint
	{
		[Token(Token = "0x6000E69")]
		[Address(RVA = "0x4D26890", Offset = "0x4D26890", VA = "0x4D26890")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170002B9")]
	public float referenceSpritePixelsPerUnit
	{
		[Token(Token = "0x6000E6A")]
		[Address(RVA = "0x4D269A0", Offset = "0x4D269A0", VA = "0x4D269A0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000E6B")]
		[Address(RVA = "0x4D269B0", Offset = "0x4D269B0", VA = "0x4D269B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BA")]
	internal PanelClearSettings clearSettings
	{
		[Token(Token = "0x6000E6C")]
		[Address(RVA = "0x4D269C0", Offset = "0x4D269C0", VA = "0x4D269C0")]
		[CompilerGenerated]
		get
		{
			return default(PanelClearSettings);
		}
		[Token(Token = "0x6000E6D")]
		[Address(RVA = "0x4D269E0", Offset = "0x4D269E0", VA = "0x4D269E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BB")]
	internal uint vertexBudget
	{
		[Token(Token = "0x6000E6E")]
		[Address(RVA = "0x4D26A00", Offset = "0x4D26A00", VA = "0x4D26A00")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000E6F")]
		[Address(RVA = "0x4D1C350", Offset = "0x4D1C350", VA = "0x4D1C350")]
		set
		{
		}
	}

	[Token(Token = "0x170002BC")]
	internal bool duringLayoutPhase
	{
		[Token(Token = "0x6000E70")]
		[Address(RVA = "0x4D26A10", Offset = "0x4D26A10", VA = "0x4D26A10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E71")]
		[Address(RVA = "0x4D26A20", Offset = "0x4D26A20", VA = "0x4D26A20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BD")]
	internal abstract uint version
	{
		[Token(Token = "0x6000E72")]
		get;
	}

	[Token(Token = "0x170002BE")]
	internal abstract uint hierarchyVersion
	{
		[Token(Token = "0x6000E73")]
		get;
	}

	[Token(Token = "0x170002BF")]
	internal virtual RepaintData repaintData
	{
		[Token(Token = "0x6000E75")]
		[Address(RVA = "0x4D26A30", Offset = "0x4D26A30", VA = "0x4D26A30", Slot = "33")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E76")]
		[Address(RVA = "0x4D26A40", Offset = "0x4D26A40", VA = "0x4D26A40", Slot = "34")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C0")]
	internal virtual ICursorManager cursorManager
	{
		[Token(Token = "0x6000E77")]
		[Address(RVA = "0x4D26A50", Offset = "0x4D26A50", VA = "0x4D26A50", Slot = "35")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E78")]
		[Address(RVA = "0x4D26A60", Offset = "0x4D26A60", VA = "0x4D26A60", Slot = "36")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C1")]
	public ContextualMenuManager contextualMenuManager
	{
		[Token(Token = "0x6000E79")]
		[Address(RVA = "0x4D26A80", Offset = "0x4D26A80", VA = "0x4D26A80", Slot = "37")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E7A")]
		[Address(RVA = "0x4D26A90", Offset = "0x4D26A90", VA = "0x4D26A90")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170002C2")]
	public abstract VisualElement visualTree
	{
		[Token(Token = "0x6000E7B")]
		get;
	}

	[Token(Token = "0x170002C3")]
	public abstract EventDispatcher dispatcher
	{
		[Token(Token = "0x6000E7C")]
		get;
		[Token(Token = "0x6000E7D")]
		set;
	}

	[Token(Token = "0x170002C4")]
	internal abstract IScheduler scheduler
	{
		[Token(Token = "0x6000E7F")]
		get;
	}

	[Token(Token = "0x170002C5")]
	internal abstract IStylePropertyAnimationSystem styleAnimationSystem
	{
		[Token(Token = "0x6000E80")]
		get;
		[Token(Token = "0x6000E81")]
		set;
	}

	[Token(Token = "0x170002C6")]
	public abstract ContextType contextType
	{
		[Token(Token = "0x6000E82")]
		get;
		[Token(Token = "0x6000E83")]
		protected set;
	}

	[Token(Token = "0x170002C7")]
	internal bool disposed
	{
		[Token(Token = "0x6000E86")]
		[Address(RVA = "0x4D26B60", Offset = "0x4D26B60", VA = "0x4D26B60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E87")]
		[Address(RVA = "0x4D26B70", Offset = "0x4D26B70", VA = "0x4D26B70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002C8")]
	internal abstract Shader standardShader
	{
		[Token(Token = "0x6000E8D")]
		get;
	}

	[Token(Token = "0x170002C9")]
	internal virtual Shader standardWorldSpaceShader
	{
		[Token(Token = "0x6000E8E")]
		[Address(RVA = "0x4D26D10", Offset = "0x4D26D10", VA = "0x4D26D10", Slot = "50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CA")]
	public abstract AtlasBase atlas
	{
		[Token(Token = "0x6000E96")]
		get;
		[Token(Token = "0x6000E97")]
		set;
	}

	[Token(Token = "0x1400001C")]
	internal event Action<BaseVisualElementPanel> panelDisposed
	{
		[Token(Token = "0x6000E5A")]
		[Address(RVA = "0x4D1F160", Offset = "0x4D1F160", VA = "0x4D1F160")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000E5B")]
		[Address(RVA = "0x4D1F460", Offset = "0x4D1F460", VA = "0x4D1F460")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400001D")]
	internal event Action standardShaderChanged
	{
		[Token(Token = "0x6000E8F")]
		[Address(RVA = "0x4D26D20", Offset = "0x4D26D20", VA = "0x4D26D20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000E90")]
		[Address(RVA = "0x4D26DC0", Offset = "0x4D26DC0", VA = "0x4D26DC0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400001E")]
	internal event Action standardWorldSpaceShaderChanged
	{
		[Token(Token = "0x6000E91")]
		[Address(RVA = "0x4D26E60", Offset = "0x4D26E60", VA = "0x4D26E60")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000E92")]
		[Address(RVA = "0x4D26F00", Offset = "0x4D26F00", VA = "0x4D26F00")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400001F")]
	internal event Action atlasChanged
	{
		[Token(Token = "0x6000E93")]
		[Address(RVA = "0x4D26FA0", Offset = "0x4D26FA0", VA = "0x4D26FA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000E94")]
		[Address(RVA = "0x4D27040", Offset = "0x4D27040", VA = "0x4D27040")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000020")]
	internal event HierarchyEvent hierarchyChanged
	{
		[Token(Token = "0x6000E99")]
		[Address(RVA = "0x4D27120", Offset = "0x4D27120", VA = "0x4D27120")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000E9A")]
		[Address(RVA = "0x4D271C0", Offset = "0x4D271C0", VA = "0x4D271C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x4D26480", Offset = "0x4D26480", VA = "0x4D26480")]
	protected BaseVisualElementPanel()
	{
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x4D26650", Offset = "0x4D26650", VA = "0x4D26650", Slot = "9")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x4D266C0", Offset = "0x4D266C0", VA = "0x4D266C0", Slot = "23")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000E60")]
	public abstract void Repaint(Event e);

	[Token(Token = "0x6000E61")]
	public abstract void ValidateFocus();

	[Token(Token = "0x6000E62")]
	public abstract void ValidateLayout();

	[Token(Token = "0x6000E63")]
	public abstract void UpdateAnimations();

	[Token(Token = "0x6000E64")]
	public abstract void UpdateBindings();

	[Token(Token = "0x6000E65")]
	public abstract void ApplyStyles();

	[Token(Token = "0x6000E74")]
	internal abstract void OnVersionChanged(VisualElement ele, VersionChangeType changeTypeFlag);

	[Token(Token = "0x6000E7E")]
	[Address(RVA = "0x4D26AB0", Offset = "0x4D26AB0", VA = "0x4D26AB0")]
	internal void SendEvent(EventBase e, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x6000E84")]
	public abstract VisualElement Pick(Vector2 point);

	[Token(Token = "0x6000E85")]
	public abstract VisualElement PickAll(Vector2 point, List<VisualElement> picked);

	[Token(Token = "0x6000E88")]
	internal abstract IVisualTreeUpdater GetUpdater(VisualTreeUpdatePhase phase);

	[Token(Token = "0x6000E89")]
	[Address(RVA = "0x4D26B80", Offset = "0x4D26B80", VA = "0x4D26B80")]
	internal VisualElement GetTopElementUnderPointer(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x4D26BA0", Offset = "0x4D26BA0", VA = "0x4D26BA0")]
	internal VisualElement RecomputeTopElementUnderPointer(int pointerId, Vector2 pointerPos, EventBase triggerEvent)
	{
		return null;
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x4D12C80", Offset = "0x4D12C80", VA = "0x4D12C80")]
	internal void ClearCachedElementUnderPointer(int pointerId, EventBase triggerEvent)
	{
	}

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x4D26CB0", Offset = "0x4D26CB0", VA = "0x4D26CB0")]
	internal void CommitElementUnderPointers()
	{
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x4D270E0", Offset = "0x4D270E0", VA = "0x4D270E0")]
	protected void InvokeAtlasChanged()
	{
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x4D27100", Offset = "0x4D27100", VA = "0x4D27100")]
	internal void InvokeUpdateMaterial(Material mat)
	{
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x4D27260", Offset = "0x4D27260", VA = "0x4D27260")]
	internal void InvokeHierarchyChanged(VisualElement ve, HierarchyChangeType changeType)
	{
	}

	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x4D27280", Offset = "0x4D27280", VA = "0x4D27280")]
	internal void InvokeBeforeUpdate()
	{
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x4D272A0", Offset = "0x4D272A0", VA = "0x4D272A0")]
	internal void UpdateElementUnderPointers()
	{
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x4D27500", Offset = "0x4D27500", VA = "0x4D27500", Slot = "10")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionAdded(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x4D27510", Offset = "0x4D27510", VA = "0x4D27510", Slot = "11")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionRemoved(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x4D1D540", Offset = "0x4D1D540", VA = "0x4D1D540", Slot = "53")]
	public virtual void Update()
	{
	}
}
