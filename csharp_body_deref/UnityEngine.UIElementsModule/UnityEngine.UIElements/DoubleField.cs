// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DoubleField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000BE")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class DoubleField : TextValueField<double>
{
	[Token(Token = "0x20000BF")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<DoubleField, UxmlTraits>
	{
		[Token(Token = "0x6000592")]
		[Address(RVA = "0x6BDC060", Offset = "0x6BDB060", VA = "0x6BDC060")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000C0")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextValueFieldTraits<double, UxmlDoubleAttributeDescription>
	{
		[Token(Token = "0x6000593")]
		[Address(RVA = "0x6BDC0A0", Offset = "0x6BDB0A0", VA = "0x6BDC0A0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x20000C1")]
	private class DoubleInput : TextValueInput
	{
		[Token(Token = "0x170000ED")]
		private DoubleField parentDoubleField
		{
			[Token(Token = "0x6000594")]
			[Address(RVA = "0x6BDC0E0", Offset = "0x6BDB0E0", VA = "0x6BDC0E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000EE")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x6000596")]
			[Address(RVA = "0x6BDC150", Offset = "0x6BDB150", VA = "0x6BDC150", Slot = "143")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000595")]
		[Address(RVA = "0x6BDBE10", Offset = "0x6BDAE10", VA = "0x6BDBE10")]
		internal DoubleInput()
		{
		}

		[Token(Token = "0x6000597")]
		[Address(RVA = "0x6BDC230", Offset = "0x6BDB230", VA = "0x6BDC230", Slot = "144")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, double startValue)
		{
		}

		[Token(Token = "0x6000598")]
		[Address(RVA = "0x6BDC440", Offset = "0x6BDB440", VA = "0x6BDC440", Slot = "145")]
		protected override string ValueToString(double v)
		{
			return null;
		}

		[Token(Token = "0x6000599")]
		[Address(RVA = "0x6BDC490", Offset = "0x6BDB490", VA = "0x6BDC490", Slot = "141")]
		protected override double StringToValue(string str)
		{
			return default(double);
		}
	}

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x170000EC")]
	private DoubleInput doubleInput
	{
		[Token(Token = "0x600058A")]
		[Address(RVA = "0x6BDBA10", Offset = "0x6BDAA10", VA = "0x6BDBA10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x6BDBA80", Offset = "0x6BDAA80", VA = "0x6BDBA80", Slot = "161")]
	protected override string ValueToString(double v)
	{
		return null;
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x6BDBB20", Offset = "0x6BDAB20", VA = "0x6BDBB20", Slot = "162")]
	protected override double StringToValue(string str)
	{
		return default(double);
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x6BDBC20", Offset = "0x6BDAC20", VA = "0x6BDBC20")]
	public DoubleField()
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x6BDBC30", Offset = "0x6BDAC30", VA = "0x6BDBC30")]
	public DoubleField(string label, int maxLength = 1000)
	{
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x6BDBEA0", Offset = "0x6BDAEA0", VA = "0x6BDBEA0", Slot = "171")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x6BDBEC0", Offset = "0x6BDAEC0", VA = "0x6BDBEC0", Slot = "170")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, double startValue)
	{
	}
}
