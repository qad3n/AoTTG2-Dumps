// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextShadow
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

[Serializable]
[Token(Token = "0x20004B9")]
public struct TextShadow : IEquatable<TextShadow>
{
	[Token(Token = "0x20004BA")]
	internal class PropertyBag : ContainerPropertyBag<TextShadow>
	{
		[Token(Token = "0x20004BB")]
		private class OffsetProperty : Property<TextShadow, Vector2>
		{
			[Token(Token = "0x170009C2")]
			public override string Name
			{
				[Token(Token = "0x600251C")]
				[Address(RVA = "0x6B479D0", Offset = "0x6B469D0", VA = "0x6B479D0", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170009C3")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x600251D")]
				[Address(RVA = "0x6B479E0", Offset = "0x6B469E0", VA = "0x6B479E0", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x600251E")]
			[Address(RVA = "0x6B479F0", Offset = "0x6B469F0", VA = "0x6B479F0", Slot = "14")]
			public override Vector2 GetValue(ref TextShadow container)
			{
				return default(Vector2);
			}

			[Token(Token = "0x600251F")]
			[Address(RVA = "0x6B47A00", Offset = "0x6B46A00", VA = "0x6B47A00", Slot = "15")]
			public override void SetValue(ref TextShadow container, Vector2 value)
			{
			}

			[Token(Token = "0x6002520")]
			[Address(RVA = "0x6B478B0", Offset = "0x6B468B0", VA = "0x6B478B0")]
			public OffsetProperty()
			{
			}
		}

		[Token(Token = "0x20004BC")]
		private class BlurRadiusProperty : Property<TextShadow, float>
		{
			[Token(Token = "0x170009C4")]
			public override string Name
			{
				[Token(Token = "0x6002521")]
				[Address(RVA = "0x6B47A10", Offset = "0x6B46A10", VA = "0x6B47A10", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170009C5")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6002522")]
				[Address(RVA = "0x6B47A20", Offset = "0x6B46A20", VA = "0x6B47A20", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002523")]
			[Address(RVA = "0x6B47A30", Offset = "0x6B46A30", VA = "0x6B47A30", Slot = "14")]
			public override float GetValue(ref TextShadow container)
			{
				return default(float);
			}

			[Token(Token = "0x6002524")]
			[Address(RVA = "0x6B47A40", Offset = "0x6B46A40", VA = "0x6B47A40", Slot = "15")]
			public override void SetValue(ref TextShadow container, float value)
			{
			}

			[Token(Token = "0x6002525")]
			[Address(RVA = "0x6B47910", Offset = "0x6B46910", VA = "0x6B47910")]
			public BlurRadiusProperty()
			{
			}
		}

		[Token(Token = "0x20004BD")]
		private class ColorProperty : Property<TextShadow, Color>
		{
			[Token(Token = "0x170009C6")]
			public override string Name
			{
				[Token(Token = "0x6002526")]
				[Address(RVA = "0x6B47A50", Offset = "0x6B46A50", VA = "0x6B47A50", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170009C7")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6002527")]
				[Address(RVA = "0x6B47A60", Offset = "0x6B46A60", VA = "0x6B47A60", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002528")]
			[Address(RVA = "0x6B47A70", Offset = "0x6B46A70", VA = "0x6B47A70", Slot = "14")]
			public override Color GetValue(ref TextShadow container)
			{
				return default(Color);
			}

			[Token(Token = "0x6002529")]
			[Address(RVA = "0x6B47A80", Offset = "0x6B46A80", VA = "0x6B47A80", Slot = "15")]
			public override void SetValue(ref TextShadow container, Color value)
			{
			}

			[Token(Token = "0x600252A")]
			[Address(RVA = "0x6B47970", Offset = "0x6B46970", VA = "0x6B47970")]
			public ColorProperty()
			{
			}
		}

		[Token(Token = "0x600251B")]
		[Address(RVA = "0x6B47680", Offset = "0x6B46680", VA = "0x6B47680")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4001022")]
	[FieldOffset(Offset = "0x0")]
	public Vector2 offset;

	[Token(Token = "0x4001023")]
	[FieldOffset(Offset = "0x8")]
	public float blurRadius;

	[Token(Token = "0x4001024")]
	[FieldOffset(Offset = "0xC")]
	public Color color;

	[Token(Token = "0x6002514")]
	[Address(RVA = "0x6B47230", Offset = "0x6B46230", VA = "0x6B47230", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002515")]
	[Address(RVA = "0x6B47300", Offset = "0x6B46300", VA = "0x6B47300", Slot = "4")]
	public bool Equals(TextShadow other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002516")]
	[Address(RVA = "0x6B47380", Offset = "0x6B46380", VA = "0x6B47380", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002517")]
	[Address(RVA = "0x6B47420", Offset = "0x6B46420", VA = "0x6B47420")]
	public static bool operator ==(TextShadow style1, TextShadow style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6002518")]
	[Address(RVA = "0x6B474B0", Offset = "0x6B464B0", VA = "0x6B474B0")]
	public static bool operator !=(TextShadow style1, TextShadow style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6002519")]
	[Address(RVA = "0x6B47540", Offset = "0x6B46540", VA = "0x6B47540", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600251A")]
	[Address(RVA = "0x6B47610", Offset = "0x6B46610", VA = "0x6B47610")]
	internal static TextShadow LerpUnclamped(TextShadow a, TextShadow b, float t)
	{
		return default(TextShadow);
	}
}
