// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FontDefinition
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.TextCore.Text;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000303")]
public struct FontDefinition : IEquatable<FontDefinition>
{
	[Token(Token = "0x2000304")]
	internal class PropertyBag : ContainerPropertyBag<FontDefinition>
	{
		[Token(Token = "0x2000305")]
		private class FontProperty : Property<FontDefinition, Font>
		{
			[Token(Token = "0x1700047E")]
			public override string Name
			{
				[Token(Token = "0x600150E")]
				[Address(RVA = "0x6AB33F0", Offset = "0x6AB23F0", VA = "0x6AB33F0", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700047F")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x600150F")]
				[Address(RVA = "0x6AB3400", Offset = "0x6AB2400", VA = "0x6AB3400", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001510")]
			[Address(RVA = "0x6AB3410", Offset = "0x6AB2410", VA = "0x6AB3410", Slot = "14")]
			public override Font GetValue(ref FontDefinition container)
			{
				return null;
			}

			[Token(Token = "0x6001511")]
			[Address(RVA = "0x6AB3420", Offset = "0x6AB2420", VA = "0x6AB3420", Slot = "15")]
			public override void SetValue(ref FontDefinition container, Font value)
			{
			}

			[Token(Token = "0x6001512")]
			[Address(RVA = "0x6AB3330", Offset = "0x6AB2330", VA = "0x6AB3330")]
			public FontProperty()
			{
			}
		}

		[Token(Token = "0x2000306")]
		private class FontAssetProperty : Property<FontDefinition, FontAsset>
		{
			[Token(Token = "0x17000480")]
			public override string Name
			{
				[Token(Token = "0x6001513")]
				[Address(RVA = "0x6AB3430", Offset = "0x6AB2430", VA = "0x6AB3430", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000481")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6001514")]
				[Address(RVA = "0x6AB3440", Offset = "0x6AB2440", VA = "0x6AB3440", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001515")]
			[Address(RVA = "0x6AB3450", Offset = "0x6AB2450", VA = "0x6AB3450", Slot = "14")]
			public override FontAsset GetValue(ref FontDefinition container)
			{
				return null;
			}

			[Token(Token = "0x6001516")]
			[Address(RVA = "0x6AB3460", Offset = "0x6AB2460", VA = "0x6AB3460", Slot = "15")]
			public override void SetValue(ref FontDefinition container, FontAsset value)
			{
			}

			[Token(Token = "0x6001517")]
			[Address(RVA = "0x6AB3390", Offset = "0x6AB2390", VA = "0x6AB3390")]
			public FontAssetProperty()
			{
			}
		}

		[Token(Token = "0x600150D")]
		[Address(RVA = "0x6AB3190", Offset = "0x6AB2190", VA = "0x6AB3190")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000BCB")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Font m_Font;

	[Token(Token = "0x4000BCC")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private FontAsset m_FontAsset;

	[Token(Token = "0x1700047C")]
	public Font font
	{
		[Token(Token = "0x60014FF")]
		[Address(RVA = "0x6AB2AD0", Offset = "0x6AB1AD0", VA = "0x6AB2AD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001500")]
		[Address(RVA = "0x6AB2AE0", Offset = "0x6AB1AE0", VA = "0x6AB2AE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700047D")]
	public FontAsset fontAsset
	{
		[Token(Token = "0x6001501")]
		[Address(RVA = "0x6AB2BC0", Offset = "0x6AB1BC0", VA = "0x6AB2BC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001502")]
		[Address(RVA = "0x6AB2BD0", Offset = "0x6AB1BD0", VA = "0x6AB2BD0")]
		set
		{
		}
	}

	[Token(Token = "0x6001503")]
	[Address(RVA = "0x6AB2CB0", Offset = "0x6AB1CB0", VA = "0x6AB2CB0")]
	public static FontDefinition FromFont(Font f)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x6001504")]
	[Address(RVA = "0x6AB2CE0", Offset = "0x6AB1CE0", VA = "0x6AB2CE0")]
	public static FontDefinition FromSDFFont(FontAsset f)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x6001505")]
	[Address(RVA = "0x6AB2D10", Offset = "0x6AB1D10", VA = "0x6AB2D10")]
	internal static FontDefinition FromObject(object obj)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x6001506")]
	[Address(RVA = "0x6AB2E80", Offset = "0x6AB1E80", VA = "0x6AB2E80")]
	internal bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6001507")]
	[Address(RVA = "0x6AB2F00", Offset = "0x6AB1F00", VA = "0x6AB2F00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001508")]
	[Address(RVA = "0x6AB2F80", Offset = "0x6AB1F80", VA = "0x6AB2F80", Slot = "4")]
	public bool Equals(FontDefinition other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001509")]
	[Address(RVA = "0x6AB2FC0", Offset = "0x6AB1FC0", VA = "0x6AB2FC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600150A")]
	[Address(RVA = "0x6AB3040", Offset = "0x6AB2040", VA = "0x6AB3040", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600150B")]
	[Address(RVA = "0x6AB3110", Offset = "0x6AB2110", VA = "0x6AB3110")]
	public static bool operator ==(FontDefinition left, FontDefinition right)
	{
		return default(bool);
	}

	[Token(Token = "0x600150C")]
	[Address(RVA = "0x6AB3150", Offset = "0x6AB2150", VA = "0x6AB3150")]
	public static bool operator !=(FontDefinition left, FontDefinition right)
	{
		return default(bool);
	}
}
