// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DoubleField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000082")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class DoubleField : TextValueField<double>
{
	[Token(Token = "0x2000083")]
	public new class UxmlFactory : UxmlFactory<DoubleField, UxmlTraits>
	{
		[Token(Token = "0x60003C2")]
		[Address(RVA = "0x4F37DE0", Offset = "0x4F37DE0", VA = "0x4F37DE0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000084")]
	public new class UxmlTraits : TextValueFieldTraits<double, UxmlDoubleAttributeDescription>
	{
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x4F37E20", Offset = "0x4F37E20", VA = "0x4F37E20")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x2000085")]
	private class DoubleInput : TextValueInput
	{
		[Token(Token = "0x17000089")]
		private DoubleField parentDoubleField
		{
			[Token(Token = "0x60003C4")]
			[Address(RVA = "0x4F37E60", Offset = "0x4F37E60", VA = "0x4F37E60")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700008A")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x60003C6")]
			[Address(RVA = "0x4F37ED0", Offset = "0x4F37ED0", VA = "0x4F37ED0", Slot = "100")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003C5")]
		[Address(RVA = "0x4F37B90", Offset = "0x4F37B90", VA = "0x4F37B90")]
		internal DoubleInput()
		{
		}

		[Token(Token = "0x60003C7")]
		[Address(RVA = "0x4F37F40", Offset = "0x4F37F40", VA = "0x4F37F40", Slot = "101")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, double startValue)
		{
		}

		[Token(Token = "0x60003C8")]
		[Address(RVA = "0x4F38150", Offset = "0x4F38150", VA = "0x4F38150", Slot = "102")]
		protected override string ValueToString(double v)
		{
			return null;
		}

		[Token(Token = "0x60003C9")]
		[Address(RVA = "0x4F381A0", Offset = "0x4F381A0", VA = "0x4F381A0", Slot = "98")]
		protected override double StringToValue(string str)
		{
			return default(double);
		}
	}

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x17000088")]
	private DoubleInput doubleInput
	{
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x4F377C0", Offset = "0x4F377C0", VA = "0x4F377C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x4F37830", Offset = "0x4F37830", VA = "0x4F37830", Slot = "115")]
	protected override string ValueToString(double v)
	{
		return null;
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x4F378D0", Offset = "0x4F378D0", VA = "0x4F378D0", Slot = "116")]
	protected override double StringToValue(string str)
	{
		return default(double);
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x4F379A0", Offset = "0x4F379A0", VA = "0x4F379A0")]
	public DoubleField()
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x4F379B0", Offset = "0x4F379B0", VA = "0x4F379B0")]
	public DoubleField(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x4F37C20", Offset = "0x4F37C20", VA = "0x4F37C20", Slot = "125")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x4F37C40", Offset = "0x4F37C40", VA = "0x4F37C40", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, double startValue)
	{
	}
}
