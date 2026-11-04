// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Foldout
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x31E3C80", Offset = "0x31E2280", VA = "0x1831E3C80")]
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
		[Address(RVA = "0x31E4020", Offset = "0x31E2620", VA = "0x1831E4020", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x31E6870", Offset = "0x31E4E70", VA = "0x1831E6870")]
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
		[Address(RVA = "0x312F010", Offset = "0x312D610", VA = "0x18312F010")]
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
		[Address(RVA = "0x2D076E0", Offset = "0x2D05CE0", VA = "0x182D076E0", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F6")]
	public override bool focusable
	{
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "16")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x31D3C40", Offset = "0x31D2240", VA = "0x1831D3C40", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	[CreateProperty]
	public bool toggleOnLabelClick
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x31D3C00", Offset = "0x31D2200", VA = "0x1831D3C00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x31D3E40", Offset = "0x31D2440", VA = "0x1831D3E40")]
		set
		{
		}
	}

	[Token(Token = "0x170000F8")]
	[CreateProperty]
	public string text
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x31D3BD0", Offset = "0x31D21D0", VA = "0x1831D3BD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x31D3C90", Offset = "0x31D2290", VA = "0x1831D3C90")]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	[CreateProperty]
	public bool value
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x31D3C30", Offset = "0x31D2230", VA = "0x1831D3C30", Slot = "143")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x31D3EE0", Offset = "0x31D24E0", VA = "0x1831D3EE0", Slot = "144")]
		set
		{
		}
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x31D3000", Offset = "0x31D1600", VA = "0x1831D3000", Slot = "145")]
	public void SetValueWithoutNotify(bool newValue)
	{
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x31D2FB0", Offset = "0x31D15B0", VA = "0x1831D2FB0", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x31D2C50", Offset = "0x31D1250", VA = "0x1831D2C50")]
	private void Apply(KeyboardNavigationOperation op, EventBase sourceEvent)
	{
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x31D2B40", Offset = "0x31D1140", VA = "0x1831D2B40")]
	private bool Apply(KeyboardNavigationOperation op)
	{
		return default(bool);
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x31D3770", Offset = "0x31D1D70", VA = "0x1831D3770")]
	public Foldout()
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x31D2D90", Offset = "0x31D1390", VA = "0x1831D2D90")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}
}
