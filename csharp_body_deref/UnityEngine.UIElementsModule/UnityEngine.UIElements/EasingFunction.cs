// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EasingFunction
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
				[Address(RVA = "0x507BB30", Offset = "0x507BB30", VA = "0x507BB30", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60010BD")]
			[Address(RVA = "0x507BAD0", Offset = "0x507BAD0", VA = "0x507BAD0")]
			public ModeProperty()
			{
			}
		}

		[Token(Token = "0x60010BB")]
		[Address(RVA = "0x507B9D0", Offset = "0x507B9D0", VA = "0x507B9D0")]
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
		[Address(RVA = "0x507B8D0", Offset = "0x507B8D0", VA = "0x507B8D0")]
		get
		{
			return default(EasingMode);
		}
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x507B8E0", Offset = "0x507B8E0", VA = "0x507B8E0")]
	public EasingFunction(EasingMode mode)
	{
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x507A810", Offset = "0x507A810", VA = "0x507A810")]
	public static implicit operator EasingFunction(EasingMode easingMode)
	{
		return default(EasingFunction);
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x507B8F0", Offset = "0x507B8F0", VA = "0x507B8F0")]
	public static bool operator ==(EasingFunction lhs, EasingFunction rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x507B900", Offset = "0x507B900", VA = "0x507B900", Slot = "4")]
	public bool Equals(EasingFunction other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x507B910", Offset = "0x507B910", VA = "0x507B910", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x507B970", Offset = "0x507B970", VA = "0x507B970", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x507A400", Offset = "0x507A400", VA = "0x507A400", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
