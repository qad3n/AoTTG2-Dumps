// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SmallEntityIdArray
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;

namespace UnityEngine.Rendering;

[Token(Token = "0x200007C")]
internal struct SmallEntityIdArray : IDisposable
{
	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x0")]
	private FixedList32Bytes<EntityId> m_FixedArray;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x20")]
	private UnsafeList<EntityId> m_List;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x38")]
	private readonly bool m_IsEmbedded;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x3C")]
	public readonly int Length;

	[Token(Token = "0x17000048")]
	public bool Valid
	{
		[Token(Token = "0x6000282")]
		[Address(RVA = "0xF1D4C0", Offset = "0xF1BAC0", VA = "0x180F1D4C0")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x6000283")]
		[Address(RVA = "0xF1DA30", Offset = "0xF1C030", VA = "0x180F1DA30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public EntityId this[int index]
	{
		[Token(Token = "0x6000285")]
		[Address(RVA = "0x2BEAFC0", Offset = "0x2BE95C0", VA = "0x182BEAFC0")]
		get
		{
			return default(EntityId);
		}
		[Token(Token = "0x6000286")]
		[Address(RVA = "0x2BEB0B0", Offset = "0x2BE96B0", VA = "0x182BEB0B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x2BEAE40", Offset = "0x2BE9440", VA = "0x182BEAE40")]
	public SmallEntityIdArray(int length, Allocator allocator)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x2BEADF0", Offset = "0x2BE93F0", VA = "0x182BEADF0", Slot = "4")]
	public void Dispose()
	{
	}
}
