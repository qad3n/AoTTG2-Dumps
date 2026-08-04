// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IntegerField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F48890", Offset = "0x4F48890", VA = "0x4F48890")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000B9")]
	public new class UxmlTraits : TextValueFieldTraits<int, UxmlIntAttributeDescription>
	{
		[Token(Token = "0x600052B")]
		[Address(RVA = "0x4F488D0", Offset = "0x4F488D0", VA = "0x4F488D0")]
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
			[Address(RVA = "0x4F48910", Offset = "0x4F48910", VA = "0x4F48910")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000D5")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x600052E")]
			[Address(RVA = "0x4F48980", Offset = "0x4F48980", VA = "0x4F48980", Slot = "100")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600052D")]
		[Address(RVA = "0x4F48640", Offset = "0x4F48640", VA = "0x4F48640")]
		internal IntegerInput()
		{
		}

		[Token(Token = "0x600052F")]
		[Address(RVA = "0x4F489F0", Offset = "0x4F489F0", VA = "0x4F489F0", Slot = "101")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, int startValue)
		{
		}

		[Token(Token = "0x6000530")]
		[Address(RVA = "0x4F48D50", Offset = "0x4F48D50", VA = "0x4F48D50", Slot = "102")]
		protected override string ValueToString(int v)
		{
			return null;
		}

		[Token(Token = "0x6000531")]
		[Address(RVA = "0x4F48DA0", Offset = "0x4F48DA0", VA = "0x4F48DA0", Slot = "98")]
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
		[Address(RVA = "0x4F48270", Offset = "0x4F48270", VA = "0x4F48270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x4F482E0", Offset = "0x4F482E0", VA = "0x4F482E0", Slot = "115")]
	protected override string ValueToString(int v)
	{
		return null;
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x4F48380", Offset = "0x4F48380", VA = "0x4F48380", Slot = "116")]
	protected override int StringToValue(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x4F48450", Offset = "0x4F48450", VA = "0x4F48450")]
	public IntegerField()
	{
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x4F48460", Offset = "0x4F48460", VA = "0x4F48460")]
	public IntegerField(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x4F486D0", Offset = "0x4F486D0", VA = "0x4F486D0", Slot = "125")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x4F486F0", Offset = "0x4F486F0", VA = "0x4F486F0", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, int startValue)
	{
	}
}
