// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Rotate
// Update status: CHANGED in this game update
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
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001F81")]
			[Address(RVA = "0x8EBC10", Offset = "0x8EA210", VA = "0x1808EBC10", Slot = "14")]
			public override Angle GetValue(ref Rotate container)
			{
				return default(Angle);
			}

			[Token(Token = "0x6001F82")]
			[Address(RVA = "0x310DC70", Offset = "0x310C270", VA = "0x18310DC70", Slot = "15")]
			public override void SetValue(ref Rotate container, Angle value)
			{
			}

			[Token(Token = "0x6001F83")]
			[Address(RVA = "0x310DC80", Offset = "0x310C280", VA = "0x18310DC80")]
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
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001F86")]
			[Address(RVA = "0x310DDC0", Offset = "0x310C3C0", VA = "0x18310DDC0", Slot = "14")]
			public override Vector3 GetValue(ref Rotate container)
			{
				return default(Vector3);
			}

			[Token(Token = "0x6001F87")]
			[Address(RVA = "0x310DDE0", Offset = "0x310C3E0", VA = "0x18310DDE0", Slot = "15")]
			public override void SetValue(ref Rotate container, Vector3 value)
			{
			}

			[Token(Token = "0x6001F88")]
			[Address(RVA = "0x310DE00", Offset = "0x310C400", VA = "0x18310DE00")]
			public AxisProperty()
			{
			}
		}

		[Token(Token = "0x6001F7E")]
		[Address(RVA = "0x310FE40", Offset = "0x310E440", VA = "0x18310FE40")]
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
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return default(Angle);
		}
		[Token(Token = "0x6001F74")]
		[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
		set
		{
		}
	}

	[Token(Token = "0x170008B6")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Vector3 axis
	{
		[Token(Token = "0x6001F75")]
		[Address(RVA = "0x3110C20", Offset = "0x310F220", VA = "0x183110C20")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001F76")]
		[Address(RVA = "0x3110E10", Offset = "0x310F410", VA = "0x183110E10")]
		set
		{
		}
	}

	[Token(Token = "0x6001F6E")]
	[Address(RVA = "0x3110BB0", Offset = "0x310F1B0", VA = "0x183110BB0")]
	public Rotate(Angle angle, Vector3 axis)
	{
	}

	[Token(Token = "0x6001F6F")]
	[Address(RVA = "0x3110BD0", Offset = "0x310F1D0", VA = "0x183110BD0")]
	public Rotate(Angle angle)
	{
	}

	[Token(Token = "0x6001F70")]
	[Address(RVA = "0x3110AF0", Offset = "0x310F0F0", VA = "0x183110AF0")]
	public Rotate(Quaternion quaternion)
	{
	}

	[Token(Token = "0x6001F71")]
	[Address(RVA = "0x31108C0", Offset = "0x310EEC0", VA = "0x1831108C0")]
	internal static Rotate Initial()
	{
		return default(Rotate);
	}

	[Token(Token = "0x6001F72")]
	[Address(RVA = "0x3110980", Offset = "0x310EF80", VA = "0x183110980")]
	public static Rotate None()
	{
		return default(Rotate);
	}

	[Token(Token = "0x6001F77")]
	[Address(RVA = "0x3110C40", Offset = "0x310F240", VA = "0x183110C40")]
	public static bool operator ==(Rotate lhs, Rotate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F78")]
	[Address(RVA = "0x3110D10", Offset = "0x310F310", VA = "0x183110D10")]
	public static bool operator !=(Rotate lhs, Rotate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F79")]
	[Address(RVA = "0x31106F0", Offset = "0x310ECF0", VA = "0x1831106F0", Slot = "4")]
	public bool Equals(Rotate other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F7A")]
	[Address(RVA = "0x3110650", Offset = "0x310EC50", VA = "0x183110650", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F7B")]
	[Address(RVA = "0x31107F0", Offset = "0x310EDF0", VA = "0x1831107F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F7C")]
	[Address(RVA = "0x3110A60", Offset = "0x310F060", VA = "0x183110A60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001F7D")]
	[Address(RVA = "0x31109D0", Offset = "0x310EFD0", VA = "0x1831109D0")]
	internal Quaternion ToQuaternion()
	{
		return default(Quaternion);
	}
}
