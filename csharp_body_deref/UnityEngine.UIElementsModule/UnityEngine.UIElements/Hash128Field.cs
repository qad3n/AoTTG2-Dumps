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

[Token(Token = "0x200009C")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Hash128Field : TextInputBaseField<Hash128>
{
	[Token(Token = "0x200009D")]
	public new class UxmlFactory : UxmlFactory<Hash128Field, UxmlTraits>
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x4F40070", Offset = "0x4F40070", VA = "0x4F40070")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200009E")]
	public new class UxmlTraits : TextValueFieldTraits<Hash128, UxmlHash128AttributeDescription>
	{
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x4F400B0", Offset = "0x4F400B0", VA = "0x4F400B0")]
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
			[Address(RVA = "0x4F400F0", Offset = "0x4F400F0", VA = "0x4F400F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000443")]
		[Address(RVA = "0x4F3F8A0", Offset = "0x4F3F8A0", VA = "0x4F3F8A0")]
		internal Hash128Input()
		{
		}

		[Token(Token = "0x6000445")]
		[Address(RVA = "0x4F40120", Offset = "0x4F40120", VA = "0x4F40120", Slot = "99")]
		internal override bool AcceptCharacter(char c)
		{
			return default(bool);
		}

		[Token(Token = "0x6000446")]
		[Address(RVA = "0x4F401B0", Offset = "0x4F401B0", VA = "0x4F401B0", Slot = "98")]
		protected override Hash128 StringToValue(string str)
		{
			return default(Hash128);
		}

		[Token(Token = "0x6000447")]
		[Address(RVA = "0x4F3FDA0", Offset = "0x4F3FDA0", VA = "0x4F3FDA0")]
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
		[Address(RVA = "0x4F3F9E0", Offset = "0x4F3F9E0", VA = "0x4F3F9E0", Slot = "105")]
		get
		{
			return default(Hash128);
		}
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x4F3FA20", Offset = "0x4F3FA20", VA = "0x4F3FA20", Slot = "106")]
		set
		{
		}
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x4F3F720", Offset = "0x4F3F720", VA = "0x4F3F720")]
	public Hash128Field()
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x4F3F730", Offset = "0x4F3F730", VA = "0x4F3F730")]
	public Hash128Field(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x4F3FAE0", Offset = "0x4F3FAE0", VA = "0x4F3FAE0", Slot = "117")]
	internal override void UpdateValueFromText()
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x4F3FBD0", Offset = "0x4F3FBD0", VA = "0x4F3FBD0", Slot = "118")]
	internal override void UpdateTextFromValue()
	{
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x4F3FC50", Offset = "0x4F3FC50", VA = "0x4F3FC50", Slot = "114")]
	public override void SetValueWithoutNotify(Hash128 newValue)
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x4F3FD10", Offset = "0x4F3FD10", VA = "0x4F3FD10", Slot = "115")]
	protected override string ValueToString(Hash128 value)
	{
		return null;
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x4F3FD30", Offset = "0x4F3FD30", VA = "0x4F3FD30", Slot = "116")]
	protected override Hash128 StringToValue(string str)
	{
		return default(Hash128);
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x4F3FE10", Offset = "0x4F3FE10", VA = "0x4F3FE10", Slot = "10")]
	[EventInterest(new Type[] { typeof(BlurEvent) })]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}
}
