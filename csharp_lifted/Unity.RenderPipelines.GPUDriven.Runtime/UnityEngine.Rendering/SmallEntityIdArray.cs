// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SmallEntityIdArray
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x65DA830", Offset = "0x65D9830", VA = "0x65DA830")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x6000283")]
		[Address(RVA = "0x65DA840", Offset = "0x65D9840", VA = "0x65DA840")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public EntityId this[int index]
	{
		[Token(Token = "0x6000285")]
		[Address(RVA = "0x65DAA10", Offset = "0x65D9A10", VA = "0x65DAA10")]
		get
		{
			return default(EntityId);
		}
		[Token(Token = "0x6000286")]
		[Address(RVA = "0x65DAB20", Offset = "0x65D9B20", VA = "0x65DAB20")]
		set
		{
		}
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x65DA850", Offset = "0x65D9850", VA = "0x65DA850")]
	public SmallEntityIdArray(int length, Allocator allocator)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x65D8390", Offset = "0x65D7390", VA = "0x65D8390", Slot = "4")]
	public void Dispose()
	{
	}
}
