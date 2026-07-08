using System;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000AF")]
public class TextField : TextInputBaseField<string>
{
	[Token(Token = "0x20000B0")]
	public new class UxmlFactory : UxmlFactory<TextField, UxmlTraits>
	{
		[Token(Token = "0x60004B8")]
		[Address(RVA = "0x4C1E350", Offset = "0x4C1E350", VA = "0x4C1E350")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000B1")]
	public new class UxmlTraits : TextInputBaseField<string>.UxmlTraits
	{
		[Token(Token = "0x40002BE")]
		[FieldOffset(Offset = "0x0")]
		private static readonly UxmlStringAttributeDescription k_Value;

		[Token(Token = "0x40002BF")]
		[FieldOffset(Offset = "0x100")]
		private UxmlBoolAttributeDescription m_Multiline;

		[Token(Token = "0x60004B9")]
		[Address(RVA = "0x4C1E390", Offset = "0x4C1E390", VA = "0x4C1E390", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x4C1E6A0", Offset = "0x4C1E6A0", VA = "0x4C1E6A0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x20000B2")]
	private class TextInput : TextInputBase
	{
		[Token(Token = "0x170000B1")]
		public bool multiline
		{
			[Token(Token = "0x60004BC")]
			[Address(RVA = "0x4C1D4D0", Offset = "0x4C1D4D0", VA = "0x4C1D4D0")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60004BD")]
			[Address(RVA = "0x4C1D780", Offset = "0x4C1D780", VA = "0x4C1D780")]
			set
			{
			}
		}

		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x4C1E860", Offset = "0x4C1E860", VA = "0x4C1E860", Slot = "98")]
		protected override string StringToValue(string str)
		{
			return null;
		}

		[Token(Token = "0x60004BF")]
		[Address(RVA = "0x4C1DCA0", Offset = "0x4C1DCA0", VA = "0x4C1DCA0")]
		public TextInput()
		{
		}
	}

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty multilineProperty;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0xA0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0xA8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0xB0")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x170000AE")]
	private TextInput textInput
	{
		[Token(Token = "0x60004AA")]
		[Address(RVA = "0x4C1D3F0", Offset = "0x4C1D3F0", VA = "0x4C1D3F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AF")]
	[CreateProperty]
	public bool multiline
	{
		[Token(Token = "0x60004AB")]
		[Address(RVA = "0x4C1D460", Offset = "0x4C1D460", VA = "0x4C1D460")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004AC")]
		[Address(RVA = "0x4C1D580", Offset = "0x4C1D580", VA = "0x4C1D580")]
		set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public override string value
	{
		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x4C1DD00", Offset = "0x4C1DD00", VA = "0x4C1DD00", Slot = "105")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004B1")]
		[Address(RVA = "0x4C1DD40", Offset = "0x4C1DD40", VA = "0x4C1DD40", Slot = "106")]
		set
		{
		}
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x4C1D9B0", Offset = "0x4C1D9B0", VA = "0x4C1D9B0")]
	public TextField()
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x4C1D9D0", Offset = "0x4C1D9D0", VA = "0x4C1D9D0")]
	public TextField(string label)
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x4C1D9F0", Offset = "0x4C1D9F0", VA = "0x4C1D9F0")]
	public TextField(string label, int maxLength, bool multiline, bool isPasswordField, char maskChar)
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x4C1DE50", Offset = "0x4C1DE50", VA = "0x4C1DE50", Slot = "114")]
	public override void SetValueWithoutNotify(string newValue)
	{
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x4C1DFD0", Offset = "0x4C1DFD0", VA = "0x4C1DFD0", Slot = "10")]
	[EventInterest(new Type[] { typeof(BlurEvent) })]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x4C1E130", Offset = "0x4C1E130", VA = "0x4C1E130", Slot = "94")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x4C1E1C0", Offset = "0x4C1E1C0", VA = "0x4C1E1C0", Slot = "115")]
	protected override string ValueToString(string value)
	{
		return null;
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x4C1E1D0", Offset = "0x4C1E1D0", VA = "0x4C1E1D0", Slot = "116")]
	protected override string StringToValue(string str)
	{
		return null;
	}
}
