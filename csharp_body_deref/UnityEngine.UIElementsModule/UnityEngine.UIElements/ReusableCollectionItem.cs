// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ReusableCollectionItem
// Update status: CHANGED in this game update
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<ReusableCollectionItem> m_onDestroy;

	[Token(Token = "0x1700007E")]
	public virtual VisualElement rootElement
	{
		[Token(Token = "0x60002F8")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007F")]
	public VisualElement bindableElement
	{
		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002FA")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public ValueAnimation<StyleValues> animator
	{
		[Token(Token = "0x60002FB")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002FC")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public int index
	{
		[Token(Token = "0x60002FD")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002FE")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public int id
	{
		[Token(Token = "0x60002FF")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000300")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	internal bool isDragGhost
	{
		[Token(Token = "0x6000301")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000302")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1400000C")]
	public event Action<ReusableCollectionItem> onGeometryChanged
	{
		[Token(Token = "0x6000303")]
		[Address(RVA = "0x30AFF80", Offset = "0x30AE580", VA = "0x1830AFF80")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000304")]
		[Address(RVA = "0x30B00E0", Offset = "0x30AE6E0", VA = "0x1830B00E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000D")]
	internal event Action<ReusableCollectionItem> onDestroy
	{
		[Token(Token = "0x6000305")]
		[Address(RVA = "0x30AFED0", Offset = "0x30AE4D0", VA = "0x1830AFED0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000306")]
		[Address(RVA = "0x30B0030", Offset = "0x30AE630", VA = "0x1830B0030")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x30AFE50", Offset = "0x30AE450", VA = "0x1830AFE50")]
	public ReusableCollectionItem()
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00", Slot = "5")]
	public virtual void Init(VisualElement item)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x30AFA60", Offset = "0x30AE060", VA = "0x1830AFA60", Slot = "6")]
	public virtual void PreAttachElement()
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x30AF8C0", Offset = "0x30ADEC0", VA = "0x1830AF8C0", Slot = "7")]
	public virtual void DetachElement()
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x30AF8A0", Offset = "0x30ADEA0", VA = "0x1830AF8A0", Slot = "8")]
	public virtual void DestroyElement()
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x30AFD20", Offset = "0x30AE320", VA = "0x1830AFD20", Slot = "9")]
	public virtual void SetSelected(bool selected)
	{
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x30AFB30", Offset = "0x30AE130", VA = "0x1830AFB30", Slot = "10")]
	public virtual void SetDragGhost(bool dragGhost)
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x30AF9E0", Offset = "0x30ADFE0", VA = "0x1830AF9E0", Slot = "11")]
	protected virtual void OnGeometryChanged(GeometryChangedEvent evt)
	{
	}
}
