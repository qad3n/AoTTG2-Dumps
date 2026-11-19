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
			[Address(RVA = "0x69EF190", Offset = "0x69EE190", VA = "0x69EF190", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007D")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6000249")]
			[Address(RVA = "0x69EF1C0", Offset = "0x69EE1C0", VA = "0x69EF1C0", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600024A")]
		[Address(RVA = "0x69EF1D0", Offset = "0x69EE1D0", VA = "0x69EF1D0", Slot = "14")]
		public override Vector3Int GetValue(ref BoundsInt container)
		{
			return default(Vector3Int);
		}

		[Token(Token = "0x600024B")]
		[Address(RVA = "0x69EF1E0", Offset = "0x69EE1E0", VA = "0x69EF1E0", Slot = "15")]
		public override void SetValue(ref BoundsInt container, Vector3Int value)
		{
		}

		[Token(Token = "0x600024C")]
		[Address(RVA = "0x69EF110", Offset = "0x69EE110", VA = "0x69EF110")]
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
			[Address(RVA = "0x69EF1F0", Offset = "0x69EE1F0", VA = "0x69EF1F0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007F")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x600024E")]
			[Address(RVA = "0x69EF220", Offset = "0x69EE220", VA = "0x69EF220", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600024F")]
		[Address(RVA = "0x69EF230", Offset = "0x69EE230", VA = "0x69EF230", Slot = "14")]
		public override Vector3Int GetValue(ref BoundsInt container)
		{
			return default(Vector3Int);
		}

		[Token(Token = "0x6000250")]
		[Address(RVA = "0x69EF240", Offset = "0x69EE240", VA = "0x69EF240", Slot = "15")]
		public override void SetValue(ref BoundsInt container, Vector3Int value)
		{
		}

		[Token(Token = "0x6000251")]
		[Address(RVA = "0x69EF150", Offset = "0x69EE150", VA = "0x69EF150")]
		public SizeProperty()
		{
		}
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x69ED7D0", Offset = "0x69EC7D0", VA = "0x69ED7D0")]
	public BoundsIntPropertyBag()
	{
	}
}
