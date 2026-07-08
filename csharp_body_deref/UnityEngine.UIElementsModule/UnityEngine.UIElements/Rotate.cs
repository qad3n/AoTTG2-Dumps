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
				[Address(RVA = "0x4D85BE0", Offset = "0x4D85BE0", VA = "0x4D85BE0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60015DF")]
			[Address(RVA = "0x4D85B20", Offset = "0x4D85B20", VA = "0x4D85B20")]
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
				[Address(RVA = "0x4D85BF0", Offset = "0x4D85BF0", VA = "0x4D85BF0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60015E1")]
			[Address(RVA = "0x4D85B80", Offset = "0x4D85B80", VA = "0x4D85B80")]
			public AxisProperty()
			{
			}
		}

		[Token(Token = "0x60015DD")]
		[Address(RVA = "0x4D85990", Offset = "0x4D85990", VA = "0x4D85990")]
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
		[Address(RVA = "0x4D85670", Offset = "0x4D85670", VA = "0x4D85670")]
		get
		{
			return default(Angle);
		}
		[Token(Token = "0x60015D5")]
		[Address(RVA = "0x4D85680", Offset = "0x4D85680", VA = "0x4D85680")]
		set
		{
		}
	}

	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x4D854D0", Offset = "0x4D854D0", VA = "0x4D854D0")]
	public Rotate(Angle angle)
	{
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x4D85520", Offset = "0x4D85520", VA = "0x4D85520")]
	internal static Rotate Initial()
	{
		return default(Rotate);
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x4D855C0", Offset = "0x4D855C0", VA = "0x4D855C0")]
	public static Rotate None()
	{
		return default(Rotate);
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x4D834D0", Offset = "0x4D834D0", VA = "0x4D834D0")]
	public static bool operator ==(Rotate lhs, Rotate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x4D85690", Offset = "0x4D85690", VA = "0x4D85690")]
	public static bool operator !=(Rotate lhs, Rotate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x4D85750", Offset = "0x4D85750", VA = "0x4D85750", Slot = "4")]
	public bool Equals(Rotate other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x4D85810", Offset = "0x4D85810", VA = "0x4D85810", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x4D83B40", Offset = "0x4D83B40", VA = "0x4D83B40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x4D85910", Offset = "0x4D85910", VA = "0x4D85910", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x4D85970", Offset = "0x4D85970", VA = "0x4D85970")]
	internal Quaternion ToQuaternion()
	{
		return default(Quaternion);
	}
}
