using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000389")]
public struct TimeValue : IEquatable<TimeValue>
{
	[Token(Token = "0x200038A")]
	internal class PropertyBag : ContainerPropertyBag<TimeValue>
	{
		[Token(Token = "0x200038B")]
		private class ValueProperty : Property<TimeValue, float>
		{
			[Token(Token = "0x4000A9F")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000657")]
			public override string Name
			{
				[Token(Token = "0x6001709")]
				[Address(RVA = "0x4D89CB0", Offset = "0x4D89CB0", VA = "0x4D89CB0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600170A")]
			[Address(RVA = "0x4D89BF0", Offset = "0x4D89BF0", VA = "0x4D89BF0")]
			public ValueProperty()
			{
			}
		}

		[Token(Token = "0x200038C")]
		private class UnitProperty : Property<TimeValue, TimeUnit>
		{
			[Token(Token = "0x4000AA1")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000658")]
			public override string Name
			{
				[Token(Token = "0x600170B")]
				[Address(RVA = "0x4D89CC0", Offset = "0x4D89CC0", VA = "0x4D89CC0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600170C")]
			[Address(RVA = "0x4D89C50", Offset = "0x4D89C50", VA = "0x4D89C50")]
			public UnitProperty()
			{
			}
		}

		[Token(Token = "0x6001708")]
		[Address(RVA = "0x4D89A60", Offset = "0x4D89A60", VA = "0x4D89A60")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000A9C")]
	[FieldOffset(Offset = "0x0")]
	private float m_Value;

	[Token(Token = "0x4000A9D")]
	[FieldOffset(Offset = "0x4")]
	private TimeUnit m_Unit;

	[Token(Token = "0x17000655")]
	public float value
	{
		[Token(Token = "0x60016FD")]
		[Address(RVA = "0x4D89820", Offset = "0x4D89820", VA = "0x4D89820")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000656")]
	public TimeUnit unit
	{
		[Token(Token = "0x60016FE")]
		[Address(RVA = "0x4D89830", Offset = "0x4D89830", VA = "0x4D89830")]
		get
		{
			return default(TimeUnit);
		}
	}

	[Token(Token = "0x60016FF")]
	[Address(RVA = "0x4D89840", Offset = "0x4D89840", VA = "0x4D89840")]
	public TimeValue(float value)
	{
	}

	[Token(Token = "0x6001700")]
	[Address(RVA = "0x4D89850", Offset = "0x4D89850", VA = "0x4D89850")]
	public TimeValue(float value, TimeUnit unit)
	{
	}

	[Token(Token = "0x6001701")]
	[Address(RVA = "0x4D89860", Offset = "0x4D89860", VA = "0x4D89860")]
	public static implicit operator TimeValue(float value)
	{
		return default(TimeValue);
	}

	[Token(Token = "0x6001702")]
	[Address(RVA = "0x4D89870", Offset = "0x4D89870", VA = "0x4D89870")]
	public static bool operator ==(TimeValue lhs, TimeValue rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001703")]
	[Address(RVA = "0x4D898A0", Offset = "0x4D898A0", VA = "0x4D898A0")]
	public static bool operator !=(TimeValue lhs, TimeValue rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001704")]
	[Address(RVA = "0x4D898D0", Offset = "0x4D898D0", VA = "0x4D898D0", Slot = "4")]
	public bool Equals(TimeValue other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001705")]
	[Address(RVA = "0x4D898F0", Offset = "0x4D898F0", VA = "0x4D898F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001706")]
	[Address(RVA = "0x4D89960", Offset = "0x4D89960", VA = "0x4D89960", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001707")]
	[Address(RVA = "0x4D89980", Offset = "0x4D89980", VA = "0x4D89980", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
