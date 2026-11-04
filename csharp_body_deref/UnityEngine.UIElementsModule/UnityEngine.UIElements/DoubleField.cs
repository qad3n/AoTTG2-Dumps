// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DoubleField
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x31E3D80", Offset = "0x31E2380", VA = "0x1831E3D80")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000C0")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextValueFieldTraits<double, UxmlDoubleAttributeDescription>
	{
		[Token(Token = "0x6000593")]
		[Address(RVA = "0x31E6F90", Offset = "0x31E5590", VA = "0x1831E6F90")]
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
			[Address(RVA = "0x31D0330", Offset = "0x31CE930", VA = "0x1831D0330")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000EE")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x6000596")]
			[Address(RVA = "0x31D0280", Offset = "0x31CE880", VA = "0x1831D0280", Slot = "143")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000595")]
		[Address(RVA = "0x31D01F0", Offset = "0x31CE7F0", VA = "0x1831D01F0")]
		internal DoubleInput()
		{
		}

		[Token(Token = "0x6000597")]
		[Address(RVA = "0x31CFFE0", Offset = "0x31CE5E0", VA = "0x1831CFFE0", Slot = "144")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, double startValue)
		{
		}

		[Token(Token = "0x6000598")]
		[Address(RVA = "0x31D01A0", Offset = "0x31CE7A0", VA = "0x1831D01A0", Slot = "145")]
		protected override string ValueToString(double v)
		{
			return null;
		}

		[Token(Token = "0x6000599")]
		[Address(RVA = "0x31D0160", Offset = "0x31CE760", VA = "0x1831D0160", Slot = "141")]
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
		[Address(RVA = "0x31CFF60", Offset = "0x31CE560", VA = "0x1831CFF60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x31CF9E0", Offset = "0x31CDFE0", VA = "0x1831CF9E0", Slot = "161")]
	protected override string ValueToString(double v)
	{
		return null;
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x31CF8C0", Offset = "0x31CDEC0", VA = "0x1831CF8C0", Slot = "162")]
	protected override double StringToValue(string str)
	{
		return default(double);
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x31CFD80", Offset = "0x31CE380", VA = "0x1831CFD80")]
	public DoubleField()
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x31CFBA0", Offset = "0x31CE1A0", VA = "0x1831CFBA0")]
	public DoubleField(string label, int maxLength = 1000)
	{
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x31CF890", Offset = "0x31CDE90", VA = "0x1831CF890", Slot = "171")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x31CF7B0", Offset = "0x31CDDB0", VA = "0x1831CF7B0", Slot = "170")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, double startValue)
	{
	}
}
