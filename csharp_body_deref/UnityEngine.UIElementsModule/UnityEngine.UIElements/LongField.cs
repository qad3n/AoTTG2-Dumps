// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.LongField
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000FF")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class LongField : TextValueField<long>
{
	[Token(Token = "0x2000100")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<LongField, UxmlTraits>
	{
		[Token(Token = "0x600074B")]
		[Address(RVA = "0x3224D60", Offset = "0x3223360", VA = "0x183224D60")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000101")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextValueFieldTraits<long, UxmlLongAttributeDescription>
	{
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x3226A40", Offset = "0x3225040", VA = "0x183226A40")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x2000102")]
	private class LongInput : TextValueInput
	{
		[Token(Token = "0x1700014D")]
		private LongField parentLongField
		{
			[Token(Token = "0x600074D")]
			[Address(RVA = "0x3217C60", Offset = "0x3216260", VA = "0x183217C60")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014E")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x600074F")]
			[Address(RVA = "0x3217BB0", Offset = "0x32161B0", VA = "0x183217BB0", Slot = "143")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600074E")]
		[Address(RVA = "0x3217B20", Offset = "0x3216120", VA = "0x183217B20")]
		internal LongInput()
		{
		}

		[Token(Token = "0x6000750")]
		[Address(RVA = "0x32177D0", Offset = "0x3215DD0", VA = "0x1832177D0", Slot = "144")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, long startValue)
		{
		}

		[Token(Token = "0x6000751")]
		[Address(RVA = "0x32179E0", Offset = "0x3215FE0", VA = "0x1832179E0")]
		private long ClampMinMaxLongValue(long niceDelta, long value)
		{
			return default(long);
		}

		[Token(Token = "0x6000752")]
		[Address(RVA = "0x3217AD0", Offset = "0x32160D0", VA = "0x183217AD0", Slot = "145")]
		protected override string ValueToString(long v)
		{
			return null;
		}

		[Token(Token = "0x6000753")]
		[Address(RVA = "0x3217A90", Offset = "0x3216090", VA = "0x183217A90", Slot = "141")]
		protected override long StringToValue(string str)
		{
			return default(long);
		}
	}

	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x1700014C")]
	private LongInput longInput
	{
		[Token(Token = "0x6000743")]
		[Address(RVA = "0x3217750", Offset = "0x3215D50", VA = "0x183217750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x32171D0", Offset = "0x32157D0", VA = "0x1832171D0", Slot = "161")]
	protected override string ValueToString(long v)
	{
		return null;
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x32170B0", Offset = "0x32156B0", VA = "0x1832170B0", Slot = "162")]
	protected override long StringToValue(string str)
	{
		return default(long);
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x3217570", Offset = "0x3215B70", VA = "0x183217570")]
	public LongField()
	{
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x3217390", Offset = "0x3215990", VA = "0x183217390")]
	public LongField(string label, int maxLength = 1000)
	{
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x3217080", Offset = "0x3215680", VA = "0x183217080", Slot = "171")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x3216FC0", Offset = "0x32155C0", VA = "0x183216FC0", Slot = "170")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, long startValue)
	{
	}
}
