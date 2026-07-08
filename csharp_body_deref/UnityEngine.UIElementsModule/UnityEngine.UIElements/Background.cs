using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200026B")]
public struct Background : IEquatable<Background>
{
	[Token(Token = "0x200026C")]
	internal class PropertyBag : ContainerPropertyBag<Background>
	{
		[Token(Token = "0x200026D")]
		private class TextureProperty : Property<Background, Texture2D>
		{
			[Token(Token = "0x40008FA")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000315")]
			public override string Name
			{
				[Token(Token = "0x6000FF2")]
				[Address(RVA = "0x4D51DF0", Offset = "0x4D51DF0", VA = "0x4D51DF0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000FF3")]
			[Address(RVA = "0x4D51C70", Offset = "0x4D51C70", VA = "0x4D51C70")]
			public TextureProperty()
			{
			}
		}

		[Token(Token = "0x200026E")]
		private class SpriteProperty : Property<Background, Sprite>
		{
			[Token(Token = "0x40008FC")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000316")]
			public override string Name
			{
				[Token(Token = "0x6000FF4")]
				[Address(RVA = "0x4D51E00", Offset = "0x4D51E00", VA = "0x4D51E00", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000FF5")]
			[Address(RVA = "0x4D51CD0", Offset = "0x4D51CD0", VA = "0x4D51CD0")]
			public SpriteProperty()
			{
			}
		}

		[Token(Token = "0x200026F")]
		private class RenderTextureProperty : Property<Background, RenderTexture>
		{
			[Token(Token = "0x40008FE")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000317")]
			public override string Name
			{
				[Token(Token = "0x6000FF6")]
				[Address(RVA = "0x4D51E10", Offset = "0x4D51E10", VA = "0x4D51E10", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000FF7")]
			[Address(RVA = "0x4D51D30", Offset = "0x4D51D30", VA = "0x4D51D30")]
			public RenderTextureProperty()
			{
			}
		}

		[Token(Token = "0x2000270")]
		private class VectorImageProperty : Property<Background, VectorImage>
		{
			[Token(Token = "0x4000900")]
			[FieldOffset(Offset = "0x20")]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			[CompilerGenerated]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000318")]
			public override string Name
			{
				[Token(Token = "0x6000FF8")]
				[Address(RVA = "0x4D51E20", Offset = "0x4D51E20", VA = "0x4D51E20", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000FF9")]
			[Address(RVA = "0x4D51D90", Offset = "0x4D51D90", VA = "0x4D51D90")]
			public VectorImageProperty()
			{
			}
		}

		[Token(Token = "0x6000FF1")]
		[Address(RVA = "0x4D519B0", Offset = "0x4D519B0", VA = "0x4D519B0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x40008F5")]
	[FieldOffset(Offset = "0x0")]
	private Texture2D m_Texture;

	[Token(Token = "0x40008F6")]
	[FieldOffset(Offset = "0x8")]
	private Sprite m_Sprite;

	[Token(Token = "0x40008F7")]
	[FieldOffset(Offset = "0x10")]
	private RenderTexture m_RenderTexture;

	[Token(Token = "0x40008F8")]
	[FieldOffset(Offset = "0x18")]
	private VectorImage m_VectorImage;

	[Token(Token = "0x17000311")]
	public Texture2D texture
	{
		[Token(Token = "0x6000FDE")]
		[Address(RVA = "0x4D50F20", Offset = "0x4D50F20", VA = "0x4D50F20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FDF")]
		[Address(RVA = "0x4D50F30", Offset = "0x4D50F30", VA = "0x4D50F30")]
		set
		{
		}
	}

	[Token(Token = "0x17000312")]
	public Sprite sprite
	{
		[Token(Token = "0x6000FE0")]
		[Address(RVA = "0x4D50FE0", Offset = "0x4D50FE0", VA = "0x4D50FE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FE1")]
		[Address(RVA = "0x4D50FF0", Offset = "0x4D50FF0", VA = "0x4D50FF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000313")]
	public RenderTexture renderTexture
	{
		[Token(Token = "0x6000FE2")]
		[Address(RVA = "0x4D510A0", Offset = "0x4D510A0", VA = "0x4D510A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FE3")]
		[Address(RVA = "0x4D510B0", Offset = "0x4D510B0", VA = "0x4D510B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000314")]
	public VectorImage vectorImage
	{
		[Token(Token = "0x6000FE4")]
		[Address(RVA = "0x4D4F9B0", Offset = "0x4D4F9B0", VA = "0x4D4F9B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FE5")]
		[Address(RVA = "0x4D51160", Offset = "0x4D51160", VA = "0x4D51160")]
		set
		{
		}
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x4D51210", Offset = "0x4D51210", VA = "0x4D51210")]
	public static Background FromTexture2D(Texture2D t)
	{
		return default(Background);
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x4D51250", Offset = "0x4D51250", VA = "0x4D51250")]
	public static Background FromRenderTexture(RenderTexture rt)
	{
		return default(Background);
	}

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x4D51290", Offset = "0x4D51290", VA = "0x4D51290")]
	public static Background FromSprite(Sprite s)
	{
		return default(Background);
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x4D512D0", Offset = "0x4D512D0", VA = "0x4D512D0")]
	public static Background FromVectorImage(VectorImage vi)
	{
		return default(Background);
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x4D51310", Offset = "0x4D51310", VA = "0x4D51310")]
	internal static Background FromObject(object obj)
	{
		return default(Background);
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x4D515B0", Offset = "0x4D515B0", VA = "0x4D515B0")]
	public static bool operator ==(Background lhs, Background rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x4D516B0", Offset = "0x4D516B0", VA = "0x4D516B0")]
	public static bool operator !=(Background lhs, Background rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x4D516F0", Offset = "0x4D516F0", VA = "0x4D516F0", Slot = "4")]
	public bool Equals(Background other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x4D51730", Offset = "0x4D51730", VA = "0x4D51730", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x4D517D0", Offset = "0x4D517D0", VA = "0x4D517D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x4D51880", Offset = "0x4D51880", VA = "0x4D51880", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
