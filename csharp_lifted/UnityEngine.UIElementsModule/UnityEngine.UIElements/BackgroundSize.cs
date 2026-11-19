// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BackgroundSize
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
[Token(Token = "0x2000017")]
public struct BackgroundSize : IEquatable<BackgroundSize>
{
	[Token(Token = "0x2000018")]
	internal class PropertyBag : ContainerPropertyBag<BackgroundSize>
	{
		[Token(Token = "0x2000019")]
		private class SizeTypeProperty : Property<BackgroundSize, BackgroundSizeType>
		{
			[Token(Token = "0x1700001A")]
			public override string Name
			{
				[Token(Token = "0x600007C")]
				[Address(RVA = "0x6A7D8F0", Offset = "0x6A7C8F0", VA = "0x6A7D8F0", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700001B")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x600007D")]
				[Address(RVA = "0x6A7D900", Offset = "0x6A7C900", VA = "0x6A7D900", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x600007E")]
			[Address(RVA = "0x6A7D910", Offset = "0x6A7C910", VA = "0x6A7D910", Slot = "14")]
			public override BackgroundSizeType GetValue(ref BackgroundSize container)
			{
				return default(BackgroundSizeType);
			}

			[Token(Token = "0x600007F")]
			[Address(RVA = "0x6A7D920", Offset = "0x6A7C920", VA = "0x6A7D920", Slot = "15")]
			public override void SetValue(ref BackgroundSize container, BackgroundSizeType value)
			{
			}

			[Token(Token = "0x6000080")]
			[Address(RVA = "0x6A7D7D0", Offset = "0x6A7C7D0", VA = "0x6A7D7D0")]
			public SizeTypeProperty()
			{
			}
		}

		[Token(Token = "0x200001A")]
		private class XProperty : Property<BackgroundSize, Length>
		{
			[Token(Token = "0x1700001C")]
			public override string Name
			{
				[Token(Token = "0x6000081")]
				[Address(RVA = "0x6A7D970", Offset = "0x6A7C970", VA = "0x6A7D970", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700001D")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6000082")]
				[Address(RVA = "0x6A7D980", Offset = "0x6A7C980", VA = "0x6A7D980", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6000083")]
			[Address(RVA = "0x6A7D990", Offset = "0x6A7C990", VA = "0x6A7D990", Slot = "14")]
			public override Length GetValue(ref BackgroundSize container)
			{
				return default(Length);
			}

			[Token(Token = "0x6000084")]
			[Address(RVA = "0x6A7D9A0", Offset = "0x6A7C9A0", VA = "0x6A7D9A0", Slot = "15")]
			public override void SetValue(ref BackgroundSize container, Length value)
			{
			}

			[Token(Token = "0x6000085")]
			[Address(RVA = "0x6A7D830", Offset = "0x6A7C830", VA = "0x6A7D830")]
			public XProperty()
			{
			}
		}

		[Token(Token = "0x200001B")]
		private class YProperty : Property<BackgroundSize, Length>
		{
			[Token(Token = "0x1700001E")]
			public override string Name
			{
				[Token(Token = "0x6000086")]
				[Address(RVA = "0x6A7D9B0", Offset = "0x6A7C9B0", VA = "0x6A7D9B0", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700001F")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6000087")]
				[Address(RVA = "0x6A7D9C0", Offset = "0x6A7C9C0", VA = "0x6A7D9C0", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6000088")]
			[Address(RVA = "0x6A7D9D0", Offset = "0x6A7C9D0", VA = "0x6A7D9D0", Slot = "14")]
			public override Length GetValue(ref BackgroundSize container)
			{
				return default(Length);
			}

			[Token(Token = "0x6000089")]
			[Address(RVA = "0x6A7D9E0", Offset = "0x6A7C9E0", VA = "0x6A7D9E0", Slot = "15")]
			public override void SetValue(ref BackgroundSize container, Length value)
			{
			}

			[Token(Token = "0x600008A")]
			[Address(RVA = "0x6A7D890", Offset = "0x6A7C890", VA = "0x6A7D890")]
			public YProperty()
			{
			}
		}

		[Token(Token = "0x600007B")]
		[Address(RVA = "0x6A7D5B0", Offset = "0x6A7C5B0", VA = "0x6A7D5B0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private BackgroundSizeType m_SizeType;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private Length m_X;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0xC")]
	[SerializeField]
	private Length m_Y;

	[Token(Token = "0x17000017")]
	public BackgroundSizeType sizeType
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x6A7D270", Offset = "0x6A7C270", VA = "0x6A7D270")]
		get
		{
			return default(BackgroundSizeType);
		}
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x6A7D280", Offset = "0x6A7C280", VA = "0x6A7D280")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Length x
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x6A7D2D0", Offset = "0x6A7C2D0", VA = "0x6A7D2D0")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x6A7D2E0", Offset = "0x6A7C2E0", VA = "0x6A7D2E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public Length y
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x6A7D2F0", Offset = "0x6A7C2F0", VA = "0x6A7D2F0")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x6A7D300", Offset = "0x6A7C300", VA = "0x6A7D300")]
		set
		{
		}
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x6A7C930", Offset = "0x6A7B930", VA = "0x6A7C930")]
	public BackgroundSize(Length sizeX, Length sizeY)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x6A7C8E0", Offset = "0x6A7B8E0", VA = "0x6A7C8E0")]
	public BackgroundSize(BackgroundSizeType sizeType)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x6A7D310", Offset = "0x6A7C310", VA = "0x6A7D310")]
	internal static BackgroundSize Initial()
	{
		return default(BackgroundSize);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x6A7D360", Offset = "0x6A7C360", VA = "0x6A7D360", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x6A7D3F0", Offset = "0x6A7C3F0", VA = "0x6A7D3F0", Slot = "4")]
	public bool Equals(BackgroundSize other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x6A7D440", Offset = "0x6A7C440", VA = "0x6A7D440", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x6A7CDC0", Offset = "0x6A7BDC0", VA = "0x6A7CDC0")]
	public static bool operator ==(BackgroundSize style1, BackgroundSize style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x6A7D490", Offset = "0x6A7C490", VA = "0x6A7D490")]
	public static bool operator !=(BackgroundSize style1, BackgroundSize style2)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x6A7D4F0", Offset = "0x6A7C4F0", VA = "0x6A7D4F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
