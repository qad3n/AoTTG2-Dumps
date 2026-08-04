// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TimeValue
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
				[Address(RVA = "0x50B15E0", Offset = "0x50B15E0", VA = "0x50B15E0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600170A")]
			[Address(RVA = "0x50B1520", Offset = "0x50B1520", VA = "0x50B1520")]
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
				[Address(RVA = "0x50B15F0", Offset = "0x50B15F0", VA = "0x50B15F0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600170C")]
			[Address(RVA = "0x50B1580", Offset = "0x50B1580", VA = "0x50B1580")]
			public UnitProperty()
			{
			}
		}

		[Token(Token = "0x6001708")]
		[Address(RVA = "0x50B1390", Offset = "0x50B1390", VA = "0x50B1390")]
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
		[Address(RVA = "0x50B1150", Offset = "0x50B1150", VA = "0x50B1150")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000656")]
	public TimeUnit unit
	{
		[Token(Token = "0x60016FE")]
		[Address(RVA = "0x50B1160", Offset = "0x50B1160", VA = "0x50B1160")]
		get
		{
			return default(TimeUnit);
		}
	}

	[Token(Token = "0x60016FF")]
	[Address(RVA = "0x50B1170", Offset = "0x50B1170", VA = "0x50B1170")]
	public TimeValue(float value)
	{
	}

	[Token(Token = "0x6001700")]
	[Address(RVA = "0x50B1180", Offset = "0x50B1180", VA = "0x50B1180")]
	public TimeValue(float value, TimeUnit unit)
	{
	}

	[Token(Token = "0x6001701")]
	[Address(RVA = "0x50B1190", Offset = "0x50B1190", VA = "0x50B1190")]
	public static implicit operator TimeValue(float value)
	{
		return default(TimeValue);
	}

	[Token(Token = "0x6001702")]
	[Address(RVA = "0x50B11A0", Offset = "0x50B11A0", VA = "0x50B11A0")]
	public static bool operator ==(TimeValue lhs, TimeValue rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001703")]
	[Address(RVA = "0x50B11D0", Offset = "0x50B11D0", VA = "0x50B11D0")]
	public static bool operator !=(TimeValue lhs, TimeValue rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001704")]
	[Address(RVA = "0x50B1200", Offset = "0x50B1200", VA = "0x50B1200", Slot = "4")]
	public bool Equals(TimeValue other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001705")]
	[Address(RVA = "0x50B1220", Offset = "0x50B1220", VA = "0x50B1220", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001706")]
	[Address(RVA = "0x50B1290", Offset = "0x50B1290", VA = "0x50B1290", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001707")]
	[Address(RVA = "0x50B12B0", Offset = "0x50B12B0", VA = "0x50B12B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
