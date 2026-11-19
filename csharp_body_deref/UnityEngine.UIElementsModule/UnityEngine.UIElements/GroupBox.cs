// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.GroupBox
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000D6")]
public class GroupBox : BindableElement, IGroupBox
{
	[Token(Token = "0x20000D7")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<GroupBox, UxmlTraits>
	{
		[Token(Token = "0x6000611")]
		[Address(RVA = "0x6BE4E10", Offset = "0x6BE3E10", VA = "0x6BE4E10")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000D8")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BindableElement.UxmlTraits
	{
		[Token(Token = "0x40003A0")]
		[FieldOffset(Offset = "0x90")]
		private UxmlStringAttributeDescription m_Text;

		[Token(Token = "0x6000612")]
		[Address(RVA = "0x6BE4E50", Offset = "0x6BE3E50", VA = "0x6BE4E50", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000613")]
		[Address(RVA = "0x6BE4F50", Offset = "0x6BE3F50", VA = "0x6BE4F50")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId textProperty;

	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0x98")]
	public static readonly string ussClassName;

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0xA0")]
	public static readonly string labelUssClassName;

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x2D8")]
	private Label m_TitleLabel;

	[Token(Token = "0x170000FD")]
	[CreateProperty]
	public string text
	{
		[Token(Token = "0x600060A")]
		[Address(RVA = "0x6BE49C0", Offset = "0x6BE39C0", VA = "0x6BE49C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600060B")]
		[Address(RVA = "0x6BE49F0", Offset = "0x6BE39F0", VA = "0x6BE49F0")]
		set
		{
		}
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x6BE4BC0", Offset = "0x6BE3BC0", VA = "0x6BE4BC0")]
	public GroupBox()
	{
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x6BE4C40", Offset = "0x6BE3C40", VA = "0x6BE4C40")]
	public GroupBox(string text)
	{
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x6BE4CC0", Offset = "0x6BE3CC0", VA = "0x6BE4CC0", Slot = "143")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionAdded(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x6BE4CD0", Offset = "0x6BE3CD0", VA = "0x6BE4CD0", Slot = "144")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionRemoved(IGroupBoxOption option)
	{
	}
}
