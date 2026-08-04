// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Background
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
				[Address(RVA = "0x5079720", Offset = "0x5079720", VA = "0x5079720", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000FF3")]
			[Address(RVA = "0x50795A0", Offset = "0x50795A0", VA = "0x50795A0")]
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
				[Address(RVA = "0x5079730", Offset = "0x5079730", VA = "0x5079730", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000FF5")]
			[Address(RVA = "0x5079600", Offset = "0x5079600", VA = "0x5079600")]
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
				[Address(RVA = "0x5079740", Offset = "0x5079740", VA = "0x5079740", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000FF7")]
			[Address(RVA = "0x5079660", Offset = "0x5079660", VA = "0x5079660")]
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
				[Address(RVA = "0x5079750", Offset = "0x5079750", VA = "0x5079750", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000FF9")]
			[Address(RVA = "0x50796C0", Offset = "0x50796C0", VA = "0x50796C0")]
			public VectorImageProperty()
			{
			}
		}

		[Token(Token = "0x6000FF1")]
		[Address(RVA = "0x50792E0", Offset = "0x50792E0", VA = "0x50792E0")]
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
		[Address(RVA = "0x5078850", Offset = "0x5078850", VA = "0x5078850")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FDF")]
		[Address(RVA = "0x5078860", Offset = "0x5078860", VA = "0x5078860")]
		set
		{
		}
	}

	[Token(Token = "0x17000312")]
	public Sprite sprite
	{
		[Token(Token = "0x6000FE0")]
		[Address(RVA = "0x5078910", Offset = "0x5078910", VA = "0x5078910")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FE1")]
		[Address(RVA = "0x5078920", Offset = "0x5078920", VA = "0x5078920")]
		set
		{
		}
	}

	[Token(Token = "0x17000313")]
	public RenderTexture renderTexture
	{
		[Token(Token = "0x6000FE2")]
		[Address(RVA = "0x50789D0", Offset = "0x50789D0", VA = "0x50789D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FE3")]
		[Address(RVA = "0x50789E0", Offset = "0x50789E0", VA = "0x50789E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000314")]
	public VectorImage vectorImage
	{
		[Token(Token = "0x6000FE4")]
		[Address(RVA = "0x50772E0", Offset = "0x50772E0", VA = "0x50772E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FE5")]
		[Address(RVA = "0x5078A90", Offset = "0x5078A90", VA = "0x5078A90")]
		set
		{
		}
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x5078B40", Offset = "0x5078B40", VA = "0x5078B40")]
	public static Background FromTexture2D(Texture2D t)
	{
		return default(Background);
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x5078B80", Offset = "0x5078B80", VA = "0x5078B80")]
	public static Background FromRenderTexture(RenderTexture rt)
	{
		return default(Background);
	}

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x5078BC0", Offset = "0x5078BC0", VA = "0x5078BC0")]
	public static Background FromSprite(Sprite s)
	{
		return default(Background);
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x5078C00", Offset = "0x5078C00", VA = "0x5078C00")]
	public static Background FromVectorImage(VectorImage vi)
	{
		return default(Background);
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x5078C40", Offset = "0x5078C40", VA = "0x5078C40")]
	internal static Background FromObject(object obj)
	{
		return default(Background);
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x5078EE0", Offset = "0x5078EE0", VA = "0x5078EE0")]
	public static bool operator ==(Background lhs, Background rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x5078FE0", Offset = "0x5078FE0", VA = "0x5078FE0")]
	public static bool operator !=(Background lhs, Background rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x5079020", Offset = "0x5079020", VA = "0x5079020", Slot = "4")]
	public bool Equals(Background other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x5079060", Offset = "0x5079060", VA = "0x5079060", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x5079100", Offset = "0x5079100", VA = "0x5079100", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x50791B0", Offset = "0x50791B0", VA = "0x50791B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
