// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ReusableCollectionItem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements.Experimental;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000035")]
internal class ReusableCollectionItem
{
	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x38")]
	protected EventCallback<GeometryChangedEvent> m_GeometryChangedEventCallback;

	[Token(Token = "0x1700003D")]
	public virtual VisualElement rootElement
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x4F1D760", Offset = "0x4F1D760", VA = "0x4F1D760", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public VisualElement bindableElement
	{
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x4F1D770", Offset = "0x4F1D770", VA = "0x4F1D770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x4F1D780", Offset = "0x4F1D780", VA = "0x4F1D780")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public ValueAnimation<StyleValues> animator
	{
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x4F1D790", Offset = "0x4F1D790", VA = "0x4F1D790")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x4F1D7A0", Offset = "0x4F1D7A0", VA = "0x4F1D7A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public int index
	{
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x4F1D7B0", Offset = "0x4F1D7B0", VA = "0x4F1D7B0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x4F1D7C0", Offset = "0x4F1D7C0", VA = "0x4F1D7C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public int id
	{
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x4F1D7D0", Offset = "0x4F1D7D0", VA = "0x4F1D7D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x4F1D7E0", Offset = "0x4F1D7E0", VA = "0x4F1D7E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	internal bool isDragGhost
	{
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x4F1D7F0", Offset = "0x4F1D7F0", VA = "0x4F1D7F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x4F1D800", Offset = "0x4F1D800", VA = "0x4F1D800")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000009")]
	public event Action<ReusableCollectionItem> onGeometryChanged
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x4F1D810", Offset = "0x4F1D810", VA = "0x4F1D810")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x4F1D8C0", Offset = "0x4F1D8C0", VA = "0x4F1D8C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x4F1D970", Offset = "0x4F1D970", VA = "0x4F1D970")]
	public ReusableCollectionItem()
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x4F1DA00", Offset = "0x4F1DA00", VA = "0x4F1DA00", Slot = "5")]
	public virtual void Init(VisualElement item)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x4F1DA10", Offset = "0x4F1DA10", VA = "0x4F1DA10", Slot = "6")]
	public virtual void PreAttachElement()
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x4F1DAD0", Offset = "0x4F1DAD0", VA = "0x4F1DAD0", Slot = "7")]
	public virtual void DetachElement()
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x4F1DBF0", Offset = "0x4F1DBF0", VA = "0x4F1DBF0", Slot = "8")]
	public virtual void SetSelected(bool selected)
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x4F1DCF0", Offset = "0x4F1DCF0", VA = "0x4F1DCF0", Slot = "9")]
	public virtual void SetDragGhost(bool dragGhost)
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x4F1DEA0", Offset = "0x4F1DEA0", VA = "0x4F1DEA0")]
	protected void OnGeometryChanged(GeometryChangedEvent evt)
	{
	}
}
