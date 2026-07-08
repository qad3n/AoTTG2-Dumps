using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000265")]
public struct Angle : IEquatable<Angle>
{
	[Token(Token = "0x2000266")]
	internal class PropertyBag : ContainerPropertyBag<Angle>
	{
		[Token(Token = "0x2000267")]
		private class ValueProperty : Property<Angle, float>
		{
			[Token(Token = "0x40008E7")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x1700030F")]
			public override string Name
			{
				[Token(Token = "0x6000FDA")]
				[Address(RVA = "0x4D50F00", Offset = "0x4D50F00", VA = "0x4D50F00", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000FDB")]
			[Address(RVA = "0x4D50E40", Offset = "0x4D50E40", VA = "0x4D50E40")]
			public ValueProperty()
			{
			}
		}

		[Token(Token = "0x2000268")]
		private class UnitProperty : Property<Angle, AngleUnit>
		{
			[Token(Token = "0x40008E9")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000310")]
			public override string Name
			{
				[Token(Token = "0x6000FDC")]
				[Address(RVA = "0x4D50F10", Offset = "0x4D50F10", VA = "0x4D50F10", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000FDD")]
			[Address(RVA = "0x4D50EA0", Offset = "0x4D50EA0", VA = "0x4D50EA0")]
			public UnitProperty()
			{
			}
		}

		[Token(Token = "0x6000FD9")]
		[Address(RVA = "0x4D50CB0", Offset = "0x4D50CB0", VA = "0x4D50CB0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x2000269")]
	private enum Unit
	{
		[Token(Token = "0x40008EB")]
		Degree,
		[Token(Token = "0x40008EC")]
		Gradian,
		[Token(Token = "0x40008ED")]
		Radian,
		[Token(Token = "0x40008EE")]
		Turn,
		[Token(Token = "0x40008EF")]
		None
	}

	[Token(Token = "0x40008E4")]
	[FieldOffset(Offset = "0x0")]
	private float m_Value;

	[Token(Token = "0x40008E5")]
	[FieldOffset(Offset = "0x4")]
	private Unit m_Unit;

	[Token(Token = "0x1700030E")]
	public float value
	{
		[Token(Token = "0x6000FCF")]
		[Address(RVA = "0x4D509A0", Offset = "0x4D509A0", VA = "0x4D509A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x4D50980", Offset = "0x4D50980", VA = "0x4D50980")]
	internal static Angle None()
	{
		return default(Angle);
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x4D509B0", Offset = "0x4D509B0", VA = "0x4D509B0")]
	public Angle(float value, AngleUnit unit)
	{
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x4D50990", Offset = "0x4D50990", VA = "0x4D50990")]
	private Angle(float value, Unit unit)
	{
	}

	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x4D509C0", Offset = "0x4D509C0", VA = "0x4D509C0")]
	public float ToDegrees()
	{
		return default(float);
	}

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x4D50A20", Offset = "0x4D50A20", VA = "0x4D50A20")]
	public static implicit operator Angle(float value)
	{
		return default(Angle);
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x4D50A30", Offset = "0x4D50A30", VA = "0x4D50A30")]
	public static bool operator ==(Angle lhs, Angle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x4D50A60", Offset = "0x4D50A60", VA = "0x4D50A60", Slot = "4")]
	public bool Equals(Angle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x4D50A80", Offset = "0x4D50A80", VA = "0x4D50A80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x4D50AF0", Offset = "0x4D50AF0", VA = "0x4D50AF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x4D50B10", Offset = "0x4D50B10", VA = "0x4D50B10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
