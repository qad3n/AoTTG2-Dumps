// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TimeValue
// Update status: CHANGED in this game update
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
[Token(Token = "0x200042C")]
public struct TimeValue : IEquatable<TimeValue>
{
	[Token(Token = "0x200042D")]
	internal class PropertyBag : ContainerPropertyBag<TimeValue>
	{
		[Token(Token = "0x200042E")]
		private class ValueProperty : Property<TimeValue, float>
		{
			[Token(Token = "0x170008EF")]
			public override string Name
			{
				[Token(Token = "0x60020FB")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x60020FD")]
			[Address(RVA = "0x2FF1DB0", Offset = "0x2FF03B0", VA = "0x182FF1DB0", Slot = "14")]
			public override float GetValue(ref TimeValue container)
			{
				return default(float);
			}

			[Token(Token = "0x60020FE")]
			[Address(RVA = "0x2FF1DC0", Offset = "0x2FF03C0", VA = "0x182FF1DC0", Slot = "15")]
			public override void SetValue(ref TimeValue container, float value)
			{
			}

			[Token(Token = "0x60020FF")]
			[Address(RVA = "0x311ED70", Offset = "0x311D370", VA = "0x18311ED70")]
			public ValueProperty()
			{
			}
		}

		[Token(Token = "0x200042F")]
		private class UnitProperty : Property<TimeValue, TimeUnit>
		{
			[Token(Token = "0x170008F1")]
			public override string Name
			{
				[Token(Token = "0x6002100")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002102")]
			[Address(RVA = "0x2FF6710", Offset = "0x2FF4D10", VA = "0x182FF6710", Slot = "14")]
			public override TimeUnit GetValue(ref TimeValue container)
			{
				return default(TimeUnit);
			}

			[Token(Token = "0x6002103")]
			[Address(RVA = "0x2FF6870", Offset = "0x2FF4E70", VA = "0x182FF6870", Slot = "15")]
			public override void SetValue(ref TimeValue container, TimeUnit value)
			{
			}

			[Token(Token = "0x6002104")]
			[Address(RVA = "0x311EB40", Offset = "0x311D140", VA = "0x18311EB40")]
			public UnitProperty()
			{
			}
		}

		[Token(Token = "0x60020FA")]
		[Address(RVA = "0x3110260", Offset = "0x310E860", VA = "0x183110260")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000DED")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private float m_Value;

	[Token(Token = "0x4000DEE")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private TimeUnit m_Unit;

	[Token(Token = "0x170008ED")]
	public float value
	{
		[Token(Token = "0x60020ED")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60020EE")]
		[Address(RVA = "0x2CDDC80", Offset = "0x2CDC280", VA = "0x182CDDC80")]
		set
		{
		}
	}

	[Token(Token = "0x170008EE")]
	public TimeUnit unit
	{
		[Token(Token = "0x60020EF")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(TimeUnit);
		}
		[Token(Token = "0x60020F0")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
		set
		{
		}
	}

	[Token(Token = "0x60020F1")]
	[Address(RVA = "0x31137B0", Offset = "0x3111DB0", VA = "0x1831137B0")]
	public TimeValue(float value)
	{
	}

	[Token(Token = "0x60020F2")]
	[Address(RVA = "0x1381B80", Offset = "0x1380180", VA = "0x181381B80")]
	public TimeValue(float value, TimeUnit unit)
	{
	}

	[Token(Token = "0x60020F3")]
	[Address(RVA = "0x3113810", Offset = "0x3111E10", VA = "0x183113810")]
	public static implicit operator TimeValue(float value)
	{
		return default(TimeValue);
	}

	[Token(Token = "0x60020F4")]
	[Address(RVA = "0x310E310", Offset = "0x310C910", VA = "0x18310E310")]
	public static bool operator ==(TimeValue lhs, TimeValue rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60020F5")]
	[Address(RVA = "0x310E380", Offset = "0x310C980", VA = "0x18310E380")]
	public static bool operator !=(TimeValue lhs, TimeValue rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60020F6")]
	[Address(RVA = "0x310DFE0", Offset = "0x310C5E0", VA = "0x18310DFE0", Slot = "4")]
	public bool Equals(TimeValue other)
	{
		return default(bool);
	}

	[Token(Token = "0x60020F7")]
	[Address(RVA = "0x311DCE0", Offset = "0x311C2E0", VA = "0x18311DCE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60020F8")]
	[Address(RVA = "0x310E0C0", Offset = "0x310C6C0", VA = "0x18310E0C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60020F9")]
	[Address(RVA = "0x311DD90", Offset = "0x311C390", VA = "0x18311DD90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
