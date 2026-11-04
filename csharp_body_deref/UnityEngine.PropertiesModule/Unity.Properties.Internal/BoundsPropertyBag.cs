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
			[Address(RVA = "0x2FE9B00", Offset = "0x2FE8100", VA = "0x182FE9B00", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000079")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600023E")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600023F")]
		[Address(RVA = "0xE8EB70", Offset = "0xE8D170", VA = "0x180E8EB70", Slot = "14")]
		public override Vector3 GetValue(ref Bounds container)
		{
			return default(Vector3);
		}

		[Token(Token = "0x6000240")]
		[Address(RVA = "0x2FE9AA0", Offset = "0x2FE80A0", VA = "0x182FE9AA0", Slot = "15")]
		public override void SetValue(ref Bounds container, Vector3 value)
		{
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x2FE9AC0", Offset = "0x2FE80C0", VA = "0x182FE9AC0")]
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
			[Address(RVA = "0x2FEABD0", Offset = "0x2FE91D0", VA = "0x182FEABD0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6000243")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000244")]
		[Address(RVA = "0x2FEAB50", Offset = "0x2FE9150", VA = "0x182FEAB50", Slot = "14")]
		public override Vector3 GetValue(ref Bounds container)
		{
			return default(Vector3);
		}

		[Token(Token = "0x6000245")]
		[Address(RVA = "0x2FEAB70", Offset = "0x2FE9170", VA = "0x182FEAB70", Slot = "15")]
		public override void SetValue(ref Bounds container, Vector3 value)
		{
		}

		[Token(Token = "0x6000246")]
		[Address(RVA = "0x2FEAB90", Offset = "0x2FE9190", VA = "0x182FEAB90")]
		public ExtentsProperty()
		{
		}
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x2FE9890", Offset = "0x2FE7E90", VA = "0x182FE9890")]
	public BoundsPropertyBag()
	{
	}
}
