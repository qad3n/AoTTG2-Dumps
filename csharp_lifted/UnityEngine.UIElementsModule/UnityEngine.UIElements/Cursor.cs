// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Cursor
// Update status: unchanged since the previous dump
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
				[Address(RVA = "0x6C4E2E0", Offset = "0x6C4D2E0", VA = "0x6C4E2E0", Slot = "12")]
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
				[Address(RVA = "0x6C4E2F0", Offset = "0x6C4D2F0", VA = "0x6C4E2F0", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6000AF1")]
			[Address(RVA = "0x6C4E300", Offset = "0x6C4D300", VA = "0x6C4E300", Slot = "14")]
			public override Texture2D GetValue(ref Cursor container)
			{
				return null;
			}

			[Token(Token = "0x6000AF2")]
			[Address(RVA = "0x6C4E310", Offset = "0x6C4D310", VA = "0x6C4E310", Slot = "15")]
			public override void SetValue(ref Cursor container, Texture2D value)
			{
			}

			[Token(Token = "0x6000AF3")]
			[Address(RVA = "0x6C4E1C0", Offset = "0x6C4D1C0", VA = "0x6C4E1C0")]
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
				[Address(RVA = "0x6C4E320", Offset = "0x6C4D320", VA = "0x6C4E320", Slot = "12")]
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
				[Address(RVA = "0x6C4E330", Offset = "0x6C4D330", VA = "0x6C4E330", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6000AF6")]
			[Address(RVA = "0x6C4E340", Offset = "0x6C4D340", VA = "0x6C4E340", Slot = "14")]
			public override Vector2 GetValue(ref Cursor container)
			{
				return default(Vector2);
			}

			[Token(Token = "0x6000AF7")]
			[Address(RVA = "0x6C4E350", Offset = "0x6C4D350", VA = "0x6C4E350", Slot = "15")]
			public override void SetValue(ref Cursor container, Vector2 value)
			{
			}

			[Token(Token = "0x6000AF8")]
			[Address(RVA = "0x6C4E220", Offset = "0x6C4D220", VA = "0x6C4E220")]
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
				[Address(RVA = "0x6C4E360", Offset = "0x6C4D360", VA = "0x6C4E360", Slot = "12")]
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
				[Address(RVA = "0x6C4E370", Offset = "0x6C4D370", VA = "0x6C4E370", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6000AFB")]
			[Address(RVA = "0x6C4E380", Offset = "0x6C4D380", VA = "0x6C4E380", Slot = "14")]
			public override int GetValue(ref Cursor container)
			{
				return default(int);
			}

			[Token(Token = "0x6000AFC")]
			[Address(RVA = "0x6C4E390", Offset = "0x6C4D390", VA = "0x6C4E390", Slot = "15")]
			public override void SetValue(ref Cursor container, int value)
			{
			}

			[Token(Token = "0x6000AFD")]
			[Address(RVA = "0x6C4E280", Offset = "0x6C4D280", VA = "0x6C4E280")]
			public DefaultCursorIdProperty()
			{
			}
		}

		[Token(Token = "0x6000AEE")]
		[Address(RVA = "0x6C4DF90", Offset = "0x6C4CF90", VA = "0x6C4DF90")]
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
		[Address(RVA = "0x6C4DBC0", Offset = "0x6C4CBC0", VA = "0x6C4DBC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AE4")]
		[Address(RVA = "0x6C4DBD0", Offset = "0x6C4CBD0", VA = "0x6C4DBD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700020A")]
	public Vector2 hotspot
	{
		[Token(Token = "0x6000AE5")]
		[Address(RVA = "0x6C4DBE0", Offset = "0x6C4CBE0", VA = "0x6C4DBE0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000AE6")]
		[Address(RVA = "0x6C4DBF0", Offset = "0x6C4CBF0", VA = "0x6C4DBF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700020B")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int defaultCursorId
	{
		[Token(Token = "0x6000AE7")]
		[Address(RVA = "0x6C4DC00", Offset = "0x6C4CC00", VA = "0x6C4DC00")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000AE8")]
		[Address(RVA = "0x6C4DC10", Offset = "0x6C4CC10", VA = "0x6C4DC10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x6C4DC20", Offset = "0x6C4CC20", VA = "0x6C4DC20", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x6C4DD10", Offset = "0x6C4CD10", VA = "0x6C4DD10", Slot = "4")]
	public bool Equals(Cursor other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x6C4DDB0", Offset = "0x6C4CDB0", VA = "0x6C4DDB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x6C4DE70", Offset = "0x6C4CE70", VA = "0x6C4DE70")]
	public static bool operator ==(Cursor style1, Cursor style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x6C4DF20", Offset = "0x6C4CF20", VA = "0x6C4DF20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
