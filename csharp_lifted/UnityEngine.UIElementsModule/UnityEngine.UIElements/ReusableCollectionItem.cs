// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ReusableCollectionItem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements.Experimental;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000068")]
internal class ReusableCollectionItem
{
	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<ReusableCollectionItem> m_onGeometryChanged;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x38")]
	protected EventCallback<GeometryChangedEvent> m_GeometryChangedEventCallback;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<ReusableCollectionItem> m_onDestroy;

	[Token(Token = "0x1700007E")]
	public virtual VisualElement rootElement
	{
		[Token(Token = "0x60002F8")]
		[Address(RVA = "0x6A9BA20", Offset = "0x6A9AA20", VA = "0x6A9BA20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007F")]
	public VisualElement bindableElement
	{
		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x6A9BA30", Offset = "0x6A9AA30", VA = "0x6A9BA30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x6A9BA40", Offset = "0x6A9AA40", VA = "0x6A9BA40")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public ValueAnimation<StyleValues> animator
	{
		[Token(Token = "0x60002FB")]
		[Address(RVA = "0x6A9BA50", Offset = "0x6A9AA50", VA = "0x6A9BA50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002FC")]
		[Address(RVA = "0x6A9BA60", Offset = "0x6A9AA60", VA = "0x6A9BA60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public int index
	{
		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x6A9BA70", Offset = "0x6A9AA70", VA = "0x6A9BA70")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002FE")]
		[Address(RVA = "0x6A9BA80", Offset = "0x6A9AA80", VA = "0x6A9BA80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public int id
	{
		[Token(Token = "0x60002FF")]
		[Address(RVA = "0x6A9BA90", Offset = "0x6A9AA90", VA = "0x6A9BA90")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000300")]
		[Address(RVA = "0x6A9BAA0", Offset = "0x6A9AAA0", VA = "0x6A9BAA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	internal bool isDragGhost
	{
		[Token(Token = "0x6000301")]
		[Address(RVA = "0x6A9BAB0", Offset = "0x6A9AAB0", VA = "0x6A9BAB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000302")]
		[Address(RVA = "0x6A9BAC0", Offset = "0x6A9AAC0", VA = "0x6A9BAC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1400000C")]
	public event Action<ReusableCollectionItem> onGeometryChanged
	{
		[Token(Token = "0x6000303")]
		[Address(RVA = "0x6A9BAD0", Offset = "0x6A9AAD0", VA = "0x6A9BAD0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000304")]
		[Address(RVA = "0x6A9BB70", Offset = "0x6A9AB70", VA = "0x6A9BB70")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000D")]
	internal event Action<ReusableCollectionItem> onDestroy
	{
		[Token(Token = "0x6000305")]
		[Address(RVA = "0x6A9BC10", Offset = "0x6A9AC10", VA = "0x6A9BC10")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000306")]
		[Address(RVA = "0x6A9BCB0", Offset = "0x6A9ACB0", VA = "0x6A9BCB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x6A9BD50", Offset = "0x6A9AD50", VA = "0x6A9BD50")]
	public ReusableCollectionItem()
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x6A9BDD0", Offset = "0x6A9ADD0", VA = "0x6A9BDD0", Slot = "5")]
	public virtual void Init(VisualElement item)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x6A9BDE0", Offset = "0x6A9ADE0", VA = "0x6A9BDE0", Slot = "6")]
	public virtual void PreAttachElement()
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x6A9BEA0", Offset = "0x6A9AEA0", VA = "0x6A9BEA0", Slot = "7")]
	public virtual void DetachElement()
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x6A9BFC0", Offset = "0x6A9AFC0", VA = "0x6A9BFC0", Slot = "8")]
	public virtual void DestroyElement()
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x6A9BFE0", Offset = "0x6A9AFE0", VA = "0x6A9BFE0", Slot = "9")]
	public virtual void SetSelected(bool selected)
	{
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x6A9C0E0", Offset = "0x6A9B0E0", VA = "0x6A9C0E0", Slot = "10")]
	public virtual void SetDragGhost(bool dragGhost)
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x6A9C290", Offset = "0x6A9B290", VA = "0x6A9C290", Slot = "11")]
	protected virtual void OnGeometryChanged(GeometryChangedEvent evt)
	{
	}
}
