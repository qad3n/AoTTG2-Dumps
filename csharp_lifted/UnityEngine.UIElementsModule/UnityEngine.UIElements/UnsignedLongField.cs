// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UnsignedLongField
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6C4CE90", Offset = "0x6C4BE90", VA = "0x6C4CE90")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000179")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextValueFieldTraits<ulong, UxmlUnsignedLongAttributeDescription>
	{
		[Token(Token = "0x6000AC5")]
		[Address(RVA = "0x6C4CED0", Offset = "0x6C4BED0", VA = "0x6C4CED0")]
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
			[Address(RVA = "0x6C4CF10", Offset = "0x6C4BF10", VA = "0x6C4CF10")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000207")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x6000AC8")]
			[Address(RVA = "0x6C4CF80", Offset = "0x6C4BF80", VA = "0x6C4CF80", Slot = "143")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000AC7")]
		[Address(RVA = "0x6C4CC40", Offset = "0x6C4BC40", VA = "0x6C4CC40")]
		internal UnsignedLongInput()
		{
		}

		[Token(Token = "0x6000AC9")]
		[Address(RVA = "0x6C4D070", Offset = "0x6C4C070", VA = "0x6C4D070", Slot = "144")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, ulong startValue)
		{
		}

		[Token(Token = "0x6000ACA")]
		[Address(RVA = "0x6C4D3E0", Offset = "0x6C4C3E0", VA = "0x6C4D3E0")]
		private ulong ClampToMinMaxULongValue(long niceDelta, ulong value)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000ACB")]
		[Address(RVA = "0x6C4D460", Offset = "0x6C4C460", VA = "0x6C4D460", Slot = "145")]
		protected override string ValueToString(ulong v)
		{
			return null;
		}

		[Token(Token = "0x6000ACC")]
		[Address(RVA = "0x6C4D4B0", Offset = "0x6C4C4B0", VA = "0x6C4D4B0", Slot = "141")]
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
		[Address(RVA = "0x6C4C840", Offset = "0x6C4B840", VA = "0x6C4C840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x6C4C8B0", Offset = "0x6C4B8B0", VA = "0x6C4C8B0", Slot = "161")]
	protected override string ValueToString(ulong v)
	{
		return null;
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x6C4C950", Offset = "0x6C4B950", VA = "0x6C4C950", Slot = "162")]
	protected override ulong StringToValue(string str)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x6C4CA50", Offset = "0x6C4BA50", VA = "0x6C4CA50")]
	public UnsignedLongField()
	{
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x6C4CA60", Offset = "0x6C4BA60", VA = "0x6C4CA60")]
	public UnsignedLongField(string label, int maxLength = 1000)
	{
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x6C4CCD0", Offset = "0x6C4BCD0", VA = "0x6C4CCD0", Slot = "171")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x6C4CCF0", Offset = "0x6C4BCF0", VA = "0x6C4CCF0", Slot = "170")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, ulong startValue)
	{
	}
}
