// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.LongField
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6C0EB00", Offset = "0x6C0DB00", VA = "0x6C0EB00")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000101")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextValueFieldTraits<long, UxmlLongAttributeDescription>
	{
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x6C0EB40", Offset = "0x6C0DB40", VA = "0x6C0EB40")]
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
			[Address(RVA = "0x6C0EB80", Offset = "0x6C0DB80", VA = "0x6C0EB80")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014E")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x600074F")]
			[Address(RVA = "0x6C0EBF0", Offset = "0x6C0DBF0", VA = "0x6C0EBF0", Slot = "143")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600074E")]
		[Address(RVA = "0x6C0E8B0", Offset = "0x6C0D8B0", VA = "0x6C0E8B0")]
		internal LongInput()
		{
		}

		[Token(Token = "0x6000750")]
		[Address(RVA = "0x6C0ECE0", Offset = "0x6C0DCE0", VA = "0x6C0ECE0", Slot = "144")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, long startValue)
		{
		}

		[Token(Token = "0x6000751")]
		[Address(RVA = "0x6C0F070", Offset = "0x6C0E070", VA = "0x6C0F070")]
		private long ClampMinMaxLongValue(long niceDelta, long value)
		{
			return default(long);
		}

		[Token(Token = "0x6000752")]
		[Address(RVA = "0x6C0F110", Offset = "0x6C0E110", VA = "0x6C0F110", Slot = "145")]
		protected override string ValueToString(long v)
		{
			return null;
		}

		[Token(Token = "0x6000753")]
		[Address(RVA = "0x6C0F160", Offset = "0x6C0E160", VA = "0x6C0F160", Slot = "141")]
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
		[Address(RVA = "0x6C0E4B0", Offset = "0x6C0D4B0", VA = "0x6C0E4B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x6C0E520", Offset = "0x6C0D520", VA = "0x6C0E520", Slot = "161")]
	protected override string ValueToString(long v)
	{
		return null;
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x6C0E5C0", Offset = "0x6C0D5C0", VA = "0x6C0E5C0", Slot = "162")]
	protected override long StringToValue(string str)
	{
		return default(long);
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x6C0E6C0", Offset = "0x6C0D6C0", VA = "0x6C0E6C0")]
	public LongField()
	{
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x6C0E6D0", Offset = "0x6C0D6D0", VA = "0x6C0E6D0")]
	public LongField(string label, int maxLength = 1000)
	{
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x6C0E940", Offset = "0x6C0D940", VA = "0x6C0E940", Slot = "171")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x6C0E960", Offset = "0x6C0D960", VA = "0x6C0E960", Slot = "170")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, long startValue)
	{
	}
}
