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
		[Address(RVA = "0x4BF5E30", Offset = "0x4BF5E30", VA = "0x4BF5E30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public VisualElement bindableElement
	{
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x4BF5E40", Offset = "0x4BF5E40", VA = "0x4BF5E40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x4BF5E50", Offset = "0x4BF5E50", VA = "0x4BF5E50")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public ValueAnimation<StyleValues> animator
	{
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x4BF5E60", Offset = "0x4BF5E60", VA = "0x4BF5E60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x4BF5E70", Offset = "0x4BF5E70", VA = "0x4BF5E70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public int index
	{
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x4BF5E80", Offset = "0x4BF5E80", VA = "0x4BF5E80")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x4BF5E90", Offset = "0x4BF5E90", VA = "0x4BF5E90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public int id
	{
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x4BF5EA0", Offset = "0x4BF5EA0", VA = "0x4BF5EA0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x4BF5EB0", Offset = "0x4BF5EB0", VA = "0x4BF5EB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	internal bool isDragGhost
	{
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x4BF5EC0", Offset = "0x4BF5EC0", VA = "0x4BF5EC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x4BF5ED0", Offset = "0x4BF5ED0", VA = "0x4BF5ED0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000009")]
	public event Action<ReusableCollectionItem> onGeometryChanged
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x4BF5EE0", Offset = "0x4BF5EE0", VA = "0x4BF5EE0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x4BF5F90", Offset = "0x4BF5F90", VA = "0x4BF5F90")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x4BF6040", Offset = "0x4BF6040", VA = "0x4BF6040")]
	public ReusableCollectionItem()
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x4BF60D0", Offset = "0x4BF60D0", VA = "0x4BF60D0", Slot = "5")]
	public virtual void Init(VisualElement item)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x4BF60E0", Offset = "0x4BF60E0", VA = "0x4BF60E0", Slot = "6")]
	public virtual void PreAttachElement()
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x4BF61A0", Offset = "0x4BF61A0", VA = "0x4BF61A0", Slot = "7")]
	public virtual void DetachElement()
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x4BF62C0", Offset = "0x4BF62C0", VA = "0x4BF62C0", Slot = "8")]
	public virtual void SetSelected(bool selected)
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x4BF63C0", Offset = "0x4BF63C0", VA = "0x4BF63C0", Slot = "9")]
	public virtual void SetDragGhost(bool dragGhost)
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x4BF6570", Offset = "0x4BF6570", VA = "0x4BF6570")]
	protected void OnGeometryChanged(GeometryChangedEvent evt)
	{
	}
}
