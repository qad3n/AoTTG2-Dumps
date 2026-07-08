using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x200008E")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class FloatField : TextValueField<float>
{
	[Token(Token = "0x200008F")]
	public new class UxmlFactory : UxmlFactory<FloatField, UxmlTraits>
	{
		[Token(Token = "0x60003F4")]
		[Address(RVA = "0x4C134F0", Offset = "0x4C134F0", VA = "0x4C134F0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000090")]
	public new class UxmlTraits : TextValueFieldTraits<float, UxmlFloatAttributeDescription>
	{
		[Token(Token = "0x60003F5")]
		[Address(RVA = "0x4C13530", Offset = "0x4C13530", VA = "0x4C13530")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x2000091")]
	private class FloatInput : TextValueInput
	{
		[Token(Token = "0x1700008E")]
		private FloatField parentFloatField
		{
			[Token(Token = "0x60003F6")]
			[Address(RVA = "0x4C13570", Offset = "0x4C13570", VA = "0x4C13570")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700008F")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x60003F8")]
			[Address(RVA = "0x4C135E0", Offset = "0x4C135E0", VA = "0x4C135E0", Slot = "100")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x4C132A0", Offset = "0x4C132A0", VA = "0x4C132A0")]
		internal FloatInput()
		{
		}

		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x4C13650", Offset = "0x4C13650", VA = "0x4C13650", Slot = "101")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, float startValue)
		{
		}

		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x4C13890", Offset = "0x4C13890", VA = "0x4C13890", Slot = "102")]
		protected override string ValueToString(float v)
		{
			return null;
		}

		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x4C138E0", Offset = "0x4C138E0", VA = "0x4C138E0", Slot = "98")]
		protected override float StringToValue(string str)
		{
			return default(float);
		}
	}

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x1700008D")]
	private FloatInput floatInput
	{
		[Token(Token = "0x60003EC")]
		[Address(RVA = "0x4C12ED0", Offset = "0x4C12ED0", VA = "0x4C12ED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x4C12F40", Offset = "0x4C12F40", VA = "0x4C12F40", Slot = "115")]
	protected override string ValueToString(float v)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x4C12FE0", Offset = "0x4C12FE0", VA = "0x4C12FE0", Slot = "116")]
	protected override float StringToValue(string str)
	{
		return default(float);
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x4C130B0", Offset = "0x4C130B0", VA = "0x4C130B0")]
	public FloatField()
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x4C130C0", Offset = "0x4C130C0", VA = "0x4C130C0")]
	public FloatField(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x4C13330", Offset = "0x4C13330", VA = "0x4C13330", Slot = "125")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x4C13350", Offset = "0x4C13350", VA = "0x4C13350", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, float startValue)
	{
	}
}
