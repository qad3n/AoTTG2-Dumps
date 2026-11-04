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
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x600251E")]
			[Address(RVA = "0x8EBC10", Offset = "0x8EA210", VA = "0x1808EBC10", Slot = "14")]
			public override Vector2 GetValue(ref TextShadow container)
			{
				return default(Vector2);
			}

			[Token(Token = "0x600251F")]
			[Address(RVA = "0x310DC70", Offset = "0x310C270", VA = "0x18310DC70", Slot = "15")]
			public override void SetValue(ref TextShadow container, Vector2 value)
			{
			}

			[Token(Token = "0x6002520")]
			[Address(RVA = "0x313D330", Offset = "0x313B930", VA = "0x18313D330")]
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
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002523")]
			[Address(RVA = "0x2FE96D0", Offset = "0x2FE7CD0", VA = "0x182FE96D0", Slot = "14")]
			public override float GetValue(ref TextShadow container)
			{
				return default(float);
			}

			[Token(Token = "0x6002524")]
			[Address(RVA = "0x2FE96E0", Offset = "0x2FE7CE0", VA = "0x182FE96E0", Slot = "15")]
			public override void SetValue(ref TextShadow container, float value)
			{
			}

			[Token(Token = "0x6002525")]
			[Address(RVA = "0x313C5E0", Offset = "0x313ABE0", VA = "0x18313C5E0")]
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
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002528")]
			[Address(RVA = "0x313C650", Offset = "0x313AC50", VA = "0x18313C650", Slot = "14")]
			public override Color GetValue(ref TextShadow container)
			{
				return default(Color);
			}

			[Token(Token = "0x6002529")]
			[Address(RVA = "0x313C660", Offset = "0x313AC60", VA = "0x18313C660", Slot = "15")]
			public override void SetValue(ref TextShadow container, Color value)
			{
			}

			[Token(Token = "0x600252A")]
			[Address(RVA = "0x313C670", Offset = "0x313AC70", VA = "0x18313C670")]
			public ColorProperty()
			{
			}
		}

		[Token(Token = "0x600251B")]
		[Address(RVA = "0x313D6B0", Offset = "0x313BCB0", VA = "0x18313D6B0")]
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
	[Address(RVA = "0x3141940", Offset = "0x313FF40", VA = "0x183141940", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002515")]
	[Address(RVA = "0x3141A50", Offset = "0x3140050", VA = "0x183141A50", Slot = "4")]
	public bool Equals(TextShadow other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002516")]
	[Address(RVA = "0x3141AE0", Offset = "0x31400E0", VA = "0x183141AE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002517")]
	[Address(RVA = "0x3141DA0", Offset = "0x31403A0", VA = "0x183141DA0")]
	public static bool operator ==(TextShadow style1, TextShadow style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6002518")]
	[Address(RVA = "0x3141E30", Offset = "0x3140430", VA = "0x183141E30")]
	public static bool operator !=(TextShadow style1, TextShadow style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6002519")]
	[Address(RVA = "0x3141CD0", Offset = "0x31402D0", VA = "0x183141CD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600251A")]
	[Address(RVA = "0x3141B80", Offset = "0x3140180", VA = "0x183141B80")]
	internal static TextShadow LerpUnclamped(TextShadow a, TextShadow b, float t)
	{
		return default(TextShadow);
	}
}
