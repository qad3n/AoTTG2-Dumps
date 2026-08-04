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

[Token(Token = "0x2000061")]
internal class BoundsPropertyBag : ContainerPropertyBag<Bounds>
{
	[Token(Token = "0x2000062")]
	private class CenterProperty : Property<Bounds, Vector3>
	{
		[Token(Token = "0x17000049")]
		public override string Name
		{
			[Token(Token = "0x60001D0")]
			[Address(RVA = "0x4E9BBC0", Offset = "0x4E9BBC0", VA = "0x4E9BBC0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x4E9BB40", Offset = "0x4E9BB40", VA = "0x4E9BB40")]
		public CenterProperty()
		{
		}
	}

	[Token(Token = "0x2000063")]
	private class ExtentsProperty : Property<Bounds, Vector3>
	{
		[Token(Token = "0x1700004A")]
		public override string Name
		{
			[Token(Token = "0x60001D2")]
			[Address(RVA = "0x4E9BBF0", Offset = "0x4E9BBF0", VA = "0x4E9BBF0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x4E9BB80", Offset = "0x4E9BB80", VA = "0x4E9BB80")]
		public ExtentsProperty()
		{
		}
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x4E9AC30", Offset = "0x4E9AC30", VA = "0x4E9AC30")]
	public BoundsPropertyBag()
	{
	}
}
