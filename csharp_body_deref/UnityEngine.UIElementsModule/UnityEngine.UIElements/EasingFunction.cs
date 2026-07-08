using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000277")]
public struct EasingFunction : IEquatable<EasingFunction>
{
	[Token(Token = "0x2000278")]
	internal class PropertyBag : ContainerPropertyBag<EasingFunction>
	{
		[Token(Token = "0x2000279")]
		private class ModeProperty : Property<EasingFunction, EasingMode>
		{
			[Token(Token = "0x400092B")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x1700036E")]
			public override string Name
			{
				[Token(Token = "0x60010BC")]
				[Address(RVA = "0x4D54200", Offset = "0x4D54200", VA = "0x4D54200", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60010BD")]
			[Address(RVA = "0x4D541A0", Offset = "0x4D541A0", VA = "0x4D541A0")]
			public ModeProperty()
			{
			}
		}

		[Token(Token = "0x60010BB")]
		[Address(RVA = "0x4D540A0", Offset = "0x4D540A0", VA = "0x4D540A0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000929")]
	[FieldOffset(Offset = "0x0")]
	private EasingMode m_Mode;

	[Token(Token = "0x1700036D")]
	public EasingMode mode
	{
		[Token(Token = "0x60010B3")]
		[Address(RVA = "0x4D53FA0", Offset = "0x4D53FA0", VA = "0x4D53FA0")]
		get
		{
			return default(EasingMode);
		}
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x4D53FB0", Offset = "0x4D53FB0", VA = "0x4D53FB0")]
	public EasingFunction(EasingMode mode)
	{
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x4D52EE0", Offset = "0x4D52EE0", VA = "0x4D52EE0")]
	public static implicit operator EasingFunction(EasingMode easingMode)
	{
		return default(EasingFunction);
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x4D53FC0", Offset = "0x4D53FC0", VA = "0x4D53FC0")]
	public static bool operator ==(EasingFunction lhs, EasingFunction rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x4D53FD0", Offset = "0x4D53FD0", VA = "0x4D53FD0", Slot = "4")]
	public bool Equals(EasingFunction other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x4D53FE0", Offset = "0x4D53FE0", VA = "0x4D53FE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x4D54040", Offset = "0x4D54040", VA = "0x4D54040", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x4D52AD0", Offset = "0x4D52AD0", VA = "0x4D52AD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
