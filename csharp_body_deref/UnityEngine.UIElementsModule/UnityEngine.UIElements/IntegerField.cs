// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IntegerField
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x3224DA0", Offset = "0x32233A0", VA = "0x183224DA0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000F7")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextValueFieldTraits<int, UxmlIntAttributeDescription>
	{
		[Token(Token = "0x6000725")]
		[Address(RVA = "0x3226800", Offset = "0x3224E00", VA = "0x183226800")]
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
			[Address(RVA = "0x32162E0", Offset = "0x32148E0", VA = "0x1832162E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000146")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x6000728")]
			[Address(RVA = "0x3216230", Offset = "0x3214830", VA = "0x183216230", Slot = "143")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000727")]
		[Address(RVA = "0x32161A0", Offset = "0x32147A0", VA = "0x1832161A0")]
		internal IntegerInput()
		{
		}

		[Token(Token = "0x6000729")]
		[Address(RVA = "0x3215F60", Offset = "0x3214560", VA = "0x183215F60", Slot = "144")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, int startValue)
		{
		}

		[Token(Token = "0x600072A")]
		[Address(RVA = "0x3216150", Offset = "0x3214750", VA = "0x183216150", Slot = "145")]
		protected override string ValueToString(int v)
		{
			return null;
		}

		[Token(Token = "0x600072B")]
		[Address(RVA = "0x3216110", Offset = "0x3214710", VA = "0x183216110", Slot = "141")]
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
		[Address(RVA = "0x31DDA40", Offset = "0x31DC040", VA = "0x1831DDA40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x31DD5A0", Offset = "0x31DBBA0", VA = "0x1831DD5A0", Slot = "161")]
	protected override string ValueToString(int v)
	{
		return null;
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x31DD480", Offset = "0x31DBA80", VA = "0x1831DD480", Slot = "162")]
	protected override int StringToValue(string str)
	{
		return default(int);
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x31DD8D0", Offset = "0x31DBED0", VA = "0x1831DD8D0")]
	public IntegerField()
	{
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x31DD760", Offset = "0x31DBD60", VA = "0x1831DD760")]
	public IntegerField(string label, int maxLength = 1000)
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x31DD450", Offset = "0x31DBA50", VA = "0x1831DD450", Slot = "171")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x31DD390", Offset = "0x31DB990", VA = "0x1831DD390", Slot = "170")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, int startValue)
	{
	}
}
