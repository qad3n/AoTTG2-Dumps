// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Length
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000362")]
public struct Length : IEquatable<Length>
{
	[Token(Token = "0x2000363")]
	internal class PropertyBag : ContainerPropertyBag<Length>
	{
		[Token(Token = "0x2000364")]
		private class ValueProperty : Property<Length, float>
		{
			[Token(Token = "0x4000A53")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000625")]
			public override string Name
			{
				[Token(Token = "0x60015CD")]
				[Address(RVA = "0x50ACDE0", Offset = "0x50ACDE0", VA = "0x50ACDE0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60015CE")]
			[Address(RVA = "0x50ACD20", Offset = "0x50ACD20", VA = "0x50ACD20")]
			public ValueProperty()
			{
			}
		}

		[Token(Token = "0x2000365")]
		private class UnitProperty : Property<Length, LengthUnit>
		{
			[Token(Token = "0x4000A55")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000626")]
			public override string Name
			{
				[Token(Token = "0x60015CF")]
				[Address(RVA = "0x50ACDF0", Offset = "0x50ACDF0", VA = "0x50ACDF0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60015D0")]
			[Address(RVA = "0x50ACD80", Offset = "0x50ACD80", VA = "0x50ACD80")]
			public UnitProperty()
			{
			}
		}

		[Token(Token = "0x60015CC")]
		[Address(RVA = "0x50ACB90", Offset = "0x50ACB90", VA = "0x50ACB90")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x2000366")]
	private enum Unit
	{
		[Token(Token = "0x4000A57")]
		Pixel,
		[Token(Token = "0x4000A58")]
		Percent,
		[Token(Token = "0x4000A59")]
		Auto,
		[Token(Token = "0x4000A5A")]
		None
	}

	[Token(Token = "0x4000A4F")]
	internal const float k_MaxValue = 8388608f;

	[Token(Token = "0x4000A50")]
	[FieldOffset(Offset = "0x0")]
	private float m_Value;

	[Token(Token = "0x4000A51")]
	[FieldOffset(Offset = "0x4")]
	private Unit m_Unit;

	[Token(Token = "0x17000623")]
	public float value
	{
		[Token(Token = "0x60015BD")]
		[Address(RVA = "0x50AC870", Offset = "0x50AC870", VA = "0x50AC870")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60015BE")]
		[Address(RVA = "0x50AC880", Offset = "0x50AC880", VA = "0x50AC880")]
		set
		{
		}
	}

	[Token(Token = "0x17000624")]
	public LengthUnit unit
	{
		[Token(Token = "0x60015BF")]
		[Address(RVA = "0x50AC8B0", Offset = "0x50AC8B0", VA = "0x50AC8B0")]
		get
		{
			return default(LengthUnit);
		}
	}

	[Token(Token = "0x60015BA")]
	[Address(RVA = "0x50AC7B0", Offset = "0x50AC7B0", VA = "0x50AC7B0")]
	public static Length Percent(float value)
	{
		return default(Length);
	}

	[Token(Token = "0x60015BB")]
	[Address(RVA = "0x50AC820", Offset = "0x50AC820", VA = "0x50AC820")]
	public static Length Auto()
	{
		return default(Length);
	}

	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x50AC860", Offset = "0x50AC860", VA = "0x50AC860")]
	public static Length None()
	{
		return default(Length);
	}

	[Token(Token = "0x60015C0")]
	[Address(RVA = "0x50AC8C0", Offset = "0x50AC8C0", VA = "0x50AC8C0")]
	public bool IsAuto()
	{
		return default(bool);
	}

	[Token(Token = "0x60015C1")]
	[Address(RVA = "0x50AC8D0", Offset = "0x50AC8D0", VA = "0x50AC8D0")]
	public bool IsNone()
	{
		return default(bool);
	}

	[Token(Token = "0x60015C2")]
	[Address(RVA = "0x50AC8E0", Offset = "0x50AC8E0", VA = "0x50AC8E0")]
	public Length(float value)
	{
	}

	[Token(Token = "0x60015C3")]
	[Address(RVA = "0x50AC7F0", Offset = "0x50AC7F0", VA = "0x50AC7F0")]
	public Length(float value, LengthUnit unit)
	{
	}

	[Token(Token = "0x60015C4")]
	[Address(RVA = "0x50AC830", Offset = "0x50AC830", VA = "0x50AC830")]
	private Length(float value, Unit unit)
	{
	}

	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x50AC910", Offset = "0x50AC910", VA = "0x50AC910")]
	public static implicit operator Length(float value)
	{
		return default(Length);
	}

	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x50A99E0", Offset = "0x50A99E0", VA = "0x50A99E0")]
	public static bool operator ==(Length lhs, Length rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x50AC940", Offset = "0x50AC940", VA = "0x50AC940")]
	public static bool operator !=(Length lhs, Length rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x50AC970", Offset = "0x50AC970", VA = "0x50AC970", Slot = "4")]
	public bool Equals(Length other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x50AC990", Offset = "0x50AC990", VA = "0x50AC990", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015CA")]
	[Address(RVA = "0x50A9D30", Offset = "0x50A9D30", VA = "0x50A9D30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x50ACA00", Offset = "0x50ACA00", VA = "0x50ACA00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
