using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000B7")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class IntegerField : TextValueField<int>
{
	[Token(Token = "0x20000B8")]
	public new class UxmlFactory : UxmlFactory<IntegerField, UxmlTraits>
	{
		[Token(Token = "0x600052A")]
		[Address(RVA = "0x4C20F60", Offset = "0x4C20F60", VA = "0x4C20F60")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000B9")]
	public new class UxmlTraits : TextValueFieldTraits<int, UxmlIntAttributeDescription>
	{
		[Token(Token = "0x600052B")]
		[Address(RVA = "0x4C20FA0", Offset = "0x4C20FA0", VA = "0x4C20FA0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x20000BA")]
	private class IntegerInput : TextValueInput
	{
		[Token(Token = "0x170000D4")]
		private IntegerField parentIntegerField
		{
			[Token(Token = "0x600052C")]
			[Address(RVA = "0x4C20FE0", Offset = "0x4C20FE0", VA = "0x4C20FE0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000D5")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x600052E")]
			[Address(RVA = "0x4C21050", Offset = "0x4C21050", VA = "0x4C21050", Slot = "100")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600052D")]
		[Address(RVA = "0x4C20D10", Offset = "0x4C20D10", VA = "0x4C20D10")]
		internal IntegerInput()
		{
		}

		[Token(Token = "0x600052F")]
		[Address(RVA = "0x4C210C0", Offset = "0x4C210C0", VA = "0x4C210C0", Slot = "101")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, int startValue)
		{
		}

		[Token(Token = "0x6000530")]
		[Address(RVA = "0x4C21420", Offset = "0x4C21420", VA = "0x4C21420", Slot = "102")]
		protected override string ValueToString(int v)
		{
			return null;
		}

		[Token(Token = "0x6000531")]
		[Address(RVA = "0x4C21470", Offset = "0x4C21470", VA = "0x4C21470", Slot = "98")]
		protected override int StringToValue(string str)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000304")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000305")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000306")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x170000D3")]
	private IntegerInput integerInput
	{
		[Token(Token = "0x6000522")]
		[Address(RVA = "0x4C20940", Offset = "0x4C20940", VA = "0x4C20940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x4C209B0", Offset = "0x4C209B0", VA = "0x4C209B0", Slot = "115")]
	protected override string ValueToString(int v)
	{
		return null;
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x4C20A50", Offset = "0x4C20A50", VA = "0x4C20A50", Slot = "116")]
	protected override int StringToValue(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x4C20B20", Offset = "0x4C20B20", VA = "0x4C20B20")]
	public IntegerField()
	{
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x4C20B30", Offset = "0x4C20B30", VA = "0x4C20B30")]
	public IntegerField(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x4C20DA0", Offset = "0x4C20DA0", VA = "0x4C20DA0", Slot = "125")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x4C20DC0", Offset = "0x4C20DC0", VA = "0x4C20DC0", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, int startValue)
	{
	}
}
