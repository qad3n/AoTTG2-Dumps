using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000393")]
public struct Translate : IEquatable<Translate>
{
	[Token(Token = "0x2000394")]
	internal class PropertyBag : ContainerPropertyBag<Translate>
	{
		[Token(Token = "0x2000395")]
		private class XProperty : Property<Translate, Length>
		{
			[Token(Token = "0x4000AB3")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000662")]
			public override string Name
			{
				[Token(Token = "0x600172F")]
				[Address(RVA = "0x4D8AA90", Offset = "0x4D8AA90", VA = "0x4D8AA90", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6001730")]
			[Address(RVA = "0x4D8A970", Offset = "0x4D8A970", VA = "0x4D8A970")]
			public XProperty()
			{
			}
		}

		[Token(Token = "0x2000396")]
		private class YProperty : Property<Translate, Length>
		{
			[Token(Token = "0x4000AB5")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000663")]
			public override string Name
			{
				[Token(Token = "0x6001731")]
				[Address(RVA = "0x4D8AAA0", Offset = "0x4D8AAA0", VA = "0x4D8AAA0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6001732")]
			[Address(RVA = "0x4D8A9D0", Offset = "0x4D8A9D0", VA = "0x4D8A9D0")]
			public YProperty()
			{
			}
		}

		[Token(Token = "0x2000397")]
		private class ZProperty : Property<Translate, float>
		{
			[Token(Token = "0x4000AB7")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000664")]
			public override string Name
			{
				[Token(Token = "0x6001733")]
				[Address(RVA = "0x4D8AAB0", Offset = "0x4D8AAB0", VA = "0x4D8AAB0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6001734")]
			[Address(RVA = "0x4D8AA30", Offset = "0x4D8AA30", VA = "0x4D8AA30")]
			public ZProperty()
			{
			}
		}

		[Token(Token = "0x600172E")]
		[Address(RVA = "0x4D8A750", Offset = "0x4D8A750", VA = "0x4D8A750")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000AAE")]
	[FieldOffset(Offset = "0x0")]
	private Length m_X;

	[Token(Token = "0x4000AAF")]
	[FieldOffset(Offset = "0x8")]
	private Length m_Y;

	[Token(Token = "0x4000AB0")]
	[FieldOffset(Offset = "0x10")]
	private float m_Z;

	[Token(Token = "0x4000AB1")]
	[FieldOffset(Offset = "0x14")]
	private bool m_isNone;

	[Token(Token = "0x1700065F")]
	public Length x
	{
		[Token(Token = "0x6001723")]
		[Address(RVA = "0x4D8A3F0", Offset = "0x4D8A3F0", VA = "0x4D8A3F0")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6001724")]
		[Address(RVA = "0x4D8A400", Offset = "0x4D8A400", VA = "0x4D8A400")]
		set
		{
		}
	}

	[Token(Token = "0x17000660")]
	public Length y
	{
		[Token(Token = "0x6001725")]
		[Address(RVA = "0x4D8A410", Offset = "0x4D8A410", VA = "0x4D8A410")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6001726")]
		[Address(RVA = "0x4D8A420", Offset = "0x4D8A420", VA = "0x4D8A420")]
		set
		{
		}
	}

	[Token(Token = "0x17000661")]
	public float z
	{
		[Token(Token = "0x6001727")]
		[Address(RVA = "0x4D8A430", Offset = "0x4D8A430", VA = "0x4D8A430")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6001721")]
	[Address(RVA = "0x4D8A3D0", Offset = "0x4D8A3D0", VA = "0x4D8A3D0")]
	public Translate(Length x, Length y, float z)
	{
	}

	[Token(Token = "0x6001722")]
	[Address(RVA = "0x4D897D0", Offset = "0x4D897D0", VA = "0x4D897D0")]
	public static Translate None()
	{
		return default(Translate);
	}

	[Token(Token = "0x6001728")]
	[Address(RVA = "0x4D83600", Offset = "0x4D83600", VA = "0x4D83600")]
	public static bool operator ==(Translate lhs, Translate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001729")]
	[Address(RVA = "0x4D8A440", Offset = "0x4D8A440", VA = "0x4D8A440")]
	public static bool operator !=(Translate lhs, Translate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600172A")]
	[Address(RVA = "0x4D8A4B0", Offset = "0x4D8A4B0", VA = "0x4D8A4B0", Slot = "4")]
	public bool Equals(Translate other)
	{
		return default(bool);
	}

	[Token(Token = "0x600172B")]
	[Address(RVA = "0x4D8A510", Offset = "0x4D8A510", VA = "0x4D8A510", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600172C")]
	[Address(RVA = "0x4D83C90", Offset = "0x4D83C90", VA = "0x4D83C90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600172D")]
	[Address(RVA = "0x4D8A5C0", Offset = "0x4D8A5C0", VA = "0x4D8A5C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
