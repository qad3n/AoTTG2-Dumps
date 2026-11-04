// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Scale
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
[Token(Token = "0x200040C")]
public struct Scale : IEquatable<Scale>
{
	[Token(Token = "0x200040D")]
	internal class PropertyBag : ContainerPropertyBag<Scale>
	{
		[Token(Token = "0x200040E")]
		private class ValueProperty : Property<Scale, Vector3>
		{
			[Token(Token = "0x170008BC")]
			public override string Name
			{
				[Token(Token = "0x6001F96")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170008BD")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6001F97")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001F98")]
			[Address(RVA = "0xE8EB70", Offset = "0xE8D170", VA = "0x180E8EB70", Slot = "14")]
			public override Vector3 GetValue(ref Scale container)
			{
				return default(Vector3);
			}

			[Token(Token = "0x6001F99")]
			[Address(RVA = "0x2FE9AA0", Offset = "0x2FE80A0", VA = "0x182FE9AA0", Slot = "15")]
			public override void SetValue(ref Scale container, Vector3 value)
			{
			}

			[Token(Token = "0x6001F9A")]
			[Address(RVA = "0x311EDE0", Offset = "0x311D3E0", VA = "0x18311EDE0")]
			public ValueProperty()
			{
			}
		}

		[Token(Token = "0x6001F95")]
		[Address(RVA = "0x3110160", Offset = "0x310E760", VA = "0x183110160")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000DAF")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Vector3 m_Scale;

	[Token(Token = "0x4000DB0")]
	[FieldOffset(Offset = "0xC")]
	[SerializeField]
	private bool m_IsNone;

	[Token(Token = "0x170008BB")]
	public Vector3 value
	{
		[Token(Token = "0x6001F8D")]
		[Address(RVA = "0x180F7A0", Offset = "0x180DDA0", VA = "0x18180F7A0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001F8E")]
		[Address(RVA = "0x2B889E0", Offset = "0x2B86FE0", VA = "0x182B889E0")]
		set
		{
		}
	}

	[Token(Token = "0x6001F89")]
	[Address(RVA = "0x31110A0", Offset = "0x310F6A0", VA = "0x1831110A0")]
	public Scale(Vector2 scale)
	{
	}

	[Token(Token = "0x6001F8A")]
	[Address(RVA = "0x2BA6FF0", Offset = "0x2BA55F0", VA = "0x182BA6FF0")]
	public Scale(Vector3 scale)
	{
	}

	[Token(Token = "0x6001F8B")]
	[Address(RVA = "0x3110FA0", Offset = "0x310F5A0", VA = "0x183110FA0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static Scale Initial()
	{
		return default(Scale);
	}

	[Token(Token = "0x6001F8C")]
	[Address(RVA = "0x3111010", Offset = "0x310F610", VA = "0x183111010")]
	public static Scale None()
	{
		return default(Scale);
	}

	[Token(Token = "0x6001F8F")]
	[Address(RVA = "0x2F0D8B0", Offset = "0x2F0BEB0", VA = "0x182F0D8B0")]
	public static bool operator ==(Scale lhs, Scale rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F90")]
	[Address(RVA = "0x31110C0", Offset = "0x310F6C0", VA = "0x1831110C0")]
	public static bool operator !=(Scale lhs, Scale rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F91")]
	[Address(RVA = "0x3110E20", Offset = "0x310F420", VA = "0x183110E20", Slot = "4")]
	public bool Equals(Scale other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F92")]
	[Address(RVA = "0x3110E70", Offset = "0x310F470", VA = "0x183110E70", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F93")]
	[Address(RVA = "0x3110F40", Offset = "0x310F540", VA = "0x183110F40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F94")]
	[Address(RVA = "0x3111090", Offset = "0x310F690", VA = "0x183111090", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
