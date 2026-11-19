// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TimeValue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200042B")]
public struct TimeValue : IEquatable<TimeValue>
{
	[Token(Token = "0x200042C")]
	internal class PropertyBag : ContainerPropertyBag<TimeValue>
	{
		[Token(Token = "0x200042D")]
		private class ValueProperty : Property<TimeValue, float>
		{
			[Token(Token = "0x170008EF")]
			public override string Name
			{
				[Token(Token = "0x60020FB")]
				[Address(RVA = "0x6B160B0", Offset = "0x6B150B0", VA = "0x6B160B0", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170008F0")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x60020FC")]
				[Address(RVA = "0x6B160C0", Offset = "0x6B150C0", VA = "0x6B160C0", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x60020FD")]
			[Address(RVA = "0x6B160D0", Offset = "0x6B150D0", VA = "0x6B160D0", Slot = "14")]
			public override float GetValue(ref TimeValue container)
			{
				return default(float);
			}

			[Token(Token = "0x60020FE")]
			[Address(RVA = "0x6B160E0", Offset = "0x6B150E0", VA = "0x6B160E0", Slot = "15")]
			public override void SetValue(ref TimeValue container, float value)
			{
			}

			[Token(Token = "0x60020FF")]
			[Address(RVA = "0x6B15FF0", Offset = "0x6B14FF0", VA = "0x6B15FF0")]
			public ValueProperty()
			{
			}
		}

		[Token(Token = "0x200042E")]
		private class UnitProperty : Property<TimeValue, TimeUnit>
		{
			[Token(Token = "0x170008F1")]
			public override string Name
			{
				[Token(Token = "0x6002100")]
				[Address(RVA = "0x6B160F0", Offset = "0x6B150F0", VA = "0x6B160F0", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170008F2")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6002101")]
				[Address(RVA = "0x6B16100", Offset = "0x6B15100", VA = "0x6B16100", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002102")]
			[Address(RVA = "0x6B16110", Offset = "0x6B15110", VA = "0x6B16110", Slot = "14")]
			public override TimeUnit GetValue(ref TimeValue container)
			{
				return default(TimeUnit);
			}

			[Token(Token = "0x6002103")]
			[Address(RVA = "0x6B16120", Offset = "0x6B15120", VA = "0x6B16120", Slot = "15")]
			public override void SetValue(ref TimeValue container, TimeUnit value)
			{
			}

			[Token(Token = "0x6002104")]
			[Address(RVA = "0x6B16050", Offset = "0x6B15050", VA = "0x6B16050")]
			public UnitProperty()
			{
			}
		}

		[Token(Token = "0x60020FA")]
		[Address(RVA = "0x6B15E50", Offset = "0x6B14E50", VA = "0x6B15E50")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000DEA")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private float m_Value;

	[Token(Token = "0x4000DEB")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private TimeUnit m_Unit;

	[Token(Token = "0x170008ED")]
	public float value
	{
		[Token(Token = "0x60020ED")]
		[Address(RVA = "0x6B15BF0", Offset = "0x6B14BF0", VA = "0x6B15BF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60020EE")]
		[Address(RVA = "0x6B15C00", Offset = "0x6B14C00", VA = "0x6B15C00")]
		set
		{
		}
	}

	[Token(Token = "0x170008EE")]
	public TimeUnit unit
	{
		[Token(Token = "0x60020EF")]
		[Address(RVA = "0x6B15C10", Offset = "0x6B14C10", VA = "0x6B15C10")]
		get
		{
			return default(TimeUnit);
		}
		[Token(Token = "0x60020F0")]
		[Address(RVA = "0x6B15C20", Offset = "0x6B14C20", VA = "0x6B15C20")]
		set
		{
		}
	}

	[Token(Token = "0x60020F1")]
	[Address(RVA = "0x6B15C30", Offset = "0x6B14C30", VA = "0x6B15C30")]
	public TimeValue(float value)
	{
	}

	[Token(Token = "0x60020F2")]
	[Address(RVA = "0x6B15C40", Offset = "0x6B14C40", VA = "0x6B15C40")]
	public TimeValue(float value, TimeUnit unit)
	{
	}

	[Token(Token = "0x60020F3")]
	[Address(RVA = "0x6B15C50", Offset = "0x6B14C50", VA = "0x6B15C50")]
	public static implicit operator TimeValue(float value)
	{
		return default(TimeValue);
	}

	[Token(Token = "0x60020F4")]
	[Address(RVA = "0x6B15C60", Offset = "0x6B14C60", VA = "0x6B15C60")]
	public static bool operator ==(TimeValue lhs, TimeValue rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60020F5")]
	[Address(RVA = "0x6B15C90", Offset = "0x6B14C90", VA = "0x6B15C90")]
	public static bool operator !=(TimeValue lhs, TimeValue rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60020F6")]
	[Address(RVA = "0x6B15CC0", Offset = "0x6B14CC0", VA = "0x6B15CC0", Slot = "4")]
	public bool Equals(TimeValue other)
	{
		return default(bool);
	}

	[Token(Token = "0x60020F7")]
	[Address(RVA = "0x6B15CE0", Offset = "0x6B14CE0", VA = "0x6B15CE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60020F8")]
	[Address(RVA = "0x6B15D50", Offset = "0x6B14D50", VA = "0x6B15D50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60020F9")]
	[Address(RVA = "0x6B15D70", Offset = "0x6B14D70", VA = "0x6B15D70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
