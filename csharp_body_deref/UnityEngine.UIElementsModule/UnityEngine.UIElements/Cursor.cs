using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000134")]
public struct Cursor : IEquatable<Cursor>
{
	[Token(Token = "0x2000135")]
	internal class PropertyBag : ContainerPropertyBag<Cursor>
	{
		[Token(Token = "0x2000136")]
		private class TextureProperty : Property<Cursor, Texture2D>
		{
			[Token(Token = "0x400058B")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x1700017A")]
			public override string Name
			{
				[Token(Token = "0x60008B5")]
				[Address(RVA = "0x4CEF070", Offset = "0x4CEF070", VA = "0x4CEF070", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60008B6")]
			[Address(RVA = "0x4CEEF50", Offset = "0x4CEEF50", VA = "0x4CEEF50")]
			public TextureProperty()
			{
			}
		}

		[Token(Token = "0x2000137")]
		private class HotspotProperty : Property<Cursor, Vector2>
		{
			[Token(Token = "0x400058D")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x1700017B")]
			public override string Name
			{
				[Token(Token = "0x60008B7")]
				[Address(RVA = "0x4CEF080", Offset = "0x4CEF080", VA = "0x4CEF080", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60008B8")]
			[Address(RVA = "0x4CEEFB0", Offset = "0x4CEEFB0", VA = "0x4CEEFB0")]
			public HotspotProperty()
			{
			}
		}

		[Token(Token = "0x2000138")]
		private class DefaultCursorIdProperty : Property<Cursor, int>
		{
			[Token(Token = "0x400058F")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x1700017C")]
			public override string Name
			{
				[Token(Token = "0x60008B9")]
				[Address(RVA = "0x4CEF090", Offset = "0x4CEF090", VA = "0x4CEF090", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60008BA")]
			[Address(RVA = "0x4CEF010", Offset = "0x4CEF010", VA = "0x4CEF010")]
			public DefaultCursorIdProperty()
			{
			}
		}

		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x4CEED20", Offset = "0x4CEED20", VA = "0x4CEED20")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x17000177")]
	public Texture2D texture
	{
		[Token(Token = "0x60008A9")]
		[Address(RVA = "0x4CEE940", Offset = "0x4CEE940", VA = "0x4CEE940")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x60008AA")]
		[Address(RVA = "0x4CEE950", Offset = "0x4CEE950", VA = "0x4CEE950")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000178")]
	public Vector2 hotspot
	{
		[Token(Token = "0x60008AB")]
		[Address(RVA = "0x4CEE960", Offset = "0x4CEE960", VA = "0x4CEE960")]
		[CompilerGenerated]
		readonly get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60008AC")]
		[Address(RVA = "0x4CEE970", Offset = "0x4CEE970", VA = "0x4CEE970")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000179")]
	internal int defaultCursorId
	{
		[Token(Token = "0x60008AD")]
		[Address(RVA = "0x4CEE980", Offset = "0x4CEE980", VA = "0x4CEE980")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60008AE")]
		[Address(RVA = "0x4CEE990", Offset = "0x4CEE990", VA = "0x4CEE990")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x4CEE9A0", Offset = "0x4CEE9A0", VA = "0x4CEE9A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x4CEEA90", Offset = "0x4CEEA90", VA = "0x4CEEA90", Slot = "4")]
	public bool Equals(Cursor other)
	{
		return default(bool);
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x4CEEB30", Offset = "0x4CEEB30", VA = "0x4CEEB30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x4CEEC00", Offset = "0x4CEEC00", VA = "0x4CEEC00")]
	public static bool operator ==(Cursor style1, Cursor style2)
	{
		return default(bool);
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x4CEECB0", Offset = "0x4CEECB0", VA = "0x4CEECB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
