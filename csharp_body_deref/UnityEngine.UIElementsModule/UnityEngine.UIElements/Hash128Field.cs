using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x200009C")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Hash128Field : TextInputBaseField<Hash128>
{
	[Token(Token = "0x200009D")]
	public new class UxmlFactory : UxmlFactory<Hash128Field, UxmlTraits>
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x4C18740", Offset = "0x4C18740", VA = "0x4C18740")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200009E")]
	public new class UxmlTraits : TextValueFieldTraits<Hash128, UxmlHash128AttributeDescription>
	{
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x4C18780", Offset = "0x4C18780", VA = "0x4C18780")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x200009F")]
	private class Hash128Input : TextInputBase
	{
		[Token(Token = "0x17000098")]
		protected string allowedCharacters
		{
			[Token(Token = "0x6000444")]
			[Address(RVA = "0x4C187C0", Offset = "0x4C187C0", VA = "0x4C187C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000443")]
		[Address(RVA = "0x4C17F70", Offset = "0x4C17F70", VA = "0x4C17F70")]
		internal Hash128Input()
		{
		}

		[Token(Token = "0x6000445")]
		[Address(RVA = "0x4C187F0", Offset = "0x4C187F0", VA = "0x4C187F0", Slot = "99")]
		internal override bool AcceptCharacter(char c)
		{
			return default(bool);
		}

		[Token(Token = "0x6000446")]
		[Address(RVA = "0x4C18880", Offset = "0x4C18880", VA = "0x4C18880", Slot = "98")]
		protected override Hash128 StringToValue(string str)
		{
			return default(Hash128);
		}

		[Token(Token = "0x6000447")]
		[Address(RVA = "0x4C18470", Offset = "0x4C18470", VA = "0x4C18470")]
		internal static Hash128 Parse(string str)
		{
			return default(Hash128);
		}
	}

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0x468")]
	internal bool m_UpdateTextFromValue;

	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x17000097")]
	public override Hash128 value
	{
		[Token(Token = "0x6000438")]
		[Address(RVA = "0x4C180B0", Offset = "0x4C180B0", VA = "0x4C180B0", Slot = "105")]
		get
		{
			return default(Hash128);
		}
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x4C180F0", Offset = "0x4C180F0", VA = "0x4C180F0", Slot = "106")]
		set
		{
		}
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x4C17DF0", Offset = "0x4C17DF0", VA = "0x4C17DF0")]
	public Hash128Field()
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x4C17E00", Offset = "0x4C17E00", VA = "0x4C17E00")]
	public Hash128Field(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x4C181B0", Offset = "0x4C181B0", VA = "0x4C181B0", Slot = "117")]
	internal override void UpdateValueFromText()
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x4C182A0", Offset = "0x4C182A0", VA = "0x4C182A0", Slot = "118")]
	internal override void UpdateTextFromValue()
	{
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x4C18320", Offset = "0x4C18320", VA = "0x4C18320", Slot = "114")]
	public override void SetValueWithoutNotify(Hash128 newValue)
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x4C183E0", Offset = "0x4C183E0", VA = "0x4C183E0", Slot = "115")]
	protected override string ValueToString(Hash128 value)
	{
		return null;
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x4C18400", Offset = "0x4C18400", VA = "0x4C18400", Slot = "116")]
	protected override Hash128 StringToValue(string str)
	{
		return default(Hash128);
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x4C184E0", Offset = "0x4C184E0", VA = "0x4C184E0", Slot = "10")]
	[EventInterest(new Type[] { typeof(BlurEvent) })]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}
}
