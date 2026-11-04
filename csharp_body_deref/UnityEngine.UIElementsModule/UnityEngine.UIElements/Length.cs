// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Length
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
[Token(Token = "0x20003FA")]
public struct Length : IEquatable<Length>
{
	[Token(Token = "0x20003FB")]
	private enum Unit
	{
		[Token(Token = "0x4000D8E")]
		Pixel,
		[Token(Token = "0x4000D8F")]
		Percent,
		[Token(Token = "0x4000D90")]
		Auto,
		[Token(Token = "0x4000D91")]
		None
	}

	[Token(Token = "0x20003FC")]
	internal class PropertyBag : ContainerPropertyBag<Length>
	{
		[Token(Token = "0x20003FD")]
		private class ValueProperty : Property<Length, float>
		{
			[Token(Token = "0x170008A9")]
			public override string Name
			{
				[Token(Token = "0x6001F33")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170008AA")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6001F34")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001F35")]
			[Address(RVA = "0x2FF1DB0", Offset = "0x2FF03B0", VA = "0x182FF1DB0", Slot = "14")]
			public override float GetValue(ref Length container)
			{
				return default(float);
			}

			[Token(Token = "0x6001F36")]
			[Address(RVA = "0x311EC60", Offset = "0x311D260", VA = "0x18311EC60", Slot = "15")]
			public override void SetValue(ref Length container, float value)
			{
			}

			[Token(Token = "0x6001F37")]
			[Address(RVA = "0x311EC90", Offset = "0x311D290", VA = "0x18311EC90")]
			public ValueProperty()
			{
			}
		}

		[Token(Token = "0x20003FE")]
		private class UnitProperty : Property<Length, LengthUnit>
		{
			[Token(Token = "0x170008AB")]
			public override string Name
			{
				[Token(Token = "0x6001F38")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170008AC")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6001F39")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001F3A")]
			[Address(RVA = "0x2FF6710", Offset = "0x2FF4D10", VA = "0x182FF6710", Slot = "14")]
			public override LengthUnit GetValue(ref Length container)
			{
				return default(LengthUnit);
			}

			[Token(Token = "0x6001F3B")]
			[Address(RVA = "0x2FF6870", Offset = "0x2FF4E70", VA = "0x182FF6870", Slot = "15")]
			public override void SetValue(ref Length container, LengthUnit value)
			{
			}

			[Token(Token = "0x6001F3C")]
			[Address(RVA = "0x311EBB0", Offset = "0x311D1B0", VA = "0x18311EBB0")]
			public UnitProperty()
			{
			}
		}

		[Token(Token = "0x6001F32")]
		[Address(RVA = "0x310F600", Offset = "0x310DC00", VA = "0x18310F600")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000D8A")]
	internal const float k_MaxValue = 8388608f;

	[Token(Token = "0x4000D8B")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private float m_Value;

	[Token(Token = "0x4000D8C")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private Unit m_Unit;

	[Token(Token = "0x170008A7")]
	public float value
	{
		[Token(Token = "0x6001F22")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001F23")]
		[Address(RVA = "0x310E3B0", Offset = "0x310C9B0", VA = "0x18310E3B0")]
		set
		{
		}
	}

	[Token(Token = "0x170008A8")]
	public LengthUnit unit
	{
		[Token(Token = "0x6001F24")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(LengthUnit);
		}
		[Token(Token = "0x6001F25")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
		set
		{
		}
	}

	[Token(Token = "0x6001F1F")]
	[Address(RVA = "0x310E120", Offset = "0x310C720", VA = "0x18310E120")]
	public static Length Percent(float value)
	{
		return default(Length);
	}

	[Token(Token = "0x6001F20")]
	[Address(RVA = "0x310DFC0", Offset = "0x310C5C0", VA = "0x18310DFC0")]
	public static Length Auto()
	{
		return default(Length);
	}

	[Token(Token = "0x6001F21")]
	[Address(RVA = "0x310E100", Offset = "0x310C700", VA = "0x18310E100")]
	public static Length None()
	{
		return default(Length);
	}

	[Token(Token = "0x6001F26")]
	[Address(RVA = "0x310E0E0", Offset = "0x310C6E0", VA = "0x18310E0E0")]
	public bool IsAuto()
	{
		return default(bool);
	}

	[Token(Token = "0x6001F27")]
	[Address(RVA = "0x310E0F0", Offset = "0x310C6F0", VA = "0x18310E0F0")]
	public bool IsNone()
	{
		return default(bool);
	}

	[Token(Token = "0x6001F28")]
	[Address(RVA = "0x310E2D0", Offset = "0x310C8D0", VA = "0x18310E2D0")]
	public Length(float value)
	{
	}

	[Token(Token = "0x6001F29")]
	[Address(RVA = "0x310E2A0", Offset = "0x310C8A0", VA = "0x18310E2A0")]
	public Length(float value, LengthUnit unit)
	{
	}

	[Token(Token = "0x6001F2A")]
	[Address(RVA = "0x310E2A0", Offset = "0x310C8A0", VA = "0x18310E2A0")]
	private Length(float value, Unit unit)
	{
	}

	[Token(Token = "0x6001F2B")]
	[Address(RVA = "0x310E340", Offset = "0x310C940", VA = "0x18310E340")]
	public static implicit operator Length(float value)
	{
		return default(Length);
	}

	[Token(Token = "0x6001F2C")]
	[Address(RVA = "0x310E310", Offset = "0x310C910", VA = "0x18310E310")]
	public static bool operator ==(Length lhs, Length rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F2D")]
	[Address(RVA = "0x310E380", Offset = "0x310C980", VA = "0x18310E380")]
	public static bool operator !=(Length lhs, Length rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F2E")]
	[Address(RVA = "0x310DFE0", Offset = "0x310C5E0", VA = "0x18310DFE0", Slot = "4")]
	public bool Equals(Length other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F2F")]
	[Address(RVA = "0x310E010", Offset = "0x310C610", VA = "0x18310E010", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F30")]
	[Address(RVA = "0x310E0C0", Offset = "0x310C6C0", VA = "0x18310E0C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F31")]
	[Address(RVA = "0x310E160", Offset = "0x310C760", VA = "0x18310E160", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
