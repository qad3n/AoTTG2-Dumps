// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Scale
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
				[Address(RVA = "0x6B119A0", Offset = "0x6B109A0", VA = "0x6B119A0", Slot = "12")]
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
				[Address(RVA = "0x6B119B0", Offset = "0x6B109B0", VA = "0x6B119B0", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001F98")]
			[Address(RVA = "0x6B119C0", Offset = "0x6B109C0", VA = "0x6B119C0", Slot = "14")]
			public override Vector3 GetValue(ref Scale container)
			{
				return default(Vector3);
			}

			[Token(Token = "0x6001F99")]
			[Address(RVA = "0x6B119D0", Offset = "0x6B109D0", VA = "0x6B119D0", Slot = "15")]
			public override void SetValue(ref Scale container, Vector3 value)
			{
			}

			[Token(Token = "0x6001F9A")]
			[Address(RVA = "0x6B11940", Offset = "0x6B10940", VA = "0x6B11940")]
			public ValueProperty()
			{
			}
		}

		[Token(Token = "0x6001F95")]
		[Address(RVA = "0x6B11840", Offset = "0x6B10840", VA = "0x6B11840")]
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
		[Address(RVA = "0x6B11630", Offset = "0x6B10630", VA = "0x6B11630")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001F8E")]
		[Address(RVA = "0x6B11640", Offset = "0x6B10640", VA = "0x6B11640")]
		set
		{
		}
	}

	[Token(Token = "0x6001F89")]
	[Address(RVA = "0x6B11580", Offset = "0x6B10580", VA = "0x6B11580")]
	public Scale(Vector2 scale)
	{
	}

	[Token(Token = "0x6001F8A")]
	[Address(RVA = "0x6B11590", Offset = "0x6B10590", VA = "0x6B11590")]
	public Scale(Vector3 scale)
	{
	}

	[Token(Token = "0x6001F8B")]
	[Address(RVA = "0x6B115A0", Offset = "0x6B105A0", VA = "0x6B115A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static Scale Initial()
	{
		return default(Scale);
	}

	[Token(Token = "0x6001F8C")]
	[Address(RVA = "0x6B115E0", Offset = "0x6B105E0", VA = "0x6B115E0")]
	public static Scale None()
	{
		return default(Scale);
	}

	[Token(Token = "0x6001F8F")]
	[Address(RVA = "0x6B11650", Offset = "0x6B10650", VA = "0x6B11650")]
	public static bool operator ==(Scale lhs, Scale rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F90")]
	[Address(RVA = "0x6B116A0", Offset = "0x6B106A0", VA = "0x6B116A0")]
	public static bool operator !=(Scale lhs, Scale rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F91")]
	[Address(RVA = "0x6B116F0", Offset = "0x6B106F0", VA = "0x6B116F0", Slot = "4")]
	public bool Equals(Scale other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F92")]
	[Address(RVA = "0x6B11740", Offset = "0x6B10740", VA = "0x6B11740", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F93")]
	[Address(RVA = "0x6B117E0", Offset = "0x6B107E0", VA = "0x6B117E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F94")]
	[Address(RVA = "0x6B11830", Offset = "0x6B10830", VA = "0x6B11830", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
