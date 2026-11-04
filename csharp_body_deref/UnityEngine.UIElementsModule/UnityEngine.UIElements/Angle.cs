// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Angle
// Update status: CHANGED in this game update
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
[Token(Token = "0x20002EA")]
public struct Angle : IEquatable<Angle>
{
	[Token(Token = "0x20002EB")]
	private enum Unit
	{
		[Token(Token = "0x4000B5D")]
		Degree,
		[Token(Token = "0x4000B5E")]
		Gradian,
		[Token(Token = "0x4000B5F")]
		Radian,
		[Token(Token = "0x4000B60")]
		Turn,
		[Token(Token = "0x4000B61")]
		None
	}

	[Token(Token = "0x20002EC")]
	internal class PropertyBag : ContainerPropertyBag<Angle>
	{
		[Token(Token = "0x20002ED")]
		private class ValueProperty : Property<Angle, float>
		{
			[Token(Token = "0x17000407")]
			public override string Name
			{
				[Token(Token = "0x60013D7")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x60013D9")]
			[Address(RVA = "0x32BC860", Offset = "0x32BAE60", VA = "0x1832BC860", Slot = "14")]
			public override float GetValue(ref Angle container)
			{
				return default(float);
			}

			[Token(Token = "0x60013DA")]
			[Address(RVA = "0x32BC8B0", Offset = "0x32BAEB0", VA = "0x1832BC8B0", Slot = "15")]
			public override void SetValue(ref Angle container, float value)
			{
			}

			[Token(Token = "0x60013DB")]
			[Address(RVA = "0x32BC910", Offset = "0x32BAF10", VA = "0x1832BC910")]
			public ValueProperty()
			{
			}
		}

		[Token(Token = "0x20002EE")]
		private class UnitProperty : Property<Angle, AngleUnit>
		{
			[Token(Token = "0x17000409")]
			public override string Name
			{
				[Token(Token = "0x60013DC")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x60013DE")]
			[Address(RVA = "0x32BC420", Offset = "0x32BAA20", VA = "0x1832BC420", Slot = "14")]
			public override AngleUnit GetValue(ref Angle container)
			{
				return default(AngleUnit);
			}

			[Token(Token = "0x60013DF")]
			[Address(RVA = "0x32BC470", Offset = "0x32BAA70", VA = "0x1832BC470", Slot = "15")]
			public override void SetValue(ref Angle container, AngleUnit value)
			{
			}

			[Token(Token = "0x60013E0")]
			[Address(RVA = "0x32BC4C0", Offset = "0x32BAAC0", VA = "0x1832BC4C0")]
			public UnitProperty()
			{
			}
		}

		[Token(Token = "0x60013D6")]
		[Address(RVA = "0x32B5CC0", Offset = "0x32B42C0", VA = "0x1832B5CC0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000B59")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, AngleUnit> s_AngleUnitLookup;

	[Token(Token = "0x4000B5A")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private float m_Value;

	[Token(Token = "0x4000B5B")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private Unit m_Unit;

	[Token(Token = "0x17000405")]
	public float value
	{
		[Token(Token = "0x60013C6")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60013C7")]
		[Address(RVA = "0x2CDDC80", Offset = "0x2CDC280", VA = "0x182CDDC80")]
		set
		{
		}
	}

	[Token(Token = "0x17000406")]
	public AngleUnit unit
	{
		[Token(Token = "0x60013C8")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(AngleUnit);
		}
		[Token(Token = "0x60013C9")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
		set
		{
		}
	}

	[Token(Token = "0x60013C5")]
	[Address(RVA = "0x32A5B50", Offset = "0x32A4150", VA = "0x1832A5B50")]
	internal static Angle None()
	{
		return default(Angle);
	}

	[Token(Token = "0x60013CA")]
	[Address(RVA = "0x32A5B40", Offset = "0x32A4140", VA = "0x1832A5B40")]
	internal bool IsNone()
	{
		return default(bool);
	}

	[Token(Token = "0x60013CB")]
	[Address(RVA = "0x32A5F20", Offset = "0x32A4520", VA = "0x1832A5F20")]
	public Angle(float value, AngleUnit unit)
	{
	}

	[Token(Token = "0x60013CC")]
	[Address(RVA = "0x1381B80", Offset = "0x1380180", VA = "0x181381B80")]
	private Angle(float value, Unit unit)
	{
	}

	[Token(Token = "0x60013CD")]
	[Address(RVA = "0x32A5B70", Offset = "0x32A4170", VA = "0x1832A5B70")]
	public float ToDegrees()
	{
		return default(float);
	}

	[Token(Token = "0x60013CE")]
	[Address(RVA = "0x32A5F80", Offset = "0x32A4580", VA = "0x1832A5F80")]
	public static implicit operator Angle(float value)
	{
		return default(Angle);
	}

	[Token(Token = "0x60013CF")]
	[Address(RVA = "0x310E310", Offset = "0x310C910", VA = "0x18310E310")]
	public static bool operator ==(Angle lhs, Angle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D0")]
	[Address(RVA = "0x32A5FE0", Offset = "0x32A45E0", VA = "0x1832A5FE0")]
	public static bool operator !=(Angle lhs, Angle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D1")]
	[Address(RVA = "0x32A5AC0", Offset = "0x32A40C0", VA = "0x1832A5AC0", Slot = "4")]
	public bool Equals(Angle other)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x32A5A20", Offset = "0x32A4020", VA = "0x1832A5A20", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D3")]
	[Address(RVA = "0x310E0C0", Offset = "0x310C6C0", VA = "0x18310E0C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60013D4")]
	[Address(RVA = "0x32A5BD0", Offset = "0x32A41D0", VA = "0x1832A5BD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
