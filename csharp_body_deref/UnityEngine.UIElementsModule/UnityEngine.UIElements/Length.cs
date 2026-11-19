// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Length
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
[Token(Token = "0x20003F9")]
public struct Length : IEquatable<Length>
{
	[Token(Token = "0x20003FA")]
	internal class PropertyBag : ContainerPropertyBag<Length>
	{
		[Token(Token = "0x20003FB")]
		private class ValueProperty : Property<Length, float>
		{
			[Token(Token = "0x170008A9")]
			public override string Name
			{
				[Token(Token = "0x6001F33")]
				[Address(RVA = "0x6B0F0D0", Offset = "0x6B0E0D0", VA = "0x6B0F0D0", Slot = "12")]
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
				[Address(RVA = "0x6B0F0E0", Offset = "0x6B0E0E0", VA = "0x6B0F0E0", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001F35")]
			[Address(RVA = "0x6B0F0F0", Offset = "0x6B0E0F0", VA = "0x6B0F0F0", Slot = "14")]
			public override float GetValue(ref Length container)
			{
				return default(float);
			}

			[Token(Token = "0x6001F36")]
			[Address(RVA = "0x6B0F100", Offset = "0x6B0E100", VA = "0x6B0F100", Slot = "15")]
			public override void SetValue(ref Length container, float value)
			{
			}

			[Token(Token = "0x6001F37")]
			[Address(RVA = "0x6B0F010", Offset = "0x6B0E010", VA = "0x6B0F010")]
			public ValueProperty()
			{
			}
		}

		[Token(Token = "0x20003FC")]
		private class UnitProperty : Property<Length, LengthUnit>
		{
			[Token(Token = "0x170008AB")]
			public override string Name
			{
				[Token(Token = "0x6001F38")]
				[Address(RVA = "0x6B0F130", Offset = "0x6B0E130", VA = "0x6B0F130", Slot = "12")]
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
				[Address(RVA = "0x6B0F140", Offset = "0x6B0E140", VA = "0x6B0F140", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001F3A")]
			[Address(RVA = "0x6B0F150", Offset = "0x6B0E150", VA = "0x6B0F150", Slot = "14")]
			public override LengthUnit GetValue(ref Length container)
			{
				return default(LengthUnit);
			}

			[Token(Token = "0x6001F3B")]
			[Address(RVA = "0x6B0F160", Offset = "0x6B0E160", VA = "0x6B0F160", Slot = "15")]
			public override void SetValue(ref Length container, LengthUnit value)
			{
			}

			[Token(Token = "0x6001F3C")]
			[Address(RVA = "0x6B0F070", Offset = "0x6B0E070", VA = "0x6B0F070")]
			public UnitProperty()
			{
			}
		}

		[Token(Token = "0x6001F32")]
		[Address(RVA = "0x6B0EE70", Offset = "0x6B0DE70", VA = "0x6B0EE70")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x20003FD")]
	private enum Unit
	{
		[Token(Token = "0x4000D8F")]
		Pixel,
		[Token(Token = "0x4000D90")]
		Percent,
		[Token(Token = "0x4000D91")]
		Auto,
		[Token(Token = "0x4000D92")]
		None
	}

	[Token(Token = "0x4000D87")]
	internal const float k_MaxValue = 8388608f;

	[Token(Token = "0x4000D88")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private float m_Value;

	[Token(Token = "0x4000D89")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private Unit m_Unit;

	[Token(Token = "0x170008A7")]
	public float value
	{
		[Token(Token = "0x6001F22")]
		[Address(RVA = "0x6B0EAF0", Offset = "0x6B0DAF0", VA = "0x6B0EAF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001F23")]
		[Address(RVA = "0x6B0EB00", Offset = "0x6B0DB00", VA = "0x6B0EB00")]
		set
		{
		}
	}

	[Token(Token = "0x170008A8")]
	public LengthUnit unit
	{
		[Token(Token = "0x6001F24")]
		[Address(RVA = "0x6B0EB30", Offset = "0x6B0DB30", VA = "0x6B0EB30")]
		get
		{
			return default(LengthUnit);
		}
		[Token(Token = "0x6001F25")]
		[Address(RVA = "0x6B0EB40", Offset = "0x6B0DB40", VA = "0x6B0EB40")]
		set
		{
		}
	}

	[Token(Token = "0x6001F1F")]
	[Address(RVA = "0x6B0EA30", Offset = "0x6B0DA30", VA = "0x6B0EA30")]
	public static Length Percent(float value)
	{
		return default(Length);
	}

	[Token(Token = "0x6001F20")]
	[Address(RVA = "0x6B0EAA0", Offset = "0x6B0DAA0", VA = "0x6B0EAA0")]
	public static Length Auto()
	{
		return default(Length);
	}

	[Token(Token = "0x6001F21")]
	[Address(RVA = "0x6B0EAE0", Offset = "0x6B0DAE0", VA = "0x6B0EAE0")]
	public static Length None()
	{
		return default(Length);
	}

	[Token(Token = "0x6001F26")]
	[Address(RVA = "0x6B0EB50", Offset = "0x6B0DB50", VA = "0x6B0EB50")]
	public bool IsAuto()
	{
		return default(bool);
	}

	[Token(Token = "0x6001F27")]
	[Address(RVA = "0x6B0EB60", Offset = "0x6B0DB60", VA = "0x6B0EB60")]
	public bool IsNone()
	{
		return default(bool);
	}

	[Token(Token = "0x6001F28")]
	[Address(RVA = "0x6B0EB70", Offset = "0x6B0DB70", VA = "0x6B0EB70")]
	public Length(float value)
	{
	}

	[Token(Token = "0x6001F29")]
	[Address(RVA = "0x6B0EA70", Offset = "0x6B0DA70", VA = "0x6B0EA70")]
	public Length(float value, LengthUnit unit)
	{
	}

	[Token(Token = "0x6001F2A")]
	[Address(RVA = "0x6B0EAB0", Offset = "0x6B0DAB0", VA = "0x6B0EAB0")]
	private Length(float value, Unit unit)
	{
	}

	[Token(Token = "0x6001F2B")]
	[Address(RVA = "0x6B0EBA0", Offset = "0x6B0DBA0", VA = "0x6B0EBA0")]
	public static implicit operator Length(float value)
	{
		return default(Length);
	}

	[Token(Token = "0x6001F2C")]
	[Address(RVA = "0x6B0EBD0", Offset = "0x6B0DBD0", VA = "0x6B0EBD0")]
	public static bool operator ==(Length lhs, Length rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F2D")]
	[Address(RVA = "0x6B0EC00", Offset = "0x6B0DC00", VA = "0x6B0EC00")]
	public static bool operator !=(Length lhs, Length rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F2E")]
	[Address(RVA = "0x6B0EC30", Offset = "0x6B0DC30", VA = "0x6B0EC30", Slot = "4")]
	public bool Equals(Length other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F2F")]
	[Address(RVA = "0x6B0EC50", Offset = "0x6B0DC50", VA = "0x6B0EC50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F30")]
	[Address(RVA = "0x6B0ECC0", Offset = "0x6B0DCC0", VA = "0x6B0ECC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F31")]
	[Address(RVA = "0x6B0ECE0", Offset = "0x6B0DCE0", VA = "0x6B0ECE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
