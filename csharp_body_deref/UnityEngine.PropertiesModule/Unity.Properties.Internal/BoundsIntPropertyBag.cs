// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.Internal.BoundsIntPropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.Properties.Internal;

[Token(Token = "0x2000096")]
internal class BoundsIntPropertyBag : ContainerPropertyBag<BoundsInt>
{
	[Token(Token = "0x2000097")]
	private class PositionProperty : Property<BoundsInt, Vector3Int>
	{
		[Token(Token = "0x1700007C")]
		public override string Name
		{
			[Token(Token = "0x6000248")]
			[Address(RVA = "0x2FEB790", Offset = "0x2FE9D90", VA = "0x182FEB790", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007D")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6000249")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600024A")]
		[Address(RVA = "0xE8EB70", Offset = "0xE8D170", VA = "0x180E8EB70", Slot = "14")]
		public override Vector3Int GetValue(ref BoundsInt container)
		{
			return default(Vector3Int);
		}

		[Token(Token = "0x600024B")]
		[Address(RVA = "0x2FE9AA0", Offset = "0x2FE80A0", VA = "0x182FE9AA0", Slot = "15")]
		public override void SetValue(ref BoundsInt container, Vector3Int value)
		{
		}

		[Token(Token = "0x600024C")]
		[Address(RVA = "0x2FEB750", Offset = "0x2FE9D50", VA = "0x182FEB750")]
		public PositionProperty()
		{
		}
	}

	[Token(Token = "0x2000098")]
	private class SizeProperty : Property<BoundsInt, Vector3Int>
	{
		[Token(Token = "0x1700007E")]
		public override string Name
		{
			[Token(Token = "0x600024D")]
			[Address(RVA = "0x2FF2C60", Offset = "0x2FF1260", VA = "0x182FF2C60", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007F")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600024E")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600024F")]
		[Address(RVA = "0x2FEAB50", Offset = "0x2FE9150", VA = "0x182FEAB50", Slot = "14")]
		public override Vector3Int GetValue(ref BoundsInt container)
		{
			return default(Vector3Int);
		}

		[Token(Token = "0x6000250")]
		[Address(RVA = "0x2FEAB70", Offset = "0x2FE9170", VA = "0x182FEAB70", Slot = "15")]
		public override void SetValue(ref BoundsInt container, Vector3Int value)
		{
		}

		[Token(Token = "0x6000251")]
		[Address(RVA = "0x2FF2C20", Offset = "0x2FF1220", VA = "0x182FF2C20")]
		public SizeProperty()
		{
		}
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x2FE9760", Offset = "0x2FE7D60", VA = "0x182FE9760")]
	public BoundsIntPropertyBag()
	{
	}
}
