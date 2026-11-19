// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000ED")]
public class TextField : TextInputBaseField<string>
{
	[Token(Token = "0x20000EE")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<TextField, UxmlTraits>
	{
		[Token(Token = "0x60006A6")]
		[Address(RVA = "0x6BEB750", Offset = "0x6BEA750", VA = "0x6BEB750")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000EF")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextInputBaseField<string>.UxmlTraits
	{
		[Token(Token = "0x40003F7")]
		[FieldOffset(Offset = "0x0")]
		private static readonly UxmlStringAttributeDescription k_Value;

		[Token(Token = "0x40003F8")]
		[FieldOffset(Offset = "0x120")]
		private UxmlBoolAttributeDescription m_Multiline;

		[Token(Token = "0x60006A7")]
		[Address(RVA = "0x6BEB790", Offset = "0x6BEA790", VA = "0x6BEB790", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60006A8")]
		[Address(RVA = "0x6BEB960", Offset = "0x6BEA960", VA = "0x6BEB960")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x20000F0")]
	private class TextInput : TextInputBase
	{
		[Token(Token = "0x1700011C")]
		private TextField parentTextField
		{
			[Token(Token = "0x60006AA")]
			[Address(RVA = "0x6BEBB20", Offset = "0x6BEAB20", VA = "0x6BEBB20")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011D")]
		public bool multiline
		{
			[Token(Token = "0x60006AB")]
			[Address(RVA = "0x6BEA640", Offset = "0x6BE9640", VA = "0x6BEA640")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60006AC")]
			[Address(RVA = "0x6BEA8D0", Offset = "0x6BE98D0", VA = "0x6BEA8D0")]
			set
			{
			}
		}

		[Token(Token = "0x60006AD")]
		[Address(RVA = "0x6BEBB90", Offset = "0x6BEAB90", VA = "0x6BEBB90", Slot = "141")]
		protected override string StringToValue(string str)
		{
			return null;
		}

		[Token(Token = "0x60006AE")]
		[Address(RVA = "0x6BEAED0", Offset = "0x6BE9ED0", VA = "0x6BEAED0")]
		public TextInput()
		{
		}
	}

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId multilineProperty;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x98")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0xA0")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0xA8")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x17000119")]
	private TextInput textInput
	{
		[Token(Token = "0x6000697")]
		[Address(RVA = "0x6BEA550", Offset = "0x6BE9550", VA = "0x6BEA550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011A")]
	[CreateProperty]
	public bool multiline
	{
		[Token(Token = "0x6000698")]
		[Address(RVA = "0x6BEA5C0", Offset = "0x6BE95C0", VA = "0x6BEA5C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000699")]
		[Address(RVA = "0x6BEA6F0", Offset = "0x6BE96F0", VA = "0x6BEA6F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public override string value
	{
		[Token(Token = "0x600069D")]
		[Address(RVA = "0x6BEAF30", Offset = "0x6BE9F30", VA = "0x6BEAF30", Slot = "148")]
		get
		{
			return null;
		}
		[Token(Token = "0x600069E")]
		[Address(RVA = "0x6BEAF70", Offset = "0x6BE9F70", VA = "0x6BEAF70", Slot = "149")]
		set
		{
		}
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x6BEABE0", Offset = "0x6BE9BE0", VA = "0x6BEABE0")]
	public TextField()
	{
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x6BEAC00", Offset = "0x6BE9C00", VA = "0x6BEAC00")]
	public TextField(string label)
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x6BEAC20", Offset = "0x6BE9C20", VA = "0x6BEAC20")]
	public TextField(string label, int maxLength, bool multiline, bool isPasswordField, char maskChar)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x6BEB080", Offset = "0x6BEA080", VA = "0x6BEB080", Slot = "159")]
	public override void SetValueWithoutNotify(string newValue)
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x6BEB2D0", Offset = "0x6BEA2D0", VA = "0x6BEB2D0", Slot = "164")]
	internal override void UpdateTextFromValue()
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x6BEB320", Offset = "0x6BEA320", VA = "0x6BEB320", Slot = "8")]
	[EventInterest(new Type[] { typeof(FocusOutEvent) })]
	protected override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x6BEB520", Offset = "0x6BEA520", VA = "0x6BEB520", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x6BEB5B0", Offset = "0x6BEA5B0", VA = "0x6BEB5B0", Slot = "161")]
	protected override string ValueToString(string value)
	{
		return null;
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x6BEB5C0", Offset = "0x6BEA5C0", VA = "0x6BEB5C0", Slot = "162")]
	protected override string StringToValue(string str)
	{
		return null;
	}
}
