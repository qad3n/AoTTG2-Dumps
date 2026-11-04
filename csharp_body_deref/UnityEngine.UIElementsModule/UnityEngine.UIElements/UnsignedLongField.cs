// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UnsignedLongField
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000177")]
public class UnsignedLongField : TextValueField<ulong>
{
	[Token(Token = "0x2000178")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<UnsignedLongField, UxmlTraits>
	{
		[Token(Token = "0x6000AC4")]
		[Address(RVA = "0x3254C80", Offset = "0x3253280", VA = "0x183254C80")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000179")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextValueFieldTraits<ulong, UxmlUnsignedLongAttributeDescription>
	{
		[Token(Token = "0x6000AC5")]
		[Address(RVA = "0x3255610", Offset = "0x3253C10", VA = "0x183255610")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x200017A")]
	private class UnsignedLongInput : TextValueInput
	{
		[Token(Token = "0x17000206")]
		private UnsignedLongField parentUnsignedLongField
		{
			[Token(Token = "0x6000AC6")]
			[Address(RVA = "0x3254B40", Offset = "0x3253140", VA = "0x183254B40")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000207")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x6000AC8")]
			[Address(RVA = "0x3254A90", Offset = "0x3253090", VA = "0x183254A90", Slot = "143")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000AC7")]
		[Address(RVA = "0x3254A00", Offset = "0x3253000", VA = "0x183254A00")]
		internal UnsignedLongInput()
		{
		}

		[Token(Token = "0x6000AC9")]
		[Address(RVA = "0x32546C0", Offset = "0x3252CC0", VA = "0x1832546C0", Slot = "144")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, ulong startValue)
		{
		}

		[Token(Token = "0x6000ACA")]
		[Address(RVA = "0x32548D0", Offset = "0x3252ED0", VA = "0x1832548D0")]
		private ulong ClampToMinMaxULongValue(long niceDelta, ulong value)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000ACB")]
		[Address(RVA = "0x32549B0", Offset = "0x3252FB0", VA = "0x1832549B0", Slot = "145")]
		protected override string ValueToString(ulong v)
		{
			return null;
		}

		[Token(Token = "0x6000ACC")]
		[Address(RVA = "0x3254970", Offset = "0x3252F70", VA = "0x183254970", Slot = "141")]
		protected override ulong StringToValue(string str)
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x40006CD")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40006CE")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40006CF")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x17000205")]
	private UnsignedLongInput unsignedLongInput
	{
		[Token(Token = "0x6000ABC")]
		[Address(RVA = "0x3254640", Offset = "0x3252C40", VA = "0x183254640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x32540C0", Offset = "0x32526C0", VA = "0x1832540C0", Slot = "161")]
	protected override string ValueToString(ulong v)
	{
		return null;
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x3253FA0", Offset = "0x32525A0", VA = "0x183253FA0", Slot = "162")]
	protected override ulong StringToValue(string str)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x3254460", Offset = "0x3252A60", VA = "0x183254460")]
	public UnsignedLongField()
	{
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x3254280", Offset = "0x3252880", VA = "0x183254280")]
	public UnsignedLongField(string label, int maxLength = 1000)
	{
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x3253F70", Offset = "0x3252570", VA = "0x183253F70", Slot = "171")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x3253EB0", Offset = "0x32524B0", VA = "0x183253EB0", Slot = "170")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, ulong startValue)
	{
	}
}
