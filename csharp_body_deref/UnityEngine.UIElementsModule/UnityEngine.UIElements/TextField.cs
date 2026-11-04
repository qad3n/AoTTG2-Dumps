// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextField
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x31E3940", Offset = "0x31E1F40", VA = "0x1831E3940")]
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
		[Address(RVA = "0x31E4A30", Offset = "0x31E3030", VA = "0x1831E4A30", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60006A8")]
		[Address(RVA = "0x31E6520", Offset = "0x31E4B20", VA = "0x1831E6520")]
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
			[Address(RVA = "0x31E1480", Offset = "0x31DFA80", VA = "0x1831E1480")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011D")]
		public bool multiline
		{
			[Token(Token = "0x60006AB")]
			[Address(RVA = "0x31E1410", Offset = "0x31DFA10", VA = "0x1831E1410")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60006AC")]
			[Address(RVA = "0x31E1500", Offset = "0x31DFB00", VA = "0x1831E1500")]
			set
			{
			}
		}

		[Token(Token = "0x60006AD")]
		[Address(RVA = "0x8E13A0", Offset = "0x8DF9A0", VA = "0x1808E13A0", Slot = "141")]
		protected override string StringToValue(string str)
		{
			return null;
		}

		[Token(Token = "0x60006AE")]
		[Address(RVA = "0x31E13B0", Offset = "0x31DF9B0", VA = "0x1831E13B0")]
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
		[Address(RVA = "0x31E10C0", Offset = "0x31DF6C0", VA = "0x1831E10C0")]
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
		[Address(RVA = "0x31E1050", Offset = "0x31DF650", VA = "0x1831E1050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000699")]
		[Address(RVA = "0x31E1180", Offset = "0x31DF780", VA = "0x1831E1180")]
		set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public override string value
	{
		[Token(Token = "0x600069D")]
		[Address(RVA = "0x31E1140", Offset = "0x31DF740", VA = "0x1831E1140", Slot = "148")]
		get
		{
			return null;
		}
		[Token(Token = "0x600069E")]
		[Address(RVA = "0x31E1300", Offset = "0x31DF900", VA = "0x1831E1300", Slot = "149")]
		set
		{
		}
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x31E1020", Offset = "0x31DF620", VA = "0x1831E1020")]
	public TextField()
	{
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x31E0FF0", Offset = "0x31DF5F0", VA = "0x1831E0FF0")]
	public TextField(string label)
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x31E0DA0", Offset = "0x31DF3A0", VA = "0x1831E0DA0")]
	public TextField(string label, int maxLength, bool multiline, bool isPasswordField, char maskChar)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x31E0990", Offset = "0x31DEF90", VA = "0x1831E0990", Slot = "159")]
	public override void SetValueWithoutNotify(string newValue)
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x31E0B20", Offset = "0x31DF120", VA = "0x1831E0B20", Slot = "164")]
	internal override void UpdateTextFromValue()
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x31E0700", Offset = "0x31DED00", VA = "0x1831E0700", Slot = "8")]
	[EventInterest(new Type[] { typeof(FocusOutEvent) })]
	protected override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x31E0900", Offset = "0x31DEF00", VA = "0x1831E0900", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x8E13A0", Offset = "0x8DF9A0", VA = "0x1808E13A0", Slot = "161")]
	protected override string ValueToString(string value)
	{
		return null;
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x8E13A0", Offset = "0x8DF9A0", VA = "0x1808E13A0", Slot = "162")]
	protected override string StringToValue(string str)
	{
		return null;
	}
}
