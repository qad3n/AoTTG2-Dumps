// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IntegerField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000F5")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class IntegerField : TextValueField<int>
{
	[Token(Token = "0x20000F6")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<IntegerField, UxmlTraits>
	{
		[Token(Token = "0x6000724")]
		[Address(RVA = "0x6C0D250", Offset = "0x6C0C250", VA = "0x6C0D250")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000F7")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextValueFieldTraits<int, UxmlIntAttributeDescription>
	{
		[Token(Token = "0x6000725")]
		[Address(RVA = "0x6C0D290", Offset = "0x6C0C290", VA = "0x6C0D290")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x20000F8")]
	private class IntegerInput : TextValueInput
	{
		[Token(Token = "0x17000145")]
		private IntegerField parentIntegerField
		{
			[Token(Token = "0x6000726")]
			[Address(RVA = "0x6C0D2D0", Offset = "0x6C0C2D0", VA = "0x6C0D2D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000146")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x6000728")]
			[Address(RVA = "0x6C0D3D0", Offset = "0x6C0C3D0", VA = "0x6C0D3D0", Slot = "143")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000727")]
		[Address(RVA = "0x6C0D340", Offset = "0x6C0C340", VA = "0x6C0D340")]
		internal IntegerInput()
		{
		}

		[Token(Token = "0x6000729")]
		[Address(RVA = "0x6C0D4C0", Offset = "0x6C0C4C0", VA = "0x6C0D4C0", Slot = "144")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, int startValue)
		{
		}

		[Token(Token = "0x600072A")]
		[Address(RVA = "0x6C0D810", Offset = "0x6C0C810", VA = "0x6C0D810", Slot = "145")]
		protected override string ValueToString(int v)
		{
			return null;
		}

		[Token(Token = "0x600072B")]
		[Address(RVA = "0x6C0D860", Offset = "0x6C0C860", VA = "0x6C0D860", Slot = "141")]
		protected override int StringToValue(string str)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x17000144")]
	private IntegerInput integerInput
	{
		[Token(Token = "0x600071C")]
		[Address(RVA = "0x6BEE0F0", Offset = "0x6BED0F0", VA = "0x6BEE0F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x6BEE160", Offset = "0x6BED160", VA = "0x6BEE160", Slot = "161")]
	protected override string ValueToString(int v)
	{
		return null;
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x6BEE200", Offset = "0x6BED200", VA = "0x6BEE200", Slot = "162")]
	protected override int StringToValue(string str)
	{
		return default(int);
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x6BEE300", Offset = "0x6BED300", VA = "0x6BEE300")]
	public IntegerField()
	{
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x6BEE310", Offset = "0x6BED310", VA = "0x6BEE310")]
	public IntegerField(string label, int maxLength = 1000)
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x6BEE480", Offset = "0x6BED480", VA = "0x6BEE480", Slot = "171")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x6BEE4A0", Offset = "0x6BED4A0", VA = "0x6BEE4A0", Slot = "170")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, int startValue)
	{
	}
}
