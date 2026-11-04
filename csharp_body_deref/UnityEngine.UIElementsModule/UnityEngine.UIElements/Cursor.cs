// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Cursor
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000180")]
public struct Cursor : IEquatable<Cursor>
{
	[Token(Token = "0x2000181")]
	internal class PropertyBag : ContainerPropertyBag<Cursor>
	{
		[Token(Token = "0x2000182")]
		private class TextureProperty : Property<Cursor, Texture2D>
		{
			[Token(Token = "0x1700020C")]
			public override string Name
			{
				[Token(Token = "0x6000AEF")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700020D")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6000AF0")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6000AF1")]
			[Address(RVA = "0x8EBC10", Offset = "0x8EA210", VA = "0x1808EBC10", Slot = "14")]
			public override Texture2D GetValue(ref Cursor container)
			{
				return null;
			}

			[Token(Token = "0x6000AF2")]
			[Address(RVA = "0x310F510", Offset = "0x310DB10", VA = "0x18310F510", Slot = "15")]
			public override void SetValue(ref Cursor container, Texture2D value)
			{
			}

			[Token(Token = "0x6000AF3")]
			[Address(RVA = "0x3248D10", Offset = "0x3247310", VA = "0x183248D10")]
			public TextureProperty()
			{
			}
		}

		[Token(Token = "0x2000183")]
		private class HotspotProperty : Property<Cursor, Vector2>
		{
			[Token(Token = "0x1700020E")]
			public override string Name
			{
				[Token(Token = "0x6000AF4")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700020F")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6000AF5")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6000AF6")]
			[Address(RVA = "0x3242260", Offset = "0x3240860", VA = "0x183242260", Slot = "14")]
			public override Vector2 GetValue(ref Cursor container)
			{
				return default(Vector2);
			}

			[Token(Token = "0x6000AF7")]
			[Address(RVA = "0x3125020", Offset = "0x3123620", VA = "0x183125020", Slot = "15")]
			public override void SetValue(ref Cursor container, Vector2 value)
			{
			}

			[Token(Token = "0x6000AF8")]
			[Address(RVA = "0x3242280", Offset = "0x3240880", VA = "0x183242280")]
			public HotspotProperty()
			{
			}
		}

		[Token(Token = "0x2000184")]
		private class DefaultCursorIdProperty : Property<Cursor, int>
		{
			[Token(Token = "0x17000210")]
			public override string Name
			{
				[Token(Token = "0x6000AF9")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000211")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6000AFA")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6000AFB")]
			[Address(RVA = "0x323F2D0", Offset = "0x323D8D0", VA = "0x18323F2D0", Slot = "14")]
			public override int GetValue(ref Cursor container)
			{
				return default(int);
			}

			[Token(Token = "0x6000AFC")]
			[Address(RVA = "0x323F2E0", Offset = "0x323D8E0", VA = "0x18323F2E0", Slot = "15")]
			public override void SetValue(ref Cursor container, int value)
			{
			}

			[Token(Token = "0x6000AFD")]
			[Address(RVA = "0x323F2F0", Offset = "0x323D8F0", VA = "0x18323F2F0")]
			public DefaultCursorIdProperty()
			{
			}
		}

		[Token(Token = "0x6000AEE")]
		[Address(RVA = "0x3248770", Offset = "0x3246D70", VA = "0x183248770")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x40006D8")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Texture2D m_Texture;

	[Token(Token = "0x40006D9")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private Vector2 m_Hotspot;

	[Token(Token = "0x17000209")]
	public Texture2D texture
	{
		[Token(Token = "0x6000AE3")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AE4")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		set
		{
		}
	}

	[Token(Token = "0x1700020A")]
	public Vector2 hotspot
	{
		[Token(Token = "0x6000AE5")]
		[Address(RVA = "0x2A88DA0", Offset = "0x2A873A0", VA = "0x182A88DA0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000AE6")]
		[Address(RVA = "0x1B943D0", Offset = "0x1B929D0", VA = "0x181B943D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700020B")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int defaultCursorId
	{
		[Token(Token = "0x6000AE7")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000AE8")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x323EDF0", Offset = "0x323D3F0", VA = "0x18323EDF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x323EF10", Offset = "0x323D510", VA = "0x18323EF10", Slot = "4")]
	public bool Equals(Cursor other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x323EFC0", Offset = "0x323D5C0", VA = "0x18323EFC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x323F220", Offset = "0x323D820", VA = "0x18323F220")]
	public static bool operator ==(Cursor style1, Cursor style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x323F1A0", Offset = "0x323D7A0", VA = "0x18323F1A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
