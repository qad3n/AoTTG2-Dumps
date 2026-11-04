// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Hash128Field
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x31E3D40", Offset = "0x31E2340", VA = "0x1831E3D40")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000DB")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextValueFieldTraits<Hash128, UxmlHash128AttributeDescription>
	{
		[Token(Token = "0x6000620")]
		[Address(RVA = "0x31E6730", Offset = "0x31E4D30", VA = "0x1831E6730")]
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
			[Address(RVA = "0x31D9510", Offset = "0x31D7B10", VA = "0x1831D9510")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000621")]
		[Address(RVA = "0x31D93B0", Offset = "0x31D79B0", VA = "0x1831D93B0")]
		internal Hash128Input()
		{
		}

		[Token(Token = "0x6000623")]
		[Address(RVA = "0x31D9260", Offset = "0x31D7860", VA = "0x1831D9260", Slot = "142")]
		internal override bool AcceptCharacter(char c)
		{
			return default(bool);
		}

		[Token(Token = "0x6000624")]
		[Address(RVA = "0x31D8B50", Offset = "0x31D7150", VA = "0x1831D8B50", Slot = "141")]
		protected override Hash128 StringToValue(string str)
		{
			return default(Hash128);
		}

		[Token(Token = "0x6000625")]
		[Address(RVA = "0x31D9310", Offset = "0x31D7910", VA = "0x1831D9310")]
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
		[Address(RVA = "0x31D9140", Offset = "0x31D7740", VA = "0x1831D9140", Slot = "148")]
		get
		{
			return default(Hash128);
		}
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x31D91A0", Offset = "0x31D77A0", VA = "0x1831D91A0", Slot = "149")]
		set
		{
		}
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x31D9130", Offset = "0x31D7730", VA = "0x1831D9130")]
	public Hash128Field()
	{
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x31D8E80", Offset = "0x31D7480", VA = "0x1831D8E80")]
	public Hash128Field(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x31D8C70", Offset = "0x31D7270", VA = "0x1831D8C70", Slot = "163")]
	internal override void UpdateValueFromText()
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x31D8BF0", Offset = "0x31D71F0", VA = "0x1831D8BF0", Slot = "164")]
	internal override void UpdateTextFromValue()
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x31D8A90", Offset = "0x31D7090", VA = "0x1831D8A90", Slot = "159")]
	public override void SetValueWithoutNotify(Hash128 newValue)
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x31D8D40", Offset = "0x31D7340", VA = "0x1831D8D40", Slot = "161")]
	protected override string ValueToString(Hash128 value)
	{
		return null;
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x31D8B50", Offset = "0x31D7150", VA = "0x1831D8B50", Slot = "162")]
	protected override Hash128 StringToValue(string str)
	{
		return default(Hash128);
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x31D8910", Offset = "0x31D6F10", VA = "0x1831D8910", Slot = "8")]
	[EventInterest(new Type[] { typeof(FocusOutEvent) })]
	protected override void HandleEventBubbleUp(EventBase evt)
	{
	}
}
