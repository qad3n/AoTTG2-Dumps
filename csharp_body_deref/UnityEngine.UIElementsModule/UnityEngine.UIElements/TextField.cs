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

[Token(Token = "0x20000AF")]
public class TextField : TextInputBaseField<string>
{
	[Token(Token = "0x20000B0")]
	public new class UxmlFactory : UxmlFactory<TextField, UxmlTraits>
	{
		[Token(Token = "0x60004B8")]
		[Address(RVA = "0x4F45C80", Offset = "0x4F45C80", VA = "0x4F45C80")]
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
		[Address(RVA = "0x4F45CC0", Offset = "0x4F45CC0", VA = "0x4F45CC0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x4F45FD0", Offset = "0x4F45FD0", VA = "0x4F45FD0")]
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
			[Address(RVA = "0x4F44E00", Offset = "0x4F44E00", VA = "0x4F44E00")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60004BD")]
			[Address(RVA = "0x4F450B0", Offset = "0x4F450B0", VA = "0x4F450B0")]
			set
			{
			}
		}

		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x4F46190", Offset = "0x4F46190", VA = "0x4F46190", Slot = "98")]
		protected override string StringToValue(string str)
		{
			return null;
		}

		[Token(Token = "0x60004BF")]
		[Address(RVA = "0x4F455D0", Offset = "0x4F455D0", VA = "0x4F455D0")]
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
		[Address(RVA = "0x4F44D20", Offset = "0x4F44D20", VA = "0x4F44D20")]
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
		[Address(RVA = "0x4F44D90", Offset = "0x4F44D90", VA = "0x4F44D90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004AC")]
		[Address(RVA = "0x4F44EB0", Offset = "0x4F44EB0", VA = "0x4F44EB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public override string value
	{
		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x4F45630", Offset = "0x4F45630", VA = "0x4F45630", Slot = "105")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004B1")]
		[Address(RVA = "0x4F45670", Offset = "0x4F45670", VA = "0x4F45670", Slot = "106")]
		set
		{
		}
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x4F452E0", Offset = "0x4F452E0", VA = "0x4F452E0")]
	public TextField()
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x4F45300", Offset = "0x4F45300", VA = "0x4F45300")]
	public TextField(string label)
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x4F45320", Offset = "0x4F45320", VA = "0x4F45320")]
	public TextField(string label, int maxLength, bool multiline, bool isPasswordField, char maskChar)
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x4F45780", Offset = "0x4F45780", VA = "0x4F45780", Slot = "114")]
	public override void SetValueWithoutNotify(string newValue)
	{
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x4F45900", Offset = "0x4F45900", VA = "0x4F45900", Slot = "10")]
	[EventInterest(new Type[] { typeof(BlurEvent) })]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x4F45A60", Offset = "0x4F45A60", VA = "0x4F45A60", Slot = "94")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x4F45AF0", Offset = "0x4F45AF0", VA = "0x4F45AF0", Slot = "115")]
	protected override string ValueToString(string value)
	{
		return null;
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x4F45B00", Offset = "0x4F45B00", VA = "0x4F45B00", Slot = "116")]
	protected override string StringToValue(string str)
	{
		return null;
	}
}
