using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.TextCore.Text;

namespace UnityEngine.UIElements;

[Token(Token = "0x200027B")]
public struct FontDefinition : IEquatable<FontDefinition>
{
	[Token(Token = "0x200027C")]
	internal class PropertyBag : ContainerPropertyBag<FontDefinition>
	{
		[Token(Token = "0x200027D")]
		private class FontProperty : Property<FontDefinition, Font>
		{
			[Token(Token = "0x4000947")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000371")]
			public override string Name
			{
				[Token(Token = "0x60010CB")]
				[Address(RVA = "0x4D54970", Offset = "0x4D54970", VA = "0x4D54970", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60010CC")]
			[Address(RVA = "0x4D548B0", Offset = "0x4D548B0", VA = "0x4D548B0")]
			public FontProperty()
			{
			}
		}

		[Token(Token = "0x200027E")]
		private class FontAssetProperty : Property<FontDefinition, FontAsset>
		{
			[Token(Token = "0x4000949")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000372")]
			public override string Name
			{
				[Token(Token = "0x60010CD")]
				[Address(RVA = "0x4D54980", Offset = "0x4D54980", VA = "0x4D54980", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60010CE")]
			[Address(RVA = "0x4D54910", Offset = "0x4D54910", VA = "0x4D54910")]
			public FontAssetProperty()
			{
			}
		}

		[Token(Token = "0x60010CA")]
		[Address(RVA = "0x4D54720", Offset = "0x4D54720", VA = "0x4D54720")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000944")]
	[FieldOffset(Offset = "0x0")]
	private Font m_Font;

	[Token(Token = "0x4000945")]
	[FieldOffset(Offset = "0x8")]
	private FontAsset m_FontAsset;

	[Token(Token = "0x1700036F")]
	public Font font
	{
		[Token(Token = "0x60010BE")]
		[Address(RVA = "0x4D54210", Offset = "0x4D54210", VA = "0x4D54210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000370")]
	public FontAsset fontAsset
	{
		[Token(Token = "0x60010BF")]
		[Address(RVA = "0x4D54220", Offset = "0x4D54220", VA = "0x4D54220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x4D54230", Offset = "0x4D54230", VA = "0x4D54230")]
	public static FontDefinition FromFont(Font f)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x4D54260", Offset = "0x4D54260", VA = "0x4D54260")]
	public static FontDefinition FromSDFFont(FontAsset f)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x4D54290", Offset = "0x4D54290", VA = "0x4D54290")]
	internal static FontDefinition FromObject(object obj)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x4D54410", Offset = "0x4D54410", VA = "0x4D54410")]
	internal bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x4D54490", Offset = "0x4D54490", VA = "0x4D54490", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x4D54510", Offset = "0x4D54510", VA = "0x4D54510", Slot = "4")]
	public bool Equals(FontDefinition other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x4D54550", Offset = "0x4D54550", VA = "0x4D54550", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x4D545D0", Offset = "0x4D545D0", VA = "0x4D545D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x4D546A0", Offset = "0x4D546A0", VA = "0x4D546A0")]
	public static bool operator ==(FontDefinition left, FontDefinition right)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x4D546E0", Offset = "0x4D546E0", VA = "0x4D546E0")]
	public static bool operator !=(FontDefinition left, FontDefinition right)
	{
		return default(bool);
	}
}
