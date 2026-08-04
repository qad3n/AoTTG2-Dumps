// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.LongField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000C1")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class LongField : TextValueField<long>
{
	[Token(Token = "0x20000C2")]
	public new class UxmlFactory : UxmlFactory<LongField, UxmlTraits>
	{
		[Token(Token = "0x600054D")]
		[Address(RVA = "0x4F49B50", Offset = "0x4F49B50", VA = "0x4F49B50")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000C3")]
	public new class UxmlTraits : TextValueFieldTraits<long, UxmlLongAttributeDescription>
	{
		[Token(Token = "0x600054E")]
		[Address(RVA = "0x4F49B90", Offset = "0x4F49B90", VA = "0x4F49B90")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x20000C4")]
	private class LongInput : TextValueInput
	{
		[Token(Token = "0x170000DB")]
		private LongField parentLongField
		{
			[Token(Token = "0x600054F")]
			[Address(RVA = "0x4F49BD0", Offset = "0x4F49BD0", VA = "0x4F49BD0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000DC")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x6000551")]
			[Address(RVA = "0x4F49C40", Offset = "0x4F49C40", VA = "0x4F49C40", Slot = "100")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000550")]
		[Address(RVA = "0x4F49900", Offset = "0x4F49900", VA = "0x4F49900")]
		internal LongInput()
		{
		}

		[Token(Token = "0x6000552")]
		[Address(RVA = "0x4F49CB0", Offset = "0x4F49CB0", VA = "0x4F49CB0", Slot = "101")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, long startValue)
		{
		}

		[Token(Token = "0x6000553")]
		[Address(RVA = "0x4F4A060", Offset = "0x4F4A060", VA = "0x4F4A060")]
		private long ClampMinMaxLongValue(long niceDelta, long value)
		{
			return default(long);
		}

		[Token(Token = "0x6000554")]
		[Address(RVA = "0x4F4A100", Offset = "0x4F4A100", VA = "0x4F4A100", Slot = "102")]
		protected override string ValueToString(long v)
		{
			return null;
		}

		[Token(Token = "0x6000555")]
		[Address(RVA = "0x4F4A150", Offset = "0x4F4A150", VA = "0x4F4A150", Slot = "98")]
		protected override long StringToValue(string str)
		{
			return default(long);
		}
	}

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x170000DA")]
	private LongInput longInput
	{
		[Token(Token = "0x6000545")]
		[Address(RVA = "0x4F49530", Offset = "0x4F49530", VA = "0x4F49530")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x4F495A0", Offset = "0x4F495A0", VA = "0x4F495A0", Slot = "115")]
	protected override string ValueToString(long v)
	{
		return null;
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x4F49640", Offset = "0x4F49640", VA = "0x4F49640", Slot = "116")]
	protected override long StringToValue(string str)
	{
		return default(long);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x4F49710", Offset = "0x4F49710", VA = "0x4F49710")]
	public LongField()
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x4F49720", Offset = "0x4F49720", VA = "0x4F49720")]
	public LongField(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x4F49990", Offset = "0x4F49990", VA = "0x4F49990", Slot = "125")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x4F499B0", Offset = "0x4F499B0", VA = "0x4F499B0", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, long startValue)
	{
	}
}
