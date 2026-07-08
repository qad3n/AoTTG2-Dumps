using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003F3")]
public struct TextShadow : IEquatable<TextShadow>
{
	[Token(Token = "0x20003F4")]
	internal class PropertyBag : ContainerPropertyBag<TextShadow>
	{
		[Token(Token = "0x20003F5")]
		private class OffsetProperty : Property<TextShadow, Vector2>
		{
			[Token(Token = "0x4000C30")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x170006F9")]
			public override string Name
			{
				[Token(Token = "0x60019C6")]
				[Address(RVA = "0x4C38110", Offset = "0x4C38110", VA = "0x4C38110", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60019C7")]
			[Address(RVA = "0x4C37FF0", Offset = "0x4C37FF0", VA = "0x4C37FF0")]
			public OffsetProperty()
			{
			}
		}

		[Token(Token = "0x20003F6")]
		private class BlurRadiusProperty : Property<TextShadow, float>
		{
			[Token(Token = "0x4000C32")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x170006FA")]
			public override string Name
			{
				[Token(Token = "0x60019C8")]
				[Address(RVA = "0x4C38120", Offset = "0x4C38120", VA = "0x4C38120", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60019C9")]
			[Address(RVA = "0x4C38050", Offset = "0x4C38050", VA = "0x4C38050")]
			public BlurRadiusProperty()
			{
			}
		}

		[Token(Token = "0x20003F7")]
		private class ColorProperty : Property<TextShadow, Color>
		{
			[Token(Token = "0x4000C34")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x170006FB")]
			public override string Name
			{
				[Token(Token = "0x60019CA")]
				[Address(RVA = "0x4C38130", Offset = "0x4C38130", VA = "0x4C38130", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60019CB")]
			[Address(RVA = "0x4C380B0", Offset = "0x4C380B0", VA = "0x4C380B0")]
			public ColorProperty()
			{
			}
		}

		[Token(Token = "0x60019C5")]
		[Address(RVA = "0x4C37DC0", Offset = "0x4C37DC0", VA = "0x4C37DC0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000C2C")]
	[FieldOffset(Offset = "0x0")]
	public Vector2 offset;

	[Token(Token = "0x4000C2D")]
	[FieldOffset(Offset = "0x8")]
	public float blurRadius;

	[Token(Token = "0x4000C2E")]
	[FieldOffset(Offset = "0xC")]
	public Color color;

	[Token(Token = "0x60019BE")]
	[Address(RVA = "0x4C37930", Offset = "0x4C37930", VA = "0x4C37930", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60019BF")]
	[Address(RVA = "0x4C37A10", Offset = "0x4C37A10", VA = "0x4C37A10", Slot = "4")]
	public bool Equals(TextShadow other)
	{
		return default(bool);
	}

	[Token(Token = "0x60019C0")]
	[Address(RVA = "0x4C37AA0", Offset = "0x4C37AA0", VA = "0x4C37AA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60019C1")]
	[Address(RVA = "0x4C37B50", Offset = "0x4C37B50", VA = "0x4C37B50")]
	public static bool operator ==(TextShadow style1, TextShadow style2)
	{
		return default(bool);
	}

	[Token(Token = "0x60019C2")]
	[Address(RVA = "0x4C37BF0", Offset = "0x4C37BF0", VA = "0x4C37BF0")]
	public static bool operator !=(TextShadow style1, TextShadow style2)
	{
		return default(bool);
	}

	[Token(Token = "0x60019C3")]
	[Address(RVA = "0x4C37C90", Offset = "0x4C37C90", VA = "0x4C37C90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60019C4")]
	[Address(RVA = "0x4C37D50", Offset = "0x4C37D50", VA = "0x4C37D50")]
	internal static TextShadow LerpUnclamped(TextShadow a, TextShadow b, float t)
	{
		return default(TextShadow);
	}
}
