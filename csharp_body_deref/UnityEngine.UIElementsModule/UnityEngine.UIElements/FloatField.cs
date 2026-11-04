// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FloatField
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000CA")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class FloatField : TextValueField<float>
{
	[Token(Token = "0x20000CB")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<FloatField, UxmlTraits>
	{
		[Token(Token = "0x60005C5")]
		[Address(RVA = "0x31E3900", Offset = "0x31E1F00", VA = "0x1831E3900")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000CC")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextValueFieldTraits<float, UxmlFloatAttributeDescription>
	{
		[Token(Token = "0x60005C6")]
		[Address(RVA = "0x31E78F0", Offset = "0x31E5EF0", VA = "0x1831E78F0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x20000CD")]
	private class FloatInput : TextValueInput
	{
		[Token(Token = "0x170000F2")]
		private FloatField parentFloatField
		{
			[Token(Token = "0x60005C7")]
			[Address(RVA = "0x31D2AC0", Offset = "0x31D10C0", VA = "0x1831D2AC0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000F3")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x60005C9")]
			[Address(RVA = "0x31D2A10", Offset = "0x31D1010", VA = "0x1831D2A10", Slot = "143")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x31D2980", Offset = "0x31D0F80", VA = "0x1831D2980")]
		internal FloatInput()
		{
		}

		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x31D2750", Offset = "0x31D0D50", VA = "0x1831D2750", Slot = "144")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, float startValue)
		{
		}

		[Token(Token = "0x60005CB")]
		[Address(RVA = "0x31D2930", Offset = "0x31D0F30", VA = "0x1831D2930", Slot = "145")]
		protected override string ValueToString(float v)
		{
			return null;
		}

		[Token(Token = "0x60005CC")]
		[Address(RVA = "0x31D28F0", Offset = "0x31D0EF0", VA = "0x1831D28F0", Slot = "141")]
		protected override float StringToValue(string str)
		{
			return default(float);
		}
	}

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x170000F1")]
	private FloatInput floatInput
	{
		[Token(Token = "0x60005BC")]
		[Address(RVA = "0x31D26D0", Offset = "0x31D0CD0", VA = "0x1831D26D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x31D2150", Offset = "0x31D0750", VA = "0x1831D2150", Slot = "161")]
	protected override string ValueToString(float v)
	{
		return null;
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x31D1F80", Offset = "0x31D0580", VA = "0x1831D1F80", Slot = "162")]
	protected override float StringToValue(string str)
	{
		return default(float);
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x31D20A0", Offset = "0x31D06A0", VA = "0x1831D20A0", Slot = "163")]
	internal override void UpdateValueFromText()
	{
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x31D2310", Offset = "0x31D0910", VA = "0x1831D2310")]
	public FloatField()
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x31D24F0", Offset = "0x31D0AF0", VA = "0x1831D24F0")]
	public FloatField(string label, int maxLength = 1000)
	{
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x31D1F50", Offset = "0x31D0550", VA = "0x1831D1F50", Slot = "171")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x31D1E70", Offset = "0x31D0470", VA = "0x1831D1E70", Slot = "170")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, float startValue)
	{
	}
}
