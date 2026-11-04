// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BackgroundRepeat
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
[Token(Token = "0x2000013")]
public struct BackgroundRepeat : IEquatable<BackgroundRepeat>
{
	[Token(Token = "0x2000014")]
	internal class PropertyBag : ContainerPropertyBag<BackgroundRepeat>
	{
		[Token(Token = "0x2000015")]
		private class XProperty : Property<BackgroundRepeat, Repeat>
		{
			[Token(Token = "0x17000013")]
			public override string Name
			{
				[Token(Token = "0x6000062")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000014")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6000063")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6000064")]
			[Address(RVA = "0x1392600", Offset = "0x1390C00", VA = "0x181392600", Slot = "14")]
			public override Repeat GetValue(ref BackgroundRepeat container)
			{
				return default(Repeat);
			}

			[Token(Token = "0x6000065")]
			[Address(RVA = "0x2FF6340", Offset = "0x2FF4940", VA = "0x182FF6340", Slot = "15")]
			public override void SetValue(ref BackgroundRepeat container, Repeat value)
			{
			}

			[Token(Token = "0x6000066")]
			[Address(RVA = "0x309D6E0", Offset = "0x309BCE0", VA = "0x18309D6E0")]
			public XProperty()
			{
			}
		}

		[Token(Token = "0x2000016")]
		private class YProperty : Property<BackgroundRepeat, Repeat>
		{
			[Token(Token = "0x17000015")]
			public override string Name
			{
				[Token(Token = "0x6000067")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000016")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6000068")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6000069")]
			[Address(RVA = "0x2FF6710", Offset = "0x2FF4D10", VA = "0x182FF6710", Slot = "14")]
			public override Repeat GetValue(ref BackgroundRepeat container)
			{
				return default(Repeat);
			}

			[Token(Token = "0x600006A")]
			[Address(RVA = "0x2FF6870", Offset = "0x2FF4E70", VA = "0x182FF6870", Slot = "15")]
			public override void SetValue(ref BackgroundRepeat container, Repeat value)
			{
			}

			[Token(Token = "0x600006B")]
			[Address(RVA = "0x309D7E0", Offset = "0x309BDE0", VA = "0x18309D7E0")]
			public YProperty()
			{
			}
		}

		[Token(Token = "0x6000061")]
		[Address(RVA = "0x3095FC0", Offset = "0x30945C0", VA = "0x183095FC0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x0")]
	public Repeat x;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x4")]
	public Repeat y;

	[Token(Token = "0x6000059")]
	[Address(RVA = "0xACCA30", Offset = "0xACB030", VA = "0x180ACCA30")]
	public BackgroundRepeat(Repeat repeatX, Repeat repeatY)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x2FDFD60", Offset = "0x2FDE360", VA = "0x182FDFD60")]
	internal static BackgroundRepeat Initial()
	{
		return default(BackgroundRepeat);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x307E050", Offset = "0x307C650", VA = "0x18307E050", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2F7ECA0", Offset = "0x2F7D2A0", VA = "0x182F7ECA0", Slot = "4")]
	public bool Equals(BackgroundRepeat other)
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x307E0E0", Offset = "0x307C6E0", VA = "0x18307E0E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x307E1B0", Offset = "0x307C7B0", VA = "0x18307E1B0")]
	public static bool operator ==(BackgroundRepeat style1, BackgroundRepeat style2)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x307E1D0", Offset = "0x307C7D0", VA = "0x18307E1D0")]
	public static bool operator !=(BackgroundRepeat style1, BackgroundRepeat style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x307E120", Offset = "0x307C720", VA = "0x18307E120", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
