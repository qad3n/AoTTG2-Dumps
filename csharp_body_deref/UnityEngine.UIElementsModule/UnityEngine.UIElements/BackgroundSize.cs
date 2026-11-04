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
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x600007E")]
			[Address(RVA = "0x3096BA0", Offset = "0x30951A0", VA = "0x183096BA0", Slot = "14")]
			public override BackgroundSizeType GetValue(ref BackgroundSize container)
			{
				return default(BackgroundSizeType);
			}

			[Token(Token = "0x600007F")]
			[Address(RVA = "0x3096BB0", Offset = "0x30951B0", VA = "0x183096BB0", Slot = "15")]
			public override void SetValue(ref BackgroundSize container, BackgroundSizeType value)
			{
			}

			[Token(Token = "0x6000080")]
			[Address(RVA = "0x3096C10", Offset = "0x3095210", VA = "0x183096C10")]
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
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6000083")]
			[Address(RVA = "0x309D650", Offset = "0x309BC50", VA = "0x18309D650", Slot = "14")]
			public override Length GetValue(ref BackgroundSize container)
			{
				return default(Length);
			}

			[Token(Token = "0x6000084")]
			[Address(RVA = "0x309D660", Offset = "0x309BC60", VA = "0x18309D660", Slot = "15")]
			public override void SetValue(ref BackgroundSize container, Length value)
			{
			}

			[Token(Token = "0x6000085")]
			[Address(RVA = "0x309D670", Offset = "0x309BC70", VA = "0x18309D670")]
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
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6000088")]
			[Address(RVA = "0x309D750", Offset = "0x309BD50", VA = "0x18309D750", Slot = "14")]
			public override Length GetValue(ref BackgroundSize container)
			{
				return default(Length);
			}

			[Token(Token = "0x6000089")]
			[Address(RVA = "0x309D760", Offset = "0x309BD60", VA = "0x18309D760", Slot = "15")]
			public override void SetValue(ref BackgroundSize container, Length value)
			{
			}

			[Token(Token = "0x600008A")]
			[Address(RVA = "0x309D770", Offset = "0x309BD70", VA = "0x18309D770")]
			public YProperty()
			{
			}
		}

		[Token(Token = "0x600007B")]
		[Address(RVA = "0x30962D0", Offset = "0x30948D0", VA = "0x1830962D0")]
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
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930")]
		get
		{
			return default(BackgroundSizeType);
		}
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x307E4A0", Offset = "0x307CAA0", VA = "0x18307E4A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Length x
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x1B943A0", Offset = "0x1B929A0", VA = "0x181B943A0")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x307E5F0", Offset = "0x307CBF0", VA = "0x18307E5F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public Length y
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x307E500", Offset = "0x307CB00", VA = "0x18307E500")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x307E600", Offset = "0x307CC00", VA = "0x18307E600")]
		set
		{
		}
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x307E490", Offset = "0x307CA90", VA = "0x18307E490")]
	public BackgroundSize(Length sizeX, Length sizeY)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x307E4A0", Offset = "0x307CAA0", VA = "0x18307E4A0")]
	public BackgroundSize(BackgroundSizeType sizeType)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x307E370", Offset = "0x307C970", VA = "0x18307E370")]
	internal static BackgroundSize Initial()
	{
		return default(BackgroundSize);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x307E1F0", Offset = "0x307C7F0", VA = "0x18307E1F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x307E2B0", Offset = "0x307C8B0", VA = "0x18307E2B0", Slot = "4")]
	public bool Equals(BackgroundSize other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x307E310", Offset = "0x307C910", VA = "0x18307E310", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x307E510", Offset = "0x307CB10", VA = "0x18307E510")]
	public static bool operator ==(BackgroundSize style1, BackgroundSize style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x307E580", Offset = "0x307CB80", VA = "0x18307E580")]
	public static bool operator !=(BackgroundSize style1, BackgroundSize style2)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x307E3D0", Offset = "0x307C9D0", VA = "0x18307E3D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
