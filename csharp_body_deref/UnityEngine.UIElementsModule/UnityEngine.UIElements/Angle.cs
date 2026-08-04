// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Angle
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
				[Address(RVA = "0x5078830", Offset = "0x5078830", VA = "0x5078830", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000FDB")]
			[Address(RVA = "0x5078770", Offset = "0x5078770", VA = "0x5078770")]
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
				[Address(RVA = "0x5078840", Offset = "0x5078840", VA = "0x5078840", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000FDD")]
			[Address(RVA = "0x50787D0", Offset = "0x50787D0", VA = "0x50787D0")]
			public UnitProperty()
			{
			}
		}

		[Token(Token = "0x6000FD9")]
		[Address(RVA = "0x50785E0", Offset = "0x50785E0", VA = "0x50785E0")]
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
		[Address(RVA = "0x50782D0", Offset = "0x50782D0", VA = "0x50782D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x50782B0", Offset = "0x50782B0", VA = "0x50782B0")]
	internal static Angle None()
	{
		return default(Angle);
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x50782E0", Offset = "0x50782E0", VA = "0x50782E0")]
	public Angle(float value, AngleUnit unit)
	{
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x50782C0", Offset = "0x50782C0", VA = "0x50782C0")]
	private Angle(float value, Unit unit)
	{
	}

	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x50782F0", Offset = "0x50782F0", VA = "0x50782F0")]
	public float ToDegrees()
	{
		return default(float);
	}

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x5078350", Offset = "0x5078350", VA = "0x5078350")]
	public static implicit operator Angle(float value)
	{
		return default(Angle);
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x5078360", Offset = "0x5078360", VA = "0x5078360")]
	public static bool operator ==(Angle lhs, Angle rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x5078390", Offset = "0x5078390", VA = "0x5078390", Slot = "4")]
	public bool Equals(Angle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x50783B0", Offset = "0x50783B0", VA = "0x50783B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x5078420", Offset = "0x5078420", VA = "0x5078420", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x5078440", Offset = "0x5078440", VA = "0x5078440", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
