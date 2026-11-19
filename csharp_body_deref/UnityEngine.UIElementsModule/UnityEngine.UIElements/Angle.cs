// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Angle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x20002E9")]
public struct Angle : IEquatable<Angle>
{
	[Token(Token = "0x20002EA")]
	internal class PropertyBag : ContainerPropertyBag<Angle>
	{
		[Token(Token = "0x20002EB")]
		private class ValueProperty : Property<Angle, float>
		{
			[Token(Token = "0x17000407")]
			public override string Name
			{
				[Token(Token = "0x60013D7")]
				[Address(RVA = "0x6CC4700", Offset = "0x6CC3700", VA = "0x6CC4700", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000408")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x60013D8")]
				[Address(RVA = "0x6CC4710", Offset = "0x6CC3710", VA = "0x6CC4710", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x60013D9")]
			[Address(RVA = "0x6CC4720", Offset = "0x6CC3720", VA = "0x6CC4720", Slot = "14")]
			public override float GetValue(ref Angle container)
			{
				return default(float);
			}

			[Token(Token = "0x60013DA")]
			[Address(RVA = "0x6CC4780", Offset = "0x6CC3780", VA = "0x6CC4780", Slot = "15")]
			public override void SetValue(ref Angle container, float value)
			{
			}

			[Token(Token = "0x60013DB")]
			[Address(RVA = "0x6CC4640", Offset = "0x6CC3640", VA = "0x6CC4640")]
			public ValueProperty()
			{
			}
		}

		[Token(Token = "0x20002EC")]
		private class UnitProperty : Property<Angle, AngleUnit>
		{
			[Token(Token = "0x17000409")]
			public override string Name
			{
				[Token(Token = "0x60013DC")]
				[Address(RVA = "0x6CC4800", Offset = "0x6CC3800", VA = "0x6CC4800", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700040A")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x60013DD")]
				[Address(RVA = "0x6CC4810", Offset = "0x6CC3810", VA = "0x6CC4810", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x60013DE")]
			[Address(RVA = "0x6CC4820", Offset = "0x6CC3820", VA = "0x6CC4820", Slot = "14")]
			public override AngleUnit GetValue(ref Angle container)
			{
				return default(AngleUnit);
			}

			[Token(Token = "0x60013DF")]
			[Address(RVA = "0x6CC4880", Offset = "0x6CC3880", VA = "0x6CC4880", Slot = "15")]
			public override void SetValue(ref Angle container, AngleUnit value)
			{
			}

			[Token(Token = "0x60013E0")]
			[Address(RVA = "0x6CC46A0", Offset = "0x6CC36A0", VA = "0x6CC46A0")]
			public UnitProperty()
			{
			}
		}

		[Token(Token = "0x60013D6")]
		[Address(RVA = "0x6CC44A0", Offset = "0x6CC34A0", VA = "0x6CC44A0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x20002ED")]
	private enum Unit
	{
		[Token(Token = "0x4000B5C")]
		Degree,
		[Token(Token = "0x4000B5D")]
		Gradian,
		[Token(Token = "0x4000B5E")]
		Radian,
		[Token(Token = "0x4000B5F")]
		Turn,
		[Token(Token = "0x4000B60")]
		None
	}

	[Token(Token = "0x4000B54")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, AngleUnit> s_AngleUnitLookup;

	[Token(Token = "0x4000B55")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private float m_Value;

	[Token(Token = "0x4000B56")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private Unit m_Unit;

	[Token(Token = "0x17000405")]
	public float value
	{
		[Token(Token = "0x60013C6")]
		[Address(RVA = "0x6CC3D10", Offset = "0x6CC2D10", VA = "0x6CC3D10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60013C7")]
		[Address(RVA = "0x6CC3D20", Offset = "0x6CC2D20", VA = "0x6CC3D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000406")]
	public AngleUnit unit
	{
		[Token(Token = "0x60013C8")]
		[Address(RVA = "0x6CC3D30", Offset = "0x6CC2D30", VA = "0x6CC3D30")]
		get
		{
			return default(AngleUnit);
		}
		[Token(Token = "0x60013C9")]
		[Address(RVA = "0x6CC3D40", Offset = "0x6CC2D40", VA = "0x6CC3D40")]
		set
		{
		}
	}

	[Token(Token = "0x60013C5")]
	[Address(RVA = "0x6CC3CF0", Offset = "0x6CC2CF0", VA = "0x6CC3CF0")]
	internal static Angle None()
	{
		return default(Angle);
	}

	[Token(Token = "0x60013CA")]
	[Address(RVA = "0x6CC3D50", Offset = "0x6CC2D50", VA = "0x6CC3D50")]
	internal bool IsNone()
	{
		return default(bool);
	}

	[Token(Token = "0x60013CB")]
	[Address(RVA = "0x6CC3D60", Offset = "0x6CC2D60", VA = "0x6CC3D60")]
	public Angle(float value, AngleUnit unit)
	{
	}

	[Token(Token = "0x60013CC")]
	[Address(RVA = "0x6CC3D00", Offset = "0x6CC2D00", VA = "0x6CC3D00")]
	private Angle(float value, Unit unit)
	{
	}

	[Token(Token = "0x60013CD")]
	[Address(RVA = "0x6CC3DD0", Offset = "0x6CC2DD0", VA = "0x6CC3DD0")]
	public float ToDegrees()
	{
		return default(float);
	}

	[Token(Token = "0x60013CE")]
	[Address(RVA = "0x6CC3E30", Offset = "0x6CC2E30", VA = "0x6CC3E30")]
	public static implicit operator Angle(float value)
	{
		return default(Angle);
	}

	[Token(Token = "0x60013CF")]
	[Address(RVA = "0x6CC3EA0", Offset = "0x6CC2EA0", VA = "0x6CC3EA0")]
	public static bool operator ==(Angle lhs, Angle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D0")]
	[Address(RVA = "0x6CC3ED0", Offset = "0x6CC2ED0", VA = "0x6CC3ED0")]
	public static bool operator !=(Angle lhs, Angle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D1")]
	[Address(RVA = "0x6CC3F40", Offset = "0x6CC2F40", VA = "0x6CC3F40", Slot = "4")]
	public bool Equals(Angle other)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x6CC3FB0", Offset = "0x6CC2FB0", VA = "0x6CC3FB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D3")]
	[Address(RVA = "0x6CC4090", Offset = "0x6CC3090", VA = "0x6CC4090", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60013D4")]
	[Address(RVA = "0x6CC40B0", Offset = "0x6CC30B0", VA = "0x6CC40B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
