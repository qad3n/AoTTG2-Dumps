// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UnsignedIntegerField
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6C4C230", Offset = "0x6C4B230", VA = "0x6C4C230")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000175")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextValueFieldTraits<uint, UxmlUnsignedIntAttributeDescription>
	{
		[Token(Token = "0x6000AB5")]
		[Address(RVA = "0x6C4C270", Offset = "0x6C4B270", VA = "0x6C4C270")]
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
			[Address(RVA = "0x6C4C2B0", Offset = "0x6C4B2B0", VA = "0x6C4C2B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000204")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x6000AB8")]
			[Address(RVA = "0x6C4C320", Offset = "0x6C4B320", VA = "0x6C4C320", Slot = "143")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000AB7")]
		[Address(RVA = "0x6C4BFE0", Offset = "0x6C4AFE0", VA = "0x6C4BFE0")]
		internal UnsignedIntegerInput()
		{
		}

		[Token(Token = "0x6000AB9")]
		[Address(RVA = "0x6C4C410", Offset = "0x6C4B410", VA = "0x6C4C410", Slot = "144")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, uint startValue)
		{
		}

		[Token(Token = "0x6000ABA")]
		[Address(RVA = "0x6C4C760", Offset = "0x6C4B760", VA = "0x6C4C760", Slot = "145")]
		protected override string ValueToString(uint v)
		{
			return null;
		}

		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x6C4C7B0", Offset = "0x6C4B7B0", VA = "0x6C4C7B0", Slot = "141")]
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
		[Address(RVA = "0x6C4BBE0", Offset = "0x6C4ABE0", VA = "0x6C4BBE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x6C4BC50", Offset = "0x6C4AC50", VA = "0x6C4BC50", Slot = "161")]
	protected override string ValueToString(uint v)
	{
		return null;
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x6C4BCF0", Offset = "0x6C4ACF0", VA = "0x6C4BCF0", Slot = "162")]
	protected override uint StringToValue(string str)
	{
		return default(uint);
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x6C4BDF0", Offset = "0x6C4ADF0", VA = "0x6C4BDF0")]
	public UnsignedIntegerField()
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x6C4BE00", Offset = "0x6C4AE00", VA = "0x6C4BE00")]
	public UnsignedIntegerField(string label, int maxLength = 1000)
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x6C4C070", Offset = "0x6C4B070", VA = "0x6C4C070", Slot = "171")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x6C4C090", Offset = "0x6C4B090", VA = "0x6C4C090", Slot = "170")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, uint startValue)
	{
	}
}
