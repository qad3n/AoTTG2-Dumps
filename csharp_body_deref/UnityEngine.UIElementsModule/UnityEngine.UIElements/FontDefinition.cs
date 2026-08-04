// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FontDefinition
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
				[Address(RVA = "0x507C2A0", Offset = "0x507C2A0", VA = "0x507C2A0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60010CC")]
			[Address(RVA = "0x507C1E0", Offset = "0x507C1E0", VA = "0x507C1E0")]
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
				[Address(RVA = "0x507C2B0", Offset = "0x507C2B0", VA = "0x507C2B0", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60010CE")]
			[Address(RVA = "0x507C240", Offset = "0x507C240", VA = "0x507C240")]
			public FontAssetProperty()
			{
			}
		}

		[Token(Token = "0x60010CA")]
		[Address(RVA = "0x507C050", Offset = "0x507C050", VA = "0x507C050")]
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
		[Address(RVA = "0x507BB40", Offset = "0x507BB40", VA = "0x507BB40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000370")]
	public FontAsset fontAsset
	{
		[Token(Token = "0x60010BF")]
		[Address(RVA = "0x507BB50", Offset = "0x507BB50", VA = "0x507BB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x507BB60", Offset = "0x507BB60", VA = "0x507BB60")]
	public static FontDefinition FromFont(Font f)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x507BB90", Offset = "0x507BB90", VA = "0x507BB90")]
	public static FontDefinition FromSDFFont(FontAsset f)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x507BBC0", Offset = "0x507BBC0", VA = "0x507BBC0")]
	internal static FontDefinition FromObject(object obj)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x507BD40", Offset = "0x507BD40", VA = "0x507BD40")]
	internal bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x507BDC0", Offset = "0x507BDC0", VA = "0x507BDC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x507BE40", Offset = "0x507BE40", VA = "0x507BE40", Slot = "4")]
	public bool Equals(FontDefinition other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x507BE80", Offset = "0x507BE80", VA = "0x507BE80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x507BF00", Offset = "0x507BF00", VA = "0x507BF00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x507BFD0", Offset = "0x507BFD0", VA = "0x507BFD0")]
	public static bool operator ==(FontDefinition left, FontDefinition right)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x507C010", Offset = "0x507C010", VA = "0x507C010")]
	public static bool operator !=(FontDefinition left, FontDefinition right)
	{
		return default(bool);
	}
}
