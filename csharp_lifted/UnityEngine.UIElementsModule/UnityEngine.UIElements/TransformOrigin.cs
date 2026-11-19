// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TransformOrigin
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
				[Address(RVA = "0x6B167F0", Offset = "0x6B157F0", VA = "0x6B167F0", Slot = "12")]
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
				[Address(RVA = "0x6B16800", Offset = "0x6B15800", VA = "0x6B16800", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002117")]
			[Address(RVA = "0x6B16810", Offset = "0x6B15810", VA = "0x6B16810", Slot = "14")]
			public override Length GetValue(ref TransformOrigin container)
			{
				return default(Length);
			}

			[Token(Token = "0x6002118")]
			[Address(RVA = "0x6B16820", Offset = "0x6B15820", VA = "0x6B16820", Slot = "15")]
			public override void SetValue(ref TransformOrigin container, Length value)
			{
			}

			[Token(Token = "0x6002119")]
			[Address(RVA = "0x6B166D0", Offset = "0x6B156D0", VA = "0x6B166D0")]
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
				[Address(RVA = "0x6B16830", Offset = "0x6B15830", VA = "0x6B16830", Slot = "12")]
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
				[Address(RVA = "0x6B16840", Offset = "0x6B15840", VA = "0x6B16840", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x600211C")]
			[Address(RVA = "0x6B16850", Offset = "0x6B15850", VA = "0x6B16850", Slot = "14")]
			public override Length GetValue(ref TransformOrigin container)
			{
				return default(Length);
			}

			[Token(Token = "0x600211D")]
			[Address(RVA = "0x6B16860", Offset = "0x6B15860", VA = "0x6B16860", Slot = "15")]
			public override void SetValue(ref TransformOrigin container, Length value)
			{
			}

			[Token(Token = "0x600211E")]
			[Address(RVA = "0x6B16730", Offset = "0x6B15730", VA = "0x6B16730")]
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
				[Address(RVA = "0x6B16870", Offset = "0x6B15870", VA = "0x6B16870", Slot = "12")]
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
				[Address(RVA = "0x6B16880", Offset = "0x6B15880", VA = "0x6B16880", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002121")]
			[Address(RVA = "0x6B16890", Offset = "0x6B15890", VA = "0x6B16890", Slot = "14")]
			public override float GetValue(ref TransformOrigin container)
			{
				return default(float);
			}

			[Token(Token = "0x6002122")]
			[Address(RVA = "0x6B168A0", Offset = "0x6B158A0", VA = "0x6B168A0", Slot = "15")]
			public override void SetValue(ref TransformOrigin container, float value)
			{
			}

			[Token(Token = "0x6002123")]
			[Address(RVA = "0x6B16790", Offset = "0x6B15790", VA = "0x6B16790")]
			public ZProperty()
			{
			}
		}

		[Token(Token = "0x6002114")]
		[Address(RVA = "0x6B164B0", Offset = "0x6B154B0", VA = "0x6B164B0")]
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
		[Address(RVA = "0x6B16170", Offset = "0x6B15170", VA = "0x6B16170")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6002109")]
		[Address(RVA = "0x6B16180", Offset = "0x6B15180", VA = "0x6B16180")]
		set
		{
		}
	}

	[Token(Token = "0x170008F4")]
	public Length y
	{
		[Token(Token = "0x600210A")]
		[Address(RVA = "0x6B16190", Offset = "0x6B15190", VA = "0x6B16190")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600210B")]
		[Address(RVA = "0x6B161A0", Offset = "0x6B151A0", VA = "0x6B161A0")]
		set
		{
		}
	}

	[Token(Token = "0x170008F5")]
	public float z
	{
		[Token(Token = "0x600210C")]
		[Address(RVA = "0x6B161B0", Offset = "0x6B151B0", VA = "0x6B161B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600210D")]
		[Address(RVA = "0x6B161C0", Offset = "0x6B151C0", VA = "0x6B161C0")]
		set
		{
		}
	}

	[Token(Token = "0x6002105")]
	[Address(RVA = "0x6B16130", Offset = "0x6B15130", VA = "0x6B16130")]
	public TransformOrigin(Length x, Length y, float z)
	{
	}

	[Token(Token = "0x6002106")]
	[Address(RVA = "0x6B16140", Offset = "0x6B15140", VA = "0x6B16140")]
	internal TransformOrigin(Vector3 vector)
	{
	}

	[Token(Token = "0x6002107")]
	[Address(RVA = "0x6B14A80", Offset = "0x6B13A80", VA = "0x6B14A80")]
	public static TransformOrigin Initial()
	{
		return default(TransformOrigin);
	}

	[Token(Token = "0x600210E")]
	[Address(RVA = "0x6B14BA0", Offset = "0x6B13BA0", VA = "0x6B14BA0")]
	public static bool operator ==(TransformOrigin lhs, TransformOrigin rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600210F")]
	[Address(RVA = "0x6B161D0", Offset = "0x6B151D0", VA = "0x6B161D0")]
	public static bool operator !=(TransformOrigin lhs, TransformOrigin rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002110")]
	[Address(RVA = "0x6B16230", Offset = "0x6B15230", VA = "0x6B16230", Slot = "4")]
	public bool Equals(TransformOrigin other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002111")]
	[Address(RVA = "0x6B16280", Offset = "0x6B15280", VA = "0x6B16280", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002112")]
	[Address(RVA = "0x6B14DC0", Offset = "0x6B13DC0", VA = "0x6B14DC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002113")]
	[Address(RVA = "0x6B16320", Offset = "0x6B15320", VA = "0x6B16320", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
