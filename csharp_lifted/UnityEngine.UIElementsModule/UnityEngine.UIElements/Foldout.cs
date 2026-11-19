// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Foldout
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000CE")]
public class Foldout : BindableElement, INotifyValueChanged<bool>
{
	[Token(Token = "0x20000CF")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Foldout, UxmlTraits>
	{
		[Token(Token = "0x60005DF")]
		[Address(RVA = "0x6BE0360", Offset = "0x6BDF360", VA = "0x6BE0360")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000D0")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BindableElement.UxmlTraits
	{
		[Token(Token = "0x4000375")]
		[FieldOffset(Offset = "0x90")]
		private UxmlStringAttributeDescription m_Text;

		[Token(Token = "0x4000376")]
		[FieldOffset(Offset = "0x98")]
		private UxmlBoolAttributeDescription m_Value;

		[Token(Token = "0x60005E0")]
		[Address(RVA = "0x6BE03A0", Offset = "0x6BDF3A0", VA = "0x6BE03A0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x6BE0510", Offset = "0x6BDF510", VA = "0x6BE0510")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId textProperty;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId toggleOnLabelClickProperty;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId valueProperty;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x2D8")]
	private readonly Toggle m_Toggle;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x2E0")]
	private VisualElement m_Container;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x2E8")]
	[SerializeField]
	[DontCreateProperty]
	private bool m_Value;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x1C8")]
	public static readonly string ussClassName;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x1D0")]
	public static readonly string toggleUssClassName;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x1D8")]
	public static readonly string contentUssClassName;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x1E0")]
	public static readonly string inputUssClassName;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0x1E8")]
	public static readonly string checkmarkUssClassName;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x1F0")]
	public static readonly string textUssClassName;

	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0x1F8")]
	internal static readonly string toggleInspectorUssClassName;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0x200")]
	internal static readonly string ussFoldoutDepthClassName;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x208")]
	internal static readonly int ussFoldoutMaxDepth;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x2F0")]
	private KeyboardNavigationManipulator m_NavigationManipulator;

	[Token(Token = "0x170000F4")]
	internal Toggle toggle
	{
		[Token(Token = "0x60005CD")]
		[Address(RVA = "0x6BDF150", Offset = "0x6BDE150", VA = "0x6BDF150")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F5")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x6BDF160", Offset = "0x6BDE160", VA = "0x6BDF160", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F6")]
	public override bool focusable
	{
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x6BDF170", Offset = "0x6BDE170", VA = "0x6BDF170", Slot = "16")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x6BDF180", Offset = "0x6BDE180", VA = "0x6BDF180", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	[CreateProperty]
	public bool toggleOnLabelClick
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x6BDF1C0", Offset = "0x6BDE1C0", VA = "0x6BDF1C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x6BDF1E0", Offset = "0x6BDE1E0", VA = "0x6BDF1E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F8")]
	[CreateProperty]
	public string text
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x6BDF270", Offset = "0x6BDE270", VA = "0x6BDF270")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x6BDF290", Offset = "0x6BDE290", VA = "0x6BDF290")]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	[CreateProperty]
	public bool value
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x6BDF430", Offset = "0x6BDE430", VA = "0x6BDF430", Slot = "143")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x6BDF440", Offset = "0x6BDE440", VA = "0x6BDF440", Slot = "144")]
		set
		{
		}
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x6BDF640", Offset = "0x6BDE640", VA = "0x6BDF640", Slot = "145")]
	public void SetValueWithoutNotify(bool newValue)
	{
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x6BDF790", Offset = "0x6BDE790", VA = "0x6BDF790", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x6BDF7D0", Offset = "0x6BDE7D0", VA = "0x6BDF7D0")]
	private void Apply(KeyboardNavigationOperation op, EventBase sourceEvent)
	{
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x6BDF830", Offset = "0x6BDE830", VA = "0x6BDF830")]
	private bool Apply(KeyboardNavigationOperation op)
	{
		return default(bool);
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x6BDF8E0", Offset = "0x6BDE8E0", VA = "0x6BDF8E0")]
	public Foldout()
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x6BDFD30", Offset = "0x6BDED30", VA = "0x6BDFD30")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}
}
