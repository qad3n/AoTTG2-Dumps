// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Rotate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000408")]
public struct Rotate : IEquatable<Rotate>
{
	[Token(Token = "0x2000409")]
	internal class PropertyBag : ContainerPropertyBag<Rotate>
	{
		[Token(Token = "0x200040A")]
		private class AngleProperty : Property<Rotate, Angle>
		{
			[Token(Token = "0x170008B7")]
			public override string Name
			{
				[Token(Token = "0x6001F7F")]
				[Address(RVA = "0x6B11500", Offset = "0x6B10500", VA = "0x6B11500", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170008B8")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6001F80")]
				[Address(RVA = "0x6B11510", Offset = "0x6B10510", VA = "0x6B11510", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001F81")]
			[Address(RVA = "0x6B11520", Offset = "0x6B10520", VA = "0x6B11520", Slot = "14")]
			public override Angle GetValue(ref Rotate container)
			{
				return default(Angle);
			}

			[Token(Token = "0x6001F82")]
			[Address(RVA = "0x6B11530", Offset = "0x6B10530", VA = "0x6B11530", Slot = "15")]
			public override void SetValue(ref Rotate container, Angle value)
			{
			}

			[Token(Token = "0x6001F83")]
			[Address(RVA = "0x6B11440", Offset = "0x6B10440", VA = "0x6B11440")]
			public AngleProperty()
			{
			}
		}

		[Token(Token = "0x200040B")]
		private class AxisProperty : Property<Rotate, Vector3>
		{
			[Token(Token = "0x170008B9")]
			public override string Name
			{
				[Token(Token = "0x6001F84")]
				[Address(RVA = "0x6B11540", Offset = "0x6B10540", VA = "0x6B11540", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170008BA")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6001F85")]
				[Address(RVA = "0x6B11550", Offset = "0x6B10550", VA = "0x6B11550", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001F86")]
			[Address(RVA = "0x6B11560", Offset = "0x6B10560", VA = "0x6B11560", Slot = "14")]
			public override Vector3 GetValue(ref Rotate container)
			{
				return default(Vector3);
			}

			[Token(Token = "0x6001F87")]
			[Address(RVA = "0x6B11570", Offset = "0x6B10570", VA = "0x6B11570", Slot = "15")]
			public override void SetValue(ref Rotate container, Vector3 value)
			{
			}

			[Token(Token = "0x6001F88")]
			[Address(RVA = "0x6B114A0", Offset = "0x6B104A0", VA = "0x6B114A0")]
			public AxisProperty()
			{
			}
		}

		[Token(Token = "0x6001F7E")]
		[Address(RVA = "0x6B112A0", Offset = "0x6B102A0", VA = "0x6B112A0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000DA8")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Angle m_Angle;

	[Token(Token = "0x4000DA9")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private Vector3 m_Axis;

	[Token(Token = "0x4000DAA")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	private bool m_IsNone;

	[Token(Token = "0x170008B5")]
	public Angle angle
	{
		[Token(Token = "0x6001F73")]
		[Address(RVA = "0x6B10C90", Offset = "0x6B0FC90", VA = "0x6B10C90")]
		get
		{
			return default(Angle);
		}
		[Token(Token = "0x6001F74")]
		[Address(RVA = "0x6B10CA0", Offset = "0x6B0FCA0", VA = "0x6B10CA0")]
		set
		{
		}
	}

	[Token(Token = "0x170008B6")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Vector3 axis
	{
		[Token(Token = "0x6001F75")]
		[Address(RVA = "0x6B10CB0", Offset = "0x6B0FCB0", VA = "0x6B10CB0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001F76")]
		[Address(RVA = "0x6B10CC0", Offset = "0x6B0FCC0", VA = "0x6B10CC0")]
		set
		{
		}
	}

	[Token(Token = "0x6001F6E")]
	[Address(RVA = "0x6B10A10", Offset = "0x6B0FA10", VA = "0x6B10A10")]
	public Rotate(Angle angle, Vector3 axis)
	{
	}

	[Token(Token = "0x6001F6F")]
	[Address(RVA = "0x6B10A30", Offset = "0x6B0FA30", VA = "0x6B10A30")]
	public Rotate(Angle angle)
	{
	}

	[Token(Token = "0x6001F70")]
	[Address(RVA = "0x6B10A80", Offset = "0x6B0FA80", VA = "0x6B10A80")]
	public Rotate(Quaternion quaternion)
	{
	}

	[Token(Token = "0x6001F71")]
	[Address(RVA = "0x6B10B40", Offset = "0x6B0FB40", VA = "0x6B10B40")]
	internal static Rotate Initial()
	{
		return default(Rotate);
	}

	[Token(Token = "0x6001F72")]
	[Address(RVA = "0x6B10BE0", Offset = "0x6B0FBE0", VA = "0x6B10BE0")]
	public static Rotate None()
	{
		return default(Rotate);
	}

	[Token(Token = "0x6001F77")]
	[Address(RVA = "0x6B10CD0", Offset = "0x6B0FCD0", VA = "0x6B10CD0")]
	public static bool operator ==(Rotate lhs, Rotate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F78")]
	[Address(RVA = "0x6B10DA0", Offset = "0x6B0FDA0", VA = "0x6B10DA0")]
	public static bool operator !=(Rotate lhs, Rotate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F79")]
	[Address(RVA = "0x6B10EA0", Offset = "0x6B0FEA0", VA = "0x6B10EA0", Slot = "4")]
	public bool Equals(Rotate other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F7A")]
	[Address(RVA = "0x6B10F90", Offset = "0x6B0FF90", VA = "0x6B10F90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F7B")]
	[Address(RVA = "0x6B110D0", Offset = "0x6B100D0", VA = "0x6B110D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F7C")]
	[Address(RVA = "0x6B111A0", Offset = "0x6B101A0", VA = "0x6B111A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001F7D")]
	[Address(RVA = "0x6B11230", Offset = "0x6B10230", VA = "0x6B11230")]
	internal Quaternion ToQuaternion()
	{
		return default(Quaternion);
	}
}
