// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Ratio
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000404")]
public readonly struct Ratio : IEquatable<Ratio>
{
	[Token(Token = "0x2000405")]
	internal class PropertyBag : ContainerPropertyBag<Ratio>
	{
		[Token(Token = "0x2000406")]
		private class ValueProperty : Property<Ratio, float>
		{
			[Token(Token = "0x170008B1")]
			public override string Name
			{
				[Token(Token = "0x6001F64")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170008B2")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6001F65")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001F66")]
			[Address(RVA = "0x2FF1DB0", Offset = "0x2FF03B0", VA = "0x182FF1DB0", Slot = "14")]
			public override float GetValue(ref Ratio container)
			{
				return default(float);
			}

			[Token(Token = "0x6001F67")]
			[Address(RVA = "0x311EC20", Offset = "0x311D220", VA = "0x18311EC20", Slot = "15")]
			public override void SetValue(ref Ratio container, float value)
			{
			}

			[Token(Token = "0x6001F68")]
			[Address(RVA = "0x311ED00", Offset = "0x311D300", VA = "0x18311ED00")]
			public ValueProperty()
			{
			}
		}

		[Token(Token = "0x2000407")]
		private class AutoProperty : Property<Ratio, bool>
		{
			[Token(Token = "0x170008B3")]
			public override string Name
			{
				[Token(Token = "0x6001F69")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170008B4")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6001F6A")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001F6B")]
			[Address(RVA = "0x310DCF0", Offset = "0x310C2F0", VA = "0x18310DCF0", Slot = "14")]
			public override bool GetValue(ref Ratio container)
			{
				return default(bool);
			}

			[Token(Token = "0x6001F6C")]
			[Address(RVA = "0x310DD10", Offset = "0x310C310", VA = "0x18310DD10", Slot = "15")]
			public override void SetValue(ref Ratio container, bool value)
			{
			}

			[Token(Token = "0x6001F6D")]
			[Address(RVA = "0x310DD50", Offset = "0x310C350", VA = "0x18310DD50")]
			public AutoProperty()
			{
			}
		}

		[Token(Token = "0x6001F63")]
		[Address(RVA = "0x310FFD0", Offset = "0x310E5D0", VA = "0x18310FFD0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000DA3")]
	[FieldOffset(Offset = "0x0")]
	private readonly float m_Value;

	[Token(Token = "0x170008B0")]
	public float value
	{
		[Token(Token = "0x6001F59")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6001F58")]
	[Address(RVA = "0x2CDDC80", Offset = "0x2CDC280", VA = "0x182CDDC80")]
	public Ratio(float value)
	{
	}

	[Token(Token = "0x6001F5A")]
	[Address(RVA = "0x3110500", Offset = "0x310EB00", VA = "0x183110500")]
	public bool IsAuto()
	{
		return default(bool);
	}

	[Token(Token = "0x6001F5B")]
	[Address(RVA = "0x3110600", Offset = "0x310EC00", VA = "0x183110600")]
	public static implicit operator Ratio(float value)
	{
		return default(Ratio);
	}

	[Token(Token = "0x6001F5C")]
	[Address(RVA = "0x1A790A0", Offset = "0x1A776A0", VA = "0x181A790A0")]
	public static implicit operator float(Ratio value)
	{
		return default(float);
	}

	[Token(Token = "0x6001F5D")]
	[Address(RVA = "0x31105C0", Offset = "0x310EBC0", VA = "0x1831105C0")]
	public static bool operator ==(Ratio lhs, Ratio rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F5E")]
	[Address(RVA = "0x3110610", Offset = "0x310EC10", VA = "0x183110610")]
	public static bool operator !=(Ratio lhs, Ratio rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F5F")]
	[Address(RVA = "0x31104A0", Offset = "0x310EAA0", VA = "0x1831104A0", Slot = "4")]
	public bool Equals(Ratio other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F60")]
	[Address(RVA = "0x31103F0", Offset = "0x310E9F0", VA = "0x1831103F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F61")]
	[Address(RVA = "0x31104E0", Offset = "0x310EAE0", VA = "0x1831104E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F62")]
	[Address(RVA = "0x3110520", Offset = "0x310EB20", VA = "0x183110520", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
