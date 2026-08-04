// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UnsignedIntegerField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000127")]
public class UnsignedIntegerField : TextValueField<uint>
{
	[Token(Token = "0x2000128")]
	public new class UxmlFactory : UxmlFactory<UnsignedIntegerField, UxmlTraits>
	{
		[Token(Token = "0x60007DC")]
		[Address(RVA = "0x50077C0", Offset = "0x50077C0", VA = "0x50077C0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000129")]
	public new class UxmlTraits : TextValueFieldTraits<uint, UxmlUnsignedIntAttributeDescription>
	{
		[Token(Token = "0x60007DD")]
		[Address(RVA = "0x5007800", Offset = "0x5007800", VA = "0x5007800")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x200012A")]
	private class UnsignedIntegerInput : TextValueInput
	{
		[Token(Token = "0x17000172")]
		private UnsignedIntegerField parentUnsignedIntegerField
		{
			[Token(Token = "0x60007DE")]
			[Address(RVA = "0x5007840", Offset = "0x5007840", VA = "0x5007840")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000173")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x60007E0")]
			[Address(RVA = "0x50078B0", Offset = "0x50078B0", VA = "0x50078B0", Slot = "100")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60007DF")]
		[Address(RVA = "0x5007570", Offset = "0x5007570", VA = "0x5007570")]
		internal UnsignedIntegerInput()
		{
		}

		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x5007920", Offset = "0x5007920", VA = "0x5007920", Slot = "101")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, uint startValue)
		{
		}

		[Token(Token = "0x60007E2")]
		[Address(RVA = "0x5007C80", Offset = "0x5007C80", VA = "0x5007C80", Slot = "102")]
		protected override string ValueToString(uint v)
		{
			return null;
		}

		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x5007CD0", Offset = "0x5007CD0", VA = "0x5007CD0", Slot = "98")]
		protected override uint StringToValue(string str)
		{
			return default(uint);
		}
	}

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x17000171")]
	private UnsignedIntegerInput integerInput
	{
		[Token(Token = "0x60007D4")]
		[Address(RVA = "0x50071A0", Offset = "0x50071A0", VA = "0x50071A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x5007210", Offset = "0x5007210", VA = "0x5007210", Slot = "115")]
	protected override string ValueToString(uint v)
	{
		return null;
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x50072B0", Offset = "0x50072B0", VA = "0x50072B0", Slot = "116")]
	protected override uint StringToValue(string str)
	{
		return default(uint);
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x5007380", Offset = "0x5007380", VA = "0x5007380")]
	public UnsignedIntegerField()
	{
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x5007390", Offset = "0x5007390", VA = "0x5007390")]
	public UnsignedIntegerField(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x5007600", Offset = "0x5007600", VA = "0x5007600", Slot = "125")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x5007620", Offset = "0x5007620", VA = "0x5007620", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, uint startValue)
	{
	}
}
