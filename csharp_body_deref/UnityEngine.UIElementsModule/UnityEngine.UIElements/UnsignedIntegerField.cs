// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UnsignedIntegerField
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000173")]
public class UnsignedIntegerField : TextValueField<uint>
{
	[Token(Token = "0x2000174")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<UnsignedIntegerField, UxmlTraits>
	{
		[Token(Token = "0x6000AB4")]
		[Address(RVA = "0x3254D00", Offset = "0x3253300", VA = "0x183254D00")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000175")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextValueFieldTraits<uint, UxmlUnsignedIntAttributeDescription>
	{
		[Token(Token = "0x6000AB5")]
		[Address(RVA = "0x32555D0", Offset = "0x3253BD0", VA = "0x1832555D0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x2000176")]
	private class UnsignedIntegerInput : TextValueInput
	{
		[Token(Token = "0x17000203")]
		private UnsignedIntegerField parentUnsignedIntegerField
		{
			[Token(Token = "0x6000AB6")]
			[Address(RVA = "0x3253E30", Offset = "0x3252430", VA = "0x183253E30")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000204")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x6000AB8")]
			[Address(RVA = "0x3253D80", Offset = "0x3252380", VA = "0x183253D80", Slot = "143")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000AB7")]
		[Address(RVA = "0x3253CF0", Offset = "0x32522F0", VA = "0x183253CF0")]
		internal UnsignedIntegerInput()
		{
		}

		[Token(Token = "0x6000AB9")]
		[Address(RVA = "0x3253AB0", Offset = "0x32520B0", VA = "0x183253AB0", Slot = "144")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, uint startValue)
		{
		}

		[Token(Token = "0x6000ABA")]
		[Address(RVA = "0x3253CA0", Offset = "0x32522A0", VA = "0x183253CA0", Slot = "145")]
		protected override string ValueToString(uint v)
		{
			return null;
		}

		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x3253C60", Offset = "0x3252260", VA = "0x183253C60", Slot = "141")]
		protected override uint StringToValue(string str)
		{
			return default(uint);
		}
	}

	[Token(Token = "0x40006CA")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40006CB")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40006CC")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x17000202")]
	private UnsignedIntegerInput integerInput
	{
		[Token(Token = "0x6000AAC")]
		[Address(RVA = "0x3253A30", Offset = "0x3252030", VA = "0x183253A30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x32534B0", Offset = "0x3251AB0", VA = "0x1832534B0", Slot = "161")]
	protected override string ValueToString(uint v)
	{
		return null;
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x3253390", Offset = "0x3251990", VA = "0x183253390", Slot = "162")]
	protected override uint StringToValue(string str)
	{
		return default(uint);
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x3253850", Offset = "0x3251E50", VA = "0x183253850")]
	public UnsignedIntegerField()
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x3253670", Offset = "0x3251C70", VA = "0x183253670")]
	public UnsignedIntegerField(string label, int maxLength = 1000)
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x3253360", Offset = "0x3251960", VA = "0x183253360", Slot = "171")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x32532A0", Offset = "0x32518A0", VA = "0x1832532A0", Slot = "170")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, uint startValue)
	{
	}
}
