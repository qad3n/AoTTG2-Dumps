// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.Internal.BoundsPropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.Properties.Internal;

[Token(Token = "0x2000093")]
internal class BoundsPropertyBag : ContainerPropertyBag<Bounds>
{
	[Token(Token = "0x2000094")]
	private class CenterProperty : Property<Bounds, Vector3>
	{
		[Token(Token = "0x17000078")]
		public override string Name
		{
			[Token(Token = "0x600023D")]
			[Address(RVA = "0x69EF050", Offset = "0x69EE050", VA = "0x69EF050", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000079")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600023E")]
			[Address(RVA = "0x69EF080", Offset = "0x69EE080", VA = "0x69EF080", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600023F")]
		[Address(RVA = "0x69EF090", Offset = "0x69EE090", VA = "0x69EF090", Slot = "14")]
		public override Vector3 GetValue(ref Bounds container)
		{
			return default(Vector3);
		}

		[Token(Token = "0x6000240")]
		[Address(RVA = "0x69EF0A0", Offset = "0x69EE0A0", VA = "0x69EF0A0", Slot = "15")]
		public override void SetValue(ref Bounds container, Vector3 value)
		{
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x69EEFD0", Offset = "0x69EDFD0", VA = "0x69EEFD0")]
		public CenterProperty()
		{
		}
	}

	[Token(Token = "0x2000095")]
	private class ExtentsProperty : Property<Bounds, Vector3>
	{
		[Token(Token = "0x1700007A")]
		public override string Name
		{
			[Token(Token = "0x6000242")]
			[Address(RVA = "0x69EF0B0", Offset = "0x69EE0B0", VA = "0x69EF0B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6000243")]
			[Address(RVA = "0x69EF0E0", Offset = "0x69EE0E0", VA = "0x69EF0E0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000244")]
		[Address(RVA = "0x69EF0F0", Offset = "0x69EE0F0", VA = "0x69EF0F0", Slot = "14")]
		public override Vector3 GetValue(ref Bounds container)
		{
			return default(Vector3);
		}

		[Token(Token = "0x6000245")]
		[Address(RVA = "0x69EF100", Offset = "0x69EE100", VA = "0x69EF100", Slot = "15")]
		public override void SetValue(ref Bounds container, Vector3 value)
		{
		}

		[Token(Token = "0x6000246")]
		[Address(RVA = "0x69EF010", Offset = "0x69EE010", VA = "0x69EF010")]
		public ExtentsProperty()
		{
		}
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x69ED6A0", Offset = "0x69EC6A0", VA = "0x69ED6A0")]
	public BoundsPropertyBag()
	{
	}
}
