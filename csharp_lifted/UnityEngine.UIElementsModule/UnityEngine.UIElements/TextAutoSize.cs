// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextAutoSize
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004B1")]
public struct TextAutoSize : IEquatable<TextAutoSize>
{
	[Token(Token = "0x20004B2")]
	internal class PropertyBag : ContainerPropertyBag<TextAutoSize>
	{
		[Token(Token = "0x20004B3")]
		private class ModeProperty : Property<TextAutoSize, TextAutoSizeMode>
		{
			[Token(Token = "0x1700099D")]
			public override string Name
			{
				[Token(Token = "0x60024C4")]
				[Address(RVA = "0x6B46B40", Offset = "0x6B45B40", VA = "0x6B46B40", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700099E")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x60024C5")]
				[Address(RVA = "0x6B46B50", Offset = "0x6B45B50", VA = "0x6B46B50", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x60024C6")]
			[Address(RVA = "0x6B46B60", Offset = "0x6B45B60", VA = "0x6B46B60", Slot = "14")]
			public override TextAutoSizeMode GetValue(ref TextAutoSize container)
			{
				return default(TextAutoSizeMode);
			}

			[Token(Token = "0x60024C7")]
			[Address(RVA = "0x6B46B70", Offset = "0x6B45B70", VA = "0x6B46B70", Slot = "15")]
			public override void SetValue(ref TextAutoSize container, TextAutoSizeMode value)
			{
			}

			[Token(Token = "0x60024C8")]
			[Address(RVA = "0x6B46A20", Offset = "0x6B45A20", VA = "0x6B46A20")]
			public ModeProperty()
			{
			}
		}

		[Token(Token = "0x20004B4")]
		private class MinSizeProperty : Property<TextAutoSize, Length>
		{
			[Token(Token = "0x1700099F")]
			public override string Name
			{
				[Token(Token = "0x60024C9")]
				[Address(RVA = "0x6B46B80", Offset = "0x6B45B80", VA = "0x6B46B80", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170009A0")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x60024CA")]
				[Address(RVA = "0x6B46B90", Offset = "0x6B45B90", VA = "0x6B46B90", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x60024CB")]
			[Address(RVA = "0x6B46BA0", Offset = "0x6B45BA0", VA = "0x6B46BA0", Slot = "14")]
			public override Length GetValue(ref TextAutoSize container)
			{
				return default(Length);
			}

			[Token(Token = "0x60024CC")]
			[Address(RVA = "0x6B46BB0", Offset = "0x6B45BB0", VA = "0x6B46BB0", Slot = "15")]
			public override void SetValue(ref TextAutoSize container, Length value)
			{
			}

			[Token(Token = "0x60024CD")]
			[Address(RVA = "0x6B46A80", Offset = "0x6B45A80", VA = "0x6B46A80")]
			public MinSizeProperty()
			{
			}
		}

		[Token(Token = "0x20004B5")]
		private class MaxSizeProperty : Property<TextAutoSize, Length>
		{
			[Token(Token = "0x170009A1")]
			public override string Name
			{
				[Token(Token = "0x60024CE")]
				[Address(RVA = "0x6B46BC0", Offset = "0x6B45BC0", VA = "0x6B46BC0", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170009A2")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x60024CF")]
				[Address(RVA = "0x6B46BD0", Offset = "0x6B45BD0", VA = "0x6B46BD0", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x60024D0")]
			[Address(RVA = "0x6B46BE0", Offset = "0x6B45BE0", VA = "0x6B46BE0", Slot = "14")]
			public override Length GetValue(ref TextAutoSize container)
			{
				return default(Length);
			}

			[Token(Token = "0x60024D1")]
			[Address(RVA = "0x6B46BF0", Offset = "0x6B45BF0", VA = "0x6B46BF0", Slot = "15")]
			public override void SetValue(ref TextAutoSize container, Length value)
			{
			}

			[Token(Token = "0x60024D2")]
			[Address(RVA = "0x6B46AE0", Offset = "0x6B45AE0", VA = "0x6B46AE0")]
			public MaxSizeProperty()
			{
			}
		}

		[Token(Token = "0x60024C3")]
		[Address(RVA = "0x6B46800", Offset = "0x6B45800", VA = "0x6B46800")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x1700099A")]
	public TextAutoSizeMode mode
	{
		[Token(Token = "0x60024B7")]
		[Address(RVA = "0x6B464F0", Offset = "0x6B454F0", VA = "0x6B464F0")]
		[CompilerGenerated]
		readonly get
		{
			return default(TextAutoSizeMode);
		}
		[Token(Token = "0x60024B8")]
		[Address(RVA = "0x6B46500", Offset = "0x6B45500", VA = "0x6B46500")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700099B")]
	public Length minSize
	{
		[Token(Token = "0x60024B9")]
		[Address(RVA = "0x6B46510", Offset = "0x6B45510", VA = "0x6B46510")]
		[CompilerGenerated]
		readonly get
		{
			return default(Length);
		}
		[Token(Token = "0x60024BA")]
		[Address(RVA = "0x6B46520", Offset = "0x6B45520", VA = "0x6B46520")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700099C")]
	public Length maxSize
	{
		[Token(Token = "0x60024BB")]
		[Address(RVA = "0x6B46530", Offset = "0x6B45530", VA = "0x6B46530")]
		[CompilerGenerated]
		readonly get
		{
			return default(Length);
		}
		[Token(Token = "0x60024BC")]
		[Address(RVA = "0x6B46540", Offset = "0x6B45540", VA = "0x6B46540")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60024BD")]
	[Address(RVA = "0x6B46550", Offset = "0x6B45550", VA = "0x6B46550")]
	public static TextAutoSize None()
	{
		return default(TextAutoSize);
	}

	[Token(Token = "0x60024BE")]
	[Address(RVA = "0x6B465A0", Offset = "0x6B455A0", VA = "0x6B465A0", Slot = "4")]
	public bool Equals(TextAutoSize other)
	{
		return default(bool);
	}

	[Token(Token = "0x60024BF")]
	[Address(RVA = "0x6B46610", Offset = "0x6B45610", VA = "0x6B46610", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60024C0")]
	[Address(RVA = "0x6B466B0", Offset = "0x6B456B0", VA = "0x6B466B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60024C1")]
	[Address(RVA = "0x6B46720", Offset = "0x6B45720", VA = "0x6B46720")]
	public static bool operator ==(TextAutoSize left, TextAutoSize right)
	{
		return default(bool);
	}

	[Token(Token = "0x60024C2")]
	[Address(RVA = "0x6B46790", Offset = "0x6B45790", VA = "0x6B46790")]
	public static bool operator !=(TextAutoSize left, TextAutoSize right)
	{
		return default(bool);
	}
}
