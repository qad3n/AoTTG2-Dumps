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

[Token(Token = "0x2000064")]
internal class BoundsIntPropertyBag : ContainerPropertyBag<BoundsInt>
{
	[Token(Token = "0x2000065")]
	private class PositionProperty : Property<BoundsInt, Vector3Int>
	{
		[Token(Token = "0x1700004B")]
		public override string Name
		{
			[Token(Token = "0x60001D5")]
			[Address(RVA = "0x4E9BCA0", Offset = "0x4E9BCA0", VA = "0x4E9BCA0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x4E9BC20", Offset = "0x4E9BC20", VA = "0x4E9BC20")]
		public PositionProperty()
		{
		}
	}

	[Token(Token = "0x2000066")]
	private class SizeProperty : Property<BoundsInt, Vector3Int>
	{
		[Token(Token = "0x1700004C")]
		public override string Name
		{
			[Token(Token = "0x60001D7")]
			[Address(RVA = "0x4E9BCD0", Offset = "0x4E9BCD0", VA = "0x4E9BCD0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x4E9BC60", Offset = "0x4E9BC60", VA = "0x4E9BC60")]
		public SizeProperty()
		{
		}
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4E9AD60", Offset = "0x4E9AD60", VA = "0x4E9AD60")]
	public BoundsIntPropertyBag()
	{
	}
}
