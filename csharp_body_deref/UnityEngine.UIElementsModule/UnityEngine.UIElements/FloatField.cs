// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FloatField
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6BDEC60", Offset = "0x6BDDC60", VA = "0x6BDEC60")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000CC")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextValueFieldTraits<float, UxmlFloatAttributeDescription>
	{
		[Token(Token = "0x60005C6")]
		[Address(RVA = "0x6BDECA0", Offset = "0x6BDDCA0", VA = "0x6BDECA0")]
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
			[Address(RVA = "0x6BDECE0", Offset = "0x6BDDCE0", VA = "0x6BDECE0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000F3")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x60005C9")]
			[Address(RVA = "0x6BDED50", Offset = "0x6BDDD50", VA = "0x6BDED50", Slot = "143")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x6BDEA10", Offset = "0x6BDDA10", VA = "0x6BDEA10")]
		internal FloatInput()
		{
		}

		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x6BDEE30", Offset = "0x6BDDE30", VA = "0x6BDEE30", Slot = "144")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, float startValue)
		{
		}

		[Token(Token = "0x60005CB")]
		[Address(RVA = "0x6BDF070", Offset = "0x6BDE070", VA = "0x6BDF070", Slot = "145")]
		protected override string ValueToString(float v)
		{
			return null;
		}

		[Token(Token = "0x60005CC")]
		[Address(RVA = "0x6BDF0C0", Offset = "0x6BDE0C0", VA = "0x6BDF0C0", Slot = "141")]
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
		[Address(RVA = "0x6BDE560", Offset = "0x6BDD560", VA = "0x6BDE560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x6BDE5D0", Offset = "0x6BDD5D0", VA = "0x6BDE5D0", Slot = "161")]
	protected override string ValueToString(float v)
	{
		return null;
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x6BDE670", Offset = "0x6BDD670", VA = "0x6BDE670", Slot = "162")]
	protected override float StringToValue(string str)
	{
		return default(float);
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x6BDE770", Offset = "0x6BDD770", VA = "0x6BDE770", Slot = "163")]
	internal override void UpdateValueFromText()
	{
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x6BDE820", Offset = "0x6BDD820", VA = "0x6BDE820")]
	public FloatField()
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x6BDE830", Offset = "0x6BDD830", VA = "0x6BDE830")]
	public FloatField(string label, int maxLength = 1000)
	{
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x6BDEAA0", Offset = "0x6BDDAA0", VA = "0x6BDEAA0", Slot = "171")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x6BDEAC0", Offset = "0x6BDDAC0", VA = "0x6BDEAC0", Slot = "170")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, float startValue)
	{
	}
}
