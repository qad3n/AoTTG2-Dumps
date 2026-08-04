// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FloatField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F3AE20", Offset = "0x4F3AE20", VA = "0x4F3AE20")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000090")]
	public new class UxmlTraits : TextValueFieldTraits<float, UxmlFloatAttributeDescription>
	{
		[Token(Token = "0x60003F5")]
		[Address(RVA = "0x4F3AE60", Offset = "0x4F3AE60", VA = "0x4F3AE60")]
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
			[Address(RVA = "0x4F3AEA0", Offset = "0x4F3AEA0", VA = "0x4F3AEA0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700008F")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x60003F8")]
			[Address(RVA = "0x4F3AF10", Offset = "0x4F3AF10", VA = "0x4F3AF10", Slot = "100")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x4F3ABD0", Offset = "0x4F3ABD0", VA = "0x4F3ABD0")]
		internal FloatInput()
		{
		}

		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x4F3AF80", Offset = "0x4F3AF80", VA = "0x4F3AF80", Slot = "101")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, float startValue)
		{
		}

		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x4F3B1C0", Offset = "0x4F3B1C0", VA = "0x4F3B1C0", Slot = "102")]
		protected override string ValueToString(float v)
		{
			return null;
		}

		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x4F3B210", Offset = "0x4F3B210", VA = "0x4F3B210", Slot = "98")]
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
		[Address(RVA = "0x4F3A800", Offset = "0x4F3A800", VA = "0x4F3A800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x4F3A870", Offset = "0x4F3A870", VA = "0x4F3A870", Slot = "115")]
	protected override string ValueToString(float v)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x4F3A910", Offset = "0x4F3A910", VA = "0x4F3A910", Slot = "116")]
	protected override float StringToValue(string str)
	{
		return default(float);
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x4F3A9E0", Offset = "0x4F3A9E0", VA = "0x4F3A9E0")]
	public FloatField()
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x4F3A9F0", Offset = "0x4F3A9F0", VA = "0x4F3A9F0")]
	public FloatField(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x4F3AC60", Offset = "0x4F3AC60", VA = "0x4F3AC60", Slot = "125")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x4F3AC80", Offset = "0x4F3AC80", VA = "0x4F3AC80", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, float startValue)
	{
	}
}
