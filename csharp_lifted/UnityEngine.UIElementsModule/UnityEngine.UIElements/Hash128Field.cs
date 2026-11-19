// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Hash128Field
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000D9")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Hash128Field : TextInputBaseField<Hash128>
{
	[Token(Token = "0x20000DA")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Hash128Field, UxmlTraits>
	{
		[Token(Token = "0x600061F")]
		[Address(RVA = "0x6BE5910", Offset = "0x6BE4910", VA = "0x6BE5910")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000DB")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextValueFieldTraits<Hash128, UxmlHash128AttributeDescription>
	{
		[Token(Token = "0x6000620")]
		[Address(RVA = "0x6BE5950", Offset = "0x6BE4950", VA = "0x6BE5950")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x20000DC")]
	private class Hash128Input : TextInputBase
	{
		[Token(Token = "0x170000FF")]
		protected string allowedCharacters
		{
			[Token(Token = "0x6000622")]
			[Address(RVA = "0x6BE5990", Offset = "0x6BE4990", VA = "0x6BE5990")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000621")]
		[Address(RVA = "0x6BE5160", Offset = "0x6BE4160", VA = "0x6BE5160")]
		internal Hash128Input()
		{
		}

		[Token(Token = "0x6000623")]
		[Address(RVA = "0x6BE59C0", Offset = "0x6BE49C0", VA = "0x6BE59C0", Slot = "142")]
		internal override bool AcceptCharacter(char c)
		{
			return default(bool);
		}

		[Token(Token = "0x6000624")]
		[Address(RVA = "0x6BE5A50", Offset = "0x6BE4A50", VA = "0x6BE5A50", Slot = "141")]
		protected override Hash128 StringToValue(string str)
		{
			return default(Hash128);
		}

		[Token(Token = "0x6000625")]
		[Address(RVA = "0x6BE5630", Offset = "0x6BE4630", VA = "0x6BE5630")]
		internal static Hash128 Parse(string str)
		{
			return default(Hash128);
		}
	}

	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x170000FE")]
	public override Hash128 value
	{
		[Token(Token = "0x6000616")]
		[Address(RVA = "0x6BE52A0", Offset = "0x6BE42A0", VA = "0x6BE52A0", Slot = "148")]
		get
		{
			return default(Hash128);
		}
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x6BE52E0", Offset = "0x6BE42E0", VA = "0x6BE52E0", Slot = "149")]
		set
		{
		}
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x6BE4FF0", Offset = "0x6BE3FF0", VA = "0x6BE4FF0")]
	public Hash128Field()
	{
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x6BE5000", Offset = "0x6BE4000", VA = "0x6BE5000")]
	public Hash128Field(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x6BE5390", Offset = "0x6BE4390", VA = "0x6BE5390", Slot = "163")]
	internal override void UpdateValueFromText()
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x6BE5470", Offset = "0x6BE4470", VA = "0x6BE5470", Slot = "164")]
	internal override void UpdateTextFromValue()
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x6BE54F0", Offset = "0x6BE44F0", VA = "0x6BE54F0", Slot = "159")]
	public override void SetValueWithoutNotify(Hash128 newValue)
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x6BE55A0", Offset = "0x6BE45A0", VA = "0x6BE55A0", Slot = "161")]
	protected override string ValueToString(Hash128 value)
	{
		return null;
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x6BE55C0", Offset = "0x6BE45C0", VA = "0x6BE55C0", Slot = "162")]
	protected override Hash128 StringToValue(string str)
	{
		return default(Hash128);
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x6BE56A0", Offset = "0x6BE46A0", VA = "0x6BE56A0", Slot = "8")]
	[EventInterest(new Type[] { typeof(FocusOutEvent) })]
	protected override void HandleEventBubbleUp(EventBase evt)
	{
	}
}
