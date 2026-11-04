// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FontDefinition
// Update status: CHANGED in this game update
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
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001510")]
			[Address(RVA = "0x30BB710", Offset = "0x30B9D10", VA = "0x1830BB710", Slot = "14")]
			public override Font GetValue(ref FontDefinition container)
			{
				return null;
			}

			[Token(Token = "0x6001511")]
			[Address(RVA = "0x30BB720", Offset = "0x30B9D20", VA = "0x1830BB720", Slot = "15")]
			public override void SetValue(ref FontDefinition container, Font value)
			{
			}

			[Token(Token = "0x6001512")]
			[Address(RVA = "0x30BB740", Offset = "0x30B9D40", VA = "0x1830BB740")]
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
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001515")]
			[Address(RVA = "0x30BAF60", Offset = "0x30B9560", VA = "0x1830BAF60", Slot = "14")]
			public override FontAsset GetValue(ref FontDefinition container)
			{
				return null;
			}

			[Token(Token = "0x6001516")]
			[Address(RVA = "0x30BAF70", Offset = "0x30B9570", VA = "0x1830BAF70", Slot = "15")]
			public override void SetValue(ref FontDefinition container, FontAsset value)
			{
			}

			[Token(Token = "0x6001517")]
			[Address(RVA = "0x30BAF90", Offset = "0x30B9590", VA = "0x1830BAF90")]
			public FontAssetProperty()
			{
			}
		}

		[Token(Token = "0x600150D")]
		[Address(RVA = "0x30CCDC0", Offset = "0x30CB3C0", VA = "0x1830CCDC0")]
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
		[Address(RVA = "0x737B90", Offset = "0x736190", VA = "0x180737B90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001500")]
		[Address(RVA = "0x30BB620", Offset = "0x30B9C20", VA = "0x1830BB620")]
		set
		{
		}
	}

	[Token(Token = "0x1700047D")]
	public FontAsset fontAsset
	{
		[Token(Token = "0x6001501")]
		[Address(RVA = "0x1B943C0", Offset = "0x1B929C0", VA = "0x181B943C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001502")]
		[Address(RVA = "0x30BB530", Offset = "0x30B9B30", VA = "0x1830BB530")]
		set
		{
		}
	}

	[Token(Token = "0x6001503")]
	[Address(RVA = "0x30BB0F0", Offset = "0x30B96F0", VA = "0x1830BB0F0")]
	public static FontDefinition FromFont(Font f)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x6001504")]
	[Address(RVA = "0x30BB280", Offset = "0x30B9880", VA = "0x1830BB280")]
	public static FontDefinition FromSDFFont(FontAsset f)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x6001505")]
	[Address(RVA = "0x30BB130", Offset = "0x30B9730", VA = "0x1830BB130")]
	internal static FontDefinition FromObject(object obj)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x6001506")]
	[Address(RVA = "0x30BB3C0", Offset = "0x30B99C0", VA = "0x1830BB3C0")]
	internal bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6001507")]
	[Address(RVA = "0x30BB450", Offset = "0x30B9A50", VA = "0x1830BB450", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001508")]
	[Address(RVA = "0x30BB0A0", Offset = "0x30B96A0", VA = "0x1830BB0A0", Slot = "4")]
	public bool Equals(FontDefinition other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001509")]
	[Address(RVA = "0x30BB000", Offset = "0x30B9600", VA = "0x1830BB000", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600150A")]
	[Address(RVA = "0x30BB2C0", Offset = "0x30B98C0", VA = "0x1830BB2C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600150B")]
	[Address(RVA = "0x30BB0A0", Offset = "0x30B96A0", VA = "0x1830BB0A0")]
	public static bool operator ==(FontDefinition left, FontDefinition right)
	{
		return default(bool);
	}

	[Token(Token = "0x600150C")]
	[Address(RVA = "0x30BB4E0", Offset = "0x30B9AE0", VA = "0x1830BB4E0")]
	public static bool operator !=(FontDefinition left, FontDefinition right)
	{
		return default(bool);
	}
}
