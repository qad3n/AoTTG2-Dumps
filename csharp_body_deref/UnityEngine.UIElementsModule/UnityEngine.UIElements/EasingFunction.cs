// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EasingFunction
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

[Token(Token = "0x20002FC")]
public struct EasingFunction : IEquatable<EasingFunction>
{
	[Token(Token = "0x20002FD")]
	internal class PropertyBag : ContainerPropertyBag<EasingFunction>
	{
		[Token(Token = "0x20002FE")]
		private class ModeProperty : Property<EasingFunction, EasingMode>
		{
			[Token(Token = "0x17000473")]
			public override string Name
			{
				[Token(Token = "0x60014DD")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000474")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x60014DE")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x60014DF")]
			[Address(RVA = "0x1392600", Offset = "0x1390C00", VA = "0x181392600", Slot = "14")]
			public override EasingMode GetValue(ref EasingFunction container)
			{
				return default(EasingMode);
			}

			[Token(Token = "0x60014E0")]
			[Address(RVA = "0x2FF6340", Offset = "0x2FF4940", VA = "0x182FF6340", Slot = "15")]
			public override void SetValue(ref EasingFunction container, EasingMode value)
			{
			}

			[Token(Token = "0x60014E1")]
			[Address(RVA = "0x32B0AF0", Offset = "0x32AF0F0", VA = "0x1832B0AF0")]
			public ModeProperty()
			{
			}
		}

		[Token(Token = "0x60014DC")]
		[Address(RVA = "0x32B5E50", Offset = "0x32B4450", VA = "0x1832B5E50")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000BB2")]
	[FieldOffset(Offset = "0x0")]
	private EasingMode m_Mode;

	[Token(Token = "0x17000472")]
	public EasingMode mode
	{
		[Token(Token = "0x60014D3")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(EasingMode);
		}
		[Token(Token = "0x60014D4")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x60014D5")]
	[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
	public EasingFunction(EasingMode mode)
	{
	}

	[Token(Token = "0x60014D6")]
	[Address(RVA = "0x2F1B9D0", Offset = "0x2F19FD0", VA = "0x182F1B9D0")]
	public static implicit operator EasingFunction(EasingMode easingMode)
	{
		return default(EasingFunction);
	}

	[Token(Token = "0x60014D7")]
	[Address(RVA = "0x2F24CA0", Offset = "0x2F232A0", VA = "0x182F24CA0")]
	public static bool operator ==(EasingFunction lhs, EasingFunction rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60014D8")]
	[Address(RVA = "0x32ADC10", Offset = "0x32AC210", VA = "0x1832ADC10", Slot = "4")]
	public bool Equals(EasingFunction other)
	{
		return default(bool);
	}

	[Token(Token = "0x60014D9")]
	[Address(RVA = "0x32ADB80", Offset = "0x32AC180", VA = "0x1832ADB80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60014DA")]
	[Address(RVA = "0x32ADC20", Offset = "0x32AC220", VA = "0x1832ADC20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60014DB")]
	[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
