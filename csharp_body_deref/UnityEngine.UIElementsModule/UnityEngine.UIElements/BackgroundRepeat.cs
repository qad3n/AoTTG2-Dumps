using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200000F")]
public struct BackgroundRepeat : IEquatable<BackgroundRepeat>
{
	[Token(Token = "0x2000010")]
	internal class PropertyBag : ContainerPropertyBag<BackgroundRepeat>
	{
		[Token(Token = "0x2000011")]
		private class XProperty : Property<BackgroundRepeat, Repeat>
		{
			[Token(Token = "0x4000021")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x1700000A")]
			public override string Name
			{
				[Token(Token = "0x6000045")]
				[Address(RVA = "0x4BE6210", Offset = "0x4BE6210", VA = "0x4BE6210", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000046")]
			[Address(RVA = "0x4BE6150", Offset = "0x4BE6150", VA = "0x4BE6150")]
			public XProperty()
			{
			}
		}

		[Token(Token = "0x2000012")]
		private class YProperty : Property<BackgroundRepeat, Repeat>
		{
			[Token(Token = "0x4000023")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x1700000B")]
			public override string Name
			{
				[Token(Token = "0x6000047")]
				[Address(RVA = "0x4BE6220", Offset = "0x4BE6220", VA = "0x4BE6220", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000048")]
			[Address(RVA = "0x4BE61B0", Offset = "0x4BE61B0", VA = "0x4BE61B0")]
			public YProperty()
			{
			}
		}

		[Token(Token = "0x6000044")]
		[Address(RVA = "0x4BE5FD0", Offset = "0x4BE5FD0", VA = "0x4BE5FD0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x0")]
	public Repeat x;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x4")]
	public Repeat y;

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4BE57E0", Offset = "0x4BE57E0", VA = "0x4BE57E0")]
	public BackgroundRepeat(Repeat repeatX, Repeat repeatY)
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4BE5E40", Offset = "0x4BE5E40", VA = "0x4BE5E40")]
	internal static BackgroundRepeat Initial()
	{
		return default(BackgroundRepeat);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4BE5E50", Offset = "0x4BE5E50", VA = "0x4BE5E50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4BE5EC0", Offset = "0x4BE5EC0", VA = "0x4BE5EC0", Slot = "4")]
	public bool Equals(BackgroundRepeat other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4BE5EE0", Offset = "0x4BE5EE0", VA = "0x4BE5EE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4BE5DC0", Offset = "0x4BE5DC0", VA = "0x4BE5DC0")]
	public static bool operator ==(BackgroundRepeat style1, BackgroundRepeat style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4BE5F20", Offset = "0x4BE5F20", VA = "0x4BE5F20")]
	public static bool operator !=(BackgroundRepeat style1, BackgroundRepeat style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4BE5F40", Offset = "0x4BE5F40", VA = "0x4BE5F40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
