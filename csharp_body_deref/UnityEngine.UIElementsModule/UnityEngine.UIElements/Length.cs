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
				[Address(RVA = "0x4D854B0", Offset = "0x4D854B0", VA = "0x4D854B0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60015CE")]
			[Address(RVA = "0x4D853F0", Offset = "0x4D853F0", VA = "0x4D853F0")]
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
				[Address(RVA = "0x4D854C0", Offset = "0x4D854C0", VA = "0x4D854C0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60015D0")]
			[Address(RVA = "0x4D85450", Offset = "0x4D85450", VA = "0x4D85450")]
			public UnitProperty()
			{
			}
		}

		[Token(Token = "0x60015CC")]
		[Address(RVA = "0x4D85260", Offset = "0x4D85260", VA = "0x4D85260")]
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
		[Address(RVA = "0x4D84F40", Offset = "0x4D84F40", VA = "0x4D84F40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60015BE")]
		[Address(RVA = "0x4D84F50", Offset = "0x4D84F50", VA = "0x4D84F50")]
		set
		{
		}
	}

	[Token(Token = "0x17000624")]
	public LengthUnit unit
	{
		[Token(Token = "0x60015BF")]
		[Address(RVA = "0x4D84F80", Offset = "0x4D84F80", VA = "0x4D84F80")]
		get
		{
			return default(LengthUnit);
		}
	}

	[Token(Token = "0x60015BA")]
	[Address(RVA = "0x4D84E80", Offset = "0x4D84E80", VA = "0x4D84E80")]
	public static Length Percent(float value)
	{
		return default(Length);
	}

	[Token(Token = "0x60015BB")]
	[Address(RVA = "0x4D84EF0", Offset = "0x4D84EF0", VA = "0x4D84EF0")]
	public static Length Auto()
	{
		return default(Length);
	}

	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x4D84F30", Offset = "0x4D84F30", VA = "0x4D84F30")]
	public static Length None()
	{
		return default(Length);
	}

	[Token(Token = "0x60015C0")]
	[Address(RVA = "0x4D84F90", Offset = "0x4D84F90", VA = "0x4D84F90")]
	public bool IsAuto()
	{
		return default(bool);
	}

	[Token(Token = "0x60015C1")]
	[Address(RVA = "0x4D84FA0", Offset = "0x4D84FA0", VA = "0x4D84FA0")]
	public bool IsNone()
	{
		return default(bool);
	}

	[Token(Token = "0x60015C2")]
	[Address(RVA = "0x4D84FB0", Offset = "0x4D84FB0", VA = "0x4D84FB0")]
	public Length(float value)
	{
	}

	[Token(Token = "0x60015C3")]
	[Address(RVA = "0x4D84EC0", Offset = "0x4D84EC0", VA = "0x4D84EC0")]
	public Length(float value, LengthUnit unit)
	{
	}

	[Token(Token = "0x60015C4")]
	[Address(RVA = "0x4D84F00", Offset = "0x4D84F00", VA = "0x4D84F00")]
	private Length(float value, Unit unit)
	{
	}

	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x4D84FE0", Offset = "0x4D84FE0", VA = "0x4D84FE0")]
	public static implicit operator Length(float value)
	{
		return default(Length);
	}

	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x4D820B0", Offset = "0x4D820B0", VA = "0x4D820B0")]
	public static bool operator ==(Length lhs, Length rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x4D85010", Offset = "0x4D85010", VA = "0x4D85010")]
	public static bool operator !=(Length lhs, Length rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x4D85040", Offset = "0x4D85040", VA = "0x4D85040", Slot = "4")]
	public bool Equals(Length other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x4D85060", Offset = "0x4D85060", VA = "0x4D85060", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015CA")]
	[Address(RVA = "0x4D82400", Offset = "0x4D82400", VA = "0x4D82400", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x4D850D0", Offset = "0x4D850D0", VA = "0x4D850D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
