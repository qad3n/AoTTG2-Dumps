// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Rotate
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

[Token(Token = "0x2000368")]
public struct Rotate : IEquatable<Rotate>
{
	[Token(Token = "0x2000369")]
	internal class PropertyBag : ContainerPropertyBag<Rotate>
	{
		[Token(Token = "0x200036A")]
		private class AngleProperty : Property<Rotate, Angle>
		{
			[Token(Token = "0x4000A62")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000628")]
			public override string Name
			{
				[Token(Token = "0x60015DE")]
				[Address(RVA = "0x50AD510", Offset = "0x50AD510", VA = "0x50AD510", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60015DF")]
			[Address(RVA = "0x50AD450", Offset = "0x50AD450", VA = "0x50AD450")]
			public AngleProperty()
			{
			}
		}

		[Token(Token = "0x200036B")]
		private class AxisProperty : Property<Rotate, Vector3>
		{
			[Token(Token = "0x4000A64")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000629")]
			public override string Name
			{
				[Token(Token = "0x60015E0")]
				[Address(RVA = "0x50AD520", Offset = "0x50AD520", VA = "0x50AD520", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60015E1")]
			[Address(RVA = "0x50AD4B0", Offset = "0x50AD4B0", VA = "0x50AD4B0")]
			public AxisProperty()
			{
			}
		}

		[Token(Token = "0x60015DD")]
		[Address(RVA = "0x50AD2C0", Offset = "0x50AD2C0", VA = "0x50AD2C0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000A5E")]
	[FieldOffset(Offset = "0x0")]
	private Angle m_Angle;

	[Token(Token = "0x4000A5F")]
	[FieldOffset(Offset = "0x8")]
	private Vector3 m_Axis;

	[Token(Token = "0x4000A60")]
	[FieldOffset(Offset = "0x14")]
	private bool m_IsNone;

	[Token(Token = "0x17000627")]
	public Angle angle
	{
		[Token(Token = "0x60015D4")]
		[Address(RVA = "0x50ACFA0", Offset = "0x50ACFA0", VA = "0x50ACFA0")]
		get
		{
			return default(Angle);
		}
		[Token(Token = "0x60015D5")]
		[Address(RVA = "0x50ACFB0", Offset = "0x50ACFB0", VA = "0x50ACFB0")]
		set
		{
		}
	}

	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x50ACE00", Offset = "0x50ACE00", VA = "0x50ACE00")]
	public Rotate(Angle angle)
	{
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x50ACE50", Offset = "0x50ACE50", VA = "0x50ACE50")]
	internal static Rotate Initial()
	{
		return default(Rotate);
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x50ACEF0", Offset = "0x50ACEF0", VA = "0x50ACEF0")]
	public static Rotate None()
	{
		return default(Rotate);
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x50AAE00", Offset = "0x50AAE00", VA = "0x50AAE00")]
	public static bool operator ==(Rotate lhs, Rotate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x50ACFC0", Offset = "0x50ACFC0", VA = "0x50ACFC0")]
	public static bool operator !=(Rotate lhs, Rotate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x50AD080", Offset = "0x50AD080", VA = "0x50AD080", Slot = "4")]
	public bool Equals(Rotate other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x50AD140", Offset = "0x50AD140", VA = "0x50AD140", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x50AB470", Offset = "0x50AB470", VA = "0x50AB470", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x50AD240", Offset = "0x50AD240", VA = "0x50AD240", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x50AD2A0", Offset = "0x50AD2A0", VA = "0x50AD2A0")]
	internal Quaternion ToQuaternion()
	{
		return default(Quaternion);
	}
}
