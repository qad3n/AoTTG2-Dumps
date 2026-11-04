// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TransformOrigin
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
[Token(Token = "0x2000430")]
public struct TransformOrigin : IEquatable<TransformOrigin>
{
	[Token(Token = "0x2000431")]
	internal class PropertyBag : ContainerPropertyBag<TransformOrigin>
	{
		[Token(Token = "0x2000432")]
		private class XProperty : Property<TransformOrigin, Length>
		{
			[Token(Token = "0x170008F6")]
			public override string Name
			{
				[Token(Token = "0x6002115")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170008F7")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6002116")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002117")]
			[Address(RVA = "0x8EBC10", Offset = "0x8EA210", VA = "0x1808EBC10", Slot = "14")]
			public override Length GetValue(ref TransformOrigin container)
			{
				return default(Length);
			}

			[Token(Token = "0x6002118")]
			[Address(RVA = "0x310DC70", Offset = "0x310C270", VA = "0x18310DC70", Slot = "15")]
			public override void SetValue(ref TransformOrigin container, Length value)
			{
			}

			[Token(Token = "0x6002119")]
			[Address(RVA = "0x3124FB0", Offset = "0x31235B0", VA = "0x183124FB0")]
			public XProperty()
			{
			}
		}

		[Token(Token = "0x2000433")]
		private class YProperty : Property<TransformOrigin, Length>
		{
			[Token(Token = "0x170008F8")]
			public override string Name
			{
				[Token(Token = "0x600211A")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170008F9")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x600211B")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x600211C")]
			[Address(RVA = "0x8EBCB0", Offset = "0x8EA2B0", VA = "0x1808EBCB0", Slot = "14")]
			public override Length GetValue(ref TransformOrigin container)
			{
				return default(Length);
			}

			[Token(Token = "0x600211D")]
			[Address(RVA = "0x3125020", Offset = "0x3123620", VA = "0x183125020", Slot = "15")]
			public override void SetValue(ref TransformOrigin container, Length value)
			{
			}

			[Token(Token = "0x600211E")]
			[Address(RVA = "0x3125030", Offset = "0x3123630", VA = "0x183125030")]
			public YProperty()
			{
			}
		}

		[Token(Token = "0x2000434")]
		private class ZProperty : Property<TransformOrigin, float>
		{
			[Token(Token = "0x170008FA")]
			public override string Name
			{
				[Token(Token = "0x600211F")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170008FB")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6002120")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002121")]
			[Address(RVA = "0x3125110", Offset = "0x3123710", VA = "0x183125110", Slot = "14")]
			public override float GetValue(ref TransformOrigin container)
			{
				return default(float);
			}

			[Token(Token = "0x6002122")]
			[Address(RVA = "0x3125120", Offset = "0x3123720", VA = "0x183125120", Slot = "15")]
			public override void SetValue(ref TransformOrigin container, float value)
			{
			}

			[Token(Token = "0x6002123")]
			[Address(RVA = "0x31251A0", Offset = "0x31237A0", VA = "0x1831251A0")]
			public ZProperty()
			{
			}
		}

		[Token(Token = "0x6002114")]
		[Address(RVA = "0x310F790", Offset = "0x310DD90", VA = "0x18310F790")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000DF3")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Length m_X;

	[Token(Token = "0x4000DF4")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private Length m_Y;

	[Token(Token = "0x4000DF5")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private float m_Z;

	[Token(Token = "0x170008F3")]
	public Length x
	{
		[Token(Token = "0x6002108")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6002109")]
		[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
		set
		{
		}
	}

	[Token(Token = "0x170008F4")]
	public Length y
	{
		[Token(Token = "0x600210A")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600210B")]
		[Address(RVA = "0x1B943D0", Offset = "0x1B929D0", VA = "0x181B943D0")]
		set
		{
		}
	}

	[Token(Token = "0x170008F5")]
	public float z
	{
		[Token(Token = "0x600210C")]
		[Address(RVA = "0x5606A0", Offset = "0x55ECA0", VA = "0x1805606A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600210D")]
		[Address(RVA = "0x5606B0", Offset = "0x55ECB0", VA = "0x1805606B0")]
		set
		{
		}
	}

	[Token(Token = "0x6002105")]
	[Address(RVA = "0x311E270", Offset = "0x311C870", VA = "0x18311E270")]
	public TransformOrigin(Length x, Length y, float z)
	{
	}

	[Token(Token = "0x6002106")]
	[Address(RVA = "0x311E280", Offset = "0x311C880", VA = "0x18311E280")]
	internal TransformOrigin(Vector3 vector)
	{
	}

	[Token(Token = "0x6002107")]
	[Address(RVA = "0x311E0B0", Offset = "0x311C6B0", VA = "0x18311E0B0")]
	public static TransformOrigin Initial()
	{
		return default(TransformOrigin);
	}

	[Token(Token = "0x600210E")]
	[Address(RVA = "0x311E2F0", Offset = "0x311C8F0", VA = "0x18311E2F0")]
	public static bool operator ==(TransformOrigin lhs, TransformOrigin rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600210F")]
	[Address(RVA = "0x311E390", Offset = "0x311C990", VA = "0x18311E390")]
	public static bool operator !=(TransformOrigin lhs, TransformOrigin rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002110")]
	[Address(RVA = "0x311DE90", Offset = "0x311C490", VA = "0x18311DE90", Slot = "4")]
	public bool Equals(TransformOrigin other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002111")]
	[Address(RVA = "0x311DF30", Offset = "0x311C530", VA = "0x18311DF30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002112")]
	[Address(RVA = "0x311E040", Offset = "0x311C640", VA = "0x18311E040", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002113")]
	[Address(RVA = "0x311E100", Offset = "0x311C700", VA = "0x18311E100", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
