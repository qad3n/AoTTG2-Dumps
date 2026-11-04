// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Translate
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
[Token(Token = "0x2000435")]
public struct Translate : IEquatable<Translate>
{
	[Token(Token = "0x2000436")]
	internal class PropertyBag : ContainerPropertyBag<Translate>
	{
		[Token(Token = "0x2000437")]
		private class XProperty : Property<Translate, Length>
		{
			[Token(Token = "0x170008FF")]
			public override string Name
			{
				[Token(Token = "0x6002135")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000900")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6002136")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002137")]
			[Address(RVA = "0x8EBC10", Offset = "0x8EA210", VA = "0x1808EBC10", Slot = "14")]
			public override Length GetValue(ref Translate container)
			{
				return default(Length);
			}

			[Token(Token = "0x6002138")]
			[Address(RVA = "0x310DC70", Offset = "0x310C270", VA = "0x18310DC70", Slot = "15")]
			public override void SetValue(ref Translate container, Length value)
			{
			}

			[Token(Token = "0x6002139")]
			[Address(RVA = "0x3124F40", Offset = "0x3123540", VA = "0x183124F40")]
			public XProperty()
			{
			}
		}

		[Token(Token = "0x2000438")]
		private class YProperty : Property<Translate, Length>
		{
			[Token(Token = "0x17000901")]
			public override string Name
			{
				[Token(Token = "0x600213A")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000902")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x600213B")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x600213C")]
			[Address(RVA = "0x8EBCB0", Offset = "0x8EA2B0", VA = "0x1808EBCB0", Slot = "14")]
			public override Length GetValue(ref Translate container)
			{
				return default(Length);
			}

			[Token(Token = "0x600213D")]
			[Address(RVA = "0x3125020", Offset = "0x3123620", VA = "0x183125020", Slot = "15")]
			public override void SetValue(ref Translate container, Length value)
			{
			}

			[Token(Token = "0x600213E")]
			[Address(RVA = "0x31250A0", Offset = "0x31236A0", VA = "0x1831250A0")]
			public YProperty()
			{
			}
		}

		[Token(Token = "0x2000439")]
		private class ZProperty : Property<Translate, float>
		{
			[Token(Token = "0x17000903")]
			public override string Name
			{
				[Token(Token = "0x600213F")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000904")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6002140")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002141")]
			[Address(RVA = "0x3125110", Offset = "0x3123710", VA = "0x183125110", Slot = "14")]
			public override float GetValue(ref Translate container)
			{
				return default(float);
			}

			[Token(Token = "0x6002142")]
			[Address(RVA = "0x3125120", Offset = "0x3123720", VA = "0x183125120", Slot = "15")]
			public override void SetValue(ref Translate container, float value)
			{
			}

			[Token(Token = "0x6002143")]
			[Address(RVA = "0x3125130", Offset = "0x3123730", VA = "0x183125130")]
			public ZProperty()
			{
			}
		}

		[Token(Token = "0x6002134")]
		[Address(RVA = "0x310F9A0", Offset = "0x310DFA0", VA = "0x18310F9A0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000DFC")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Length m_X;

	[Token(Token = "0x4000DFD")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private Length m_Y;

	[Token(Token = "0x4000DFE")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private float m_Z;

	[Token(Token = "0x4000DFF")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	private bool m_isNone;

	[Token(Token = "0x170008FC")]
	public Length x
	{
		[Token(Token = "0x6002128")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6002129")]
		[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
		set
		{
		}
	}

	[Token(Token = "0x170008FD")]
	public Length y
	{
		[Token(Token = "0x600212A")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600212B")]
		[Address(RVA = "0x1B943D0", Offset = "0x1B929D0", VA = "0x181B943D0")]
		set
		{
		}
	}

	[Token(Token = "0x170008FE")]
	public float z
	{
		[Token(Token = "0x600212C")]
		[Address(RVA = "0x5606A0", Offset = "0x55ECA0", VA = "0x1805606A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600212D")]
		[Address(RVA = "0x5606B0", Offset = "0x55ECB0", VA = "0x1805606B0")]
		set
		{
		}
	}

	[Token(Token = "0x6002124")]
	[Address(RVA = "0x311E810", Offset = "0x311CE10", VA = "0x18311E810")]
	public Translate(Length x, Length y, float z)
	{
	}

	[Token(Token = "0x6002125")]
	[Address(RVA = "0x311E7A0", Offset = "0x311CDA0", VA = "0x18311E7A0")]
	internal Translate(Vector3 v)
	{
	}

	[Token(Token = "0x6002126")]
	[Address(RVA = "0x311E8E0", Offset = "0x311CEE0", VA = "0x18311E8E0")]
	public static implicit operator Translate(Vector3 v)
	{
		return default(Translate);
	}

	[Token(Token = "0x6002127")]
	[Address(RVA = "0x311E600", Offset = "0x311CC00", VA = "0x18311E600")]
	public static Translate None()
	{
		return default(Translate);
	}

	[Token(Token = "0x600212E")]
	[Address(RVA = "0x311E830", Offset = "0x311CE30", VA = "0x18311E830")]
	public static bool operator ==(Translate lhs, Translate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600212F")]
	[Address(RVA = "0x311E980", Offset = "0x311CF80", VA = "0x18311E980")]
	public static bool operator !=(Translate lhs, Translate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002130")]
	[Address(RVA = "0x311E430", Offset = "0x311CA30", VA = "0x18311E430", Slot = "4")]
	public bool Equals(Translate other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002131")]
	[Address(RVA = "0x311E4E0", Offset = "0x311CAE0", VA = "0x18311E4E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002132")]
	[Address(RVA = "0x311E040", Offset = "0x311C640", VA = "0x18311E040", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002133")]
	[Address(RVA = "0x311E630", Offset = "0x311CC30", VA = "0x18311E630", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
